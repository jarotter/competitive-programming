#include <iostream>
#include <string>

using namespace std;

int main(){

  int n, r=0, g=0, b=0;
  string input;

  cin >> n;
  getline(cin, input);
  getline(cin, input);

  for(int i=0; i<n;i++){
    switch(input[i]){
      case 'R':
        r++;
        break;
      case 'B':
        b++;
        break;
      case 'G':
        g++;
        break;
    }
  }

  if((r && b && g) || (r>1 && b>1) || (r>1 && g>1) || (b>1 && g>1)){
    //Si tienes de todas, haces lo que quieras.
    //Si tienes más de una de cualquier par, puedes cambiar una pareja
    //por la que te falta, y de cualquier manera, seguir haciendo
    //eso o cambiar una pareja distinta.
    b=g=r=1;
    //En los siguientes tres casos; o tienes parejas de dos colores que puedes cambiar por
    //cartas del tercer color hasta tener puras del tercero, o tienes solo cartas del tercero.
  }else if(r==b){
    g=1;
    r=b=0;
  }else if(r==g){
    b=1;
    r=g=0;
  }else if(g==b){
    r=1;
    g=b=0;
    //En los siguientes tres casos, tienes número disparejo de cartas. Si tienes
    //más de una carta de color 'c', puedes cambiar todas en pareja por otra de color
    //'c' pero al final la vas a tener que cambiar en pareja por algún otro color
    //según lo que tengas. En resumen, puedes quedar con cualquier color excepto 'c'.
  }else if(r>1){ 
    r=0;
    g=b=1;
  }else if(g>1){ 
    g=0;
    r=b=1;
  }else if(b>1){ 
    b=0;
    r=g=1;
  }

  string answer="";

  if(b) answer.append("B");
  if(g) answer.append("G");
  if(r) answer.append("R");

  cout << answer << endl;
  
  return 0;
}
