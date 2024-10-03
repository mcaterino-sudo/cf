#include <bits/stdc++.h>

int main (int argc, char *argv[]) {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t;
	std::cin >> t;

	while (t--) {
		int n;
		std::cin >> n;

		if (n % 2 == 0) {
			std::cout << -1 << std::endl;
		}
		else {
			std::cout << 1;
			for (int i = 2; i < (n / 2) + 2 ; i++) {
				std::cout << ' ' << n - i + 2 << ' ' << i;
			}
			std::cout << std::endl;
		}
	}


	return 0;
}
