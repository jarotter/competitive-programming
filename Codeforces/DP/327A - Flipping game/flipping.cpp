#include <iostream>
#include <algorithm>

using namespace std;

#define MAX_N 110

int n, a[MAX_N], cs[MAX_N], dp[MAX_N];

int main(){
 
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> a[i];
		cs[a[i]]++;
	}

	dp[0]=0;
	dp[1]=cs[1];

  return 0;
}
