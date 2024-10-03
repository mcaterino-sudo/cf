#include <bits/stdc++.h>

int main (int argc, char *argv[]) {
	
	int t;
	std::cin >> t;

	while (t--) {
		std::string pwd;
		std::cin >> pwd;
		bool check = false;
		for (int i = 1; i < pwd.length(); i++) {
			if (pwd[i] == pwd[i - 1]) {
				check = true;
				char c = 'x';
				if (pwd[i] == 'x'){
					c = 'y';
				}
				std::cout << pwd.substr(0, i) + c + pwd.substr(i) << std::endl;
				break;
			}
		}
		if (!check) {
			if (pwd[0] == 'a') {
				std::cout << 'b' + pwd << std::endl;
			}
			else {
				std::cout << 'a' + pwd << std::endl;
			}
		}
	}


	return 0;
}
