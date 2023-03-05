void BFS(list <no> adj[], int nVertices, int s) 
{
// FUNÇÃO DE BFS, MOSTRA AS ARESTAS DE UMA LISTA DE ADJACÊNCIAS E SEUS VERTICES	
	char state[10];  //'u': não processado, 'd': descoberto, 'p': processado
	int p[10];  //pai - de onde um vetor se origina ao ser descoberto
				/* quando o pai for igual a -1 para determinado vertice quer dizer
				que o mesmo não possui um pai, ou seja, o vertice ainda não foi 
				descoberto e por isso não possui "origem"*/
	int u;  //contador 
	list<int> Q;  //fila auxiliar para os vertices do grafo
	list<no> :: iterator q;  /*interator auxiliar para varrer a lista de adjacência
							 de um vertice*/ 

	for(u = 0; u < nVertices; u++)
		if(u != s)  //os vertices, sem ser o inicial (s) estão não processados
		{
			state[u] = 'u';
			p[u] = -1;  //sem pais
		}
    state[s] = 'd';  //definindo o vertice inicial como descoberto
    p[s] = -1;  //vertice inicial terá, comumente, o pai vazio
    
    Q.push_back(s);  //vertice inicial inserido na lista auxiliar de vertices
    
    while(!Q.empty())
	{
		u = *Q.begin();  //definindo u igual o primeiro elemento da lista
		Q.pop_front();  //apagando o primeiro elemento da lista
		cout << u << endl;  //mostrar o vertice
		
		/*AGORA SERÁ VARRIDO A LISTA DE ADJACÊNCIA PARA MOSTRAR AS ARESTAS QUE
		O VERTICE ESTÁ LIGADO*/
		
		for(q = adj[u].begin(); q != adj[u].end(); q++)
		{
			v = q -> v;  //definindo um vertice da outra ponta da aresta do vertice "u"
			cout << u << " " << v << endl;  //mostrando a aresta
			if(state == 'u')
			{
				state[v] = 'd';  //definindo o novo vertice como descoberto
				p[v] = u;  //definindo o pai do vertice descoberto
				Q.push_back(v);  //adicionando o novo vertice na lista de vertices
			}
		}
		state[u] = 'p';  //definindo o estado do vertice como processado
	}
}
