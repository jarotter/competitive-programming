#include <iostream>
#include <string>

using namespace std;

#define MAX_N 1000010

string s;
int i, l, r, k, n, z[MAX_N];

void zfunction(){

	l=r=0;

	for(i=1; i<n; i++){
		if(i>r){
			l=r=i;
			while(r<n && s[r-l]==s[r]) r++;
			z[i]=r-l;
			r--;
		}
		else{
			k=i-l;
			if(z[k]<r-i+1) z[i]=z[k];
			else{
				l=i;
				while(r<n && s[r-l]==s[r]) r++;
				z[i]=r-l;
				r--;
			}
		}
	}

}

int main(){

	int ansInd=0;
	int maxSoFar=0;

	cin >> s;

	n=s.length();

	zfunction();

	for(i=1; i<n; i++){
		if(z[i]==n-i && maxSoFar>=z[i]){
			ansInd=i; 
			break;
		}
		maxSoFar=(z[i]>maxSoFar ? z[i] : maxSoFar);
	}

	cout << (ansInd!=0 ? s.substr(ansInd, z[ansInd]) : "Just a legend") << endl;
 
  return 0;
}
