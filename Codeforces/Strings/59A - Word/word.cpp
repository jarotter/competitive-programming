#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main(){

	string s;
	int lower=0, upper=0;

	cin >> s;

	int n=s.length();

	for(int i=0; i<n; i++){
		if(islower(s[i]))
			lower++;
		else
			upper++;
	}

	if(lower>=upper)
		for(int i=0; i<n; i++)
			s[i]=tolower(s[i]);
	else
		for(int i=0; i<n; i++)
			s[i]=toupper(s[i]);

	cout << s << endl;

 
  return 0;
}
