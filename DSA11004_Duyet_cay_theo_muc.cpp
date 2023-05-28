#include <bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node *left, *right;
    Node(int x){
        data = x;
        left = right = NULL;
    }
};

// Hàm để tạo một nút mới và gán nút này là con trái hoặc con phải của nút gốc (root)
void makeNode(Node *root, int u, int v, char c){
    if(c == 'L') root -> left = new Node(v);
    else root -> right = new Node(v);
}

// Hàm để chèn một nút vào cây
void insert(Node *root, int u, int v, char c){
    if(root == NULL) return; // Nếu cây rỗng, không có gì để chèn

    if(root -> data == u) makeNode(root , u ,v , c); // Nếu giá trị của nút gốc (root) bằng u, chèn một nút mới

    else{
        insert(root -> left, u, v, c); // Nếu không, tìm nút có giá trị u trong cây con trái của root
        insert(root -> right, u, v, c); // và tìm nút có giá trị u trong cây con phải của root
    }
}

// Hàm thực hiện duyệt cây theo thứ tự từ trên xuống (level-order traversal)
void lever_order(Node *root){
    queue <Node *> q;
    q.push(root);

    while(!q.empty()){
        Node *p = q.front();
        q.pop();
        cout << p -> data << " ";

        if(p -> left != NULL) q.push(p -> left); // Thêm nút con trái vào hàng đợi (queue)
        if(p -> right != NULL) q.push(p -> right); // Thêm nút con phải vào hàng đợi (queue)
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        Node *root = NULL;
        for(int i=1; i<=n; i++){
            int x, y;
            char c;
            cin >> x >> y >> c;

            if(root == NULL){
                root = new Node(x);
                makeNode(root, x, y, c);
            }else{
                insert(root, x, y, c);
            }
        }

        lever_order(root); // Duyệt cây theo thứ tự từ trên xuống và in giá trị của các nút
        cout << endl;
    }

    return 0;
}
