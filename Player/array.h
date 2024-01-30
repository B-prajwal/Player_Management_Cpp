//3 C-Project Array

//array.h

#include"player.h"
	
class Array
	{
		int size;
		int index;
		Player *p;
		
		public:
			Array();		
			Array(int);
			bool isEmpty();
			bool isFull();
			bool insert(Player &);
			void display();	
			void search();
			void update();
			void topThree();
			void deleteDetails();
			
	};
