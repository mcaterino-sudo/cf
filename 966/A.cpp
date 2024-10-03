#include <bits/stdc++.h>

int main (int argc, char *argv[]) {
	
	int n;
	std::cin >> n;

	while (n--) {
		int num;
		std::cin >> num;
		std::string s = std::to_string(num);

		if (s.length() > 2 && s[0] == '1' && s[1] == '0' && s[2] != '0') {
			if (s[2] == '1' && s.length() == 3) {
				std::cout << "NO" << std::endl;
			}
			else {
				std::cout << "YES" << std::endl;
			}
		}

		else {
			std::cout << "NO" << std::endl;
		}
	}

	return 0;
}
