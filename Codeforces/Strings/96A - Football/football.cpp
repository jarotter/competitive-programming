#include <iostream>
#include <string>

using namespace std;

int main(){
    
    string s, sub;
    
    cin >> s;
    
    int n=s.length();
    bool flag=false;
    int i=0;
    
    while(i<=n-7 && !flag){
        sub=s.substr(i,7);
        flag=(sub=="1111111" || sub=="0000000");
        i++;
    }
    
    cout << (flag ? "YES" : "NO") << endl;
 
  return 0;
}
