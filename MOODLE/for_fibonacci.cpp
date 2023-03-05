#include <iostream>
using namespace std;

int main()
{
	//declara��o de vari�veis
	int N;  //termos na sequ�ncia
	int i, antes;  //var aux
	int fibo;  //saida da sequ�ncia

	//entrada da quantidade de termos
	do
	{
		cin >> N;
	}
	while(N < 0 || N > 100);

	//aplica��o de fibonaccie e sa�da de sequ�ncia
	/*
	-> FUN��O QUE TAMB�M DEFINE FIBONACCI
	int fibonacci(int n){
	if(n == 0 || n == 1)  //condi��o de parada
		return 1;
	else  //chamada recursiva
		return fibonacci(n-1) + fibonacci(n-2);
	}
		-> essa fun��o vai servir de base para fazer o for de fibonacci
	*/
	fibo = 0;  //primeiro termo de qualquer sequ�ncia
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
