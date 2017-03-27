#include <iostream>
#include <algorithm>
#include <bitset>

using namespace std;

bitset<32> reversebits(bitset<32> b) {
	string s = b.to_string();
	string rs = "";
	for (int i = s.size() - 1; i >= 0; i--) {
		rs += s[i];
	}
	bitset<32> x(rs);
	return x;
}


int main() {
	unsigned int input;
	string reversed_bits;

	cin >> input;

	bitset<input> bits(input);

	cout << reversebits(bits);

	return 0;
}

