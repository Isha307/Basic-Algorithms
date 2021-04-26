/* 

 ---------- Classic example of Recursion  ---------- 

Rules for implementing tower of honai:
  1- Only one disk can be moved at a time
  2- Each move consists of taking the upper disk from one of the stacks and placing it on top of another stack. In other words, a disk can only be moved if it is 	the uppermost disk on a stack.
  3- No larger disk may be placed on top of a smaller disk.

*/ 																						

#include <iostream>
using namespace std;

class TowerOfHonai
{
	
public:

	void TOH(int, char, char, char);

};

void TowerOfHonai::TOH(int noOfdics, char src, char hlp, char dest)
{
	// src = source tower from where we want to move disc 
	// hlp = helping tower 
	// dest = destination tower 


	if (noOfdics >= 1)
	{
		TOH(noOfdics - 1, src, dest, hlp);

		cout << "Disc number " << noOfdics << " moved from source " << src << " to destination " << dest << endl;
		
		TOH(noOfdics - 1, hlp, src, dest);
	}

}



int main()
{

	TowerOfHonai t;
	int disc_Num;
	char choice;

	while (true)
	{
		cout << "\n=============\nEnter number of discs you want to move from source to destination in tower of hanoi: ";
		cin >> disc_Num;
		t.TOH(disc_Num, 'A', 'B', 'C');

		cout << "\nDo you want to play again with tower of hanoi (y/n): ";
		cin >> choice;

		if (choice == 'y')
		{
			cout << "\n=============\nEnter number of discs you want to move from source to destination in tower of hanoi: ";
			cin >> disc_Num;
			t.TOH(disc_Num, 'A', 'B', 'C');
		}

		else if (choice == 'n')
		{
			cout << "\nThank you for using this program" << endl;
			break;
		}

		else
			cout << "Invalid choice" << endl;


	};

}



