#include <bits/stdc++.h>

int main (int argc, char *argv[]) {
	
	int t;
	std::cin >> t;

	while (t--) {
		int n;
		int k;
		std::cin >> n >> k;

		if (n == 1) {
			std::cout << 0 << std::endl;
		}
		else if (k == 2) {
			std::cout << n - 1 << std::endl;
		}
		else if (n % (k-1) == 0) {
			std::cout << n / (k - 1) << std::endl;
		}
		else if (n % (k-1) == 1) {
			std::cout << n / (k - 1) << std::endl;
		}
		else {
			std::cout << (n / (k - 1)) + 1 << std::endl;
		}

	}


	return 0;
}
