#include <bits/stdc++.h>

int main (int argc, char *argv[]) {
	
	int t;
	std::cin >> t;

	while (t--) {
		int n;
		int m;
		int num;
		std::cin >> n >> m;
		if (n == 1 && m == 1) {
			std::cin >> num;
			std::cout << -1 << std::endl;
		}
		else {
			int first;
			std::cin >> first;

			for (int i = 0; i < n; i++) {
				for (int j = 0; j < m - 1; j++) {
					std::cin >> num;
					std::cout << num << ' ';
				}
				if (i != n - 1) {
					std::cin >> num;
					std::cout << num << std::endl;
				}
			}
			std::cout << first << std::endl;

		}
	}


	return 0;
}
