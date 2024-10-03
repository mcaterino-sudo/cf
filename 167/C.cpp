#include <bits/stdc++.h>

int main (int argc, char *argv[]) {

	int t;
	std::cin >> t;

	while (t--) {
		int n;
		std::cin >> n;

		std::vector<int> a;
		std::vector<int> b;

		int an = n;
		int r;

		while (an--) {
			std::cin >> r;

			a.push_back(r);
		}

		while (n--) {
			std::cin >> r;
			b.push_back(r);
		}

		int ar = 0;
		int br = 0;
		int neg = 0;
		int pos = 0;

		for (int i = 0; i < a.size(); i++) {
			if (a[i] == b[i]) {
				if (a[i] == -1) {
					neg++;
				}
				else if (a[i] == 1) {
					pos++;
				}
			}
			else {
				if (a[i] > b[i]) {
					ar += a[i];
				}
				else {
					br += b[i];
				}
			}
		}

		
		while (neg > 0) {
			if (ar > br) {
				ar--;
			}
			else{
				br--;
			}
			neg--;
		}
		while (pos > 0) {
			if (ar > br) {
				br++;
			}
			else {
				ar++;
			}
			pos--;
		}
		if (ar > br) {
			std::cout << br << std::endl;
		}
		else {
			std::cout << ar << std::endl;
		}

			
	}
	


	return 0;
}
