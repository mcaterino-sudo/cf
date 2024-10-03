#include <bits/stdc++.h>

int main (int argc, char *argv[]) {

	int t;

	std::cin >> t;

	while(t--){
		int a1;
		int b1;
		int a2;
		int b2;

		std::cin >> a1 >> b1 >> a2 >> b2;


		if(a1 > b1){
			if(a2 > b2){
				std::cout << "YES" << "\n";
			}
			else{
				std::cout << "NO" << "\n";
			}
		}
		else {
			if(b2 > a2){
				std::cout << "YES" << "\n";
			}
			else {
				std::cout << "NO" << "\n";
			}
		}
		
	}
	return 0;
}
