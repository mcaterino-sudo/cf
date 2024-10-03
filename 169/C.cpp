#include <bits/stdc++.h>

int main (int argc, char *argv[]) {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t;
	std::cin >> t;

	while (t--) {
		int n;
		long long k;
		std::cin >> n >> k;

		std::vector<long long> v;
		while (n--) {
			long long a;
			std::cin >> a;
			v.push_back(a);
		}

		std::sort(v.begin(), v.end());

		long long score = 0;

		for (long long i = v.size() - 1; i > 0; i -= 2) {
			long long diff = v[i] - v[i - 1];
			diff -= std::min(diff, k);
			if (diff == 0) {
				k -= v[i] - v[i - 1];
			}
			else {
				k = 0;
			}
			score += diff;
		}
		if (v.size() % 2 == 1) {
			score += v[0];
		}

		std::cout << score << std::endl;
	}


	return 0;
}
