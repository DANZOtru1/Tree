// TiMP_4.cpp: главный файл проекта.

#include "stdafx.h"
#include "tree.h"
#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	int x;
	cout << "¬ведите корень дерева: ";
	cin >> x;
	Derevo<int> tree(x);
	cout << "¬ведите наследника дерева: ";
	cin >> x;
	tree.addNode(x, 0);
	cout << "¬ведите наследника дерева: ";
	cin >> x;
	tree.addNode(x, 0);
	cout << "¬ведите наследника дерева: ";
	cin >> x;
	tree.addNode(x, 0);
	cout << "¬ведите наследника дл€ элемента 1: ";
	cin >> x;
	tree.addNode(x, 1);
	cout << "¬ведите наследника дл€ элемента 2: ";
	cin >> x;
	tree.addNode(x, 2);
	cout << "¬ведите наследника дл€ элемента 3: ";
	cin >> x;
	tree.addNode(x, 3);
	cout << "Ёлементы дерева: ";
	tree.list(tree.koren);
	int max = tree.max(tree.koren);
	cout << endl;
	cout << "ћаксимальный элемент дерева: " << max << endl;
	return 0;
}