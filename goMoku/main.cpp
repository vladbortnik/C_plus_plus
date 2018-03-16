#include <iostream>
#include "board.hpp"
#include "boardview.hpp"

using namespace std;


int main(){
	
	Board *b;
	BoardView v(b);
	
	v.startGame();
	
	return 0;
}