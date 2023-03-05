#include <iostream>
#include <list>
#include <climits>  //biblioteca para usar o valor m�ximo (INT_max)
using namespace std;

struct no  //struct que axilia a guardar os vertices do grafo
{
	int v; // vertice adjacente
	int peso; // peso da aresta
};

void cria_aresta(list<no>adj[], int u, int v, int p, int orientado)
{
	//fun��o respons�vel por determinar as arestas do grafo
	//declara��o de vari�veis
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

void prim(list<no>adj[], int nVertices, int start)
{
	/*FUN��O QUE FAZ A ARVORE GERADORA MINIMA*/
	bool intree[50];  //dir� se o vertice j� foi ou n�o adicionado na arvore geradora minima
	int u;  //var aux
	int distance[50];  //vetor que guarda a dist�ncia de um vertice a outro
	int parent[50];  //pai - de onde um vetor se origina ao ser descoberto
	/* quando o pai for igual a -1 para determinado vertice quer dizer
	que o mesmo n�o possui um pai, ou seja, o vertice ainda n�o foi
	descoberto e por isso n�o possui "origem"*/
	int v;  //var aux
	int destino;  //var aux para avaliar o destino
	int weight;  //var auxiliar para avaliar o peso
	int dist;  //var aux para ajudar a encontrar
	list<no> :: iterator p;  /*interator auxiliar para varrer a lista de adjac�ncia
							 de um vertice*/
	int custo;  //gerar� o custo final

	//inicializa��o inicial do c�digo
	for(u = 0; u < nVertices; u++)
	{
		intree[u] = false;  //nenhum vertice adicionado na arvore minima
		distance[u] = INT_MAX;  //dist�ncia de todos como infinito at� descobrir uma dist�ncia ideal0
		parent[u] = -1;  //marcando os vertices como sem origem
	}
	distance[start] = 0;  //dist�ncia do vertice inicial como 0
	v = start;  //definir um vertice par�metro

	//aqui come�a a varrer as arrestas em busca de um caminho menor
	cout << "Arvore Geradora Minima: " << endl;
	while(intree[v] == false)
	{
		intree[v] = true;  //vertice par�metro adicionado na lista de arvore minima
		for(p = adj[v].begin(); p != adj[v].end(); p++)
		{
			destino = p->v;
			weight = p->peso;
			if(distance[destino] > weight && intree[destino] == false)
			{
				/*caso seja percebido um caminho e o vertice ainda n�o foi adicionado
				na lista de arvore geradora minima � adicionado na lista este caminho
				como o seu peso redefinido*/
				distance[destino] = weight;
				parent[destino] = v;
			}
		}
		v = 0;
		dist = INT_MAX;  //defini��o de dist�ncia par�metro
		for(u = 0; u < nVertices; u++)
		{
			if(intree[u] == false && dist > distance[u])
			{
				dist = distance[u];  //dist�ncia mais curta encontrada
				v = u;  //redefini��o do vertice par�metro
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
	//declara��o de vari�veis
	int nVertices;  //quantidade de vertices do grafo
	int orientado;  // 0 -> n�o orientado	1 -> orientado
	int s;  //vertice inicial
	int u;  //vertice de origem da aresta
	int v;  //vertice de destino da aresta
	int p;  //peso da aresta
	list<no> adj[20];  //lista de adjac�ncia

	//entrada dos dados iniciais (N�mero de vertices, orientado, vertice inicial)
	cin >> nVertices >> orientado >> s;

	//entrada do vertice de origem e destino e o peso de sua aresta
	cin >> u >> v >> p;
	while((u != -1) && (v != -1) && (p != -1))  //condi��o de parada de entrada de dados
	{
		//cria��o das arestas (fun��o CRIA ARESTA)
		cria_aresta(adj, u, v, p, orientado);
		cin >> u >> v >> p;
	}

	//cria��o da arvores geradora minima (fun��o PRIM)
	prim(adj, nVertices, s);

	return 0;
}
