#include <bits/stdc++.h>

int main (int argc, char *argv[]) {
	
	int t;
	std::cin >> t;

	while (t--) {
		int a1;
		int a2;
		int b1;
		int b2;

		std::cin >> a1 >> a2 >> b1 >> b2;

		int wins = 0;

		if (a1 > b1) {
			if (a2 >= b2) {
				wins += 1;
			}
		}
		if (a1 == b1) {
			if (a2 > b2) {
				wins++;
			}
		}
		if (a1 > b2) {
			if (a2 >= b1) {
				wins += 1;
			}
		}
		if (a1 == b2) {
			if (a2 > b1) {
				wins++;
			}
		}

		if (a2 > b1) {
			if (a1 >= b2) {
				wins += 1;
			}
		}
		if (a2 == b1) {
			if (a1 > b2) {
				wins++;
			}
		}
		if (a2 > b2) {
			if (a1 >= b1) {
				wins += 1;
			}
		}
		if (a2 == b2) {
			if (a1 > b1) {
				wins++;
			}
		}


		std::cout << wins << std::endl;

	}


	return 0;
}
