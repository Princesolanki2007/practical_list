#include<iostream>
using namespace std;
class item
{
	public :
		int n;
		float cost;
	public :
	
		void getdata();
		void putdata()
		{
			cout<<"Your Entered Number is ::"<<n<<endl;
			cout<<"Your Cost is ::"<<cost<<endl;
			
		}
};
void item :: getdata()
		{
			cout<<"Enter The Number ::";
			cin>>n;
			cout<<"Enter The Cost ::";
			cin>>cost;
			
		}
int main()
{
	item i;
	i.getdata();
	i.putdata();
}
