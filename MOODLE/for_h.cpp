#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	//declaração de variáveis
	float x;  //numero que será analisado
	float i, j = 2;  //aux
	float h = 1;  //valor H
	
	//entrada do número
	do{
		cin >> x;
	}while(x > 1000);
	
	//conta e saída do valor de h
	if(x == 0)
		h = 0;
	else
		for(i = 1; i < x; i++){
			h = h + (1 / j);
			j++;
		}
	cout << fixed << setprecision(4);
	cout << h << endl;
	return 0;
}