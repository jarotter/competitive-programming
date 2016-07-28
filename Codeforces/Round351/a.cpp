#include <iostream>
#include <algorithm>

using namespace std;

int main(){

  int n, t[100], ans;
  cin >> n;
  t[n]=90;

  for(int i=0; i<n; i++)
    cin >> t[i];

  if(t[0]>15){
    cout << 15 << endl;
    return 0;
  }

  for(int i=1; i<n+1; i++){
    if((t[i]-t[i-1])<=15)
      ans=t[i];
    else{
      ans=min(t[i-1]+15,90);
      break;
    }
  }

  cout << ans << endl;

  return 0;
}
