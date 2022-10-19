//	Print the factorial of a number n?
#include<iostream>
using namespace std;
int fact(int i){
    int factorial = 1;
	for ( int j =2;j<=i;j++){
	    factorial*=j;
	}
	return factorial;
}
int main(){
	int n;
	cin>>n;
	int a = fact(n);
	cout<<a<<endl;
	return 0;
}
