#ifndef _BOARDVIEW_HPP_
#define _BOARDVIEW_HPP_
#include <iostream>
#include "board.hpp"

class BoardView{


private:
	
	Board *board;
	void show();
	
public:
	
	
	
	BoardView(Board *b);
	
	void startGame();
	
	
};


#endif