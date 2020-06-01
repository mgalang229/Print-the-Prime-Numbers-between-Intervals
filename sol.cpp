#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
	int n, m;
	bool prime;
	cin >> n >> m;
	if(n == 1) n = 2;
	while(n < m){
		prime = true;
		for(int i = 2; i <= n/2; i++){
			if(n%i == 0){
				prime = false;
				break;
			}
		}
		if(prime == true) cout << n << " ";
		n++;
	}
	cout << "\n";
    return 0;
}
