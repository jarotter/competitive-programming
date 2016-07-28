#include <iostream>
#include <string>

using namespace std;

int main(){
    
    string s;
    
    cin >> s;
    
    int h,e,l,otral,o, n;
    
    n=s.size();
    
    h=s.find('h');
    if(h<0 || h>s.length()){cout << "NO" << endl; return 0;}
    e=s.find('e',h+1);
    if(e<0 || e>s.length() || e<=h){cout << "NO" << endl; return 0;}
    l=s.find('l',e+1);
    if(l<0 || l>s.length() || l<=e){cout << "NO" << endl; return 0;}
    otral=s.find('l',l+1);
    if(l<0 || l>s.length() || otral<=l){cout << "NO" << endl; return 0;}
    o=s.find('o',otral+1);
    if(o<0 || o>s.length() || o<=otral){cout << "NO" << endl; return 0;}
    
    cout << "YES" << endl;
    
 
  return 0;
}
