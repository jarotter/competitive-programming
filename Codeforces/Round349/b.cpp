#include <iostream>

using namespace std;

aux main(){

  int n, ans, aux;
  ans=0;

  cin >> n;
  cin >> aux;

  for(int i=0; i<n; i++){
    cin >> aux;
    ans+=aux;
  }
  


  cout << ans << endl;
  
  return 0;
}
