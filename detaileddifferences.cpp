#include<iostream>
#include<string>

using namespace std;

int main(){
	int n;
	cin >> n;
	string str1, str2;

	for (int i = 0; i < n; i++){
		cin >> str1;
		cin >> str2;
		cout << str1 << endl << str2 << endl;
		for (int j = 0; j < str1.length(); j++){
			if (str1[j] == str2[j]) cout << '.';
			else cout << '*';
		}
		cout << endl;
	}
	return 0;
}