#include<iostream>
#include <string>
#include<iomanip>
#include<stdlib.h>
#include <windows.h>
using namespace std;

// Class.
class letsStartPage
{
public:
	// Declaring Member Variables.
	const int blue = 1;
	const int green = 2;
	const int red = 4;
	const int white = 15;

	// Declaring Member Functions.
	// Function to Clear the Screen.
	void clearScreen(int characterLength)
	{
		for (int a = 0; a < characterLength; a++)
		{
			cout << "\b";
		}
	}

	// Function to Change the Colour.
	void changeColour(int colour)
	{
		HANDLE hConsole;
		hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hConsole, colour);
	}

	// Function to Display the Load Screen.
	void screenloadlestart()
	{
		int i;

		cout << "\n\n\n";
		string closed = ".............", open = "..................";
		int colour[] = { red, green, blue };
		cout << closed;

		for (i = 0; i < 3; i++)
		{
			Sleep(1000);
			clearScreen(5);
			changeColour(colour[i]);
			cout << open;
			Sleep(1000);
			clearScreen(5);
			changeColour(white);
			cout << closed;
		}

		clearScreen(5);
		changeColour(white);
	}

	// Function to Display Blinking Coloured Text.
	void binkingcolouredtext()
	{
		changeColour(red);
		cout << "\n\n\n\n\t\t\t\t8     8"""" ""8"" 88 8""""8eeee eeeeeee             \n\t\t\t\t8     8       8    8 8                  \n\t\t\t\t8e    8eeee   8e     8eeeee             \n\t\t\t\t88    88      88         88             \n\t\t\t\t88    88      88     e   88             \n\t\t\t\t88eee 88eee   88     8eee88  ";
		Sleep(1000);
		changeColour(green);
		cout << "\n\n\t\t\t\teeeee eeeee eeeee eeeee  eeeeee\n\t\t\t\t8       8e  8   8 8   88  88       \n\t\t\t\t8eeee   8e  8eee8 8eee8e  8e\n\t\t\t\t    8   88  88  8 88   8  88\n\t\t\t\t8ee88   88  88  8 88   8  88";
		Sleep(1000);
		changeColour(blue);
		cout << "\n\n\n";
		Sleep(1000);
		changeColour(white);
	}
};


// Function for Word Sliding Effects.
void pushX(int num)
{
	for (int i = 0; i < num; i++)
	{
		cout << " ";
	}	
}


// Class that Displays the Instructions with the Typewriter Effect.
class instructionswithtypewriteraffect
{
public:
	// Function to Display the Instructions with the Typewriter Effect
	void codefortyperaffect()
	{
		system("cls");
		cout << "\n\n\n\n\t\t\t\t¦¦ ¦¦¦    ¦¦ ¦¦¦¦¦¦¦ ¦¦¦¦¦¦¦¦ ¦¦¦¦¦¦  ¦¦    ¦¦  ¦¦¦¦¦¦ ¦¦¦¦¦¦¦¦ ¦¦  ¦¦¦¦¦¦  ¦¦¦    ¦¦ ¦¦¦¦¦¦¦ \n\t\t\t\t¦¦ ¦¦¦¦   ¦¦ ¦¦         ¦¦    ¦¦   ¦¦ ¦¦    ¦¦ ¦¦         ¦¦    ¦¦ ¦¦    ¦¦ ¦¦¦¦   ¦¦ ¦¦\n\t\t\t\t¦¦ ¦¦ ¦¦  ¦¦ ¦¦¦¦¦¦¦    ¦¦    ¦¦¦¦¦¦  ¦¦    ¦¦ ¦¦         ¦¦    ¦¦ ¦¦    ¦¦ ¦¦ ¦¦  ¦¦ ¦¦¦¦¦¦¦\n\t\t\t\t¦¦ ¦¦  ¦¦ ¦¦      ¦¦    ¦¦    ¦¦   ¦¦ ¦¦    ¦¦ ¦¦         ¦¦    ¦¦ ¦¦    ¦¦ ¦¦  ¦¦ ¦¦      ¦¦ \n\t\t\t\t¦¦ ¦¦   ¦¦¦¦ ¦¦¦¦¦¦¦    ¦¦    ¦¦   ¦¦  ¦¦¦¦¦¦   ¦¦¦¦¦¦    ¦¦    ¦¦  ¦¦¦¦¦¦  ¦¦   ¦¦¦¦ ¦¦¦¦¦¦¦ \n\n\n  ";
		char myStory[] = { "\n\n\n\n\t\t\t\t1. The CHESS Game works by entering the Row number first, and then the Column number.\n\n\t\t\t\t2. To move to a certain position e.g Enter 1 for Row and 2 for Column.\n\n\t\t\t\t3. This game is a 'Two Player' game. Captial Letter represents 'Player 1' and small Letter represents 'Player 2'.\n\n\t\t\t\t4. Choose Option where to move to, after making your desired move. i.e 1.\n\n\t\t\t\t5. It's okay if you forget any CHESS moves. Our programs keeps reminding the player if they enter the wrong move.\n\n\n\n\n\n" };

		for (unsigned int x = 0; x < strlen(myStory); x++)
		{
			cout << myStory[x];
			Sleep(25);
		}

		cout << " \n\t\t\t\t\t\t¦¦   ¦¦  ¦¦¦¦¦  ¦¦¦¦¦¦  ¦¦¦¦¦¦  ¦¦    ¦¦       \n\t\t\t\t\t\t¦¦   ¦¦ ¦¦   ¦¦ ¦¦   ¦¦ ¦¦   ¦¦  ¦¦  ¦¦        \n\t\t\t\t\t\t¦¦¦¦¦¦¦ ¦¦¦¦¦¦¦ ¦¦¦¦¦¦  ¦¦¦¦¦¦    ¦¦¦¦         \n\t\t\t\t\t\t¦¦   ¦¦ ¦¦   ¦¦ ¦¦      ¦¦         ¦¦          \n\t\t\t\t\t\t¦¦   ¦¦ ¦¦   ¦¦ ¦¦      ¦¦         ¦¦   ";
		cout << " \n\n\t\t\t\t\t¦¦¦¦¦¦  ¦¦       ¦¦¦¦¦  ¦¦    ¦¦ ¦¦ ¦¦¦    ¦¦  ¦¦¦¦¦¦  \n\t\t\t\t\t¦¦   ¦¦ ¦¦      ¦¦   ¦¦  ¦¦  ¦¦  ¦¦ ¦¦¦¦   ¦¦ ¦¦       \n\t\t\t\t\t¦¦¦¦¦¦  ¦¦      ¦¦¦¦¦¦¦   ¦¦¦¦   ¦¦ ¦¦ ¦¦  ¦¦ ¦¦   ¦¦¦ \n\t\t\t\t\t¦¦      ¦¦      ¦¦   ¦¦    ¦¦    ¦¦ ¦¦  ¦¦ ¦¦ ¦¦    ¦¦ \n\t\t\t\t\t¦¦      ¦¦¦¦¦¦¦ ¦¦   ¦¦    ¦¦    ¦¦ ¦¦   ¦¦¦¦  ¦¦¦¦¦¦  ";
		cout << "\n\n\n";
		system("pause");
	}
};


