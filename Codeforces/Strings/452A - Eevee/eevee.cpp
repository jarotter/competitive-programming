#include <iostream>
#include <string>

using namespace std;

int main(){

	int n;
	string s;

	cin >> n >> s;

	if(n==6){cout << "espeon" << endl; return 0;}
	if(n==8){cout << "vaporeon" << endl; return 0;}
	if(s[0]=='j' || s[1]=='o' || s[3]=='t'){cout << "jolteon" << endl; return 0;}
	if(s[0]=='s' || s[1]=='y' || s[3]=='v'){cout << "sylveon" << endl; return 0;}
	if(s[0]=='u' || s[1]=='m' || s[2]=='b'){cout << "umbreon" << endl; return 0;}
	if(s[0]=='l' || s[1]=='e' || s[3]=='f'){cout << "leafeon" <<endl; return 0;}
	if(s[0]=='g' || s[3]=='c'){cout << "glaceon" << endl; return 0;}
	cout << "flareon" << endl;
 
  return 0;
}
