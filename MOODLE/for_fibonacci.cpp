#include <iostream>
using namespace std;

int main()
{
	//declaração de variáveis
	int N;  //termos na sequência
	int i, antes;  //var aux
	int fibo;  //saida da sequência

	//entrada da quantidade de termos
	do
	{
		cin >> N;
	}
	while(N < 0 || N > 100);

	//aplicação de fibonaccie e saída de sequência
	/*
	-> FUNÇÃO QUE TAMBÉM DEFINE FIBONACCI
	int fibonacci(int n){
	if(n == 0 || n == 1)  //condição de parada
		return 1;
	else  //chamada recursiva
		return fibonacci(n-1) + fibonacci(n-2);
	}
		-> essa função vai servir de base para fazer o for de fibonacci
	*/
	fibo = 0;  //primeiro termo de qualquer sequência
	for(i = 0; i < N; i++)
	{
		if(i == 0)
			cout << fibo << " ";
		else
		{
			if (i == 1)
			{
				fibo = i;
				antes = fibo - 1;
			}
			else
			{
				fibo = antes + antes - 2 + fibo;
			}
			cout << fibo << " ";
		}
	}
	cout << endl;

	return 0;
}
