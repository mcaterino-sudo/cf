#include <bits/stdc++.h>

int main (int argc, char *argv[]) {
	
	int t;
	std::cin >> t;

	while (t--) {
		int n;
		std::cin >> n;

		std::string s;
		std::string t;

		std::cin >> s;
		std::cin >> t;

		if (s[0] == '0' and t[0] == '1') {
			std::cout << "NO" << std::endl;
		}
		else {
			std::cout << "YES" << std::endl;
		}
	}

	return 0;
}
