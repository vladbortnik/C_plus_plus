#include "board.hpp"


Board::Board(){
	char b[FIELD_SIZE][FIELD_SIZE];
}

void Board::zero(){
	for(int i=0;i<FIELD_SIZE;i++){
		for(int j=0;j<FIELD_SIZE;j++){
			b[i][j] = '.';
		}
	}
}

char Board::getCell(int x, int y){
	return b[x][y];
}

MoveType Board::makeMove(int x, int y, char sign){
	if((x>=0 && x<FIELD_SIZE) && (y>=0 && y<FIELD_SIZE)){ 
		if(b[x][y] == '.'){
			b[x][y] = sign;
			return OK;
		}
		else return TAKEN;
	}
	else return OUT;
}


int Board::getSize(){
	return FIELD_SIZE;
}



WinType Board::isWin(){
	
	int i, j, limit, counter;
	
	for(i=0;i<FIELD_SIZE;i++){		// checking Horizontal Win
		counter = 1;
		
		for(j=0;j<FIELD_SIZE-1;j++){
			if(b[i][j] == b[i][j+1] && b[i][j] != '.') counter++;
			else counter = 1;
			
			if(counter >= WIN_MOVES){
				if(b[i][j]=='X') return X_WIN;
				else return O_WIN;
			}
		}
	}
	
	for(j=0;j<FIELD_SIZE;j++){		// checking Vertical Win
		counter = 1;
		
		for(i=0;i<FIELD_SIZE-1;i++){
			if(b[i][j] == b[i+1][j] && b[i][j] != '.') counter++;
			else counter = 1;
			
			if(counter >= WIN_MOVES){
				if(b[i][j]=='X') return X_WIN;
				else return O_WIN;
			}
		}
	}
	
	i = 0, j = 0;
	while(i != FIELD_SIZE-1 || j != FIELD_SIZE-1){	// checking Zigzag Win
		
		if(j < FIELD_SIZE-1) j++;		// first triangle of matrix
		else i++;
		limit = i; counter = 1;
		for(;j>limit;i++,j--){		
			if(b[i][j] == b[i+1][j-1] && b[i][j] != '.') counter++;
			else counter = 1;
			
			if(counter >= WIN_MOVES){
				if(b[i][j]=='X') return X_WIN;
				else return O_WIN;
			}
		}
		
		if(i == FIELD_SIZE-1 && j == FIELD_SIZE-1) break;
		
		if(i < FIELD_SIZE-1) i++;		// second triangle of matrix
		else j++;
		limit = j; counter = 1;
		for(;i>limit;i--,j++){
			if(b[i][j] == b[i-1][j+1] && b[i][j] != '.') counter++;
			else counter = 1;
			
			if(counter >= WIN_MOVES){
				if(b[i][j]=='X') return X_WIN;
				else return O_WIN;
			}
		}		
	}
	
	char d[FIELD_SIZE][FIELD_SIZE];		// create Mirror-Vertical-Flip Matrix
	for(i=0;i<FIELD_SIZE;i++){
		for(j=0;j<FIELD_SIZE;j++){
			d[i][j] = b[i][FIELD_SIZE-1-j];
		}
	}
	
	i = 0, j = 0;
	while(i != FIELD_SIZE-1 || j != FIELD_SIZE-1){	//checking Zigzag Win (Matrix d)
		
		if(j < FIELD_SIZE-1) j++;		// first triangle of matrix (d)
		else i++;
		limit = i; counter = 1;
		for(;j>limit;i++,j--){		
			if(d[i][j] == d[i+1][j-1] && d[i][j] != '.') counter++;
			else counter = 1;
			
			if(counter >= WIN_MOVES){
				if(d[i][j]=='X') return X_WIN;
				else return O_WIN;
			}
		}
		
		if(i == FIELD_SIZE-1 && j == FIELD_SIZE-1) break;
		
		if(i < FIELD_SIZE-1) i++;		// second triangle of matrix (d)
		else j++;
		limit = j; counter = 1;
		for(;i>limit;i--,j++){
			if(d[i][j] == d[i-1][j+1] && d[i][j] != '.') counter++;
			else counter = 1;
			
			if(counter >= WIN_MOVES){
				if(d[i][j]=='X') return X_WIN;
				else return O_WIN;
			}
		}		
	}
	
	for(i=0;i<FIELD_SIZE;i++){	// checking if there is a space to make a move
		for(j=0;j<FIELD_SIZE;j++){
			if(b[i][j]=='.') return GO_ON;
		}
	}
	
	return DRAW;
}













