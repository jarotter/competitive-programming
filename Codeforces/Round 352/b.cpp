#include <iostream>
#include <string>

using namespace std;
int csort[30];

int main(){

  int n, l, i, ans=0;
  string input;
  cin >> n;
  cin >> input;

  l=input.size();

  if(l>26){
    cout << -1 << endl;
    return 0;
  }
  else{
    for(i=0; i<l; i++)
      csort[input[i]-97]++;
    for(i=0; i<30;i++)
      if(csort[i]>1)
        ans+=(csort[i]-1);
  }

  cout << ans << endl;

  ans+=csort[i];

  return 0;
}
