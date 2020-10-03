#include <iostream> 
 
using namespace std; 
 
class Second; // forward declaration of class First 
class First 
{ 
   int a;
public: 
    
	void input()
	{
		std::cout<<"Enter a:";
		std::cin>>a;
	}  
	friend void Second::sum(First); // friend function declaration 
}; 
 
class Second : public First
{ 
    int b; 
public: 
    void input2()
	{
		std::cout<<"Enter b:";
		std::cin>>b;
	}
	sum(First f1)  // function definition 
	{ 
		cout<<f1.a + b <<endl; 
	}  // member function declaration 
		
}; 



 
int main(){ 
    First f1; 
    Second s1; 
    f1.input();
	s1.input2();
    s1.sum(f1); 
    return 0; 
} 
