#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>
#include "binary_search_tree.h"
using namespace std;

//PART 3
int main(){
  BinarySearchTree<char> alphabet;
  BinarySearchTree<char> alphabetbackwards;
  //inserting the letters in this order
  //should return a balanced binary tree
  //that has a height of 5
  //and has nodes that do not differ in size by more than 1
  alphabet.insert('N');
  alphabet.insert('G');
  alphabet.insert('T');
  alphabet.insert('C');
  alphabet.insert('J');
  alphabet.insert('Q');
  alphabet.insert('W');
  alphabet.insert('A');
  alphabet.insert('E');
  alphabet.insert('H');
  alphabet.insert('L');
  alphabet.insert('O');
  alphabet.insert('S');
  alphabet.insert('U');
  alphabet.insert('Y');
  alphabet.insert('B');
  alphabet.insert('D');
  alphabet.insert('F');
  alphabet.insert('I');
  alphabet.insert('K');
  alphabet.insert('M');
  alphabet.insert('P');
  alphabet.insert('R');
  alphabet.insert('V');
  alphabet.insert('X');
  alphabet.insert('Z');
  alphabetbackwards = alphabet;

  cout << endl << "height: " << alphabet.height() << endl << endl;

  //traverses the tree and prints it out to the console
  //in a easy to read way.
  alphabet.inorderTraversal(showFunc);

  //array of nodes in increasing order from A to Z
  Node<char>* ascendingAlpha;
  alphabet.toSortedArray(ascendingAlpha);
  cout << ascendingAlpha[0].info << endl;
  cout << ascendingAlpha[25].info << endl << endl;

  //array of nodes in increasing order from Z to A
  Node<char>* descendingAlpha;
  alphabetbackwards.toSortedArray(descendingAlpha, true);
  cout << descendingAlpha[0].info << endl;
  cout << descendingAlpha[25].info << endl;



  return 0;

}