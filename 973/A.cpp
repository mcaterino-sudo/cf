#include <bits/stdc++.h>

int main (int argc, char *argv[]) {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t;
	std::cin >> t;

	while (t--) {
		long long n;
		long long x;
		long long y;
		std::cin >> n >> x >> y;

		long long s = n / x;
		if (n % x != 0) {
			s++;
		}
		long long t = n / y;
		if (n % y != 0) {
			t++;
		}

		std::cout << std::max(s, t) << std::endl;
	}


	return 0;
}
