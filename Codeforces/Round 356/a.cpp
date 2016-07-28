#include <iostream>
#include <algorithm>

using namespace std;

int cs[110], res[8];

int main(){

	int t[8], mins=0, sum=0, j=0;

	for(int i=0; i<5; i++){
		cin >> t[i];
		sum+=t[i];
	}

	for(int i=0; i<5; i++)
		cs[t[i]]++;

	for(int i=1; i<101; i++){
		if(cs[i]==2 || cs[i]==3){
			res[j]=i*cs[i];
			j++;
		}
		else if(cs[i]>3){
			res[j]=3*i;
			j++;
		}
	}

	for(int i=0; i<5; i++)
		mins=max(mins, res[i]);

	sum-=mins;

	cout << sum << endl;

	return 0;
}