#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
 
    string s;
    
    cin >> s;
    
    int n=s.length();
    
    sort(s.begin(), s.end());
    
    int i=s.find_last_of("+");
    
    for(++i;i<n-1;i++){
        cout << s[i] << '+';
    }
    
    cout << s[n-1] << endl;
    
  return 0;
}
