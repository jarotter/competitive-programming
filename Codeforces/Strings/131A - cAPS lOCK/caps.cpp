#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main(){
 
    string s,t;
    bool flag=true;
    
    cin >> s;
    
    t=s;
    
    int n=s.length();
    
    int i=1;
    
    while(i<n && flag){
        flag=isupper(s[i]);
        s[i]=tolower(s[i]);
        i++;
    }
        
    if(flag) s[0] = (isupper(s[0]) ? tolower(s[0]) : toupper(s[0]));
    
    cout << (flag ? s : t) << endl;
    
  return 0;
}
