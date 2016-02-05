#include <iostream>
#include <Person.h>

using namespace std;

int main()
{
	// shane is cool, erik is a douche
	Person shane("Shane", false);
	Person erik("Erik", true);

	shane.introduce();
	erik.introduce();

	// windows console support
	system("pause");
	return 0;
}
