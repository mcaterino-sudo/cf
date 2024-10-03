#include <bits/stdc++.h>

int main (int argc, char *argv[]) {
	int t;
	std::cin >> t;

	while (t--) {
		std::string s;
		std::string t;

		std::cin >> s >> t;
		bool check = false;

		for (int i = 0; i < s.length(); i++) {
			if (s[i] == '?' || s[i] == t[0]) {
				int j = 1;
				int k = i + 1;
				std::string good = s;
				good[i] = t[0];
				while (k < s.length() && j < t.length()) {
					if (s[k] == '?' || s[k] == t[j]) {
						good[k] = t[j];
						k++;
						j++;
					}
					else {
						k++;
					}
				}
				if (j == t.length()) {
					std::cout << "YES" << std::endl;
					for (int i = 0; i < good.length(); i++) {
						if (good[i] == '?') {
							good[i] = 'a';
						}
					}
					std::cout << good << std::endl;
					check = true;
					break;
				}
			}
		}
		if (!check) {
			std::cout << "NO" << std::endl;
		}
	}


	return 0;
}
