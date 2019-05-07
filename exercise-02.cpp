/*
Author 		: M Reza Atthariq Kori 
NPM 		: 140810180060
Kelas		: B
Tanggal		: 7 Mei 2019
Deskripsi	: Program Reverse Word dengan Stack Single Linked List
*/

#include <iostream>
using namespace std;

struct stackList{
	char data;
	stackList* next;
};

typedef stackList* pointer;
typedef pointer Stack;

void createStack (Stack& TOP){
	TOP=NULL;
}

void createElmnt(pointer& pBaru){
	pBaru=new stackList;
	cin >> pBaru->data;
	pBaru->next=NULL;
}

void push (Stack& TOP, pointer& pBaru){
	if (TOP==NULL) TOP=pBaru;
	else
	{
		pBaru->next=TOP;
		TOP=pBaru;
	}
}

void traversal (Stack TOP){
	pointer pBantu=TOP;
	if (TOP==NULL) cout << "Stack Kosong!" << endl;
	else{
		while (pBantu!=NULL)
		{
			cout << pBantu->data;
			pBantu=pBantu->next;
		}
	}
}

main(){
	Stack X;
	int n;
	pointer p, pHapus;
	
	createStack(X);
	cout<<"PROGRAM REVERSE WORD\n\n";
	cout<<"Masukkan panjang kata : ";cin>>n;
	cout<<"Masukkan kata : ";
	for(int i=0;i<n;i++){
		createElmnt(p);
		push(X,p);
	}
	cout<<"\nHasil Reverse Kata : ";traversal(X);
}
