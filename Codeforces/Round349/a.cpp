#include <iostream>
#include <cmath>
#define PI 3.141592

using namespace std;

int main(){

  double d, h, v, e, r, t;
  
  cin >> d >> h >> v >> e;
  
  r=d/2;

  t=h/((v/(PI*r*r))-e);

  if(t>0) cout << "YES" << endl << t << endl;
  else cout << "NO" << endl;
  
  return 0;
}
