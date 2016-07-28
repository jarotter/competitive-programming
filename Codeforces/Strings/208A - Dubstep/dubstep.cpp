#include <iostream>
#include <string>

using namespace std;

int main(){

	string song;

	cin >> song;

	int i, n=song.length();

	i=song.find("WUB");

	while(i>=0 && i<n){
		song=song.erase(i,3);
		if(i>0 && song.at(i-1)!=' ') song.insert(i," ");
		i=song.find("WUB");
	}

	cout << song << endl;

  return 0;
}
