#include <iostream>
#include <string>

using namespace std;

int main(){
    
    string s;
    int ans=0, i;
    
    cin >> s;
    
    int n=s.length();
    
    size_t j=s.find("bear",0);
    
    while(j!=string::npos){
        ans+=(n-(j+3));
        i=j;
        j=s.find("bear",j+1);
        if(j!=string::npos)
            ans+=(n-(j+3))*(j-(i+1));
    }
    
    cout << ans << endl;
 
  return 0;
}
