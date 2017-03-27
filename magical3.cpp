#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

int main(){

	int n;
	bool flag, neg;
	cin >> n;
	while (n != 0){
		neg = false;
		flag = false;
		if (n < 0){
			neg = true;
		}
		if (abs(n) < 3){
			cout << "No such base\n";
		}
		else if (abs(n) > 100) {
			for (int i = 4; i < sqrt(abs(n))+1; i++){
					if (abs(n)%i == 3){
						if (!neg)
							cout << i << endl;
						else
							cout << -1*i << endl;
						flag = true;
						break;
					}
				if (flag) break;
			}
			if (!flag) 
				if (!neg)
					cout << abs(n) - 3 << endl;
				else cout << -1 * (abs(n) - 3) << endl;
		}
		else {
			for (int i = 4; i < 101; i++){
				if (abs(n)%i == 3){
					if (!neg)
						cout << i << endl;
					else
						cout << -1 * i << endl;
					flag = true;
					break;
				}
				if (flag) break;
			}
			if (!flag) {
				if (!neg)
					cout << abs(n) - 3 << endl;
				else cout << -1 * (abs(n) - 3) << endl;
			}
		}
		cin >> n;
	}
	return 0;
}