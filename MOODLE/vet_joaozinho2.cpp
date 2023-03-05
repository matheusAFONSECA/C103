#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//declara��o de vari�veis
	int N;   //n� de casos
	int aux;  //var aux
	double X[100];  //primeiro elemento
	double Y[100];  //segundo elemento
	char OP[100];  //opera��es
	double Z[100];  //resultados
	int i;  //contador

	//entrada de quantidade de opera��es, dados nos vetores e sequ�ncia de opera��es
	do
	{
		cin >> aux;
		N = aux;
	}
	while(aux < 0 || aux > 100 );
	for(i = 0; i < N; i++)
	{
		cin >> X[i];
	}
	for(i = 0; i < N; i++)
	{
		cin >> Y[i];
	}
	for(i = 0; i < N; i++)
	{
		cin >> OP[i];
	}

	//calculo das opera��es
	for(i = 0; i < N; i++)
	{
		switch(OP[i])
		{
		case '*':
			Z[i] = X[i] * Y[i];
			break;
		case '-':
			Z[i] = X[i] - Y[i];
			break;
		case '+':
			Z[i] = X[i] + Y[i];
			break;
		case '/':
			Z[i] = X[i] / Y[i];
			break;
		}
	}

//saida dos resultados
	for(i = 0; i < N; i++)
	{
		cout << X[i] << " ";
		switch(OP[i])
		{
		case '/':
			cout << OP[i] << " " << Y[i];
			cout << fixed << setprecision(2);
			cout << " = " << Z[i] << endl;
			break;
		default:
			cout << OP[i] << " " << Y[i] << " = " << Z[i] << endl;
			break;
		}
	}


	return 0;
}
