// TiMP_4.cpp: ������� ���� �������.

#include "stdafx.h"
#include "tree.h"
#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	int x;
	cout << "������� ������ ������: ";
	cin >> x;
	Derevo<int> tree(x);
	cout << "������� ���������� ������: ";
	cin >> x;
	tree.addNode(x, 0);
	cout << "������� ���������� ������: ";
	cin >> x;
	tree.addNode(x, 0);
	cout << "������� ���������� ������: ";
	cin >> x;
	tree.addNode(x, 0);
	cout << "������� ���������� ��� �������� 1: ";
	cin >> x;
	tree.addNode(x, 1);
	cout << "������� ���������� ��� �������� 2: ";
	cin >> x;
	tree.addNode(x, 2);
	cout << "������� ���������� ��� �������� 3: ";
	cin >> x;
	tree.addNode(x, 3);
	cout << "�������� ������: ";
	tree.list(tree.koren);
	int max = tree.max(tree.koren);
	cout << endl;
	cout << "������������ ������� ������: " << max << endl;
	return 0;
}