#include <iostream>
#include <list>
using namespace std;

bool encontrar(list<int> lista, int x)  //função de pesquisa
{
	list <int>::iterator p;  //interador

	//prucrando elemento x na lista
	for(p = lista.begin(); p != lista.end(); p++)
	{
		if(x == *p)  //condição de igualdade do elemento do endereço de p na lista com x
			return true;
	}
	return false;
}

int main()
{
	//declaração de variáveis
	list <int> lista;  //lista
	int x;  //var aux para leitura
	int N;  //elemento que vai ser procurado
	bool procura;  //var aux

	//lendo elementos, inserindo na lista e lendo elemento a ser procurado
	cin >> x;
	while(x != 0)  //condição de parada de entrada de elementos na lista
	{
		lista.push_back(x);
		cin >> x;
	}
	cin >> N;

	//chamada de função de pesquisa e resultado
	procura = encontrar(lista, N);
	if(procura)
		cout << "Encontrado" << endl;
	else 
		cout << "Nao encontrado" << endl;

	return 0;
}
