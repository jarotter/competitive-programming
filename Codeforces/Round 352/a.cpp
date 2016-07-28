#include <iostream>
#include <string>

using namespace std;

int main(){

  int n;
  string num="";

  cin >> n;

  for(int i=1; i<380; i++){
    num.append(to_string(i));
  }

  cout << num.at(n-1) << endl;

  

  return 0;
}
