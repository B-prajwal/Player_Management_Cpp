//main.cpp

#include"array.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char ** argv) {

	int size;
    cout << "Enter the size of array: ";
    cin >> size;
	Array arr(size);
	
	int choice = 0;
    while (choice != 7) 
	{
        cout << "\n**********************Menu**************************";
        cout << "\n1:Enter the Player Details";
        cout << "\n2:Diplay the Player Details";
        cout << "\n3:Search Player";
        cout <<	"\n4:Update Player Details";
        cout << "\n5:Top Three Players";
        cout << "\n6:Remove Player Details";
        cout << "\n7:Exit";

        cout << "\n\nSelect from above option: ";
        cin >> choice;
        switch (choice) 
		{
            case 1:
                {
			char name[20];
			int jerseyNumber;
			int runs;
			int wickets;
			int matches;

                    cout << "\nEnter Player name: ";
                    cin >> name;

                    cout << "\nEnter Player jersey number: ";
                    cin >> jerseyNumber;

                    cout << "\nEnter Runs made by player: ";
                    cin >> runs;

                    cout << "\nEnter Wickets made by player: ";
                    cin >> wickets;

                    cout << "\nEnter Matched played by player: ";
                    cin >> matches;
			
					Player p(name, jerseyNumber, runs, wickets, matches);
					
                    if (arr.insert(p)) 
					{
                        cout << "\nInserted Successfully";
                    }
                    else 
					{
                        cout << "\nOperation Failed..";
                    }
                }
                break;

            case 2:
                {
                    arr.display();
                }
                break;

            case 3:
                {
                    arr.search();
                }
                break;
			
			case 4:
				{
					arr.update();	
				}
				break;
			
			case 5:
				{
					arr.topThree();	
				}
				
			case 6:
				{
					arr.deleteDetails();
				}		
					    
		}
	}
	return 0;
}
