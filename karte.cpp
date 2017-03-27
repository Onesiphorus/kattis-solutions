#include<iostream>
#include<string>

using namespace std;

int main(){
	string S;
	cin >> S;
	bool dup = false;
	int Pt = 0, Kt = 0, Ht = 0, Tt = 0;
	bool P[13], K[13], H[13], T[13];
	
	//initialize
	for (int i = 0; i < 13; i++){
		P[i] = false;
		K[i] = false;
		H[i] = false;
		T[i] = false;
	}
	for (int i = 0; i < S.length(); i = i + 3){
		if(S[i] == 'P'){
			if (S[i+1] == '0'){
				switch(S[i+2]){
					case '1': 
						if(P[0] == false) P[0] = true;
						else dup = true;
						break;
					case '2': 
						if(P[1] == false) P[1] = true;
						else dup = true;
						break;
					case '3': 
						if(P[2] == false) P[2] = true;
						else dup = true;
						break;
					case '4':
						if(P[3] == false) P[3] = true;
						else dup = true;
						break;
					case '5':
						if(P[4] == false) P[4] = true;
						else dup = true;
						break;
					case '6':
						if(P[5] == false) P[5] = true;
						else dup = true;
						break;
					case '7':
						if(P[6] == false) P[6] = true;
						else dup = true;
						break;
					case '8':
						if(P[7] == false) P[7] = true;
						else dup = true;
						break;
					case '9':
						if(P[8] == false) P[8] = true;
						else dup = true;
						break;
				}
			} else {
				switch(S[i+2]){
					case '0':
						if(P[9] == false) P[9] = true;
						else dup = true;
						break;
					case '1':
						if(P[10] == false) P[10] = true;
						else dup = true;
						break;
					case '2':
						if(P[11] == false) P[11] = true;
						else dup = true;
						break;
					case '3':
						if(P[12] == false) P[12] = true;
						else dup = true;
						break;
				}
			}
		} 
		else if(S[i] == 'H'){
			if (S[i+1] == '0'){
				switch(S[i+2]){
					case '1': 
						if(H[0] == false) H[0] = true;
						else dup = true;
						break;
					case '2': 
						if(H[1] == false) H[1] = true;
						else dup = true;
						break;
					case '3': 
						if(H[2] == false) H[2] = true;
						else dup = true;
						break;
					case '4':
						if(H[3] == false) H[3] = true;
						else dup = true;
						break;
					case '5':
						if(H[4] == false) H[4] = true;
						else dup = true;
						break;
					case '6':
						if(H[5] == false) H[5] = true;
						else dup = true;
						break;
					case '7':
						if(H[6] == false) H[6] = true;
						else dup = true;
						break;
					case '8':
						if(H[7] == false) H[7] = true;
						else dup = true;
						break;
					case '9':
						if(H[8] == false) H[8] = true;
						else dup = true;
						break;
				}
			} 
			else {
				switch(S[i+2]){
					case '0':
						if(H[9] == false) H[9] = true;
						else dup = true;
						break;
					case '1':
						if(H[10] == false) H[10] = true;
						else dup = true;
						break;
					case '2':
						if(H[11] == false) H[11] = true;
						else dup = true;
						break;
					case '3':
						if(H[12] == false) H[12] = true;
						else dup = true;
						break;
				}
			}
		}			
		else if(S[i] == 'K'){
			if (S[i+1] == '0'){
				switch(S[i+2]){
					case '1': 
						if(K[0] == false) K[0] = true;
						else dup = true;
						break;
					case '2': 
						if(K[1] == false) K[1] = true;
						else dup = true;
						break;
					case '3': 
						if(K[2] == false) K[2] = true;
						else dup = true;
						break;
					case '4':
						if(K[3] == false) K[3] = true;
						else dup = true;
						break;
					case '5':
						if(K[4] == false) K[4] = true;
						else dup = true;
						break;
					case '6':
						if(K[5] == false) K[5] = true;
						else dup = true;
						break;
					case '7':
						if(K[6] == false) K[6] = true;
						else dup = true;
						break;
					case '8':
						if(K[7] == false) K[7] = true;
						else dup = true;
						break;
					case '9':
						if(K[8] == false) K[8] = true;
						else dup = true;
						break;
				}
			} else {
				switch(S[i+2]){
					case '0':
						if(K[9] == false) K[9] = true;
						else dup = true;
						break;
					case '1':
						if(K[10] == false) K[10] = true;
						else dup = true;
						break;
					case '2':
						if(K[11] == false) K[11] = true;
						else dup = true;
						break;
					case '3':
						if(K[12] == false) K[12] = true;
						else dup = true;
						break;
				}
			}
		}			
		else {
			if (S[i+1] == '0'){
				switch(S[i+2]){
					case '1': 
						if(T[0] == false) T[0] = true;
						else dup = true;
						break;
					case '2': 
						if(T[1] == false) T[1] = true;
						else dup = true;
						break;
					case '3': 
						if(T[2] == false) T[2] = true;
						else dup = true;
						break;
					case '4':
						if(T[3] == false) T[3] = true;
						else dup = true;
						break;
					case '5':
						if(T[4] == false) T[4] = true;
						else dup = true;
						break;
					case '6':
						if(T[5] == false) T[5] = true;
						else dup = true;
						break;
					case '7':
						if(T[6] == false) T[6] = true;
						else dup = true;
						break;
					case '8':
						if(T[7] == false) T[7] = true;
						else dup = true;
						break;
					case '9':
						if(T[8] == false) T[8] = true;
						else dup = true;
						break;
				}
			} else {
				switch(S[i+2]){
					case '0':
						if(T[9] == false) T[9] = true;
						else dup = true;
						break;
					case '1':
						if(T[10] == false) T[10] = true;
						else dup = true;
						break;
					case '2':
						if(T[11] == false) T[11] = true;
						else dup = true;
						break;
					case '3':
						if(T[12] == false) T[12] = true;
						else dup = true;
						break;
				}
			}
		}
	
	}
	if(dup != true){
		for(int i = 0; i < 13; i++){
			if(P[i] == false) Pt++;
			if(K[i] == false) Kt++;
			if(H[i] == false) Ht++;
			if(T[i] == false) Tt++;
		}
		cout << Pt << " " << Kt << " " << Ht << " " << Tt;
	}
	else {
		cout << "GRESKA";
	}
	return 0;
}