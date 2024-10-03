#include <bits/stdc++.h>

int main (int argc, char *argv[]) {
	
	int t;
	std::cin >> t;

	while (t--) {
		int l;
		int r;
		std::cin >> l >> r;

		int n = l;
		int ops = 0;

		while (n > 0) {
			n = floor(n/3);
			ops++;
		}
		int f = ops;
		int power = std::pow(3, f);
		ops *= 2;

		l++;

		while (power <= r) {
			ops += (power - l) * f;
			l = power;
			power *= 3;
			f++;
		}

		ops += (r - l + 1) * f;

		std::cout << ops << std::endl;
	}


	return 0;
}
