#include <bits/stdc++.h>
#define ll long long

int main (int argc, char *argv[]) {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t;
	std::cin >> t;

	while (t--) {
		int n;
		int k;
		std::cin >> n >> k;

		std::unordered_map<long long, long long> map;

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
			int num = it.first + 1;
			for (int i = 0; i < k - 1; i++) {
				cur += map[num];
				num += 1;
			}
		}
	}


	return 0;
}
