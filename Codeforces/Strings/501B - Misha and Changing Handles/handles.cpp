#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(){

	int n;
	string viejo, nuevo;
	map<string, string> handles;
	map<string, string>::iterator it;


	cin >> n;

	for(int i=0; i<n; i++){
		cin >> viejo >> nuevo;
		it=handles.begin();
		while(it!=handles.end() && it->second!=viejo)
			it++;
		if(it==handles.end())
			handles[viejo]=nuevo;
		else
			handles[it->first]=nuevo;
	}

	cout << handles.size() << endl;
	for(it=handles.begin(); it!=handles.end(); it++)
		cout << it->first << ' ' << it->second << endl;

	return 0;
}
