#include <bits/stdc++.h>

int main (int argc, char *argv[]) {
	int t;
	std::cin >> t;

	while (t--) {
		int n;
		std::cin >> n;
		std::vector<int> v;
		while (n--) {
			int num;
			std::cin >> num;
			v.push_back(num);
		}
		std::string s;
		std::cin >> s;

		int l = 0;
		int r = v.size();

		long long sum = 0;
		int count = 0;

		while (l <= r) {
			if (s[l] == 'L' && s[r] == 'R') {
				count++;
				sum += v[l] * count;
				sum += v[r] * count;
				l++;
				r--;
			}
			if (s[l] != 'L' && l <= r) {
				sum += v[l] * count;
				l++;
			}
			if (s[r] != 'R' && l <= r) {
				sum += v[r] * count;
				r--;

			}
		}
		std::cout << sum << std::endl;
	}


	return 0;
}
