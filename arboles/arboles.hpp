#ifndef __arboles__hpp
#define __arboles__hpp

#include<iostream>
using namespace std;

template<typename T>
struct BSTNode{
  T key;
  BSTNode *left;
  BSTNode *right;
};

template<typename T>
class BST{
private:
  BSTNode<T> *root;
  void insertNode(BSTNode<T>* &t, T k);
  void destroyRecursive(BSTNode<T> *t);
  void displayNode(BSTNode<T> *t, int count);
  void displayNode(int count);

public:
  BST() {root = nullptr;}
  ~BST() {destroyRecursive(root);}

  void insertNode(T k) {insertNode(root, k);}
  void displayNode() {displayNode(root, 0);}
};

template<typename T>
void BST<T>::insertNode(BSTNode<T>* &t, T k){
  if(t == nullptr){

    cout << "Estoy agregando " << k << endl;

    t = new BSTNode<T>;
    t->key = k;
    t->left = t->right = nullptr;
  }else{
    if(k != t->key){
      if(k < t->key){
        insertNode(t->left, k);
      }else{
        insertNode(t->right, k);
      }
    }
  }
}


template<typename T>
void BST<T>::destroyRecursive(BSTNode<T> *t){
  if(t != nullptr){

    cout << "Deleting... " << endl;

    destroyRecursive(t->left);
    destroyRecursive(t->right);
    delete t;
  }
}

template<typename T>
void BST<T>::displayNode(BSTNode<T> *t, int count){
  if(t != nullptr){
    count++;
    displayNode(t->left, count);
    cout << "(" << count-1 << ")"  << t ->key << " " ;
    displayNode(t->right, count);
  }
}

#endif
