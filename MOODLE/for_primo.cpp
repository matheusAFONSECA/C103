#include <iostream>
using namespace std;

int main()
{
	//declara��o de vari�veis
	int x;  //numero que ser� analisado
	int i;  //contador
	int aux, k;  //var aux

	//entrada do n�mero que ser� analisado
	do
	{
		cin >> x;
	}
	while(x > 1000 || x < 0);

	//an�lise e sa�da
	k = 0;  //k = 0 -> n�o primo, k = 1 -> primo
	for(i = 1; i < x; i++)
	{
		aux = x % i;
		if(aux == 0)
			k++;
	}
	if(k == 0)
		cout << "primo" << endl;
	else 
		cout << "nao primo" << endl;
	
	return 0;
}
