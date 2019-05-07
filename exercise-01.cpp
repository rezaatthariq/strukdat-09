/*
Author 		: M Reza Atthariq Kori 
NPM 		: 140810180060
Kelas		: B
Tanggal		: 7 Mei 2019
Deskripsi	: Program Reverse Word dengan Array
*/

#include <iostream>
using namespace std;

const int maxElement=225;

struct Stack{
	char data[maxElement];
	int TOP;
};

Stack S;
Stack T;

void createStack (Stack& S){
	S.TOP=-1;
}

void push(Stack& S, char newElement){
	if (S.TOP == maxElement-1) cout<<"Stack Penuh!"<<endl;
	else{
		S.TOP=S.TOP+1;
		S.data[S.TOP]=newElement;
	}
}

void pop(Stack& S, char& savedElement){
	if (S.TOP<0) cout << "Stack is empty." << endl;
	else{
		savedElement=S.data[S.TOP];
		S.TOP=S.TOP-1;
	}	
}

void print(Stack S){
	for (int i=0; i<=S.TOP; i++){
		cout<<S.data[i];
	}
}

main(){
	Stack X;
	int n;
	char stack1, stack2;
	createStack(X);
	createStack(T);
	cout<<"PROGRAM REVERSE WORD\n\n";
	cout<<"Masukkan panjang kata : ";cin>>n;
	cout<<"Masukkan kata : ";
	for(int i=0;i<n;i++){
		cin>>stack1;
		push(X,stack1);
	}
	for(int i=0;i<n;i++){
		pop(X,stack2);
		push(T,stack2);
	}
	cout<<"\nHasil Reverse Kata : ";print(T);
}
