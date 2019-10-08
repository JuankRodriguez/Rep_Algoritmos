#include"arboles.hpp"
#include<iostream>
using namespace std;

int main(){
  BST<int> tumadre;
  tumadre.insertNode(10);
  tumadre.insertNode(9);
  tumadre.insertNode(11);
  tumadre.displayNode();

  cout << endl;

  return 0;
}
