#include <bits/stdc++.h>

int main (int argc, char *argv[]) {
	
	int t;
	std::cin >> t;

	while (t--) {
		int n;
		std::cin >> n;
		
		int ones = 0;
		int isles = 0;

		int last = 1;
		std::string cur;
		std::cin >> cur;
		
		for(int i = 0; i < n; i++){
			if (cur[i] == '1') {
				ones++;
				last = 1;
			}
			else {
				if (last == 1) {
					isles++;
					last = 0;
				}
			}
		}
		if (ones > isles) {
			std::cout << "Yes" << std::endl;
		}
		else {
			std::cout << "No" << std::endl;
		}
	}


	return 0;
}
