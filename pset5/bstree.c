typedef tree 
{
  int n;
  struct tree *left;
  struct tree *right;
}
tree;

bool search(int n, node *tree){
  if (tree == NULL)
  {
    return false;
  }
  else if (n == tree->n) 
  {
    return true;
  }
  else if (n > tree->n)
  {
    return search(n, tree->right);
  }
  else if (n < tree->n)
  {
    return search(n, tree->left);
  }
}