// Class for the 'Main Instructions' Page.
class Instructions
{
public:
	// Declaring Function to Display the Instructions Page.
	void welcomeinsfunction()
	{
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t  \n\n";
		cout << "              __________________________________________________________________  \n";
		cout << "             |                                                                                   \n ";
		cout << "                                                                                                 \n";
		cout << "                                                                                                   \n";
		cout << "                                                                                                  \n";
		cout << "                                  WELCOME TO THE CHESS INSTRUCTIONS PAGE!                         \n";
		cout << "                                                                                                 \n";
		cout << "                                                                                                  \n";
		cout << "                                                                                                  \n ";
		cout << "                                                                                                   \n";
		cout << "             ______________________________________________________________________|\n";
		cout << " \n\n\n\n\n\n\n ";
		system("pause");
	}
};


// Function to Display the Blinking Effect on the Main Page.
const int BLUE = 1;
const int GREEN = 2;
const int RED = 4;
const int WHITE = 15;


// Function to Clear the Screen.
void clearScreen(int characterLength)
{
	for (int i = 0; i < characterLength; i++)
	{
		cout << "\b";
	}
}


// Function to Change the Colour.
void changeColour(int colour)
{
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, colour);
}


// Function to Show Blinking Lights.
void showBlinkingLights()
{
	changeColour(RED);
	cout << " \n\n\n\n\t\t\t\t¦¦     ¦¦ ¦¦¦¦¦¦¦ ¦¦       ¦¦¦¦¦¦  ¦¦¦¦¦¦  ¦¦¦    ¦¦¦ ¦¦¦¦¦¦¦ \n\t\t\t\t¦¦     ¦¦ ¦¦      ¦¦      ¦¦      ¦¦    ¦¦ ¦¦¦¦  ¦¦¦¦ ¦¦      \n\t\t\t\t¦¦  ¦  ¦¦ ¦¦¦¦¦   ¦¦      ¦¦      ¦¦    ¦¦ ¦¦ ¦¦¦¦ ¦¦ ¦¦¦¦¦   \n\t\t\t\t¦¦ ¦¦¦ ¦¦ ¦¦      ¦¦      ¦¦      ¦¦    ¦¦ ¦¦  ¦¦  ¦¦ ¦¦       \n\t\t\t\t ¦¦¦ ¦¦¦  ¦¦¦¦¦¦¦ ¦¦¦¦¦¦¦  ¦¦¦¦¦¦  ¦¦¦¦¦¦  ¦¦      ¦¦ ¦¦¦¦¦¦¦ ";
	Sleep(1000);
	changeColour(GREEN);
	cout << "\n\t\t\t\t¦¦¦¦¦¦¦¦  ¦¦¦¦¦¦      ¦¦¦¦¦¦¦¦ ¦¦   ¦¦ ¦¦¦¦¦¦¦  \n\t\t\t\t   ¦¦    ¦¦    ¦¦        ¦¦    ¦¦   ¦¦ ¦¦       \n\t\t\t\t   ¦¦    ¦¦    ¦¦        ¦¦    ¦¦¦¦¦¦¦ ¦¦¦¦¦    \n\t\t\t\t   ¦¦    ¦¦    ¦¦        ¦¦    ¦¦   ¦¦ ¦¦      \n\t\t\t\t   ¦¦     ¦¦¦¦¦¦         ¦¦    ¦¦   ¦¦ ¦¦¦¦¦¦¦ ";
	Sleep(1000);
	changeColour(BLUE);
	cout << " \n\t\t\t\t ¦¦¦¦¦¦ ¦¦   ¦¦ ¦¦¦¦¦¦¦ ¦¦¦¦¦¦¦ ¦¦¦¦¦¦¦      ¦¦¦¦¦¦ ¦¦      ¦¦    ¦¦ ¦¦¦¦¦¦  \n\t\t\t\t¦¦      ¦¦   ¦¦ ¦¦      ¦¦      ¦¦          ¦¦      ¦¦      ¦¦    ¦¦ ¦¦   ¦¦ \n\t\t\t\t¦¦      ¦¦¦¦¦¦¦ ¦¦¦¦¦   ¦¦¦¦¦¦¦ ¦¦¦¦¦¦¦     ¦¦      ¦¦      ¦¦    ¦¦ ¦¦¦¦¦¦  \n\t\t\t\t¦¦      ¦¦   ¦¦ ¦¦           ¦¦      ¦¦     ¦¦      ¦¦      ¦¦    ¦¦ ¦¦   ¦¦  \n\t\t\t\t ¦¦¦¦¦¦ ¦¦   ¦¦ ¦¦¦¦¦¦¦ ¦¦¦¦¦¦¦ ¦¦¦¦¦¦¦      ¦¦¦¦¦¦ ¦¦¦¦¦¦¦  ¦¦¦¦¦¦  ¦¦¦¦¦¦ \n ";
	Sleep(1000);
	changeColour(WHITE);
}


class Question;
// Classes for the CHESS Game Starts Here.
// Class to Move the CHESS Pieces by User-Entered Enteries.
class moveChessPieces
{
public:
	// Declaring Member Varaiables.
	int chessmovecount;
	int moves[20];

	// Declaring Memeber Functions.
	// Function for Valid CHESS Moves.
	bool movesthatarevalid(int thisismychoice)
	{
		if (thisismychoice > chessmovecount || thisismychoice < 1)
		{
			cout << "Invalid Move!" << endl;
			return false;
		}

		else
		{
			return true;
		}
	};

	// Function to Count the CHESS Moves.
	int counting()
	{
		return chessmovecount;
	}

	// Function to Make the CHESS Moves.
	void makeChessMoves(int r, int c)
	{
		cerr << r << ", " << c << " is move #" << chessmovecount + 1 << endl;
		moves[chessmovecount++] = (r * 10) + c;
	}

	// Function to Ask the Player for Moves.
	int askplayerformove(int index)
	{
		return moves[index];
	}

	// Function to Dsiplay the Player's Moves.
	void playermoves()
	{
		cout << "R, C\t Please Choose the Option: " << endl;
		for (int xyz = 0; xyz < chessmovecount; xyz++)
		{
			cout << moves[xyz] / 10 << ", " << moves[xyz] % 10 << "\t" << xyz + 1 << endl;
		}
	}
};


// Class for the Players to Play CHESS.
class CHESSPIECE
{
public:
	// Declaring Member Variables.
	int player;
	char type;

	// Creating a Constructor.
	CHESSPIECE(int newPlayer, char newType)
	{
		player = newPlayer;
		type = newType;
	};

	// Declaring Member Functions.
	// Function to Get the New Player.
	int getthenewplayer()
	{
		return player;
	}

	// Function to Get the Type.
	char getType()
	{
		return type;
	}

	// Function to Print the Player's Information.
	void printInfo()
	{
		cout << "Player: " << player << "\tType: " << type << endl;
	}
};


// Class for the Movement of the CHESS Board.
class CHESSBOARD
{
public:
	// Declaring Member Variables.
	CHESSPIECE* board[10][10];

	// Declaring Member Functions>
	// Function to Get the CHESS Pieces.
	CHESSPIECE* getPiece(int r, int c)
	{
		return board[r][c];
	};

