#include <iostream>
using namespace std;

int main()
{
	//declaraçaõ de variáveis
	int i, j;  //n° quaisquer q se deseja o ciclo
	int k, q;  //contador
	int maior;  //maior comprimento de ciclo
	int aux;  //var aux

	//entrada de i e j
	do
	{
		cin >> i;
	}
	while(i < 0 && i > 10000);
	do
	{
		cin >> j;
	}
	while(j < 0 && j > 10000);

	//calculo do comprimento de ciclo
	for(k = i; k <= j; k++)
	{
		q = 0;  //quantidade inicial do ciclo
		while(k != 1)
		{
			aux = k % 2;
			if(aux == 0)
				k = k / 2;
			else
				k = k * 3 + 1;
			q++;
		}
		if(k == i) //parâmetro incial de maior ciclo
			maior = q;
		else if(maior < q)  //condição para mudar o maior ciclo
			maior = q;
	}

	//saida dos dados
	cout << i << " " << j << " " << maior << endl;
	return 0;
}
