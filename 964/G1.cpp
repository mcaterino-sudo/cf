#include <bits/stdc++.h>

int main (int argc, char *argv[]) {
	int t;
	std::cin >> t;

	while (t--) {
		int a = 1;
		int b = 1000;
		int n = 10;

		while (n-- && a < b) {
			std::cout << "? " << floor(b/4) << ' ' << floor((3*b)/4);
			fflush(stdout);

			int ans;

			std::cin >> ans;

			if (ans == floor(b/4) * floor((3*b)/4)) {
				a = floor((3*b)/4) + 1;
			}
			else if (ans == floor(b/4) * (floor((3*b)/4) + 1)) {
				a = floor(b/4) + 1;
				b = floor((b*3)/4);
			}
			else {
				b = floor(b/4);
			}
		
		}
		std::cout << "! " << a;
		fflush(stdout);

	}


	return 0;
}
