#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    
    string s, t;
    
    cin >> s >> t;
    
    int i=0;
    
    reverse(t.begin(), t.end());

    cout << (s==t ? "YES" : "NO") << endl;
 
  return 0;
}
