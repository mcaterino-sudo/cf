#include <bits/stdc++.h>

int main (int argc, char *argv[]) {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t;
	std::cin >> t;

	while (t--) {
		long long n;
		std::cin >> n;

		long long sum = 0;
		long long num;
		while (n > 2) {
			std::cin >> num;
			sum += num;
			n--;
		}
		std::cin >> num;
		sum = num - sum;
		std::cin >> num;
		std::cout << num - sum << std::endl;
	}


	return 0;
}
