#include <iostream>
#include <string>

using namespace std;

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(0);

	string a, b;

	cin >> a >> b;

	int i=0;
	int n=a.length();

	while(i<n && a[i]=='0') i++;
	if(i<n){
		a=a.substr(i);
		n=a.length();
	}
	else if(a[i]==0){ a="0"; n=1;}

	i=0;
	int m=b.length();
	while(i<m && b[i]=='0') i++;
	if(i<m){
		b=b.substr(i);
		m=b.length();
	}
	else if(b[i]==0){ b="0"; m=1;}

	if(n>m){cout << '>' << endl; return 0;}
	if(n<m){cout << '<' << endl; return 0;}

	i=0;
	while(i<n && a[i]==b[i]) i++;
	cout << (a[i]>b[i] ? '>' : (a[i]<b[i] ? '<' : '=')) << endl;
 
  return 0;
}
