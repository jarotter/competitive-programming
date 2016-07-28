#include <iostream>
#include <string>

using namespace std;

int countarr[150];

int main(){

	int k,n,i, j;
	string s, ans;
	char c;

	cin >> k >> s;

	n=s.length();

	for(i=0; i<n; i++)
		countarr[s[i]]++;

	i=97;
	while(i<123 && countarr[i]%k==0)
		i++;

	if(i<122){cout << "-1" << endl; return 0;}

	for(i=0; i<k; i++)
		for(j=97; j<123;j++)
			ans.append(countarr[j]/k, j);

	cout << ans << endl;
 
  return 0;
}