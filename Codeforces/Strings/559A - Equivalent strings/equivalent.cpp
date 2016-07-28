#include <iostream>
#include <string>

using namespace std;

string split(string s){
	int n=s.length();
	if(n%2==1) return s;
	string s1, s2;
	s1 = split(s.substr(0,n/2));
	s2 = split(s.substr(n/2, n/2));
	return (s1>s2 ? s1+s2 : s2+s1);
}

int main(){

	string a, b;

	cin >> a >> b;

	cout << ((split(a)==split(b)) ? "YES" : "NO") << endl;
 
  return 0;
}
