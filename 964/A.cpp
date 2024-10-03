#include <bits/stdc++.h>

int main (int argc, char *argv[]) {
	int t;
	std::cin >> t;

	while (t--) {
		int n;
		std::cin >> n;

		int a = n % 10;
		int b = (n - a) / 10;

		std::cout << a + b << std::endl;
	}


	return 0;
}
