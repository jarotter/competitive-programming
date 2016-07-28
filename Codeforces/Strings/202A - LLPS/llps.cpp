#include <iostream>
#include <string>
#include <cmath>
#include <set>
#include <algorithm>

using namespace std;

#define isOn(S, j) (S & (1 << j))

int main(){

	string s, aux, aux2, ans="";
	int i, j, ss, pss, anslen;
	set<string> powerset;
	set<string>::iterator it;
	bool isPal;

	cin >> s;
	ss=s.length();
	pss=pow(2,ss);

	for(i=0; i<pss; i++){
		aux="";
		for(j=0; j<ss; j++){
			if(isOn(i,j)){
				aux+=s[j];
			}
		}
		powerset.insert(aux);
	}
	
	for(it=powerset.begin(); it!=powerset.end(); it++){
		aux=*it;
		aux2=aux;
		reverse(aux2.begin(), aux2.end());
		isPal=(aux==aux2);
		if(isPal) ans=aux;
	}

	cout << ans << endl; 

  return 0;
}