	// Function to Get the Player's Moves.
	moveChessPieces* getMoves(int currPlayer, int r, int c)
	{
		int testforR, testC;

		CHESSPIECE* thisPiece = board[r][c];
		moveChessPieces* tmpMoves = new moveChessPieces();

		switch (tolower(thisPiece->getType()))
		{
		case 'r':
			cout << "\n You have selected ROOK at: " << r << ", " << c << endl;
			cout << "\n Make you move to \n";

			for (testforR = r + 1; testforR < 9; testforR++)
			{
				cerr << "Checking: " << testforR << ", " << c << endl;
				if (board[testforR][c]->getthenewplayer() == currPlayer)
					break;
				if (board[testforR][c]->getthenewplayer() >= 0)
				{
					tmpMoves->makeChessMoves(testforR, c);
				}
			}

			for (testforR = r - 1; testforR > 0; testforR--)
			{
				cerr << "Checking: " << testforR << ", " << c << endl;
				if (board[testforR][c]->getthenewplayer() == currPlayer)
					break;
				if (board[testforR][c]->getthenewplayer() >= 0)
				{
					tmpMoves->makeChessMoves(testforR, c);
				}
			}

			for (testC = c + 1; testC < 9; testC++)
			{
				cerr << "Checking: " << r << ", " << testC << endl;
				if (board[r][testC]->getthenewplayer() == currPlayer)
					break;
				if (board[r][testC]->getthenewplayer() >= 0)
				{
					tmpMoves->makeChessMoves(r, testC);
				}
			}

			for (testC = c - 1; testC > 0; testC--)
			{
				cerr << "Checking: " << r << ", " << testC << endl;
				if (board[r][testC]->getthenewplayer() == currPlayer)
					break;
				if (board[r][testC]->getthenewplayer() >= 0)
				{
					tmpMoves->makeChessMoves(r, testC);
				}
			}
			break;

		case 'h':
			cout << "Horsie Selected at: " << r << ", " << c << endl;
			cout << "Can Move to \n";

			if (r < 8 && c < 7)
			{
				if ((board[r + 1][c + 2]->getthenewplayer() >= 0) && (board[r + 1][c + 2]->getthenewplayer() != currPlayer))
				{
					tmpMoves->makeChessMoves(r + 1, c + 2);
				}
			}

			if (r < 7 && c < 8)
			{
				if ((board[r + 2][c + 1]->getthenewplayer() >= 0) && (board[r + 2][c + 1]->getthenewplayer() != currPlayer))
				{
					tmpMoves->makeChessMoves(r + 2, c + 1);
				}
			}

			if (r > 1 && c > 0)
			{
				if ((board[r - 2][c - 1]->getthenewplayer() >= 0) && (board[r - 2][c - 1]->getthenewplayer() != currPlayer))
				{
					tmpMoves->makeChessMoves(r - 2, c - 1);
				}
			}

			if (r > 0 && c > 1)
			{
				if ((board[r - 1][c - 2]->getthenewplayer() >= 0) && (board[r - 1][c - 2]->getthenewplayer() != currPlayer))
				{
					tmpMoves->makeChessMoves(r - 1, c - 2);
				}
			}

			if (r < 8 && c > 1)
			{
				if ((board[r + 1][c - 2]->getthenewplayer() >= 0) && (board[r + 1][c - 2]->getthenewplayer() != currPlayer))
				{
					tmpMoves->makeChessMoves(r + 1, c - 2);
				}
			}

			if (r > 0 && c < 7)
			{
				if ((board[r - 1][c + 2]->getthenewplayer() >= 0) && (board[r - 1][c + 2]->getthenewplayer() != currPlayer))
				{
					tmpMoves->makeChessMoves(r - 1, c + 2);
				}
			}

			if (r < 7 && c > 0)
			{
				if ((board[r + 2][c - 1]->getthenewplayer() >= 0) && (board[r + 2][c - 1]->getthenewplayer() != currPlayer))
				{
					tmpMoves->makeChessMoves(r + 2, c - 1);
				}
			}

			if (r > 1 && c < 8)
			{
				if ((board[r - 2][c + 1]->getthenewplayer() >= 0) && (board[r - 2][c + 1]->getthenewplayer() != currPlayer))
				{
					tmpMoves->makeChessMoves(r - 2, c + 1);
				}
			}
			break;

		case 'b':
			cout << " GREAT CHOICE!\nYou have selcted BISHOP at " << r << ", " << c << endl;
			cout << "Kindly make you move to: \n";

			for (testforR = r + 1, testC = c + 1; testforR < 9; testforR++, testC++)
			{
				cerr << "Checking: " << testforR << ", " << testC << endl;
				if (board[testforR][testC]->getthenewplayer() == currPlayer)
					break;
				if (board[testforR][testC]->getthenewplayer() == 0)
				{
					tmpMoves->makeChessMoves(testforR, testC);
				}
				if (board[testforR][testC]->getthenewplayer() > 0)
				{
					tmpMoves->makeChessMoves(testforR, testC);				
				}
				break;
			}

			for (testforR = r + 1, testC = c - 1; testforR < 9; testforR++, testC--)
			{
				cerr << "Checking: " << testforR << ", " << testC << endl;
				if (board[testforR][testC]->getthenewplayer() == currPlayer)
					break;
				if (board[testforR][testC]->getthenewplayer() >= 0)
				{
					tmpMoves->makeChessMoves(testforR, testC);
				}
				break;
			}

			for (testforR = r - 1, testC = c + 1; testforR > 0; testforR--, testC++)
			{
				cerr << "Checking: " << testforR << ", " << testC << endl;
				if (board[testforR][testC]->getthenewplayer() == currPlayer)
					break;
				if (board[testforR][testC]->getthenewplayer() >= 0)
				{
					tmpMoves->makeChessMoves(testforR, testC);
				}
				break;
			}

			for (testforR = r - 1, testC = c - 1; testforR > 0; testforR--, testC--)
			{
				cerr << "Checking: " << testforR << ", " << testC << endl;
				if (board[testforR][testC]->getthenewplayer() == currPlayer)
					break;
				if (board[testforR][testC]->getthenewplayer() >= 0)
				{
					tmpMoves->makeChessMoves(testforR, testC);
				}
				break;
			}
			break;

		case 'k':
			cout << "WHAT A REGAL CHOICE! \n \nKing Selected\n";
			break;

		case 'q':
			cout << "WHAT A REGAL CHOICE! \n \n Queen Selected at\n";
			for (testforR = r + 1, testC = c + 1; testforR < 9; testforR++, testC++)
			{
				cerr << "Checking: " << testforR << ", " << testC << endl;
				if (board[testforR][testC]->getthenewplayer() == currPlayer)
					break;
				if (board[testforR][testC]->getthenewplayer() == 0)
				{
					tmpMoves->makeChessMoves(testforR, testC);
				}
				if (board[testforR][testC]->getthenewplayer() > 0)
				{
					tmpMoves->makeChessMoves(testforR, testC);
				}
				break;
			}

			for (testforR = r + 1, testC = c - 1; testforR < 9; testforR++, testC--)
			{
				cerr << "Checking: " << testforR << ", " << testC << endl;
				if (board[testforR][testC]->getthenewplayer() == currPlayer)
					break;
				if (board[testforR][testC]->getthenewplayer() >= 0)
				{
					tmpMoves->makeChessMoves(testforR, testC);
				}
				break;
			}

			for (testforR = r - 1, testC = c + 1; testforR > 0; testforR--, testC++)
			{
				cerr << "Checking: " << testforR << ", " << testC << endl;
				if (board[testforR][testC]->getthenewplayer() == currPlayer)
					break;
				if (board[testforR][testC]->getthenewplayer() >= 0)
				{
					tmpMoves->makeChessMoves(testforR, testC);
				}
				break;
			}

			for (testforR = r - 1, testforR = c - 1; testforR > 0; testforR--, testC--)
			{
				cerr << "Checking: " << testforR << ", " << testC << endl;
				if (board[testforR][testC]->getthenewplayer() == currPlayer)
					break;
				if (board[testforR][testC]->getthenewplayer() >= 0)
				{
					tmpMoves->makeChessMoves(testforR, testC);
				}
				break;
			}

			for (testforR = r + 1; testforR < 9; testforR++)
			{
				cerr << "Checking: " << testforR << ", " << c << endl;
				if (board[testforR][c]->getthenewplayer() == currPlayer)
					break;
				if (board[testforR][c]->getthenewplayer() >= 0)
				{
					tmpMoves->makeChessMoves(testforR, c);
				}
			}

			for (testforR = r - 1; testforR > 0; testforR--)
			{
				cerr << "Checking: " << testforR << ", " << c << endl;
				if (board[testforR][c]->getthenewplayer() == currPlayer)
					break;
				if (board[testforR][c]->getthenewplayer() >= 0)
				{
					tmpMoves->makeChessMoves(testforR, c);
				}
			}

			for (testC = c + 1; testC < 9; testC++)
			{
				cerr << "Checking: " << r << ", " << testC << endl;
				if (board[r][testC]->getthenewplayer() == currPlayer)
					break;
				if (board[r][testC]->getthenewplayer() >= 0)
				{
					tmpMoves->makeChessMoves(r, testC);
				}
			}

			for (testC = c - 1; testC > 0; testC--)
			{
				cerr << "Checking: " << r << ", " << testC << endl;
				if (board[r][testC]->getthenewplayer() == currPlayer)
					break;
				if (board[r][testC]->getthenewplayer() >= 0)
				{
					tmpMoves->makeChessMoves(r, testC);
				}
			}
			break;

		case 'p':
			cout << "Perfect Choice!\nPawn Selected at: " << r << ", " << c << endl;
			cout << "You Can move to: \n";

			switch (currPlayer)
			{
			case 1:
				if (r < 8)
				{
					if (board[r + 1][c]->getthenewplayer() == 0)
					{
						cerr << '[' << r + 1 << ',' << c << "] " << endl;
						tmpMoves->makeChessMoves(r + 1, c);
					}
				}

				if (r < 8 && c < 8)
				{
					if (board[r + 1][c + 1]->getthenewplayer() == 2)
					{
						cerr << "[" << r + 1 << "," << c + 1 << "] " << endl;
						tmpMoves->makeChessMoves(r + 1, c + 1);
					}
				}

				if (r < 8 && c > 1)
				{
					if (board[r + 1][c - 1]->getthenewplayer() == 2)
					{
						cerr << "[" << r + 1 << "," << c - 1 << "] " << endl;
						tmpMoves->makeChessMoves(r + 1, c - 1);
					}
				}
				break;

			case 2:
				if (r > 0)
				{
					if (board[r - 1][c]->getthenewplayer() == 0)
					{
						cerr << '[' << r - 1 << ',' << c << "] " << endl;
						tmpMoves->makeChessMoves(r - 1, c);
					}
				}

				if (r > 0 && c < 8)
				{
					if (board[r - 1][c + 1]->getthenewplayer() == 1)
					{
						cerr << "[" << r - 1 << "," << c + 1 << "] " << endl;
						tmpMoves->makeChessMoves(r - 1, c + 1);
					}
				}

				if (r > 0 && c > 0)
				{
					if (board[r - 1][c - 1]->getthenewplayer() == 1)
					{
						cerr << "[" << r - 1 << "," << c - 1 << "] " << endl;
						tmpMoves->makeChessMoves(r - 1, c - 1);
					}
				}
				break;
			}
			break;

		default:
			// Show ERROR Message.
			cerr << "The piece you selected is undefined! TRY AGAIN! ";
			break;
		}

		return tmpMoves;
	};

