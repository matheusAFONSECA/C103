#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	//declara��o de vari�veis
	float x;  //numero que ser� analisado
	float i, j = 2;  //aux
	float h = 1;  //valor H
	
	//entrada do n�mero
	do{
		cin >> x;
	}while(x > 1000);
	
	//conta e sa�da do valor de h
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