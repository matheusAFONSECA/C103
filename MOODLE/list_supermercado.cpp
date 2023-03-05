#include <iostream>
#include <list>
using namespace std;

int main()
{
	//declara��o de vari�veis
	list <int> estoque;  //lista de produtos no estoque
	list <int> venda;  //lista de produtos a venda
	int x, y;  //var aux para leitura
	int N;  //n� de opera��es realizadas
	int i;  //contador

	//lendo a quantida de opera��es e adicionando os elementos nas listas
	cin >> N;
	for(i = 0; i < N; i++)
	{
		cin >> x;
		if(x == 1)  //condi��o de adi��o de elemento no estoque
		{
			cin >> y;  //produto adicionad do estoque
			estoque.push_back(y);  //adicionando na lista de estoque
		}
		else
		{
			y = *estoque.begin();  //defini��o do primeiro elemento da lista estoque
			venda.push_front(y);  //adicionando na lista de vendas
			estoque.pop_front();  //remo��o do primeiro elemento da lista do estoque
		}
	}
	
	//sa�da do estoque e das vendas
	cout << "Estoque: ";
	while(!estoque.empty())  //enquanto a lista n�o estiver vazia
	{
		x = *estoque.begin();  //primeiro elemento da lista
		cout << x << " ";
		estoque.pop_front();
	}
	cout << endl << "Venda: ";
	while(!venda.empty())  //enquanto a lista n�o estiver vazia
	{
		x = *venda.begin();  //primeiro elemento da lista
		cout << x << " ";
		venda.pop_front();
	}
	cout << endl;
	
	return 0;
}
