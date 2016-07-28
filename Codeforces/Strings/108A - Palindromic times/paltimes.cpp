#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main(){
	int hr, min,i;
	int palhrs[]={0,1,2,3,4,5,-1,-1,-1,-1,10,11,12,13,14,15,-1,-1,-1,-1,20,21,22,23};
	int palmins[]={0,10,20,30,40,50,-1,-1,-1,-1,1,11,21,31,41,51,-1,-1,-1,-1,2,12,22,32};
	char colon;

	cin >> hr >> colon >> min;

	if(hr==23 && min>=32){cout << "00:00" << endl; return 0;}

	if(palhrs[hr]!=hr){
		while(hr<24 && palhrs[hr]!=hr)
			hr++;
		cout << setfill('0') << setw(2) << palhrs[hr];
		cout << ':';
		cout << setfill('0') << setw(2) << palmins[hr] << endl;
		return 0;
	}

	//else, palhrs[hr]==hr
	if(min<palmins[hr]){
		cout << setfill('0') << setw(2) << palhrs[hr];
		cout << ':';
		cout << setfill('0') << setw(2) << palmins[hr] << endl;
		return 0;
	}

	//else, min>=palmins[hr]
	hr++;
	while(hr<24 && palhrs[hr]!=hr)
		hr++;
	cout << setfill('0') << setw(2) << palhrs[hr];
	cout << ':';
	cout << setfill('0') << setw(2) << palmins[hr] << endl;

	return 0;
}
