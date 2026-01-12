#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Tree {
public:
    TreeNode *root;

    Tree() {
        root = nullptr;
    }

    // Insert (for building tree - optional simplistic BST style)
    void insert(int value) {
        root = insertNode(root, value);
    }

    // DFS: Inorder (L, Root, R)
    void inorder(TreeNode *node) {
        // TODO: implement inorder traversal
         if(node = nullptr) return;

         inorder(root->left);
         cout<< root->val;
         inorder(root->right);
         
    }

    // DFS: Preorder (Root, L, R)
    void preorder(TreeNode *node) {
        // TODO: implement preorder traversal
        cout<<root->val;
        preorder(root->left);
        preorder(root->right);
    }

    // DFS: Postorder (L, R, Root)
    void postorder(TreeNode *node) {
        // TODO: implement postorder traversal
        postorder(node->left);
        postorder(node->right);
        cout<<root->val;
    }

    // BFS: Level Order
    void levelOrder(TreeNode *node) {
        // TODO: implement level order traversal
        levelOrder(root->left);
        cout<<root->val;
        levelOrder(root->right);
    }

private:
    // Helper for BST insertion
    TreeNode* insertNode(TreeNode *node, int value) {
        if (node == nullptr)
            return new TreeNode(value);

        if (value < node->val)
            node->left = insertNode(node->left, value);
        else
            node->right = insertNode(node->right, value);

        return node;
    }
};

int main() {

    Tree t;
    t.insert(10);
    t.insert(5);
    t.insert(15);
    t.insert(3);
    t.insert(7);

    t.inorder(t.root);
     t.preorder(t.root);
     t.postorder(t.root);
   t.levelOrder(t.root);

    return 0;
}
