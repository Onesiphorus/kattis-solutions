#include<iostream>

using namespace std;


int main(){

	
	int roboLimit, robLim1, robLim2, n, l1,a1,l2,a2,lt,at, r1final, r2final;
	int r1, r2;
	bool foundOnce = false;
	bool foundMult = false;
	cin >> n;

	
	for (int i = 0; i < n; i++){
		cin >> l1 >> a1 >> l2 >> a2 >> lt >> at;
		foundMult = false;
		foundOnce = false;
		//set bounds to the max possible of first robot - 1
		if (lt / l1 < at / a1) roboLimit = lt / l1;
		else roboLimit = at / a1;
		//find the bounds
		//robLim1 = lt / l1 - 1;
		//if (at / a1 - 1 < robLim1) robLim1 = at / a1 - 1;
		//robLim2 = lt / l2 - 1;
		//if (at / a2 - 1 < robLim2) robLim2 = at / a2 - 1;
		//roboLimit = robLim1;
		//if (robLim2 > robLim1){
		//	roboLimit = robLim2;
		//}
		//cout << roboLimit << endl;
		

		//search for all possible matches
		for (int j = 1; j < roboLimit; j++){
			r1 = j;
			r2 = static_cast<float>((lt - (r1*l1))/l2);
			//cout << r1 << " " << r2 << endl;
			//cout << static_cast<float>((lt - (r1*l1)) / l2) << endl;
			if (r1*l1 + r2*l2 == lt && r1*a1 + r2*a2 == at 
									&& (lt - (r1*l1)) % l2 == 0) {
				if (foundOnce == true) foundMult = true;
				else {
					foundOnce = true;
					r1final = r1;
					r2final = r2;
				}
			}
		}
		if (foundOnce == true && foundMult == false) cout << r1final << " " << r2final << endl;
		else cout << "?\n";
	}

}