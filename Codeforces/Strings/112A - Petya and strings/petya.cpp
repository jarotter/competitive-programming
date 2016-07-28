#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main(){
    
    string s, t;
    
    cin >> s >> t;
    
    int i, n=s.length();
    
    for(i=0; i<n; i++){
        if(isupper(s[i])) s[i]=tolower(s[i]);
        if(isupper(t[i])) t[i]=tolower(t[i]);
    }
    
    cout << (s.compare(t)==0 ? 0 : (s.compare(t)>0 ? 1 : -1)) << endl;
    
  return 0;
}
