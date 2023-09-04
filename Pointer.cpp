#include<iostream>
using namespace std;

int main(){
	int a=3;
	int* b;
	b= &a;
	
	//	& --> (Address of) operator
	cout<<"The address of a is: "<<&a<<endl;
	cout<<"The address of a is: "<<b<<endl;
	
	// * --> (value at) Dereference operator
	cout<<"The value at address a is "<<*b<<endl;
	
	
	// pointer to pointer
	int** c=&b;
	cout<<"The address of b is: "<<&b<<endl;
	cout<<"The address of b is: "<<c<<endl;
	cout<<"The value at address c is: "<<*c<<endl;
	cout<<"The value at address value at (value at(c)) is: "<<**c<<endl;
	
	return 0;
	}
