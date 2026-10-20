#include <iostream>
#include <map>

using namespace std;

struct Node {
    int key;
    int color;
    Node* left;
    Node* right;
    Node* parent;
};

class RedBlackTree {
public:
    Node* root;

    RedBlackTree() {
        root = nullptr;
    }

    void insert(int key) {
        Node* node = new Node();
        node->key = key;
        node->color = 1; // 1代表红色，0代表黑色
        node->left = nullptr;
        node->right = nullptr;
        node->parent = nullptr;

        Node* y = nullptr;
        Node* x = root;

        while (x != nullptr) {
            y = x;
            if (node->key < x->key) {
                x = x->left;
            } else {
                x = x->right;
            }
        }

        node->parent = y;
        if (y == nullptr) {
            root = node;
        } else if (node->key < y->key) {
            y->left = node;
        } else {
            y->right = node;
        }

        if (node->parent == nullptr) {
            node->color = 0;
            return;
        }

        if (node->parent->parent == nullptr) {
            return;
        }

        fixInsert(node);
    }

    void fixInsert(Node* k) {
        while (k->parent != nullptr && k->parent->color == 1) {
            if (k->parent == k->parent->parent->right) {
                Node* u = k->parent->parent->left;
                if (u != nullptr && u->color == 1) {
                    u->color = 0;
                    k->parent->color = 0;
                    k->parent->parent->color = 1;
                    k = k->parent->parent;
                } else {
                    if (k == k->parent->left) {
                        k = k->parent;
                        rightRotate(k);
                    }
                    k->parent->color = 0;
                    k->parent->parent->color = 1;
                    leftRotate(k->parent->parent);
                }
            } else {
                Node* u = k->parent->parent->right;
                if (u != nullptr && u->color == 1) {
                    u->color = 0;
                    k->parent->color = 0;
                    k->parent->parent->color = 1;
                    k = k->parent->parent;
                } else {
                    if (k == k->parent->right) {
                        k = k->parent;
                        leftRotate(k);
                    }
                    k->parent->color = 0;
                    k->parent->parent->color = 1;
                    rightRotate(k->parent->parent);
                }
            }
        }
        root->color = 0;
    }

    void leftRotate(Node* x) {
        Node* y = x->right;
        x->right = y->left;
        if (y->left != nullptr) {
            y->left->parent = x;
        }
        y->parent = x->parent;
        if (x->parent == nullptr) {
            root = y;
        } else if (x == x->parent->left) {
            x->parent->left = y;
        } else {
            x->parent->right = y;
        }
        y->left = x;
        x->parent = y;
    }

    void rightRotate(Node* x) {
        Node* y = x->left;
        x->left = y->right;
        if (y->right != nullptr) {
            y->right->parent = x;
        }
        y->parent = x->parent;
        if (x->parent == nullptr) {
            root = y;
        } else if (x == x->parent->right) {
            x->parent->right = y;
        } else {
            x->parent->left = y;
        }
        y->right = x;
        x->parent = y;
    }

    void printTree(Node* node, int level = 0) {
        if (node != nullptr) {
            printTree(node->right, level + 1);
            for (int i = 0; i < level; i++) {
                std::cout << "  ";
            }
            std::cout << node->key << " (" << node->color << ")" << std::endl;
            printTree(node->left, level + 1);
        }
    }

    void printTreeShape(Node* node, int level = 0) {
        if (node != nullptr) {
            printTreeShape(node->right, level + 1);
            for (int i = 0; i < level; i++) {
                std::cout << "  ";
            }
            std::cout << "/" << std::endl;
            printTreeShape(node->left, level + 1);
            for (int i = 0; i < level; i++) {
                std::cout << "  ";
            }
            std::cout << "\\" << std::endl;
        }
    }
};

int main() {
    RedBlackTree tree;
    int key;
    std::cout << "请输入要插入的数字（e结束）：" << std::endl;
    while (true) {
        std::cin >> key;
        if (key == 'e') {
            break;
        }
        tree.insert(key);
        tree.printTreeShape(tree.root);
        std::cout << std::endl;
    }

    return 0;
}
