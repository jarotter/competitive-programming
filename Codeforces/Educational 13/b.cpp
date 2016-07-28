#include <iostream>
#include <algorithm>

using namespace std;

#define MAX_N 1000100

int main(){

	int y, anos[MAX_N];
	bool l, leap[MAX_N], yleap;

	yleap=((y)%400==0 || ((y)%4==0 && (y)%100!=0));

	cin >> y;

	anos[y]=0;

	for(int i=y+1; i<MAX_N; i++){
		l=((i-1)%400==0 || ((i-1)%4==0 && (i-1)%100!=0));
		leap[i-1]=l;
		anos[i]=(!leap[i-1] ? (anos[i-1]+1)%7 : (anos[i-1]+2)%7);
	}

	for(int i=y+1; i<MAX_N; i++){
		if(anos[i]==0 && leap[i]==leap[y]){
			cout << i << endl;
			return 0;
		}
	}


	return 0;
}
