#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(){

	string password, aux;
	string nums[11];
	map<string,int> dictionary;

	cin >> password;
	for(int i=0, j=0; j<9; i+=10, j++){
		nums[j]=password.substr(i,10);
	}

	for(int i=0; i<10; i++){
		cin >> aux;
		dictionary[aux]=i;
	}

	for(int i=0; i<8; i++)
		cout<<dictionary[nums[i]];
 
 	cout << endl;

  return 0;
}
