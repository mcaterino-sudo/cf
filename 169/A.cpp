#include <bits/stdc++.h>

int main (int argc, char *argv[]) {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t;
	std::cin >> t;

	while (t--) {
		int n;
		std::cin >> n;
		int a;
		if (n == 2) {
			std::cin >> a;
			int b;
			std::cin >> b;
			if (abs(a - b) > 1) {
				std::cout << "YES" << std::endl;
			}
			else {
				std::cout << "NO" << std::endl;
			}
		}
		else {
			std::cout << "NO" << std::endl;
			while (n--) {
				int b;
				std::cin >> b;
			}
		}
		
	}


	return 0;
}
