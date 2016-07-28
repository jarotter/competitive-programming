#include <iostream>
#include <string>

using namespace std;

int main(){

	string s;
	int i, n;

	cin >> s;

	n=s.length();

	for(i=1; i<n; i++){
		if(s[i]==s[i-1]){
			s[i]='a';
			while(s[i]==s[i-1] || ( i+1<n && s[i]==s[i+1])){
				s[i]++;
			}
		}
	}

	cout << s << endl;

  return 0;
}
