#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

#define MAX_N 1030

int main(){

	int m, n, i, j, aux, maxp=0, minp=0, mind=99999999;
	vector<int> g;

	cin >> n >> m;

	for(i=0; i<m; i++){
		cin >> aux;
		g.push_back(aux);
	}

	sort(g.begin(), g.end());
	reverse(g.begin(), g.end());

	if(m==n){
		cout << g[0]-g[m-1] << endl;
		return 0;
	}

	for(i=0; i<m-n+1; i++)
		mind=min(mind, g[i]-g[i+n-1]);

	cout << mind << endl;

  return 0;
}
