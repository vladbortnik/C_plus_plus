#include <iostream>
#include "board.h"
using namespace std;


int main(){
	
	Board *b;
	
	int x;
	
	b->makeMove(0,0,4);
	
	x = b->getCell(0,0);
	
	printf("%d", x);
	printf("%s", "\n");
	

	
	
	return 0;
}