#include <iostream>
#include <string>

using namespace std;

int css[130], cst[130];

int main(){

	string s, t;
	int n, m, i,j;
	bool automaton=false, array=true;

	cin >> s >> t;

	n=s.length();
	m=t.length();

	if(m>n){
		cout << "need tree" << endl;
		return 0;
	}

	for(i=0; i<n; i++)
		css[s[i]]++;
	for(i=0; i<m;i++)
		cst[t[i]]++;
	i=97;
	while(i<124 && cst[i]<=css[i])
		i++;
	if(i<123){
		cout << "need tree" << endl;
		return 0;
	}

	if(m<n) automaton=true;
	
	i=j=0;
	while(i<n && j<m){
		if(s[i]==t[j]) j++;
		i++;
	}

	if(j==m) array=false;

	cout << (automaton ? (array ? "both" : "automaton") : (array ? "array" :"need tree")) << endl;
 
  return 0;
}
