#include <iostream>
#include <list>
using namespace std;

struct no  //struct que axilia a guardar os vertices do grafo
{
	int v; // vertice adjacente
	int peso; // peso da aresta
};

void cria_aresta(list<no>adj[], int u, int v, int p, int orientado)
{
	//fun��o respons�vel por determinar as arestas do grafo
	no aux;  //var aux
	
	//criando as arestas
	aux.peso = p;
	aux.v = v;
	adj[u].push_back(aux);  //cria��o das fila
	if(orientado == 0)  //n�o orientado
	{
		//fazendo a volta do vetor
		aux.v = u;
		adj[v].push_back(aux);
	}
}

int main()
{
	//declara��o de vari�veis
	int nVertices;  //quantidade de vertices contidos no grafo
	int v;  //vertice de destino de uma aresta
	int u;  //vertice inicial de uma aresta
	int orientado;  // 1 -> orientado		0 -> n�o orientado
	int i;  //contador
	int p;  //peso da aresta
	list <no> :: iterator q;  //ponteiro aux para varrer a lista
	list <no> adj[10];  //lista de adjac�ncias

	//lendo n� de vertices do grafo e determinando se � orientado ou n�o
	cin >> nVertices >> orientado;

	//entrando com os vertices e fazendo a chamada da fun��o para a cria��o de arestas em uma lista
	cin >> u >> v >> p;
	while((u != -1) && (v != -1) && (p != -1))
	{
		cria_aresta(adj, u, v, p, orientado);
		cin >> u >> v >> p;
	}

	//Sa�da da lista de adjac�ncias
	for(i = 0; i < nVertices; i++)
		for(q = adj[i].begin(); q != adj[i].end(); q++)
			cout << i << " " << q->v << " " << q->peso << endl;

	return 0;
}
