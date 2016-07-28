#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

#define MAX_N 1030

int main(){

	int m, n, i, j, aux, mind=-1;
	vector<int> g;

	cin >> n >> m;

	for(i=0; i<m; i++){
		cin >> aux;
		g.push_back(aux);
	}

	sort(g.begin(), g.end());
	reverse(g.begin(), g.end());

	for(i=0; i<m; i++){
		for(j=1; j<m; j++)
			mind=min(mind,i-j);
	}


  return 0;
}
