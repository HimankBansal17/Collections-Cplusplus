//To generate Randome Number
//To generate max number of chances and max number of chips

#include <iostream>
#include <conio.h>
#include <time.h>
#include "Collections.h"

using namespace Collections;
using namespace std;

const float  MAX_TURN = .5;
const int MAX_CHIPS = 100;

void main()
{

	List<string> name;
	
	//variable declaration
	bool player1Turn = true;
	bool gameOver = false;
	int maxPerTurn = 0;
	int chipInPile = 0;
	int chipsTaken = 0;
	string player1;
	string player2;
	string playerName[2];
	
	
	playerName[0] = "tim";
	playerName[1] = "jim";
	name.add("Himank");
	name.add("DB");
	
	_getch();
	//seed the random number of chips in the pile
	srand(time(0));

	chipInPile = (rand() % MAX_CHIPS) + 1;
	cout << "This round will start with " << chipInPile << " chips in the pile\n";
	
	maxPerTurn = (MAX_TURN * chipInPile);
	cout << "You can take up to "<< static_cast<int>(maxPerTurn)<<endl;
	
	chipsTaken = (rand() % maxPerTurn) + 1;
	cout << "Number taken: " << chipsTaken << endl;



	//A variable to  hold the integer value
	//
		
}
