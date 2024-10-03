#include <bits/stdc++.h>

int main (int argc, char *argv[]) {
	int n;
	int t;
	int a;

	std::cin >> n >> t >> a;

	int num = n/2;

	if (t > num || a > num) {
		std::cout << "Yes";
	}
	else {
		std::cout << "No";
	}


	return 0;
}
