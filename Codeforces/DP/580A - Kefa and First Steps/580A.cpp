#include <iostream>
#include <iostream>

using namespace std;

int main(){

  int n, inicio, length, i;
  int a[100010];

  cin >> n;

  for(i=1; i<=n; i++)
    cin >> a[i];

  inicio=1;
  length=1;
  while(inicio<=n-1){
    i=inicio;
    while(i<n && a[i]<=a[i+1])
      i++;
    length=max(length,i+1-inicio);
    inicio=i+1;
  }

  cout << length << endl;

  return 0;
}
