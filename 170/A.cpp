#include <bits/stdc++.h>
#define ll long long

int main (int argc, char *argv[]) {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);


	int t;
	std::cin >> t;

	while (t--) {
		std::string s;
		std::string t;
		std::cin >> s >> t;
		
		int i = 0;

		while (i < s.length() && i < t.length() && s[i] == t[i]) {
			i += 1;
		}

		int len = s.length() + t.length();

		if (i > 0) {
			len -= i - 1;
		}

		std::cout << len << std::endl;
	}
	return 0;
}