	// Function to Display the CHESS Board Console.
	void imageofboardonconsole()
	{
		cout << " C|1|2|3|4|5|6|7|8||\n";

		for (int abc = 0; abc < 10; abc++)
		{
			if (abc == 0)
			{
				cout << "R|";
			}

			else
			{
				if (abc == 9)
				{
					cout << "||";
				}

				else
				{
					cout << abc << '|';
				}
			}

			for (int def = 0; def < 10; def++)
			{
				cout << board[abc][def]->getType();

				if (def != 0 && def != 9)
				{
					cout << '|';
				}
			}

			cout << endl;
		}
	};

	CHESSBOARD()
	{
		for (int abc = 0; abc < 10; abc++)
		{
			for (int def = 0; def < 10; def++)
			{
				board[abc][def] = new CHESSPIECE(0, '-');
			}
		}

		CHESSPIECE* tmp = NULL;
		for (int abc = 0; abc < 10; abc++)
		{
			for (int def = 0; def < 10; def++)
			{
				switch (abc)
				{
				case 1:
					switch (def)
					{
					case 1:
						tmp = new CHESSPIECE(1, 'R');
						break;

					case 2:
						tmp = new CHESSPIECE(1, 'H');
						break;

					case 3:
						tmp = new CHESSPIECE(1, 'B');
						break;

					case 4:
						tmp = new CHESSPIECE(1, 'Q');
						break;

					case 5:
						tmp = new CHESSPIECE(1, 'K');
						break;

					case 6:
						tmp = new CHESSPIECE(1, 'B');
						break;

					case 7:
						tmp = new CHESSPIECE(1, 'H');
						break;

					case 8:
						tmp = new CHESSPIECE(1, 'R');
						break;

					default:
						tmp = new CHESSPIECE(-1, '|');
						break;
					}
					break;

				case 2:
				{
					if (def == 0 || def == 9)
					{
						tmp = new CHESSPIECE(-1, '|');
					}
					else
					{
						tmp = new CHESSPIECE(1, 'P');
					}
				}
				break;

				case 3:
				{
					if (def == 0 || def == 9)
					{
						tmp = new CHESSPIECE(-1, '|');
					}
					else
					{
						tmp = new CHESSPIECE(0, '-');
					}
				}
				break;

				case 4:
				{
					if (def == 0 || def == 9)
					{
						tmp = new CHESSPIECE(-1, '|');
					}
					else
					{
						tmp = new CHESSPIECE(0, '-');
					}
				}
				break;

				case 5:
				{
					if (def == 0 || def == 9)
					{
						tmp = new CHESSPIECE(-1, '|');
					}
					else
					{
						tmp = new CHESSPIECE(0, '-');
					}
				}
				break;

				case 6:
				{
					if (def == 0 || def == 9)
					{
						tmp = new CHESSPIECE(-1, '|');
					}
					else
					{
						tmp = new CHESSPIECE(0, '-');
					}
				}
				break;

				case 7:
				{
					if (def == 0 || def == 9)
					{
						tmp = new CHESSPIECE(-1, '|');
					}
					else
					{
						tmp = new CHESSPIECE(2, 'p');
					}
				}
				break;

				case 8:
					switch (def)
					{
					case 1:
						tmp = new CHESSPIECE(2, 'r');
						break;

					case 2:
						tmp = new CHESSPIECE(2, 'h');
						break;

					case 3:
						tmp = new CHESSPIECE(2, 'b');
						break;

					case 4:
						tmp = new CHESSPIECE(2, 'k');
						break;

					case 5:
						tmp = new CHESSPIECE(2, 'q');
						break;

					case 6:
						tmp = new CHESSPIECE(2, 'b');
						break;

					case 7:
						tmp = new CHESSPIECE(2, 'h');
						break;

					case 8:
						tmp = new CHESSPIECE(2, 'r');
						break;

					default:
						tmp = new CHESSPIECE(-1, '|');
						break;
					}
					break;

				case 0:
					tmp = new CHESSPIECE(-1, '|');
					break;

				case 9:
					tmp = new CHESSPIECE(-1, '|');
					break;
				}

				board[abc][def] = tmp;
			}
		}
	};

