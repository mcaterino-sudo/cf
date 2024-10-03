#include <bits/stdc++.h>

int main (int argc, char *argv[]) {
	
	int t;
	std::cin >> t;
	
	while (t--) {
		int n;
		int m;
		int k;
		std::cin >> n >> m >> k;

		std::vector<char> v;
		v.push_back('L');
		char x;
		int a = n;
		while (a--) {
			std::cin >> x;
			v.push_back(x);
		}
		v.push_back('L');
		int water = 0;
		int i = 0;
		int croc = 0;
		while (i < n) {
			int j = i + 1;
			while ((j < i + m) && (i < n)) {
				if (v[j] == 'L') {
					i = j;
				}
				j += 1;
			}
			while (i < n + 1) {
				if (v[i + 1] == 'W') {
					water += 1;
					i += 1;
				}
				else if (v[i + 1] == 'C') {
					croc += 1;
					i++;
					break;
				}
				else {
					i += 1;
					break;
				}
			}
			if (water > k || croc > 0) {
				break;
			}
		}
		if ((water <= k) && (croc == 0)) {
			std::cout << "YES" << std::endl;
		}
		else if (m >= n) {
			std::cout << "YES" << std::endl;
		}
		else {
			std::cout << "NO" << std::endl;
		}
	}


	return 0;
}
