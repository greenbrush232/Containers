#include <iostream>
using namespace std;


class Container
{
    virtual void show() = 0;		
	virtual ~Container() = 0;
};

class MyArray:public Container
{
	int size;
    int * ar;
public:
	MyArray(int size);
	show();
	~MyArray();

};

int main()
{

	system("pause");
	return 0;
}