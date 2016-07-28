#include <iostream>
#include <string>
#include <locale>

using namespace std;

int cst[130], yay, whoops;

int main(){

	string s, t;

	cin >> s >> t;

	int n=s.length();
	int m=t.length();
	int i;
	char c;

	for(i=0; i<m; i++) 
		cst[t[i]]++;

	for(i=0; i<n; i++){
		if(cst[s[i]]>0){
			yay++;
			cst[s[i]]--;
		}
		else{
			c=(isupper(s[i]) ? tolower(s[i]) : toupper(s[i]));
			if(cst[c]>0){
				whoops++;
				cst[c]--;
			}
		}
	}

	cout << yay << ' ' << whoops << endl;
 
  return 0;
}
