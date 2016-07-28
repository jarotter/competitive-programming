#include <iostream>
#include <vector>
#include <algorithm>

#define MAX_N 1000100

using namespace std;

int main(){

	long long n, aux;
	vector<long long> a;

	cin >> n;

	for(int i=0; i<n; i++){
		cin >> aux;
		a.push_back(aux);
	}

	sort(a.begin(), a.end());
	aux=1;

	for(int i=0; i<n; i++){
		if(a[i]>=aux){
			a[i]=aux;
			aux++;
		}
	}

	cout << aux << endl;

	return 0;
}