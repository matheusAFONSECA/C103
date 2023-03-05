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
	//função responsável por determinar as arestas do grafo
	//declaração de variáveis
	no aux;  //var aux
	
	//criando as arestas
	aux.peso = p;
	aux.v = v;
	adj[u].push_back(aux);  //criação das fila
	if(orientado == 0)  //não orientado
	{
		//fazendo a volta do vetor
		aux.v = u;
		adj[v].push_back(aux);
	}
}

void bfs(list<no>adj[], int nVertices, int s)  //função auxiliar de BFS e que motrara as arestas
{
	//declaração de variáveis
	int state[200];  //vertice está descoberto(0), não descoberto(-1) e processado(1)
	int p[200];  //pai -> vertice corelacionado
	int v;  //vertice de destino de uma aresta
	int u;  //vertice inicial de uma aresta
	int i;  //contador
	list <int> Q;  //lista de adjacências
	list <no> :: iterator q;  //ponteiro aux para varrer a lista
	
	for(i=0; i<nVertices; i++){
		state[i] = -1;  //não descoberto
		p[i]= -1;  //vazio
	}
	state[s] = 0;  //descoberto o vertice incial
	p[s] = -1;  //pai vazio do vertice inicial
	Q.push_back(s);  //entrada do vertice em uma lista do tipo fila
	while(!Q.empty())
	{
		u = *Q.begin();  //definindo o primeiro elemento da fila
		cout << u << endl;  //saindo o vertice
		
		for(q = adj[u].begin(); q != adj[u].end(); q++)
		{
			v = q -> v;  //definição do vertice de destino
			cout << u << " " << v << endl;  //saida da aresta
			if(state[v] == -1)  //condição para o ponto ainda estar descoberto
			{
				state[v] = 0;  //vertice passe a ser descoberto
				p[v] = u;  //definição do pai do vertice descoberto
				Q.push_back(v);  //adicionando o novo vertice à lista de vertices
			}
		}
		state[u] = 1;  //vertice já foi processado
		Q.pop_front();  //apagando o primeiro elemento da fila
	}
}

int main()
{
	//declaração de variáveis
	/*
	-> AQUI VAI SER CONSIDERADO QUE O GRAFO É NÃO ORIENTADO
	-> A SAÍDA DE DADOS DO CÓDIGO OCORRE DENTRO DA FUNÇAÕ BFS (por isso não tem
	saida de dados na main)
	*/
	int nVertices;  //quantidade de vertices contidos no grafo
	int v;  //vertice de destino de uma aresta
	int u;  //vertice inicial de uma aresta
	int orientado = 0;  //0 -> não orientado
	int s;  //vertice inicial
	int p;  //peso da aresta
	list <no> adj[10];  //lista de adjacências

	//lendo n° de vertices do grafo e determinando se é orientado ou não
	cin >> nVertices >> s;

	//entrando com os vertices e fazendo a chamada da função bfs
	cin >> u >> v >> p;
	while((u != -1) && (v != -1) && (p != -1))
	{
		cria_aresta(adj, u, v, p, orientado);
		cin >> u >> v >> p;
	}
	bfs(adj, nVertices, s);
	
	return 0;
}