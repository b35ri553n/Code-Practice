vector<int> rightSideView(TreeNode* root) {
    vector<int> rightview;
    if(!root) return rightview;
    queue<TreeNode *> q;
    q.push(root);
    q.push(NULL);
    while(q.size() > 1) {
        TreeNode *curr = q.front();
        q.pop();
        if(!(q.front())) rightview.push_back(curr -> val);
        if(!curr) {
            q.push(NULL);
            continue;
        }
        if(curr -> left) q.push(curr -> left);
        if(curr -> right) q.push(curr -> right);
    }
    return rightview;
}