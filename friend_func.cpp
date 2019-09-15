#include<bits/stdc++.h>
using namespace std;
class number{
	private:
		int m;
	public:
		void mean(float a, float b)
		{
			m=(a+b)/2;
		}
		friend void display(number &p);
};
void display (number &p)
{
	cout<<"The mean is: "<<p.m<<endl;
}
int main()
{
	number ob;
	ob.mean(4,6);
	display(ob);
}
