#include<iostream>
#include<string>

using namespace std;

int main(){
	string spam;
	double ws=0, lc=0, uc=0, sym=0;

	cin >> spam;

	for (int i = 0; i < spam.length(); i++){
		if (spam[i] == '_') ws++;
		else if (spam[i] >= 'a' && spam[i] <= 'z') lc++;
		else if (spam[i] >= 'A' && spam[i] <= 'Z') uc++;
		else sym++;
	}
	cout << ws / spam.length() << endl;
	cout << lc / spam.length() << endl;
	cout << uc / spam.length() << endl;
	cout << sym / spam.length() << endl;


	return 0;
}