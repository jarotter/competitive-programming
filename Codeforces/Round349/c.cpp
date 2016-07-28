#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

bool visited[1000000100];
map<long long, long long> dp;
long long n;

long long f(long long n){
      if(n==0) return 0;
      if (visited[n]) return dp[n];

      visited[n]=true;
      dp[n]=max(n, f(n/2)+f(n/3)+f(n/4));

      return dp[n];
    }

int main(){
  
  while(cin >> n){

    cout << f(n) << endl;

  }

  return 0;
}
