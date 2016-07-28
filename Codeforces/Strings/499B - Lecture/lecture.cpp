#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(){

	int m, n;
	string ai, bi, ans;
	map<string,string> dictionary;

	cin >> n >> m;

	for(int i=0; i<m;i++){
		cin >> ai >> bi;
		dictionary[ai]=bi;
	}

	for(int i=0; i<n; i++){
		cin >> ai;
		ans.append(ai.length()<=dictionary[ai].length() ? ai : dictionary[ai]);
		ans.append(" ");
	}

	cout << ans << endl;

  return 0;
}
