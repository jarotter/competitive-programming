#include <iostream>
#include <string>

using namespace std;

int z[100140];
int L, R, i, j, n, m, k, cont;
string P, T;

void zFunc(){
	L=R=z[0]=0;
	for(i=1; i<n; i++){
		if(i>R){
			L=R=i;
			while(R<n && P[R-L]==P[R]) R++;
			z[i]=R-L;
			R--;
		}
		else{
			k=i-L;
			if(z[k]<R-i+1) z[i]=z[k];
			else{
				L=i;
				while(R<n && P[R-L]==P[R])R++;
				z[i]=R-L;
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

	m++;

	zFunc();

	i=m;
	while(i<n){
		if(z[i]==m-1){
			cont++;
			i+=(m-1);
		}
		else
			i++;
	}

	cout << cont << endl;
 
  return 0;
}
