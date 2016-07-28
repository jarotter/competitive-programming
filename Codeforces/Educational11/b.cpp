#include <iostream>
#include <queue>

using namespace std;

queue<int> lw;
queue<int> la;
queue<int> rw;
queue<int> ra;


int main(){

  int n, m;

  cin >> n >> m;

  for(int i=1; i<=m; i++){

    if(i<=2*n){
      if(i%2!=0){
        lw.push(i);
      }
      else{
        rw.push(i);
      }
    }
    else{
      if(i%2!=0){
        la.push(i);
      }
      else{
        ra.push(i);
      }
    }
  }
  
  for(int i=1; i<=m+1; i++){
     switch(i%4){
      case 1:
        if(!la.empty()){
          cout << la.front() << ' ';
          la.pop();
        }
        break;
      case 2:
        if(!lw.empty()){
          cout << lw.front() << ' ';
          lw.pop();
        }       
        break;
      case 3:
        if(!ra.empty()){
          cout << ra.front() << ' ';
          ra.pop();
        }     
        break;
      case 0:
        if(!rw.empty()){
          rw.pop();
        } 
        break;
    }


  }

  return 0;
}
