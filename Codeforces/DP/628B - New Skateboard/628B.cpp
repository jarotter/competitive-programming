#include <iostream>
#include <string>

using namespace std;

int main(){

  ios_base::sync_with_stdio(false);
  cin.tie(0);

  string number, auxstring;
  int aux, i;
  long long length, ans=0;

  cin >> number;
  length = number.length();

  for(i=0; i<length;i++)
    ans+=(number[i]%4==0);

  for(i=length-1; i>0; i--){
    auxstring+=number[i-1];
    auxstring+=number[i];
    aux=stoi(auxstring);
    if(aux%4==0)
      ans+=i;
    auxstring.clear();
  }
  
  cout << ans << endl;


  return 0;
}