	// Function to Move the CHESS Piece.
	void movePiece(int startR, int startC, moveChessPieces* movelist, int index)
	{
		int newR = movelist->askplayerformove(index) / 10;
		int newC = movelist->askplayerformove(index) % 10;
		board[newR][newC] = board[startR][startC];
		board[startR][startC] = new CHESSPIECE(0, '-');
	}
};


// Class for the Player to Start Playing.
class PLAYGAME
{
public:
	// Declaring Member Variables.
	CHESSBOARD tcb;
	CHESSPIECE* SPACELEFTEMPTY;
	int currPlayer;

	// Creating a Constructor.
	PLAYGAME()
	{
		currPlayer = 1;
		SPACELEFTEMPTY = new CHESSPIECE(0, '-');
	}

	// Declaring Member Functions.
	// Function to Display Black Screen.
	void BLACKSCREEN()
	{
		for (int i = 0; i < 25; i++)
		{
			cout << endl;
		}
	}

	// Function for the Player's Turn to Play.
	void playerTurn()
	{
		int startR, startC, input;
		BLACKSCREEN();
		cout << "Player " << currPlayer << "'s Turn" << endl;
		tcb.imageofboardonconsole();

		do
		{
			cout << "Enter Row, then Column and Press the Enter Button." << endl;
			cin >> input;
			startR = input / 10;
			startC = input % 10;
		}

		while (!checkValidChoice(currPlayer, startR, startC));

		moveChessPieces* theseMoves = tcb.getMoves(currPlayer, startR, startC);
		theseMoves->playermoves();
		int moveChoice = 0;

		do
		{
			cout << "Move to: ";
			cin >> moveChoice;
		}

		while (!theseMoves->movesthatarevalid(moveChoice));

		tcb.movePiece(startR, startC, theseMoves, moveChoice - 1);

		if (currPlayer == 1)
		{
			currPlayer = 2;
		}

		else
		{
			currPlayer = 1;
		}
	};

	bool checkValidChoice(int thisPlayer, int row, int col)
	{
		CHESSPIECE* thisPiece = tcb.board[row][col];
		moveChessPieces* tmpMoves = tcb.getMoves(thisPlayer, row, col);

		if (thisPiece->getthenewplayer() != thisPlayer)
		{
			cout << "Not your piece, Try Again." << endl;
			return false;
		}
		else if (tmpMoves->chessmovecount < 1)
		{
			cout << "No Moves, Try Again\n";
			return false;
		}
		else
		{
			return true;
		}
	};
};


int Guess;
int Total;

// Class for the CHESS Game Quiz. 
class QUIZQUESTIONS
{
	// Declaring Member Variables.
private:
	string QTEXT;
	string A1, A2, A3, A4;

public:
	// Declaring Member Variables.
	int Correct_Answer;
	int Question_Score;

	// Decalaring Setter Function.
	void setValues(string, string, string, string, string, int, int);

	// Declaring Member Functions.
	void askQuestion();
	void displayquizscore();
}Q;


// Function to Set the Values of the Questions.
void QUIZQUESTIONS::setValues(string q, string a1, string a2, string a3, string a4, int ca, int pa)
{
	QTEXT = q;
	A1 = a1;
	A2 = a2;
	A3 = a3;
	A4 = a4;
	Correct_Answer = ca;
	Question_Score = pa;
}


// Function to Ask Questions from the Player.
void QUIZQUESTIONS::askQuestion()
{
	cout << endl;
	// Print the Questions.
	cout << QTEXT << endl;
	cout << "1. " << A1 << endl;
	cout << "2. " << A2 << endl;
	cout << "3. " << A3 << endl;
	cout << "4. " << A4 << endl;

	// Display the Answer.
	cout << "\nWhat is your Answer? (in number)" << endl;
	cin >> Guess;

	// If the Answer is Correct
	if (Guess == Correct_Answer)
	{
		cout << "\nCorrect Answer!" << endl;
		// Update the Correct Score.
		Total = Total + Question_Score;
		cout << "Score = " << Question_Score << " out of " << Question_Score << "!" << endl;
	}
	// If the Answer is Incoorect.
	else
	{
		cout << "\nWrong Answer!" << endl;
		cout << "Score = 0 out of " << Question_Score << "!" << endl;
		cout << "Correct answer = " << Correct_Answer << endl;
	}
}

// Function to Display the Player's Quiz Score.
void QUIZQUESTIONS::displayquizscore()
{
	// Display the Player's Total Score.
	cout << "Total Score = " << Total << "out of 100" << endl;

	// If the Player Pass the CHESS Game Quiz.
	if (Total >= 70)
	{
		cout << "Congrats you Passed the CHESS Game Quiz!" << endl;
	}
	// If the Player does not Pass the CHESS Game Quiz.
	else
	{
		cout << "Alas! You failed the CHESS Game Quiz." << endl;
		cout << "Better Luck Next Time." << endl;
	}
}


// Class for the CHESS Game's Manual Page.
class Chessmanualmainpage
{
public:
	// Declaring Member Function to Display the CHESS Game's Manual.
	void maindescription()
	{
		cout << " \n\n\n\t\t\t\t\t\t¦¦¦¦¦¦ ¦¦   ¦¦ ¦¦¦¦¦¦¦ ¦¦¦¦¦¦¦ ¦¦¦¦¦¦¦     ¦¦¦    ¦¦¦  ¦¦¦¦¦  ¦¦¦    ¦¦ ¦¦    ¦¦  ¦¦¦¦¦  ¦¦      \n\t\t\t\t\t\t¦¦      ¦¦   ¦¦ ¦¦      ¦¦      ¦¦          ¦¦¦¦  ¦¦¦¦ ¦¦   ¦¦ ¦¦¦¦   ¦¦ ¦¦    ¦¦ ¦¦   ¦¦ ¦¦      \n\t\t\t\t\t\t¦¦      ¦¦¦¦¦¦¦ ¦¦¦¦¦   ¦¦¦¦¦¦¦ ¦¦¦¦¦¦¦     ¦¦ ¦¦¦¦ ¦¦ ¦¦¦¦¦¦¦ ¦¦ ¦¦  ¦¦ ¦¦    ¦¦ ¦¦¦¦¦¦¦ ¦¦      \n\t\t\t\t\t\t¦¦      ¦¦   ¦¦ ¦¦           ¦¦      ¦¦     ¦¦  ¦¦  ¦¦ ¦¦   ¦¦ ¦¦  ¦¦ ¦¦ ¦¦    ¦¦ ¦¦   ¦¦ ¦¦      \n\t\t\t\t\t\t¦¦¦¦¦¦ ¦¦   ¦¦ ¦¦¦¦¦¦¦ ¦¦¦¦¦¦¦ ¦¦¦¦¦¦¦     ¦¦      ¦¦ ¦¦   ¦¦ ¦¦   ¦¦¦¦  ¦¦¦¦¦¦  ¦¦   ¦¦ ¦¦¦¦¦¦¦ ";
		cout << "\n\n\n\n\n\t\t\t\t\t\t \n\n";
		cout << "\t\t\t\t_________________________________________\n";
		cout << "\t\t\t\t|                                           	                                                                     |\n";
		cout << "\t\t\t\t| 	                           CHESS is the most intelligent game ever invented.                                 |\n";
		cout << "\t\t\t\t|                              It has a lot of things that are like life.                                            |\n";
		cout << "\t\t\t\t|                      It trains you to use all your resources to the maximum extent.                                |\n";
		cout << "\t\t\t\t|                   Learning basic chess rules will help you build a strong foundation in chess.                     |\n";
		cout << "\t\t\t\t|                  The main concept behind Chess is that teaches you administration                                  |\n";
		cout << "\t\t\t\t|                                and to extract work from your subordinates.                                         |\n";
		cout << "\t\t\t\t|                                     It is a battle between two monarchs.                                           |\n";
		cout << "\t\t\t\t|                                   The king manages the troops                                                      |\n";
		cout << "\t\t\t\t|                                  He plans the operation and executes it.                                           |\n";
		cout << "\t\t\t\t|                                                                                                                    |\n";
		cout << "\t\t\t\t                                                                             ________________________________________|\n\n";
		cout << "\n\n\n\n\n\n\n\n";
		system("pause");
	}
};


