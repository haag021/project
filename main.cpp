#include <iostream>
#include <Person.h>

using namespace std;

int main()
{
	// shane is cool, erik is a douche
	Person shane("Shane", false);
	Person erik("Erik", true);

	// only erik is lame
	Person austin("Austin", false);
	Person tim("Tim", false);

	// store people into an array
	Person people[4] = {
		shane, erik, austin, tim
	};

	// loop through each person
	// and introduce them
	for(int i = 0; i < 4; i++)
	{
		people[i].introduce();
	}

	// windows console support
	system("pause");
	return 0;
}
