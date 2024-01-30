	//player.h
	
	#include<iostream>
	#include<string.h>
	using namespace std;
	
	class Player
	{
		char name[20];
		
		int jerseyNumber;
		int runs;
		int wickets;
		int matches;
		public: 
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////
		Player();
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////	
		Player(const char*,int,int,int,int);
	///Setter's///////////////////////////////////////////////////////////////////////////////////////////////////////////
	void setPlayerName(const char*);
	void setJerseyNumber(int);
	void setRuns(int);
	void setWickets(int);
	void setMatches(int);
	///Getter's///////////////////////////////////////////////////////////////////////////////////////////////////////////	
	const char* getPlayerName();
	int getJerseyNumber();
	int getRuns();
	int getWickets();
	int getMatches();
	};