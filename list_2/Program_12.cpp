// CPP Program to demonstrate Default Arguments
#include<iostream>
using namespace std;
int sum(int A,int B,int C=0,int D=0) 
{
	return(A+B+C+D);
}
int main()
{
	cout<<"Prince Solanki "<<endl;
	cout<<"220130318032"<<endl;
	cout<<sum(20,25) <<endl;
	cout<<sum(20,25,75)<<endl;
	cout<<sum(20,25,75,100)<<endl;
	return 0;
}