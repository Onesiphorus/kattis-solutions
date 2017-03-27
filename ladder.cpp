#include<iostream>
#include<math.h>

using namespace std;

int main(){
	int v, h;

	cin >> h >> v;
	int a = h*h;
	int b = v*v;
	int hyp = sqrt(a + b);
	int answer = hyp;

	cout << hyp + 1;

	return 0;
}