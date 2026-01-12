#include<iostream>
#include<vector>
using namespace std;

 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
   };

void dfs(TreeNode* node){
    if(node == nullptr) return;

    cout << node->val << " ";
    dfs(node->left);
    dfs(node->right);

}

int main() {
    vector<TreeNode*> nodes =  {new TreeNode(1), new TreeNode(2), new TreeNode(3)};

    nodes[0]->left = nodes[1];
    nodes[0]->right = nodes[2];

    dfs(nodes[0]);

    return 0;
}