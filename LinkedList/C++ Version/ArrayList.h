#pragma once
const int maxSize = 20;

template <class T>
class ArrayList 
{
	T *data;
	int length;
public:
	void createList(T a[],int n);
	int  LocateItem(T e);
	bool GetItem(int i, T &e);
	void DispList();
	int  ListLength();
	bool ListInsert(int i, T e);
	bool ListDelete(int i);
	ArrayList();
	~ArrayList();
};

