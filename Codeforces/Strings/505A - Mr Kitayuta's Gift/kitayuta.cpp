#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){

	string s, t, r;
	int i,j,n;

	cin >> s;
	t=s;
	n=s.length();

	for(i=97; i<123; i++ ){
		for(j=0; j<=n; j++){
			s=t;
			s.insert(j,1,i);
			r=s;
			reverse(r.begin(), r.end());
			if(s==r){
				cout << s << endl;
				return 0;
			}
		}
	}

	cout << "NA" << endl;

	return 0;
}