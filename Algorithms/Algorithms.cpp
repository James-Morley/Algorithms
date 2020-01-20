#include "pch.h"
#include "Node.h"
#include "BinaryTree.h"
#include <iostream>

int main()
{
    
	Node n0(0);
	Node n1(1);
	Node n2(2);
	Node n3(3);
	Node n4(4);
	Node n5(5);

	BinaryTree tree(n0);

	std::cout << n0 << std::endl;
	std::cout << n1 << std::endl;
	std::cout << *n0.getLeft() << std::endl;

}