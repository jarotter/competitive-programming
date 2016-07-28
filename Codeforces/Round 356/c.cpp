#include <iostream>
#include <string>

using namespace std;

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(0);

	string ans, y="yes";
	int q=20, i=0, cont=0;
	int primes[]={2,3,5,7,11,13,17,19,23,29,31,37,41,47};

	while(q-- && i<14){
		cout << primes[i] << endl << flush;
		cin >> ans;
		if(ans==y){
			cont++;
			if(cont>1){
					cout << "composite" << endl << flush; 
					return 0;
				}
			if(primes[i]<=10){
				cout << primes[i]*primes[i] << endl << flush;
				cin >> ans;
				if(ans==y){
					cont++;
					if(cont>1){
						cout << "composite" << endl << flush; 
						return 0;
					}
				}else i++;
			} else i++;
		}
		else i++;
	}

	cout << "prime" << endl << flush;

	return 0;
}