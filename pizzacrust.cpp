#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	int R, C;
	double pi = 3.141592;

	cin >> R >> C;
	cout << fixed << setprecision(6) << (((R-C)*(R-C)*pi) / (R*R*pi)*100);

	return 0;
}