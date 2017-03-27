#include<iostream>

using namespace std;

int main(){
	float a1, b1, a2, b2, a3, b3, a4, b4, emma, gunnar;

	cin >> a1 >> b1 >> a2 >> b2;
	cin >> a3 >> b3 >> a4 >> b4;

	gunnar = a1 + a2 + (b1 + b2) / 2.0;
	emma = a3 + a4 + (b3 + b4) / 2.0;

	if (gunnar > emma) cout << "Gunnar";
	else if (emma > gunnar) cout << "Emma";
	else if (emma == gunnar) cout << "Tie";
	return 0;
}