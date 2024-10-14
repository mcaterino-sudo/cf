#include <bits/stdc++.h>
#define ll long long

int main (int argc, char *argv[]) {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	long long t;
	std::cin >> t;

	while (t--) {
		long long n;
		long long k;
		std::cin >> n >> k;

		std::map<long long, long long> map;

		while (n--) {
			long long num;
			std::cin >> num;
			if (map.find(num) == map.end()) {
            	map[num] = 1;
			}
			else {
            	map[num]++;
        	}
		}
		long long score = 0;
		for(auto& it : map) {
			long long cur = it.second;
			long long num = it.first + 1;
			for (long long i = 0; i < k - 1; i++) {
				if (map.find(num) == map.end()) {
					break;
				}
				cur += map[num];
				num += 1;
			}
			score = std::max(score, cur);
		}
		std::cout << score << std::endl;
	}


	return 0;
}
