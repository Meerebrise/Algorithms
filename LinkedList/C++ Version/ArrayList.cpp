#include "ArrayList.h"
#include <iostream>

using namespace std;
//���캯��
template<class T>
ArrayList<T>::ArrayList()
{
	data = new T[maxSize];
	length = 0;
}

//��������
template<class T>
ArrayList<T>::~ArrayList()
{
	delete []data;
}

//��������
template<class T>
void ArrayList<T>::createList(T a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		data[i] = a[i];
	}
    
	length = n;
}

//ָ��Ԫ�ص����
template<class T>
int ArrayList<T>::LocateItem(T e)
{
	int i = 0;
	while (i < length&&data[i] != e) i++;
	if (i >= length) return 0;
	else return i+1;
	 
}

//ָ����ŵ�Ԫ��ֵ
template<class T>
bool ArrayList<T>::GetItem(int i, T &e)
{
	if (i > length || i < 0) return false;  
	e = data[i-1];
	return true;
}

//��ӡ˳����е�Ԫ��
template<class T>
void ArrayList<T>::DispList()
{
	int i = 0;
	for (i = 0; i < length; i++)
	{
		cout << data[i] << " ";
	}
	cout << endl;
}

//����˳���Ԫ�ظ���
template<class T>
int ArrayList<T>::ListLength()
{
	return length;
}

//����Ԫ��
template<class T>
bool ArrayList<T>::ListInsert(int i, T e)
{
	int j;
	if (i<0 || i>length) return false;
	for ( j = length; j >i-1; j--)
	{
		data[j] = data[j-1];
	}
	data[i-1] = e;
	length++;
	return true;
}

//ɾ��Ԫ��
template<class T>
bool ArrayList<T>::ListDelete(int i)
{
	int j;
	if (i < 0 || i >length) return false;
	for (j = i - 1; j < length - 1; j++)
		data[j] = data[j + 1];
	length--;
	return true;
}

int main()
{
	ArrayList<int> hai;
	int a[] = { 1,23,4,56,7,8,8 };
	hai.createList(a, 7);
	hai.DispList();
	hai.ListInsert(5, 10);
	hai.DispList();
	hai.ListDelete(8);
	hai.DispList();
	return 0;
}