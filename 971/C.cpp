#include <bits/stdc++.h>

int main (int argc, char *argv[]) {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t;
	std::cin >> t;

	while (t--) {
		long long x;
		long long y;
		long long k;
		std::cin >> x >> y >> k;

		if (x == 0 && y == 0) {
			std::cout << 0 << std::endl;
		}
		else if (x > y) {
			long long moves = (x / k);
			if (x % k != 0) {
				moves++;
			}
			moves *= 2;
			moves--;
			std::cout << moves << std::endl;
		}
		else {
			long long moves = (y / k) * 2;
			if (y % k > 0) {
				moves += 2;
			}
			std::cout << moves << std::endl;
		}
	}


	return 0;
}