// Class.
class Chessmanual
{
public:
	// Declaring Member Functions.
	// Function to Display the CHESS Game's Description.
	void CM_chessboard()
	{
		system("cls");
		for (int j = 0; j < 60; j++)
		{
			system("CLS");
			pushX(j);
			cout << "THE CHESS BOARD";
			Sleep(0);
		}
		cout << "\n\nCHESS is played on a square board divided into 64 squares (eight-by-eight) of alternating color.\nNo matter what the actual colors of the board, the lighter-colored\nsquares are called light or white and the darker-colored squares are called dark or black. ";
		cout << " Sixteen White and sixteen Black pieces are placed on the board at the beginning of the game.\nThe board is placed so that a white square is in each player's bottom-right corner.  ";
		cout << "Horizontal rows are called ranks and vertical rows are called files.\n According to FIDE equipment standards, the length of side of a square should be twice the length\n of the diameter of the base of a pawn ";
		cout << " \n\n";
		cout << "    _____\n8 ||#||#||#||#|\n7 |#||#||#||#||\n6 ||#||#||#||#|\n5 |#||#||#||#||\n4 ||#||#||#||#|\n3 |#||#||#||#||\n2 ||#||#||#||#|\n1 |#||#||#||#||\n   a b c d e f g h   ";
		cout << " ";
	}

	// Function for the CHESS Symbols.
	void CM_chesssymbols()
	{
		system("cls");
		for (int j = 0; j < 60; j++)
		{
			system("CLS");
			pushX(j);
			cout << "THE CHESS PIECES";
			Sleep(0);
		}
		cout << "\n\n\n   _         _       _       _        _       _       _         _   \n  (  )       (  )     (  )     (  )      (  )     (  )     (  )       (  )    \n   ><         ><       ><       ><        ><       ><       ><         ><   \n  |  |       |  |     |  |     |  |      |  |     |  |     |  |       |  |  \n /    \\    //    \\  //    \\   /    \\    /    \\   /    \\   /    \\     /    \\ \n|__|   |__| |__| |__|  |__| |__| |__|   |__| \n\n\n\n";
		cout << "\n\n A chess piece, or chessman, is any of the 32 movable objects deployed on a chessboard used to play the game of chess.\n ";
		cout << "In a standard game of chess, each of the two players begins a game with the following  pieces: \n Two Kings, denoted with K for Player 1 and k for Player\n ";
		cout << " Two Queens denoted with Q for Player 1 and q for Player 2 \nTwo Bishops, denoted with B for Player 1 and b for Player 2\n Eight Pawns, denoted with P for Player 1 and p for Player 2 ";
		cout << " \nTwo Knights, denoted with K for Player 1 and k for Player 2 \n Two Rook, denoted with R for Player 1 and r for Player 2 \n\n ";
	}

	// Function to Display the Arrangemnet of the CHESS Pieces.
	void CM_arrangementofchesspieces()
	{
		system("cls");
		for (int j = 0; j < 60; j++)
		{
			system("CLS");
			pushX(j);
			cout << "THE ARRANGEMENT CHESS PIECES";
			Sleep(0);
		}
		cout << "\n\n The chess pieces are arranged in following manner=\n\na.The rooks are places on outside corners.\nb.Beside Rook,Knights are placed.\nc.Beside,Knight Bishop is placed.\nd.Queen is placed in central square.\ne.The king takes places beside the Queen.\nf.The pawns are places one square infront of all other pieces.\n";
		cout << "\n\n\n   _         _       _       _        _       _       _         _   \n  (  )       (  )     (  )     (  )      (  )     (  )     (  )       (  )    \n   ><         ><       ><       ><        ><       ><       ><         ><   \n  |  |       |  |     |  |     |  |      |  |     |  |     |  |       |  |  \n /    \\    //    \\  //    \\   /    \\    /    \\   /    \\   /    \\     /    \\ \n|__|   |__| |__| |__|  |__| |__| |__|   |__| \n\n\n\n";
	}

	// Function for the Naming of the Squares.
	void CM_squarenaming()
	{
		system("cls");
		for (int j = 0; j < 60; j++)
		{
			system("CLS");
			pushX(j);
			cout << "THE NAMING OF SQUARES";
			Sleep(0);
		}
		cout << "\n\n\n";
		cout << "    _____\n8 ||#||#||#||#|\n7 |#||#||#||#||\n6 ||#||#||#||#|\n5 |#||#||#||#||\n4 ||#||#||#||#|\n3 |#||#||#||#||\n2 ||#||#||#||#|\n1 |#||#||#||#||\n   a b c d e f g h   ";
		cout << "\n\n ";
		cout << "\n\n \nKeeping a record of chess moves will be very useful in improving your standard of chess.\n It is mandatory in all recognized tournaments, in order to settle disputes about illegal positions, overstepping time control and making claims for\n a draw by the fifty-move rule or repetition of position. ";
		cout << "\nEach square of the chessboard is identified with a unique pair comprising a letter and a number. \nThe vertical files are labelled in small letters a to h, from White's left to White's right.\n Similarly, the horizontal ranks are numbered from 1 to 8. \n ";
		cout << " \nEach square of the board, then, is uniquely identified by its file and rank (letter and number). \nThe White queen, for example, starts the game on the square d1 and the Black queen on d8.";
		cout << " \n \n\n ";
	}

