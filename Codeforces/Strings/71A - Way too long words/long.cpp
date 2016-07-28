#include <iostream>
#include <string>

using namespace std;

int main(){
    
    int n, s;
    string w;
    
    cin >> n;
    
    for(int i=0; i<n; i++){
        cin >> w;
        s=w.length();
        
        if(s>10)
            cout << w.at(0) << s-2 << w.at(s-1) << endl;
        else
            cout << w << endl;
        
    }
 
  return 0;
}
