#include <bits/stdc++.h>

int main (int argc, char *argv[]) {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t;
	std::cin >> t;

	while (t--) {
		int n;
		std::cin >> n;
		int N = n;
		std::vector<int> v;
		while (n--) {
			int num;
			std::cin >> num;
			v.push_back(num);
		}
		int count = 0;
		for (int i = 0; i < v.size(); i++) {
			int curCount = std::count(v.begin(), v.end(), v[i]);
			count = std::max(count, curCount);
		}
		std::cout << N - count << std::endl;
	}


	return 0;
}
