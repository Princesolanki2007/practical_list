#include<iostream>
using namespace std;
class x
{
	int a=5;
	friend class y;
};

class y
{
	public:
	void display(x &x1)
	{
		cout<<"Value of A is ::"<<x1.a;
		
	}
};

int main()
{
		cout<<"Prince Solnki"<<endl;
	cout<<"220130318032"<<endl;
	x x1;
	y y1;
	
	y1.display(x1);
	
	return 0;
}


