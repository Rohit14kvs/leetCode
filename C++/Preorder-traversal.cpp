// Solution to https://practice.geeksforgeeks.org/problems/preorder-traversal/1

class Solution{
  public:
  void dfs(Node *root, vector<int> &v){
    if (!root)
      return;

    v.push_back(root->data);

    dfs(root->left, v);
    dfs(root->right, v);
  }

  vector<int> preorder(Node *root)
  {
    vector<int> v;
    dfs(root, v);
    return v;
  }
};

