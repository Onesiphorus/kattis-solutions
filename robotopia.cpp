#include<iostream>


using namespace std;

int recRob(int, int, int, int, int, int, int, int &, bool &);

int main(){
	int l1, a1, l2, a2, lt, at, r1, r2, curr = 0;
	int n;
	bool found;
	cin >> n;
	for (int i = 0; i < n; i++){
		found = false;
		cin >> l1 >> a1 >> l2 >> a2 >> lt >> at;
		r1 = recRob(lt / l1, l1, a1, l2, a2, lt, at, curr, found);
		//cout << r1 << endl;
		if (r1 == 0){
			cout << "?" << endl;
		}
		else if ((lt - (r1 * l1)) == 0){
			cout << "?" << endl;
		}
		else {
			cout << r1 << " " << (lt - (r1 * l1)) / l2 << endl;
		}
	}

}

int recRob(int r1, int l1, int a1, int l2, int a2, int lt, int at, int &curr, bool &found){
	//cout << r1 << endl;
	if (found == true && r1 == 0){
		return curr;
	}
	else if (r1 == 0){
		return 0;
	}
	//cout << (lt - r1*l1) % l2 << endl;
	if ((lt - r1*l1) % l2 == 0){
		//cout << ((lt - (r1*l1)) % l2) << endl;
		if (((lt - (r1*l1)) % l2) == 0){
			//cout << ((at - r1*a1) % a2) << " " << ((at - r1*a1) / a2) << " " << (lt - (r1*l1)) / l2 << endl;
			if (((at - r1*a1) % a2 == 0) && ((at - r1*a1) / a2) == ((lt - (r1*l1)) / l2) && (((lt - (r1 * l1)) / l2) == ((lt - (r1 * l1)) / (static_cast <float> (l2)))) && (((at - (r1 * a1)) / a2) == ((at - (r1 * a1)) / (static_cast <float> (a2))))){
				if (found == false){
					found = true;
					curr = r1;
					recRob(r1 - 1, l1, a1, l2, a2, lt, at, curr, found);
				}
				else {
					return 0;
				}
			}
			else {
				recRob(r1 - 1, l1, a1, l2, a2, lt, at, curr, found);
			}
		}
		else {
			recRob(r1 - 1, l1, a1, l2, a2, lt, at, curr, found);
		}
	}
	else{
		recRob(r1 - 1, l1, a1, l2, a2, lt, at, curr, found);
	}
}