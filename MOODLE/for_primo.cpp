#include <iostream>
using namespace std;

int main()
{
	//declaração de variáveis
	int x;  //numero que será analisado
	int i;  //contador
	int aux, k;  //var aux

	//entrada do número que será analisado
	do
	{
		cin >> x;
	}
	while(x > 1000 || x < 0);

	//análise e saída
	k = 0;  //k = 0 -> não primo, k = 1 -> primo
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
