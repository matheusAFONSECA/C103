#include <iostream>
#include <list>
using namespace std;

int main()
{
	//declara��o de vari�veis
	list <int> lista;  //lista que guardar� os elementos
	int x, y;  //var aux
	int i;  //contador
	
	//entrada dos n�meros
	for(i = 0; i < 4; i++)
	{
		cin >> x;
		lista.push_front(x);  //inser��o na lista em forma de pilha	
	}
	
	//sa�da de valores da lista do tipo pilha
	while(!lista.empty())
	{
		y = *lista.begin();
		cout << y << " ";
		lista.pop_front();
	}
	cout << endl;
	
	return 0;
}