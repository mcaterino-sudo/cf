#include <bits/stdc++.h>

int main (int argc, char *argv[]) {
	
	int t;
	std::cin >> t;

	while (t--) {
		int n;
		std::cin >> n;

		std::string s1;
		std::string s2;

		std::cin >> s1;
		std::cin >> s2;

		int count = 0;

		for (int i = 1; i < s1.length() - 1; i++) {
			if (s1[i] == '.') {
				if (s2[i - 1] == 'x' && s2[i + 1] == 'x') {
					if (s1[i - 1] == '.' && s1[i + 1] == '.' && s2[i] == '.') {
						count++;
					}
				}
			}
		}
		for (int i = 1; i < s1.length() - 1; i++) {
			if (s2[i] == '.') {
				if (s1[i - 1] == 'x' && s1[i + 1] == 'x') {
					if (s2[i - 1] == '.' && s2[i + 1] == '.' && s1[i] == '.') {
						count++;
					}
				}
			}
		}
		std::cout << count << std::endl;

	}


	return 0;
}
