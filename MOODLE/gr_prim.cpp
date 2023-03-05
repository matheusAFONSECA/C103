#include <iostream>
#include <list>
#include <climits>  //biblioteca para usar o valor máximo (INT_max)
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

void prim(list<no>adj[], int nVertices, int start)
{
	/*FUNÇÃO QUE FAZ A ARVORE GERADORA MINIMA*/
	bool intree[50];  //dirá se o vertice já foi ou não adicionado na arvore geradora minima
	int u;  //var aux
	int distance[50];  //vetor que guarda a distância de um vertice a outro
	int parent[50];  //pai - de onde um vetor se origina ao ser descoberto
	/* quando o pai for igual a -1 para determinado vertice quer dizer
	que o mesmo não possui um pai, ou seja, o vertice ainda não foi
	descoberto e por isso não possui "origem"*/
	int v;  //var aux
	int destino;  //var aux para avaliar o destino
	int weight;  //var auxiliar para avaliar o peso
	int dist;  //var aux para ajudar a encontrar
	list<no> :: iterator p;  /*interator auxiliar para varrer a lista de adjacência
							 de um vertice*/
	int custo;  //gerará o custo final

	//inicialização inicial do código
	for(u = 0; u < nVertices; u++)
	{
		intree[u] = false;  //nenhum vertice adicionado na arvore minima
		distance[u] = INT_MAX;  //distância de todos como infinito até descobrir uma distância ideal0
		parent[u] = -1;  //marcando os vertices como sem origem
	}
	distance[start] = 0;  //distância do vertice inicial como 0
	v = start;  //definir um vertice parâmetro

	//aqui começa a varrer as arrestas em busca de um caminho menor
	cout << "Arvore Geradora Minima: " << endl;
	while(intree[v] == false)
	{
		intree[v] = true;  //vertice parâmetro adicionado na lista de arvore minima
		for(p = adj[v].begin(); p != adj[v].end(); p++)
		{
			destino = p->v;
			weight = p->peso;
			if(distance[destino] > weight && intree[destino] == false)
			{
				/*caso seja percebido um caminho e o vertice ainda não foi adicionado
				na lista de arvore geradora minima é adicionado na lista este caminho
				como o seu peso redefinido*/
				distance[destino] = weight;
				parent[destino] = v;
			}
		}
		v = 0;
		dist = INT_MAX;  //definição de distância parâmetro
		for(u = 0; u < nVertices; u++)
		{
			if(intree[u] == false && dist > distance[u])
			{
				dist = distance[u];  //distância mais curta encontrada
				v = u;  //redefinição do vertice parâmetro
			}
		}
	}
	
	/*aqui ocorre a varredura dos vertices para fazer o calculo do custo e sair
	os caminhos percorridos*/
	custo = 0;
	for(u = 0; u < nVertices; u++)
	{
		if (parent[u] != -1)
		{
			//saida de vertice de origem e destino
			cout << parent[u] << " " << u << endl;
			custo = custo + distance[u];  //calculo do custo total do caminho
		}
	}
	//saida de custo total do percurso da arvore geradora minima
	cout << "Custo: " << custo << endl;

}

int main()
{
	//declaração de variáveis
	int nVertices;  //quantidade de vertices do grafo
	int orientado;  // 0 -> não orientado	1 -> orientado
	int s;  //vertice inicial
	int u;  //vertice de origem da aresta
	int v;  //vertice de destino da aresta
	int p;  //peso da aresta
	list<no> adj[20];  //lista de adjacência

	//entrada dos dados iniciais (Número de vertices, orientado, vertice inicial)
	cin >> nVertices >> orientado >> s;

	//entrada do vertice de origem e destino e o peso de sua aresta
	cin >> u >> v >> p;
	while((u != -1) && (v != -1) && (p != -1))  //condição de parada de entrada de dados
	{
		//criação das arestas (função CRIA ARESTA)
		cria_aresta(adj, u, v, p, orientado);
		cin >> u >> v >> p;
	}

	//criação da arvores geradora minima (função PRIM)
	prim(adj, nVertices, s);

	return 0;
}
