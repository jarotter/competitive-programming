#include <iostream>
#include <algorithm>

#define MAX_N 1000100

using namespace std;
int mod[6][2];

int main(){

	int m, n;
	long long ans=0;

	cin >> n >> m;

	for(int i=1; i<=n; i++)
		mod[i%5][0]++;
	for(int i=1; i<=m; i++)
		mod[i%5][1]++;
	for(int i=0; i<5; i++)
		ans+=(mod[i][0]*mod[(5-i)%5][1]);

	cout << ans << endl;

	return 0;
}