#include<iostream>

using namespace std;

int main(){

	int T, n, v[10], winner,sum;
	bool nowin;
	cin >> T;
	for (int i = 0; i < T; i++){
		cin >> n;
		nowin = false;
		sum = 0;
		for (int j = 0; j < n; j++){
			cin >> v[j];
			sum += v[j];
		}
		winner = 0;
		for (int j = 1; j < n; j++){
			if (v[j] > v[winner]) winner = j;
		}
		for (int j = 0; j < n; j++){
			if (winner != j && v[winner] == v[j])
				nowin = true;
		}
		if (nowin) cout << "no winner\n";
		else {
			//cout << sum << endl;
			if ((v[winner]) > (sum / 2.0) || (v[winner] == sum/2 && sum%2 > 0)) cout << "majority winner " << winner+1 << endl;
			else cout << "minority winner " << winner+1 << endl;
		}
	}
	return 0;
}