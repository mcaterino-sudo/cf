#include <bits/stdc++.h>

int main (int argc, char *argv[]) {
	
	int t;
	std::cin >> t;

	while(t--){
		int a;
		int b;
		int c;
		std::cin >> a >> b >> c;

		for (int i = 0; i < 5; i++) {
			if (a > b) {
				if (b > c) {
					c += 1;
				}
				else {
					b += 1;
				}
			}
			else if (a > c) {
				c += 1;
			}
			else{
				a += 1;
			}
		}
		std::cout << a * b * c << std::endl;
	}

	return 0;
}
