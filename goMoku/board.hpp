#ifndef _BOARD_HPP_
#define _BOARD_HPP_

enum WinType {X_WIN, O_WIN, DRAW, GO_ON};
enum MoveType {OUT, TAKEN, OK};

class Board{

private:
	
	static const int FIELD_SIZE = 10;
	static const int WIN_MOVES = 3;
	char b[FIELD_SIZE][FIELD_SIZE];
	
	
public:
	
	Board();
	
	void zero();
	
	char getCell(int x, int y);
	
	MoveType makeMove(int x, int y, char sign);
	
	int getSize();
	
	WinType isWin();
	
	
	
	
};




#endif