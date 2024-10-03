#include <bits/stdc++.h>

int main (int argc, char *argv[]) {
	int q;
	std::cin >> q;

	std::unordered_map<int, int> map;

	int a;
	int x;
	int count = 0;
	while (q--) {
		std::cin >> a;
		if (a == 1) {
			std::cin >> x;
			if (map.find(x) == map.end()) {
				map.insert({x, 1});
				count++;
			}
			else {
				map[x]++;
				if (map[x] == 1) {
					count++;
				}
			}
		}
		else if (a == 2) {
			std::cin >> x;
			map[x]--;
			if (map[x] == 0) {
				count--;
			}
		}
		else if (a == 3) {
			std::cout << count << std::endl;
		}
	}


	return 0;
}
