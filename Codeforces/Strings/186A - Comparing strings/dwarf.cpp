#include <iostream>
#include <string>

using namespace std;

int css[130], cst[130];

int main(){

	string s, t;

	cin >> s >> t;

	int n=s.length();
	int m=t.length();

	if(n!=m){cout << "NO" << endl; return 0;}

	int i;

	for(i=0; i<n; i++) css[s[i]]++;
	for(i=0; i<m; i++) cst[t[i]]++;

	i=97;
	while(i<123 && css[i]==cst[i]) i++;

	if(i<123){cout << "NO" << endl; return 0;}

	int flag=0;
	i=0;
	while(i<n && flag<3){
		flag+=(s[i]!=t[i]);
		i++;
	}

	cout << (flag<=2 ? "YES" : "NO") << endl;

 
  return 0;
}
