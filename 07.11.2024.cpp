#include"Library.h"
using namespace std;

int main()
{
	Point<int>obj1(10);
	obj1.Print();
	obj1.Init(15, 20);
	obj1.Print();
	Point<double>obj2(20);
	obj2.Print();
	obj2.Init(1, 2);
	obj2.Print();
}
