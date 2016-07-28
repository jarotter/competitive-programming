#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){

	string l1,l2,l3;
	int i,n, ish=0;
	char c;

	getline(cin,l1);
	getline(cin,l2);
	getline(cin,l3);

	n=l1.length();

	for(i=0; i<n; i++){
		c=l1[i];
		ish+=(c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
	}

	if(ish!=5){cout << "NO" << endl; return 0;}

	n=l2.length();
	ish=0;

	for(i=0; i<n; i++){
		c=l2[i];
		ish+=(c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
	}

	if(ish!=7){cout << "NO" << endl; return 0;}

	n=l3.length();
	ish=0;

	for(i=0; i<n; i++){
		c=l3[i];
		ish+=(c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
	}

	if(ish!=5){cout << "NO" << endl; return 0;}

	cout << "YES" << endl;

	return 0;
}
