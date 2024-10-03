#include <bits/stdc++.h>

int main (int argc, char *argv[]) {
	
	int t;
	std::cin >> t;

	while (t--) {
		int n;
		int m;
		int k;
		std::cin >> n >> m >> k;

		for (int i = n; i > m; i--) {
			std::cout << i << " ";
		}
		for (int i = 1; i < m; i++) {
			std::cout << i << " ";
		}
		std::cout << m;
		std::cout << std::endl;
	}


	return 0;
}
