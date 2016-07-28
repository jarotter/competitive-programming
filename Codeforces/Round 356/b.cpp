#include <iostream>

using namespace std;

int cities[110], cont;
bool BCD[100];

int main(){

	int n, i, a, adelante, atras;

	cin >> n >> a;

	for(i=1; i<=n; i++)
		cin >> BCD[i];

	cout << endl;

	for(i=1; i<=n; i++){
		if(BCD[i]){
			cities[a+i]++;
			cities[a-i]++;
		}
		cout << cities[i] << ' ';
	}

	cout << endl;

	for(i=1; i<=n; i++)
		if(cities[i]>=2)
			cont++;

	cout << cont << endl;

	
	return 0;
}