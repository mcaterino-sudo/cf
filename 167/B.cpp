#include <bits/stdc++.h>

int main (int argc, char *argv[]) {
	

	int t;
	std::cin >> t;

	while (t--) {
		std::string a;
		std::string b;

		std::cin >> a >> b;

		std::unordered_map<char, int> map;

		for (int i = 0; i < a.length(); i++) {
			map[a[i]]++;
		}

		int missing = 0;

		for (int i = 0; i < b.length(); i++) {
			if (map[b[i]] < 1) {
				missing++;
			}
			else {
				map[b[i]]--;
			}
		}
		std::cout << a.length() + missing << std::endl;
	}


	return 0;
}
