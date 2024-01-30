//array.cpp

#include"array.h"
Array:: Array()
{
    cout << "Default constructor called";
}
Array:: Array(int s)
{
    size = s;
    index = -1;

    p = new Player[size];
}
	
	bool Array:: isEmpty()
{
    if (index == -1) {
        return true;
    }
    else {
        return false;
    }
}
	
	bool Array:: isFull()
{
    if (index == size - 1) {
        return true;
    }
    else {
        return false;
    }
}
	
	bool Array:: insert(Player & ele)
{
    if (isFull()) {
        cout << "\nArray is full...!";
    }

    else {
        p[++index] = ele;
        return true;
    }
}

void Array:: display()
{
    if (isEmpty()) {
        cout << "\nNo elements to display";
    }

    else {
        for (int i = 0; i <= index; i++)
        {
            cout << "\nPlayer Name: " << p[i].getPlayerName();
            cout << "\nPlayer Jersey Number: " << p[i].getJerseyNumber();
            cout << "\nNumber of Runs by Player: " << p[i].getRuns();
            cout << "\nNumber of Wickets by Player: " << p[i].getWickets();
            cout << "\nNumber of Matched played by Player: " << p[i].getMatches();
        }
    }
}

void Array:: search()
{
	int jerseyNum;
	int flag = 0;
    cout << "\nEnter Jersey Number to search player: ";
    cin >> jerseyNum;

    for (int i = 0; i <= index; i++)
    {
        if (p[i].getJerseyNumber() == jerseyNum) {
            cout << "\nPlayer is found at index " << i + 1;
            cout << "\nPlayer Name: " << p[i].getPlayerName();
            cout << "\nPlayer Jersey Number: " << p[i].getJerseyNumber();
            cout << "\nNumber of Runs by Player: " << p[i].getRuns();
            cout << "\nNumber of Wickets by Player: " << p[i].getWickets();
            cout << "\nNumber of Matched played by Player: " << p[i].getMatches();
            flag = 1;
            break;
        }

    }
    if (flag == 0) 
	{
        cout << "\nInvalid Jersey Number: " << jerseyNum;
    }
}

void Array::update()
{
	int jerNo,run,wicket,matches;
	int flag=0,select;
	cout<<"Enter Player Jersey Number ";
	cin>>jerNo;
	for(int i=0;i<size;i++)
	{
		if(p[i].getJerseyNumber()==jerNo)
		{
			cout<<"\n1:Update Player Runs.";
			cout<<"\n2:Update Player Wickets.";
			cout<<"\3:Update Player Matches.";
			cout<<"Enter from above option.";
			cin>>select;
		
		if(select==1)
		{
			cout<<"\nEnter player runs to update: ";
			cin>>run;
			p[i].setRuns(run);
		}
		else if(select==2)
		{
			cout<<"\nEnter Wickets made by player to update: ";
			cin>>wicket;
			p[i].setWickets(wicket);	
		}
		else if(select==3)
		{
			cout<<"\nEnter matches played by player to update: ";
			cin>>matches;
			p[i].setMatches(matches);	
		}	
		
		}
			cout << "\nPlayer Name: " << p[i].getPlayerName();
            cout << "\nPlayer Jersey Number: " << p[i].getJerseyNumber();
            cout << "\nNumber of Runs by Player: " << p[i].getRuns();
            cout << "\nNumber of Wickets by Player: " << p[i].getWickets();
            cout << "\nNumber of Matched played by Player: " << p[i].getMatches();
	}
	
	if(flag==0)
	{
		cout<<"Not Found";	
	}
	
		
}

void Array::topThree()
{
	int i,first,second,third,a=0,b=0,c=0;
	first=p[0].getRuns();
	second=p[0].getRuns();
	third=p[0].getRuns();
		for(i=1;i<size;i++)
		{
		if(first < p[i].getRuns())	    
			first=p[i].getRuns();
		}
		while(p[a].getRuns()!=first)
		{
			a++;
			
		}	
		cout<<"\n FirstTop Runner :\n";
		cout<<"\nJercy No:- "<<p[a].getJerseyNumber();
		cout<< "\nPlayer name:-"<<p[a].getPlayerName();
		cout<<"\nNo of Matches:-"<<p[a].getMatches();
		cout<<"\nNo of Runs:-"<<p[a].getRuns();
		cout<<"\nNo of Wickets:"<<p[a].getWickets();
		cout<<"\n*************************\n";	
		
		for(i=1;i<size;i++)
		{
			if(first > p[i].getRuns() && p[i].getRuns()>second)
			second=p[i].getRuns();
		}
		while(p[b].getRuns()!=second)
		{
			b++;
		}
		cout<<"\n Second Top Runner :\n";
			cout<<"Jercy No:- "<<p[b].getJerseyNumber();
			cout<< "\nPlayer name:-"<<p[b].getPlayerName();
			cout<<"\nNo of Matches:-"<<p[b].getMatches();
			cout<<"\nNo of Runs:-"<<p[b].getRuns();
			cout<<"\nNo of Wickets:"<<p[b].getWickets();
		cout<<"\n*************************\n";	
		for(i=1;i<size;i++)
		{
		
		 if(second > p[i].getRuns() && p[i].getRuns() > third)
			third=p[i].getRuns();
		}
		while(p[c].getRuns()!=third)
		{
			c++;
		}
		cout<<"\n Third Top Runner :\n";
			cout<<"Jercy No:- "<<p[c].getJerseyNumber();
			cout<< "\nPlayer name:-"<<p[c].getPlayerName();
			cout<<"\nNo of Matches:-"<<p[c].getMatches();
			cout<<"\nNo of Runs:-"<<p[c].getRuns();
			cout<<"\nNo of Wickets:"<<p[c].getWickets();
		
		cout<<"\n*************************\n";
	
}

void Array::deleteDetails()
{
  int i, player,j;
  int flag = 0;
  cout<<"Enter Player jersey number to delete player details";
  cout<<player;
  for (i = 0;i<size;i++) 
  {
    if(p[i].getJerseyNumber()==player) 
	{
      j=i;
      
      while(j<size-1)
	  {
        p[j]=p[j + 1];
        j++;
      }
      	size--;
      	flag=1;
      	break;
		
    }
  }
  	
  	
  if (flag == 1) 
  {
    cout<<"The player INFORMATION has been removed successfully.\n";
    
	for (i = 0;i<size;i++) 
	{
      cout<<"\n\nThe player Jersey Number: "<<p[i].getJerseyNumber();
      cout<<"The player Name: "<<p[i].getPlayerName();
      cout<<"The Runs made by player: "<<p[i].getRuns();
      cout<<"The Wickets taken by player: "<<p[i].getWickets();
      cout<<"The number of matches played by player: "<<p[i].getMatches();
    }
  } 
  else 
  {
    printf("\n\nInvalid entry -- try again.\n");
  }
}



