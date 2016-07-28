// ------------------------------------------
// -------------- Z Algorithm ---------------
//-------------------------------------------

#include <iostream>
#include <string>
#include <vector>

using namespace std;

#define MAX_N 10000100
#define MAX_M 1010

int Z[MAX_M+MAX_N+1];
int L, R, i, n, m, k;
string P,T;

void zfunc(){
	L=R=Z[0]=0;

	for(i=1; i<n; i++){
		if(i>R){
			L=R=i;
			while(R<n && P[R-L]==P[R]) R++;
			Z[i]=R-L;
			R--;
		}
		else{
			k=i-L;
			if(Z[k]<R-i+1) Z[i]=Z[k];
			else{
				L=i;
				while(R<n && P[L-R]==P[R]) R++;
				Z[i]=R-L;
				R--;
			}
		}
	}

}



int main(){

	cin >> T >> P;

	m=P.length();

	P.append("$");
	P.append(T);

	n=P.length();

	zfunc();

	for(i=m+1;i<n;i++)
		if(Z[i]==m)
			cout << "Pattern found at index " << (i-m-1) << endl;

	return 0;
}