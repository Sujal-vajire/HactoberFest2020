struct node{
	int key, prior, sz;
	node *l, *r;
	node(int key) : key(key), prior(rand()), sz(1), l(0), r(0) {}
};
typedef node* pnode;
int sz(pnode t) { return t ? t->sz : 0; }
void updSz(pnode t){
	if(t) t->sz = 1 + sz(t->l) + sz(t->r);
}
// Element with key = x goes into r
void split(pnode t, int x, pnode &l, pnode &r){
	if(!t) l = r = 0;
	else if(x < t->key) split(t->l, x, l, t->l), r = t;
	else split(t->r, x, t->r, r), l = t;
	updSz(t);
}
void merge(pnode &t, pnode l, pnode r){
	if(!l || !r) t = l ? l : r;
	else if(l->prior > r->prior)
		merge(l->r, l->r, r), t = l;
	else
		merge(r->l, l, r->l), t = r;
	updSz(t);
}
void insert(pnode &t, pnode it){
	if(!t) t = it;
	else if(it->prior > t->prior)
		split(t, it->key, it->l, it->r), t = it;
	else
		insert(it->key < t->key ? t->l : t->r, it);
	updSz(t);
}
void erase(pnode &t, int x){
	if(t->key == x) merge(t, t->l, t->r);
	else erase(x < t->key ? t->l : t->r, x);
	updSz(t);
}
void eraseTree(pnode &t){
	if(!t) return;
	eraseTree(t->l);
	eraseTree(t->r);
	delete t;
	t = 0;
}

