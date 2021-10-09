// Solution to https://practice.geeksforgeeks.org/problems/postorder-traversal/1

void dfs(Node *root, vector<int> &v) {
  if (!root)
    return;

  dfs(root->left, v);
  dfs(root->right, v);
  v.push_back(root->data);
}

vector<int> postOrder(Node *root) {

  vector<int> v;
  dfs(root, v);
  return v;
}