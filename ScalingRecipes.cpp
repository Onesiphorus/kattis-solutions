#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

int main(){

	int T, R, P, D;
	float scaledWeight;
	struct ingredient{
		string name;
		float weight, percentage;
	};

	ingredient ing[20];
	cin >> T;
	for (int i = 0; i < T; i++){
		cin >> R >> P >> D;
		for (int j = 0; j < R; j++){
			cin >> ing[j].name >> ing[j].weight >> ing[j].percentage;
			if (ing[j].percentage == 100) scaledWeight = (D / static_cast<float>(P))*ing[j].weight;
		}
		cout << "Recipe # " << i + 1 << endl;
		//cout << scaledWeight << endl;
		for (int j = 0; j < R; j++){
			cout << ing[j].name << " " << setprecision(1) << fixed << scaledWeight*ing[j].percentage/100 << endl;
		}
		cout << "----------------------------------------" << endl;
	}
	return 0;
}