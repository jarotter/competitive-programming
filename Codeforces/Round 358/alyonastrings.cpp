#include <iostream>
#include <string>


#define MAXN 1100

using namespace std;

string t,s;												// String a procesar
int lt,ls;													// Longitud de dicho string
int ind,maxL;
int rank[MAXN], trank[MAXN];										// Rangos y rangos temporales
int arr[MAXN], tarr[MAXN];										// Arreglo y arreglo temporal
int c[MAXN];												// Para el counting sort (csort)
int LCP[MAXN], LCPt[MAXN];
int Phi[MAXN];
												//
void csort(int k){											// Counting sort
	int i,sum,maxi,aux;										//
	maxi=max(300,lt);										// El maximo numero de rango posible
	for(i=0;i<MAXN;i++)c[i]=0;									// Reiniciamos la tabla de conteo
	for(i=0;i<lt;i++){										// Hacemos el conteo, excluyendo
		if(i+k<lt)c[rank[i+k]]++;								// los casos extremos
		else c[0]++;										//
	}												//
	sum=0;												// Hacemos el acumulado
	for(i=0;i<maxi;i++){										//
		aux=c[i];										//
		c[i]=sum;										//
		sum+=aux;										//
	}												//
	for(i=0;i<lt;i++){										//
		aux=arr[i]+k;										//
		if(aux<lt){										// Y acomodamos de forma estable
			tarr[c[rank[aux]]]=arr[i];							// distinguiendo a los casos extremos
			c[rank[aux]]++;									//
		}else{											//
			tarr[c[0]]=arr[i];								//
			c[0]++;										//
		}											//
	}												//
	for(i=0;i<lt;i++){										//
		arr[i]=tarr[i];										// Pasamos los resultados de la tabla
	}												// temporal a la buena
}													//
													//
void Construir(){											// Construccion del arreglo per se
	int i,j,k,r;											//
	for(i=0;i<lt;i++)rank[i]=t[i];									// Al inicio, los rangos corresponden con los
	for(i=0;i<lt;i++)arr[i]=i;									// valores ASCII y la posicion es la original
	for(k=1;k<lt;k<<=1){										// Binario
		csort(k);										// Radix sort en k y 0
		csort(0);										//
		trank[arr[0]]=0;									// Caso base
		r=0;											// Rango a asignar
		for(i=1;i<lt;i++){									//
			if(rank[arr[i]]!=rank[arr[i-1]] || rank[arr[i]+k]!=rank[arr[i-1]+k])r++;	// Si es igual al anterior, asignamos el mismo rango
			trank[arr[i]]=r;								// si no, aumentamos el rango en 1
		}											//
		for(i=0;i<lt;i++){									//
			rank[i]=trank[i];								// Pasamos de la tabla temporal a la buena
		}											//
		if(rank[arr[lt-1]]==lt-1)return;							// Terminamos de ordenar
	}												//
}													//


void ConstruirLCP() {											//
	int i, L, aux;											//
	Phi[arr[0]] = -1; 										// Inicializamos
													//
	for (i = 1; i < lt; i++) 									// Calculamos Phi en O(n)
		Phi[arr[i]] = arr[i-1]; 								// Phi recuerda el sufijo anterior al de su indice 

													// Ahora si, por teorema raro calculamos el arreglo de prefijos
	for (i = L = 0; i < lt; i++) { 									// en el orden natural (LCPt) en O(n)
													//
		if (Phi[i] == -1) { 									// Para casos especiales (i=0)
			LCPt[i] = 0; 									//
			continue; 									//
		} 											// 
		while (t[i + L] == t[Phi[i] + L]) 							// Incrementamos L max n veces
			L++;										// 
		LCPt[i] = L;										//
		L = max(L-1, 0);									// L decrece max n veces (teorema)
	}
	maxL=0;
	
	for (i = 0; i < lt; i++) {									// Calculamos el arreglo de prefijos en el orden de nuestro
		aux=LCPt[arr[i]];									// arreglo de sufijos
		LCP[i] = aux; 										// 
	}	
}

int owner(int ind) { 
	return (ind < lt-ls-1) ? 1 : 2; 								// Determina a que string pertenece el sufijo que llama
}													// Si se quisiera hacer con mas de dos strings se necesitarian
													// mas IFS unicamente, sigue la misma logica.

void LCS() {                 								
  int i;
  maxL=-1;												// Càlculo del LCS en O(n)
  for (i = 1; i < lt; i++)                         							// Verifica que los sufijos a comparar pertenezcan
    if (owner(arr[i]) != owner(arr[i-1]) && LCP[i] > maxL){						// a distintos strings y que el prefijo entre ellos sea mayor												
    	maxL = LCP[i];											// al mayor, en caso afirmativo almacena dichos valores
	ind = i;											// como la respuesta a LCS
     }		
}


int main(){

	int k, ans=0;
	string copyofs, copyoft;
	cin >> ls >> ln >> k;
	cin >> s >> t;
	copyofs=s;
	copyoft=t;

	for(int rep=0; rep<k; rep++){
		t+='$';
		t+=s;
		t+="#";
		lt=t.length();
		Construir();
		ConstruirLCP();
		LCS();
		ans+=maxL;
		s=copyofs;
		t=copyoft;
		for(int i=arr[ind]; i<maxL+arr[ind]; i++)
			t[i]=('%'+i);

	}

	cout << maxL << endl;

	return 0;
}