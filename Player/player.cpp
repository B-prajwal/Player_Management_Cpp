	//player.cpp
	
	#include"player.h"
	
	Player::Player()
	{
		this->jerseyNumber=0;
		this->runs=0;
		this->wickets=0;
		this->matches=0;
		strcpy(this->name,"Not mentioned");
	};
	
	Player::Player(const char* name,int jNum,int runs,int wickets,int matches)
	{
		strcpy(this->name,name);
		this->jerseyNumber=jNum;
		this->runs=runs;
		this->wickets=wickets;
		this->matches=matches;
	}
	
	
	///Setter's///////////////////////////////////////////////////////////////////////////////////////////////////////////
	void Player::setPlayerName(const char* name)
	{
		strcpy(this->name,name);
	}
	
	void Player::setJerseyNumber(int jNum)
	{
		this->jerseyNumber=jNum;
	}
	
	void Player::setRuns(int runs)
	{
		this->runs=runs;
	}
	
	void Player::setWickets(int wickets)
	{
		this->wickets=wickets;
	}
	
	void Player::setMatches(int matches)
	{
		this->matches=matches;
	}
	
	
	///Getter's///////////////////////////////////////////////////////////////////////////////////////////////////////////
	const char* Player::getPlayerName()
	{
		return this->name;
	}
	
	int Player::getJerseyNumber()
	{
		return this->jerseyNumber;
	}
	
	int Player::getRuns()
	{
		return this->runs;
	}
	
	int Player::getWickets()
	{
		return this->wickets;
	}
	
	int Player::getMatches()
	{
		return this->matches;
	}
	 
