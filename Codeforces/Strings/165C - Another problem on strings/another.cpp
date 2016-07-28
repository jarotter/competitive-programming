#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int sum[1000100], css[1000100];

int main(){

	string bin;
	int i, n, k, ans;

	cin >> k >> bin;

	n=bin.length();

	sum[0]=bin[0]-48;

	for(i=1; i<n; i++)
		sum[i]=bin[i]-48+sum[i-1];

	for(i=0; i<n; i++)
		css[sum[i]]++;

	for(i=0; i<n; i++)
		ans+=css[sum[i]-k];

	cout << ans << endl;
 
  return 0;
}
