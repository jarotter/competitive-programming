#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){

	string s;
	int l, r, k, n, q;

	cin >> s;
	n=s.length();

	cin >> q;

	while(q--){
		cin >> l >> r >> k;
		k%=(r-l+1);
		l--;
		rotate(s.begin()+l, s.begin()+r-k, s.begin()+r);
	}

	cout << s << endl;
	
	return 0;
}