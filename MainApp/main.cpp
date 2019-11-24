#include <iostream>
#include "BinaryTree.h"

using namespace std;

int main() {
    BinaryTree treeForTest;
    treeForTest.insert(54);
    treeForTest.insert(28);
    treeForTest.insert(60);
    treeForTest.insert(16);
    treeForTest.insert(32);
    treeForTest.insert(33);
    treeForTest.insert(31);
    treeForTest.insert(18);
    treeForTest.insert(10);
    treeForTest.insert(70);
    treeForTest.insert(76);
    treeForTest.insert(68);
    treeForTest.insert(56);
    treeForTest.insert(58);
    treeForTest.insert(55);

    treeForTest.print();

    return 0;
}