#include<iostream>

using namespace std;

int main(){
	int n, t;

	cin >> n;

	for (int i = 0; i < n; i++){
		cin >> t;
		if (t % 2 == 0){
			cout << t << " is even\n";
		}
		else {
			cout << t << " is odd\n";
		}
	}
	return 0;
}