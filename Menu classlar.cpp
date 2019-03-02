#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class Rooms
{
public:
	
	void displayMenu ()
	{
		cout << "Choose a Room number to enter: \nROOM0\nROOM1\nROOM2\nROOM3\nROOM4\nROOM5\nROOM6\nROOM7\nROOM8\n\n";
	}
	
	void setAction (int n)
	{
		x = n;
	}
	
	int getAction ()
	{
		return x;
	}
private: int x;
};

class Level1
{
public:
	
	void Leveltree() 
	{
	
	int n, x;
	bool done = true;
	bool ok = true;
	Rooms objRooms;
	
	do 
	{ 
		cout << "First 5 minute:\n";
		objRooms.displayMenu();
		cin >> n;
		
		switch (n%2) 
		{
			case 0: 
				cout << "1 or 2 or 3\n";
				cin >> x;
				if (x == 1 || x == 2 || x == 3) {
				done = false;
				
				break;
			    }
			    cout << "Enter 0 to get back\n";
				cin >> x; 
				if (x == 0) {
					continue;
				}	 
			
			case 1:
				cout << "-A story-\n";
				cout << "Enter 0 to get back\n";
				cin >> x;
				if (x==0) {
				ok = false;	
					break;
					
				}	
			
		}
	} while (done || ok);
	}
};

	int main()
	{
		Rooms objRooms;
		Level1 objLevel1;
		
		objLevel1.Leveltree();
		
	
	}	
