#include <bits/stdc++.h>

int main (int argc, char *argv[]) {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t;
	std::cin >> t;

	while (t--) {
		int n;
		std::cin >> n;
		std::vector<int> v;
		while (n--) {
			char c1;
			char c2;
			char c3;
			char c4;
			std::cin >> c1 >> c2 >> c3 >> c4;
			if (c1 == '#') {
				v.push_back(1);
			}
			else if (c2 == '#') {
				v.push_back(2);
			}
			else if (c3 == '#') {
				v.push_back(3);
			}
			else {
				v.push_back(4);
			}
		}
		for (int i = v.size() - 1; i > 0; i--) {
			std::cout << v[i] << ' ';
		}
		std::cout << v[0] << std::endl;
	}


	return 0;
}
