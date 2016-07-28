#include <iostream>
#include <string>

using namespace std;

char names[100], signarr[100];
int i;

int main(){

	string name1, name2, sign;

	cin >> name1 >> name2 >> sign;

	int n1l=name1.length();
	int n2l=name2.length();
	int sl=sign.length();

	if(sl!=(n1l+n2l)){cout << "NO" << endl; return 0;}

	for(i=0; i<n1l; i++)
		names[name1[i]]++;
	for(i=0; i<n2l; i++)
		names[name2[i]]++;
	for(i=0; i<sl; i++)
		signarr[sign[i]]++;

	i=65;
	while(i<91 && signarr[i]==names[i])
		i++;

	cout << (i==91 ? "YES" : "NO") << endl;
 
  return 0;
}
