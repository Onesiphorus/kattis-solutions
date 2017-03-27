#include<iostream>

using namespace std;

int main(){
	int numDogPacks;
	int numBunPacks;
	int dogs[100];
	int buns[100];
	int totDogs = 0;
	int totBuns = 0;
	for (int i = 0; i < numDogPacks; i++)
		cin >> dogs[i];
		totDogs += dogs[i];
	for (int i = 0; i < numBunPacks; i++)
		cin >> buns[i];
		totBuns += buns[i];
}