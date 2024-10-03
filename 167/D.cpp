#include <bits/stdc++.h>

int main (int argc, char *argv[]) {
	
	int n;
	int m;

	std::cin >> n >> m;

	std::vector<int> v;

	for (int i = 0; i < n; i++) {
		int j;
		std::cin >> j;
		v.push_back(j);
	}

	std::map<int, int> map;

	for (int i = 0; i < n; i++) {
		int j;
		std::cin >> j;

		map[v[i] - j] = v[i];
	}


	long long xp = 0;

	while (m--) {
		long long ing;
		std::cin >> ing;

		for (auto const& [key, value] : map){
			if (value <= ing) {
				int times = ((ing - value)/key) + 1;
				ing -= key * times;
				xp += 2 * times;
			}
		}
	}
	std::cout << xp;


	return 0;
}
