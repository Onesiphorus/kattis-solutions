#include<iostream>

using namespace std;

int main(){
	int n;
	int t;
	int count = 0;
	cin >> n;

	for (int i = 0; i < n; i++){
		cin >> t;
		if (t < 0) count++;
	}
	cout << count;
}