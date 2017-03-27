#include<iostream>
#include<math.h>

using namespace std;

int main(){
	
	int n1, n2, d;
	
	cin >> n1 >> n2;
	
	if (n1 > n2){
		if (n1 - n2 > 180){
			d = 360 - n1 + n2;
		}
		else d = n1 - n2;
	}
	else {
		if (n2 - n1 > 180){
			d = 360 - n2 + n1;
		}
		else {
			d = n2 - n1;
		}
	}
	cout << d;

	return 0;
}