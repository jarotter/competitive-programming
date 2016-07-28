#include <iostream>
#include <string>
#include <map>
#include <iterator>

using namespace std;

int main(){

	map<string, int> score;
	string s;
	int n;

	cin >> n;

	for(int i=0; i<n; i++){
		cin >> s;
		score[s]++;
	}

	if(score.size()==1){cout << score.begin()->first << endl; return 0;}

	map<string,int>::iterator it=score.begin();
	map<string,int>::iterator it2=next(it);

	cout << ((it->second >= it2->second) ? it->first : it2->first) << endl;
 
  return 0;
}
