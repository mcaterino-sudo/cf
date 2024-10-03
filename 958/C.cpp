#include <bits/stdc++.h>

int main (int argc, char *argv[]) {
	
	int t;
	std::cin >> t;
	while (t--) {
		long long n;
		std::cin >> n;

		long long cur = n;

		std::string res = std::to_string(n);
		long long len = 1;
		for (long long i = n - 1; i > 0; i--) {
			if ((i | cur) == n) {
				res = std::to_string(i) + ' ' + res;
				cur = i;
				len++;
			}
		}
		std::cout << len << std::endl;
		std::cout << res << std::endl;
	}


	return 0;
}
