#include<iostream>
#include<string>

using namespace std;

int main(){

	int n;
	string num;

	cin >> n;

	for (int i = 0; i < n; i++){
		cin >> num;
		cout << num.length() << endl;
	}
}