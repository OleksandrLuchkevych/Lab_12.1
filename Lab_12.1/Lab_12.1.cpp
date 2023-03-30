
#include <iostream>

using namespace std;
int main()
{
	struct Elem
	{
		Elem *link1,
			 *link2;
		int info;
	};

	Elem* p;

	p = new Elem;
	p->info = 1;
	p->link1 = NULL;
	p->link2 = new Elem;
	p->link2->info = 2;
	p->link2->link1 = new Elem;
	p->link2->link1->info = 3;
	p->link2->link1->link1 = p->link2;
	p->link2->link2 = new Elem;
	p->link2->link2->info = 4;
	p->link2->link2->link1 = p;
	p->link2->link2->link2 = p;
	p->link2->link1->link2 = p->link2->link2;

	delete p->link2->link2;
	delete p->link2->link1;
	delete p->link2->link1;
	delete p;
	

}