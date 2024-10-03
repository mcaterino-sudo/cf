#include <bits/stdc++.h>

int main (int argc, char *argv[]) {
	
	int n;
	std::cin >> n;
	std::vector<std::string> v;
	int len = 0;
	while (n--) {
		std::string s;
		std::cin >> s;
		if (s.length() > len) {
			len = s.length();
		}
		v.push_back(s);
	}
	for (int i = 0; i < len; i++) {
		int count = 0;
		for (int j = v.size() - 1; j >= 0; j--) {
			if (i >= v[j].length()) {
				count++;
			}
			else {
				if (count > 0) {
					for (int i = 0; i < count; i++) {
						std::cout << '*';
					}
				}
				std::cout << v[j][i];
			}
		}
		std::cout << std::endl;
	}

	return 0;
}
