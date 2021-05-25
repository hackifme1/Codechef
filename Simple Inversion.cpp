// By Chandramani Kumar
// Keep moving and must be simple bro!!!!!
// Espérons le meilleur mais préparez-vous au pire 😎


Cpp code :

#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;

struct node 
{ 
    ll key; 
    struct node *left; 
    struct node *right; 
   ll height; 
    ll size; 
}; 
 
int max(ll a, ll b); 
  

int height(struct node *N) 
{ 
    if (N == NULL) 
        return 0; 
    return N->height; 
} 
  

int size(struct node *N) 
{ 
    if (N == NULL) 
        return 0; 
    return N->size; 
} 
  

int max(ll a,ll b) 
{ 
    return (a > b)? a : b; 
} 
  

struct node* newNode(int key) 
{ 
    struct node* node = (struct node*) 
                        malloc(sizeof(struct node)); 
    node->key   = key; 
    node->left   = NULL; 
    node->right  = NULL; 
    node->height = 1; 
    node->size = 1; 
    return(node); 
} 
  

struct node *rightRotate(struct node *y) 
{ 
    struct node *x = y->left; 
    struct node *T2 = x->right; 
  
    
    x->right = y; 
    y->left = T2; 
  
   
    y->height = max(height(y->left), height(y->right))+1; 
    x->height = max(height(x->left), height(x->right))+1; 
  
   
    y->size = size(y->left) + size(y->right) + 1; 
    x->size = size(x->left) + size(x->right) + 1; 
  
    
    return x; 
} 
  

struct node *leftRotate(struct node *x) 
{ 
    struct node *y = x->right; 
    struct node *T2 = y->left; 
  
    
    y->left = x; 
    x->right = T2; 
  
    
    x->height = max(height(x->left), height(x->right))+1; 
    y->height = max(height(y->left), height(y->right))+1; 
  
     
    x->size = size(x->left) + size(x->right) + 1; 
    y->size = size(y->left) + size(y->right) + 1; 
  
    
    return y; 
} 
  

ll getBalance(struct node *N) 
{ 
    if (N == NULL) 
        return 0; 
    return height(N->left) - height(N->right); 
} 
  

struct node* insert(struct node* node, ll key, ll *count) 
{ 

    if (node == NULL) 
        return(newNode(key)); 
  
    if (key < node->key) 
        node->left  = insert(node->left, key, count); 
    else
    { 
        node->right = insert(node->right, key, count); 
  
        
        *count = *count + size(node->left) + 1; 
    } 
  
  
  
    node->height = max(height(node->left), height(node->right)) + 1; 
    node->size   = size(node->left) + size(node->right) + 1; 
  
   
      
   ll balance = getBalance(node); 
  
   
    if (balance > 1 && key < node->left->key) 
        return rightRotate(node); 
  
    
    if (balance < -1 && key > node->right->key) 
        return leftRotate(node); 
  
     
    if (balance > 1 && key > node->left->key) 
    { 
        node->left =  leftRotate(node->left); 
        return rightRotate(node); 
    } 
  
    
    if (balance < -1 && key < node->right->key) 
    { 
        node->right = rightRotate(node->right); 
        return leftRotate(node); 
    } 
  
    
    return node; 
} 
  

void constructLowerArray (ll arr[], ll countSmaller[], ll n) 
{ 
  ll i, j; 
  struct node *root = NULL; 
  
  
  for  (i = 0; i < n; i++) 
     countSmaller[i] = 0; 
  

  for (i = n-1; i >= 0; i--) 
  { 
     root = insert(root, arr[i], &countSmaller[i]); 
  } 
} 

int main()
{
	ll n,q,i;
	cin>>n>>q;
	ll a[n],arr[n],arr1[n],arr2[n];
	vector<pair<ll,ll>> v;
   for(i=0;i<n;i++)
   {
   	cin>>a[i];
   	v.push_back(make_pair(a[i],i));
   }
   sort(v.begin(),v.end());
   
   for(i=0;i<n;i++)
   {
     arr[i]=v[i].second;
     arr1[i]=arr[i];
   }
   

  ll *low = (ll *)malloc(sizeof(ll)*n); 
  
  constructLowerArray(arr, low, n); 
   
   for(i=0;i<n;i++)
   {
   	 arr2[arr1[i]]=low[i];
   }
   
   for(i=0;i<n;i++)
   {
   	 if(i==0)
   	 arr2[i]=arr2[0];
   	 else
   	 arr2[i]=arr2[i]+arr2[i-1];
   }
   
   while(q--)
   {
   	ll l,r;
   	cin>>l>>r;
   	l--;r--;
   	if(l==0)
   	cout<<arr2[r]<<endl;
   	else
   	cout<<(arr2[r]-arr2[l-1])<<endl;
   }
    return 0;
}
