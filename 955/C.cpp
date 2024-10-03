#include <bits/stdc++.h>

int main (int argc, char *argv[]) {
	
	int t;
	std::cin >> t;

	while(t--){
		int n;
		int l;
		int r;
		std::cin >> n >> l >> r;

		int score = 0;
		int card;
		int wins = 0;
		std::vector<int> v;

		while (n--) {
			std::cin >> card;
			v.push_back(card);
		}
		int start = 0;
		int end = 0;
		while (end < v.size()) {
			score += v[end];
			if (score >= l) {
				if (score <= r) {
					wins++;
					score = 0;
					end++;
					start = end;
				}
				else {
					while (score > r) {
						score -= v[start];
						start++;
					}
					if (score >= l) {
						wins++;
						score = 0;
						end++;
						start = end;
					}
					else {
						end++;
					}
				}
			}
			else {
				end++;
			}
		}
		std::cout << wins << "\n";
	}
	return 0;
}
