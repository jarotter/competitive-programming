#include <iostream>
#include <string>

using namespace std;

	string board[10];
	string wstart = "WBWBWBWB";
	string bstart = "BWBWBWBW";
	string aux;
	bool flag=true;

int main(){

	int i; 

	for(i=0; i<8; i++){
		cin >> aux;
		board[i]=aux;
	}

	i=0;
	while(i<8 && flag){
		flag=(board[i]==wstart || board[i]==bstart);
		i++;
	}

	cout << (i==8 && flag? "YES": "NO") << endl;

  return 0;
}