	// Function to Display the Movement of the CHESS Pieces.
	void CM_movementofchesspieces()
	{
		system("cls");
		for (int j = 0; j < 60; j++)
		{
			system("CLS");
			pushX(j);
			cout << "THE MOVEMENT OF CHESS PIECES";
			Sleep(0);
		}
		cout << " \n\nThe king moves exactly one square horizontally, vertically or diagonally.\nThe rook moves horizontally or vertically, through any number of unoccupied squares.\nA bishop moves any number of vacant squares in any diagonal direction.\nThe queen moves any number of vacant squares in a horizontal, vertical or diagonal direction.\nWhen making these moves, the bishop, rook or queen may not move over any intervening pieces.\nA knight moves to the nearest square not on the same rank, file or diagonal. (This can be thought of as moving two squares horizontally then one square vertically, or moving one square horizontally then two squares vertically- i.e. in an L pattern.)\nThe knight is not blocked by other pieces: it jumps to the new location.\nA pawn moves straight forward one square, if that square is vacant. If it has not yet made its first move, a pawn also has the option of moving two squares straight forward, provided both squares are vacant. Pawns cannot move backwards.\n ";
		cout << "\n\n\n   _         _       _       _        _       _       _         _   \n  (  )       (  )     (  )     (  )      (  )     (  )     (  )       (  )    \n   ><         ><       ><       ><        ><       ><       ><         ><   \n  |  |       |  |     |  |     |  |      |  |     |  |     |  |       |  |  \n /    \\    //    \\  //    \\   /    \\    /    \\   /    \\   /    \\     /    \\ \n|__|   |__| |__| |__|  |__| |__| |__|   |__| \n\n\n\n";
	}

	// Function to Display the Three Stages of CHESS.
	void CM_threestagesofchess()
	{
		system("cls");
		for (int j = 0; j < 60; j++)
		{
			system("CLS");
			pushX(j);
			cout << "THE THREE STAGES CHESS";
			Sleep(0);
		}
		cout << " \n\n \nA game of chess is divided in three stages:\n\nStage 1:THE OPENING\n\nThe opening stage is the first phase of the game. \nThis is where both sides develop their forces and prepare themselves for the middle game.\n In chess, developing a piece means to place a piece in a square where it is more active. At the start of a chess game, all the pieces are behind pawns and possess\n limited mobility. When we move, or develop, our pieces, we're improving their activity and \npreparing them for battle. While there is no clear cut move that defines the end of the opening and the\n start of the middle game, it is usually considered middle game after both players have castled\n and developed their queens.\n\n\n ";
		cout << "Stage 2:THE MIDDLE GAME\n\nAfter both sides have developed their forces, the middle game phase begins.\n This is where the central battle of the chess game happens. Both sides develop\n a plan and attempt to execute it. Many chess games are determined in the middle game. \nIn the Middle game you should:\n   Look for a plan! It does not matter if your plan is good or bad. A bad plan is better than no plan at all.\n   Maximize the activity of your pieces. \nIn the opening, you developed your pieces; however, in the middle game we may look for the optimal square for our pieces. Maybe we want to place our piece in a strong square, or exchange it. It is important to know what you want to do with your pieces. \n\n  Protect your king. The ultimate goal in chess is to checkmate your opponent. Always make sure your king is safe and avoid weakening your king's defense.\n   Think of your opponent. \nYou're not the only one playing chess: Your opponent has a planned they also want to execute it.\n Always try to figure out what your opponent is planning to do next. This applies to all stages of the game.";
		cout << "\n\nStage 3:THE ENDGAME\n\nMost chess games average around 40 moves, which means not all games reach the endgame.\n Throughout the course of the middle game, many pieces and pawns are exchanged.\n We can define an endgame by the fact that the kings are very involved in the fight.\n Usually, we want to protect our king in the opening and middle game stage;\n however, because many pieces have been traded, the king is usually safe. In the endgame, \nthe king plays a crucial role in determining the outcome of a game. ";
	}

	// Function to Display the Player's Draw Stage.
	void CM_draw()
	{
		system("cls");
		for (int j = 0; j < 60; j++)
		{
			system("CLS");
			pushX(j);
			cout << "THE CHESS DRAW";
			Sleep(0);
		}
		cout << "\n\n\n\t\t\t\tTHE CHESS DRAW\n\n\n \n\nThere isn't always a winner and a loser in chess. There are several reasons why a chess of game may end in a draw: \n\n1. Both players agree on a draw.\n\n 2. Both players have traded enough pieces so that it is impossible for either player to checkmate the other.\n\n 3. Either player can declare a draw if the same position is reached three times. \n\n4. Either player can declare a draw if 50 chess moves (50 white and 50 black) have been made and not a single pawn move or a piece has been captured.\n\n 5. It is one's player turn to move, and while he is not in check, he does not have any legal moves. This is called stalemate.";
	}

	// Function to Display the Value of Each CHESS Piece.
	void CM_valueofeachpiece()
	{
		system("cls");
		for (int j = 0; j < 60; j++)
		{
			system("CLS");
			pushX(j);
			cout << "THE VALUE OF EACH CHESS PIECE";
			Sleep(0);
		}
		cout << "\n\nBecause every single piece in chess has unique movement, they possess different strengths and weaknesses. \nFor this reason, it is important to know the value or points each piece has. While these points do not give you an\n absolute tool to evaluate every single position in chess, they help you understand which trades are beneficial and which trades you should avoid. \nLet's look at the relative value of every single piece:\n The pawn is worth 1 point The bishop is worth 3 points The knight is worth 3 points The rook is worth 5 points.\nThe queen is worth 9 points Because whoever checkmates (captures)\n the opponent's king immediately wins the game, it is said that the king has infinite value. ";
		cout << "\n\n\n   _         _       _       _        _       _       _         _   \n  (  )       (  )     (  )     (  )      (  )     (  )     (  )       (  )    \n   ><         ><       ><       ><        ><       ><       ><         ><   \n  |  |       |  |     |  |     |  |      |  |     |  |     |  |       |  |  \n /    \\    //    \\  //    \\   /    \\    /    \\   /    \\   /    \\     /    \\ \n|__|   |__| |__| |__|  |__| |__| |__|   |__| \n\n\n\n";
	}
};

// Class to EXIT the CHESS Game.
class exittheprogram
{
public:
	// Declaring Function to EXIT the CHESS Game with a Message.
	void exitmemberfunction()
	{
		system("cls");
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
		cout << "\t\t\t\t\t@@ _____________________________ @@\n";
		cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
		cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
		cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
		cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
		cout << "\t\t\t\t\t@@|                             THANK YOU FOR PLAYING                                     |@@\n";
		cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
		cout << "\t\t\t\t\t@@|                               THE CHESS GAME !                                        |@@\n";
		cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
		cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
		cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
		cout << "\t\t\t\t\t@@|_____________________________|@@\n";
		cout << "\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n\n\n\t\t\t\t\t";
	}
};


