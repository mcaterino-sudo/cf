#include <bits/stdc++.h>

int main (int argc, char *argv[]) {
	int t;
	std::cin >> t;

	while (t--) {
		int n;
		std::cin >> n;
		int num;
		std::cin >> num;
		int low = num - 1;
		int high = num + 1;
		n--;
		bool check = true;

		while (n--) {
			std::cin >> num;
			if (num == low) {
				low--;
			}
			else if (num == high) {
				high++;
			}
			else {
				check = false;
			}
		}
		if (check) {
			std::cout << "YES" << std::endl;
		}
		else {
			std::cout << "NO" << std::endl;
		}
	}


	return 0;
}
