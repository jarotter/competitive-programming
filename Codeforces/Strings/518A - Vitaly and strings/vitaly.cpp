#include <iostream>
#include <string>

using namespace std;

int main(){

	string s, t, ans;

	cin >> s >> t;

	int n=s.length();

	int i=0;
	while(i<n && ((t[i]-s[i])<1)) i++;

	if(i==n-1 && (t[i]-s[i])==1){
		cout << "No such string" << endl;
		return 0;
	}

	int j=n-1;

	while(j>i && s[j]=='z') j--;

	if(j<n){
		s[j]++;
		for(i=j+1; i<n; i++)
			s[i]='a';
		cout << (s==t ? "No such string" : s) << endl;
		return 0;
	}

	cout << "No such string" << endl;

  return 0;
}
