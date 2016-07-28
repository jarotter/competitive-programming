#include <iostream>
#include <string>
#include <set>
#include <locale>

using namespace std;

int main(){

	int n;
	string s;
	set<char> alphabet;

	cin >> n >> s;

	for(int i=0; i<n; i++)
		alphabet.insert(tolower(s[i]));

	cout << (alphabet.size() >25 ? "YES" : "NO") << endl;
 
  return 0;
}
