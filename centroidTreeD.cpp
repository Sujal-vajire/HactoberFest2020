// Centroid Tree Decomposition
// Run buildCT to build the cetroid tree

vi G[MAXN];
int centroid[MAXN];

// Precalculate sizes of subtrees from some root.
int sz[MAXN];
void dfsSZ(int v, int p){
	sz[v] = 1;
	for(int u:G[v]) if(u!=p && !centroid[u]){
		dfsSZ(u,v);
		sz[v] += sz[u];
	}
}

// Find the centroid of a tree
int findCentroid(int v, int p, int n){
	for(int u:G[v]) if(u!=p && !centroid[u] && sz[u]>n/2){
		return findCentroid(u,v,n);
	}
	return v;
}

int p[MAXN]; //parent link of the CTD. Here we store the CTD.
int h[MAXN]; // level of the node in the CTD. could be useful.
// Calculate the CTD. O(nlogn)
int buildCT(int v, int hv){

	dfsSZ(v,-1);
	int c = findCentroid(v, -1, sz[v]);

	//here you can pre-calculate some data for the centroids. 
	centroid[c] = 1;
	h[c] = hv;
	if(!hv) p[c] = -1;

	for(int u:G[c]) if(!centroid[u]){
		int cu = buildCT(u, hv+1);
		p[cu] = c;
	}

	return c;
}

// sample query
void query(int v){
	int u = v;
	while(u!=-1){
		// update / do / calculate something
		u = p[u];
	}
	//return something;
}