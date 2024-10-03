#include <bits/stdc++.h>

int main (int argc, char *argv[]) {
	
	int t;
	std::cin >> t;

	while(t--){
		long long x;
		long long y;
		long long k;

		std::cin >> x >> y >> k;

		x++;
		k -= 1;

		while (k > 0) {
			long long mod = x % y;

			if ((y - mod) <= k) {
				x += (y - mod);
				k -= (y - mod);
			}


			while (x % y == 0) {
				x /= y;
			}
			x++;
			k -= 1;
		}

		std::cout << x << "\n";
	}
	return 0;
}
