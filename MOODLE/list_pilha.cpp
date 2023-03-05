#include <iostream>
#include <list>
using namespace std;

int main()
{
	//declaração de variáveis
	list <int> lista;  //lista que guardará os elementos
	int x, y;  //var aux
	int i;  //contador
	
	//entrada dos números
	for(i = 0; i < 4; i++)
	{
		cin >> x;
		lista.push_front(x);  //inserção na lista em forma de pilha	
	}
	
	//saída de valores da lista do tipo pilha
	while(!lista.empty())
	{
		y = *lista.begin();
		cout << y << " ";
		lista.pop_front();
	}
	cout << endl;
	
	return 0;
}