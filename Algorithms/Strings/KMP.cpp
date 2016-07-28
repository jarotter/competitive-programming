// ------------------------------------------
// ----------- Knuth-Morris-Pratt -----------
//-------------------------------------------

#include <iostream>
#include <string>
#include <set>

#define MAX_N 10000100
#define MAX_M 1010

using namespace std;

string P, T;
int i,j,n, m,lps[MAX_M];
set<int> answers;

void failureFunction(){

	i=0; j=lps[0]=-1;

	while(i<m){
		while(j>=0 && P[i]!=P[j]) j=lps[j];
		i++; j++;
		lps[i]=j;
	}
}

void KMPSearch(){
	i=j=0;

	while(i<n){
		while(j>=0 && T[i]!=P[j]) j=lps[j];
		i++; j++;
		if(j==m){
			answers.insert(i-j);
			j=lps[j];
		}
	}
}

int main(){

	lps[6]=99;

	cin >> P >> T;

	n=T.length();
	m=P.length();

	failureFunction();
	KMPSearch();

	for(set<int>::iterator it=answers.begin(); it!=answers.end(); it++){}

	return 0;
}