#include <bits/stdc++.h>

int main (int argc, char *argv[]) {
	int t;
	std::cin >> t;

	while (t--) {
		int n;
		int s;
		int m;

		std::cin >> n >> s >> m;

		int prev = 0;
		bool check = false;
		int l;
		int r;


		while (n--) {
			std::cin >> l >> r;

			if ((l - prev) >= s) {
				check = true;
			}
			prev = r;
		}
		if ((m - r) >= s) {
			check = true;
		}
		if (check) {
			std::cout << "YES" << std::endl;
		}
		else {
			std::cout << "NO" << std::endl;
		}
	}


	return 0;
}
