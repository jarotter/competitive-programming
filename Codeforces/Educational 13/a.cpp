#include <iostream>
#include <algorithm>

using namespace std;

int main(){

	int n, k, m;

	cin >> n >> k;

	m=n%k;

	cout << n+(k-m) << endl;
 
  return 0;
}
