#include <bits/stdc++.h>

int main (int argc, char *argv[]) {
	
	int t;
	std::cin >> t;

	while (t--) {
		int n;
		int k;
		std::cin >> n >> k;
		int max = 0;
		int p;
		int x = 0;
		for (int i = 0; i < k; i++) {
			std::cin >> p;
			if (p > max) {
				x += (2 * max) - 1;
				max = p;
			}
			else {
				x += (2 * p) - 1;
			}
		}
		std::cout << x + 1 << std::endl;
	}


	return 0;
}
