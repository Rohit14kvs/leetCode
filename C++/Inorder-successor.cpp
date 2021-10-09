// Solution to https://practice.geeksforgeeks.org/problems/inorder-traversal/1

Node *findMin(Node *root)
{
    Node *temp = root;
    if (!temp)
        return temp;
    while (temp->left)
        temp = temp->left;
    return temp;
}

Node *inOrderSuccessor(Node *root, Node *a)
{
    if (!a)
        return a;
    if (a->right)
        return findMin(a->right);
    else {
        Node *successor = NULL, *pointer = root;
        while (pointer != a)
        {
            if (a->data < pointer->data) {
                successor = pointer;
                pointer = pointer->left;
            }
            else {
                pointer = pointer->right;
            }
        }
        return successor;
    }
}