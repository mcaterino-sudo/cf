#include <bits/stdc++.h>

int main (int argc, char *argv[]) {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t;
	std::cin >> t;

	while (t--) {
		int al;
		int ar;
		int bl;
		int br;
		std::cin >> al >> ar >> bl >> br;

		if ((al < bl && ar < bl) || (bl < al && br < al)) {
			std::cout << 1 << std::endl;
		}
		else if (al == bl) {
			int m = std::min(ar, br);
			std::cout << m - al << std::endl;
		}
		else if (ar == br) {
			int m = std::max(al, bl);
			std::cout << ar - m + (al!=bl) << std::endl;
		}
		else if ((al > bl && ar < br) || (bl > al && br < ar)){
			int m = std::min(ar - al, br - bl);
			std::cout << m + 2 << std::endl;
		}
		else {
			int l = std::min(al, bl);
			int r = std::min(ar, br);
			std::cout << r - l << std::endl;
		}
	}


	return 0;
}