// Main Driver Code.
int main()
{
	int i;
	exittheprogram  E;
	showBlinkingLights();
	cout << "\n\n\n\n\n\n\n\n";
	system("pause");
	system("cls");

main:
	system("cls");
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t  THE CHESS PROJECT \n\n";
	cout << "\n\n\t\t\t\t\t\tPlease,  Choose from the following Options: \n\n";
	cout << "\t\t\t\t\t\t _______________________ \n";
	cout << "\t\t\t\t\t\t|                                           	                  |\n";
	cout << "\t\t\t\t\t\t|             1  >> Play CHESS Game.                              |\n";
	cout << "\t\t\t\t\t\t|             2  >> Take CHESS Quiz.                              |\n";
	cout << "\t\t\t\t\t\t|             3  >> See CHESS Manual.                             |\n";
	cout << "\t\t\t\t\t\t|             4  >> CHESS Game Instructions.                      |\n";
	cout << "\t\t\t\t\t\t|             5  >> EXIT Game.                                    |\n";
	cout << "\t\t\t\t\t\t|                                                                 |\n";
	cout << "\t\t\t\t\t\t|_______________________|\n\n";

a:
	cout << "\t\t\t\t\t\tEnter your choice: "; 
	cin >> i;
	// If User-Entered Choices are Invalid.
	if (i > 6 || i < 1)
	{
		cout << "\n\n\t\t\t\t\t\tInvalid Choice\n";
		cout << "\t\t\t\t\t\tTry again...........\n\n";
		goto a;
	}
	system("cls");

	QUIZQUESTIONS Q;
	QUIZQUESTIONS q1, q2, q3, q4, q5, q6, q7, q8, q9, q10;

	switch (i)
	{
		// Switch Case for the CHESS Game.
	case 1:
	{
		{
			letsStartPage lsp;
			cout << "\n\n\n";
			cout << "      ";
			lsp.screenloadlestart();
			lsp.binkingcolouredtext();
			cout << "\n\n\n\n\n\n";
			system("pause");
			cout << "\n\n\n";
			PLAYGAME test;
			while (true)
			{
				test.playerTurn();
			}
			return 0;
		}
		break;

		// Switch Case for the CHESS Game Quiz.
	case 2:
	{
		cout << "\n\n\t\t\t\t THE CHESS QUIZ " << endl;
		cout << "\nPress Enter to Start the Quiz." << endl;
		cin.get();
		string Respond;
		cout << "\nAre you Ready to Take the Quiz? yes/no" << endl;
		cin >> Respond;
		if (Respond == "yes")
		{
			cout << "\nGood Luck!" << endl;
		}
		else
		{
			cout << "Okay!" << endl;
			goto main;
			return 0;
		}

		q1.setValues("Question : What is the total number of squares on a chess board? ", " a. 64", "b. 34", "c. 45", "d. 55", 1, 10) ;
		cout << "\n\n";

		q2.setValues("Question : Which piece could be “checkmated” in chess? ", "a. King", "b. Queen", "c. Knight", "d. Pawn", 1, 10);

		q3.setValues("Question : At the start of a chess game, how many pieces are there in total on a chess board? ", "a. 64", "b. 34", "c. 32", "d. 55", 3, 10);

		q4.setValues("Question : Which is the most powerful piece on a chess board? ", "a. King", "b. Queen", "c. Knight", "d. Pawn", 2, 10);

		q5.setValues("Question : Which is the least powerful piece on a chess board? ", "a. King", "b. Queen", "c. Knight", "d. Pawn", 4, 10);

		q6.setValues("Question : Which piece can only move one square to any side in each move? ", "a. King", "b. Queen", "c. Knight", "d. Pawn", 1, 10);

		q7.setValues("Question : Which piece can jump over another piece in a move? ", "a. King", "b. Bishop", "c. Knight", "d. Pawn", 1, 10);

		q8.setValues("Question : Which piece can only move diagonally in a move? ", "a. King", "b. Bishop", "c. Knight", "d. Pawn", 2, 10);

		q9.setValues("Question : Which is the only piece on a chess board that cannot check a king? ", "a. King", "b. Bishop", "c. Knight", "d. Pawn", 1, 10);

		q10.setValues("Question : What is the condition in which a player cannot many any move while the other one has not checked yet? ", "Checkmate", "Stalemate", "Batchmate", "Chessmate", 2, 10);

		q1.askQuestion();
		q2.askQuestion();
		q3.askQuestion();
		q4.askQuestion();
		q5.askQuestion();
		q6.askQuestion();
		q7.askQuestion();
		q8.askQuestion();
		q9.askQuestion();
		q10.askQuestion();

		Q.displayquizscore();
	}
	break;

	// Switch Case for the CHESS Game Manual.
	case 3:
	{
		Chessmanualmainpage M;
		exittheprogram E;
		M.maindescription();
		int CHOOSE;
		Chessmanual cm;
		system("cls");

	MAINMENU:
		cout << "|\n \n ------------------------------------------------------------\n";
		cout << "        CHESS GAME MANUAL'S MENU OF CONTENT" << endl;
		cout << " \n ------------------------------------------------------------\n";
		cout << "1.Chess Board" << endl;
		cout << "2.Symbols of Chess" << endl;
		cout << "3.Arrangement of Pieces" << endl;
		cout << "4.Naming of Squares" << endl;
		cout << "5.Movement of Chesspieces" << endl;
		cout << "6.Three Stages Of Chess" << endl;
		cout << "7.Draw" << endl;
		cout << "8.Value of Each Pieces" << endl;
		cout << "9.Go to Main Menu" << endl;
		cout << "10.Exit Program" << endl;
		cout << "\n ------------------------------------------------------------\n \n ";

		bool repeat = true;
		cout << "ENTER=";
		cin >> CHOOSE;

		switch (CHOOSE)
		{
		case 1:
		{
			cm.CM_chessboard();
			cout << "\n\n\n";
			system("pause");
			goto MAINMENU;
		}
		break;

		case 2:
		{
			cm.CM_chesssymbols();
			cout << "\n\n\n";
			system("pause");
			goto MAINMENU;
		}
		break;

		case 3:
		{
			cm.CM_arrangementofchesspieces();
			cout << "\n\n\n";
			system("pause");
			goto MAINMENU;
		}
		break;

		case 4:
		{
			cm.CM_squarenaming();
			cout << "\n\n\n";
			system("pause");
			goto MAINMENU;
		}
		break;

		case 5:
		{
			cm.CM_arrangementofchesspieces();
			cout << "\n\n\n";
			system("pause");
			goto MAINMENU;
		}
		break;

		case 6:
		{
			cm.CM_threestagesofchess();
			cout << "\n\n\n";
			system("pause");
			goto MAINMENU;
		}
		break;

		case 7:
		{
			cm.CM_draw();
			cout << "\n\n\n";
			system("pause");
			goto MAINMENU;
		}
		break;

		case 8:
		{
			cm.CM_valueofeachpiece();
			cout << "\n\n\n";
			system("pause");
			goto MAINMENU;
		}
		break;

		case 9:
		{
			system("cls");
			goto main;
		}
		break;

		case 10:
		{
			E.exitmemberfunction();
			cout << "\n\n\n";
			system("pause");
			exit(0);
		}
		break;

		// Show ERROR Message.
		default:
			cout << " YOU ENTERED WRONG NUMBER!";
			cout << " TRY AGAIN! \n";
			repeat = true;
			goto MAINMENU;
		}

		return 0;
	}
	break;

	// Switch for the CHESS Game Instructions.
	case 4:
	{
		{
			char opforins;
			Instructions I;
			I.welcomeinsfunction();
			instructionswithtypewriteraffect iwtwec;
			iwtwec.codefortyperaffect();
			system("cls");
			cout << "\n\n\n\n\n\n\t\t\t\t\t\t   Would you like to quit or go to main menu?";
			cout << "\n\n\n\n\n\n\t\t\t\t\t\tEnter 'y' for Main Menu and 'q' for exiting the program!";
			cout << "\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tENTER:";
			cin >> opforins;

			if (opforins == 'y')
			{
				goto main;
			}
			else
			{
				E.exitmemberfunction();
				cout << "\n\n\n";
				system("pause");
				exit(0);
			}
		}

		return 0;
	}
	break;

	// Switch to EXIT the CHESS Game.
	case 5:
	{
		E.exitmemberfunction();
		cout << "\n\n\n";
		system("pause");
		exit(0);
	}
	break;

	default:
	{
		cout << "Invalid Choice! " << endl;
	}
	}
	}
}

