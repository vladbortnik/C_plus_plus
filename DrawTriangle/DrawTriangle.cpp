// Задача посложней. Нарисовать равнобедренный треугольник из символов ^. Высоту выбирает пользователь. Например: высота = 5, на экране

#include <iostream>
using namespace std; 

void printSpaces(int n){
	int i=0;
	while(i<n){
		cout << " ";
		i++;
	}
}

void printCorners(int n){
	int i=0;
	while(i<n){
		cout << "^";
		i++;
	}
	cout <<"\n";
}


int main() { 
	
	cout << "\n\t *** Нарисовать равнобедренный треугольник *** \n\n";
	cout << "Enter the height of triangle: ";
	
	int H, spaces, corners;
	cin >> H;
	cout << "\n";
	
	spaces=H-1;
	corners=1;
	
	for(int i=0; i<H; i++){
		printSpaces(spaces);
		printCorners(corners);
		spaces--;
		corners+=2;
		
	}
	
	cout << "\n";
	
return 0; 
}