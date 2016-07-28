#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){

	bool flag;

	string s;

	cin >> s;

	int n=s.length();

	reverse(s.begin(), s.end());

	int i=s.find("AB");
	int j=s.find("BA");

	flag=i<j;

	if(i<0 || i>n || j<0 || j>n){cout << "NO" << endl; return 0;}

	s=(flag ? s.erase(i,2) : s.erase(j,2));

	j=(flag ? s.find("BA") : s.find("AB"));

	cout << (j>=0 && j<n ? "YES" : "NO") << endl;

 
  return 0;
}