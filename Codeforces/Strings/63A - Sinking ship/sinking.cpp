#include <iostream>
#include <string>
#include <queue>

using namespace std;

int main(){

	int i,n,r,w,m;
	string name, status;
	queue<string> rats, weak, men, captain;

	cin >> n;

	for(i=0; i<n; i++){
		cin >> name >> status;
		switch(status[2]){
			case 't':
				rats.push(name);
				break;
			case 'm':
				weak.push(name);
				break;
			case 'i':
				weak.push(name);
				break;
			case 'n':
				men.push(name);
				break;
			case 'p':
				captain.push(name);
				break;
		}
	}

	r=rats.size();
	w=weak.size();
	m=men.size();

	for(i=0; i<r; i++){cout << rats.front() << endl;rats.pop();}
	for(i=0; i<w; i++){cout << weak.front() << endl; weak.pop();}
	for(i=0; i<m; i++){cout << men.front() << endl; men.pop();}
	cout << captain.front() << endl;

	return 0;
}