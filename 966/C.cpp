#include <bits/stdc++.h>

int main (int argc, char *argv[]) {
	long long t;
	std::cin >> t;

	while (t--) {
		long long n;
		std::cin >> n;
		std::vector<long long> v;
		long long num;
		while (n--) {
			std::cin >> num;
			v.push_back(num);
		}
		long long m;
		std::cin >> m;
		std::string s;
		while (m--) {
			std::cin >> s;
			if (s.length() != v.size()) {
				std::cout << "NO" << std::endl;
				continue;
			}
			std::unordered_map<char, long long> ci;
			std::unordered_map<long long, char> ic;
			bool check = true;

			for (long long i = 0; i < s.length(); i++) {
				if (ci.find(s[i]) == ci.end() && ic.find(v[i]) == ic.end()) {
					ci.insert({s[i], v[i]});
					ic.insert({v[i], s[i]});
				}
				else {
					if (ci.find(s[i]) == ci.end() || ic.find(v[i]) == ic.end()) {
						check = false;
						break;
					}
					if (ci[s[i]] != v[i] || ic[v[i]] != s[i]) {
						check = false;
						break;
					}
				}
			}
			if (check) {
				std::cout << "YES" << std::endl;
			}
			else {
				std::cout << "NO" << std::endl;
			}
		}
	}


	return 0;
}
