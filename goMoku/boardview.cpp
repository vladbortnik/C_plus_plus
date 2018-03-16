#include <iostream>
#include <stdlib.h>
#include "boardview.hpp"
using namespace std;

	
BoardView::BoardView(Board *b){
	board = b;
	board->zero();
}


void BoardView::show(){
	for(int i=0;i<board->getSize();i++){
		for(int j=0;j<board->getSize();j++){
			printf("%c", board->getCell(i,j));
			printf("%s", " ");
		}
		printf("%s", "\n");
	}
}



	
void BoardView::startGame(){
	int x, y;
	MoveType m;
	
	show();
	printf("%s", "\n");
	while(true){
		printf("%s", "X move: (x,y): ");	// "X" moves
		scanf("%d%d", &x, &y);
		m = board->makeMove(x-1,y-1,'X');
		
		while(m != OK){
			if(m == TAKEN) printf("%s", "\nTHIS CELL IS TAKEN. TRY AGAIN...\n");
			else printf("%s", "\nOUT OF BOARD. TRY AGAIN...\n");
			
			printf("%s", "X move: (x,y): ");	// "X" moves again
			scanf("%d%d", &x, &y);
			m = board->makeMove(x-1,y-1,'X');
		}
		
		printf("%s", "\n");
		show();
		
		// checking Win-noWin 
		if(board->isWin() == X_WIN) {printf("%s", "\nX_WIN !!!\n\n"); return;}
		if(board->isWin() == O_WIN) {printf("%s", "\nO_WIN !!!\n\n"); return;}
		if(board->isWin() == DRAW)  {printf("%s", "\nDRAW !!!\n\n"); return;}
		if(board->isWin() == GO_ON) {printf("%s", "\nGO_ON...\n\n");}
		
		
		printf("%s", "O move: (x,y): ");	// "O" moves
		scanf("%d%d", &x, &y);
		
		m = board->makeMove(x-1,y-1,'O');
		
		while(m != OK){
			if(m == TAKEN) printf("%s", "\nTHIS CELL IS TAKEN. TRY AGAIN...\n");
			else printf("%s", "\nOUT OF BOARD. TRY AGAIN...\n");
			
			printf("%s", "O move: (x,y): ");	// "O" moves again
			scanf("%d%d", &x, &y);
			m = board->makeMove(x-1,y-1,'O');
		}
		
		printf("%s", "\n");
		show();
		
		// checking Win-noWin again
		if(board->isWin() == X_WIN) {printf("%s", "\nX_WIN !!!\n\n"); return;}
		if(board->isWin() == O_WIN) {printf("%s", "\nO_WIN !!!\n\n"); return;}
		if(board->isWin() == DRAW)  {printf("%s", "\nDRAW !!!\n\n"); return;}
		if(board->isWin() == GO_ON) {printf("%s", "\nGO_ON...\n\n");}
		
	}
	
}

