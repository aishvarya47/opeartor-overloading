// operator overloading//
#include<iostream>
using namespace std;
class count{
	private:
		int value;
	public:
		count():value(5){}
		void operator ++ ()
		{
			++value;
		}
		void display()
		{
			cout<<"COUNT:\n"<<value;
		}
};
int main()
{
	count c;
	++c;
	c.display();
	return 0;
}
