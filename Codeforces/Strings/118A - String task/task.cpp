#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main(){
    
    string s;
    string vowels = "AEIOUYaeiouy";
    string::iterator it;
    
    cin >> s;
    
    for(it=s.begin(); it!=s.end(); ){
        if(vowels.find(*it)!=string::npos) it=s.erase(it);
        else it++;
    }
    
    int n=s.length();
    
    for(it=s.begin(); it!=s.end(); it++)
        if(isupper(*it)) 
            *it+=32;
    
    for(int i=0; i<2*n; i+=2)
        s.insert(i,".");
    
    
    cout << s << endl;
 
  return 0;
}
