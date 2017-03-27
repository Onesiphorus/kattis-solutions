#include<iostream>


using namespace std;

int main(){
	int n, hour, temp, speed, total;

	do{
		cin >> n;
		temp = 0;
		total = 0;
		for (int i = 0; i < n; i++){
			cin >> speed >> hour;
			total += speed * (hour - temp);
			temp = hour;
		}
		if (n != -1)
		cout << total << " miles" << endl;
	} while (n != -1);
}