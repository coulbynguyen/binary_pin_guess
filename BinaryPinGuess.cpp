#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main(){
	srand(time(NULL));
	int a;
	int b;
	int c;
	int d;
	int counter;
	int moonboots;

	int w;
	int x;
	int y;
	int z;
	counter=0;
	moonboots=0;

	std::cout << "Enter the first pin number:" << std::endl;
	std::cin >> a;
	std::cout << "Enter the second pin number:" << std::endl;
	std::cin >> b;
	std::cout << "Enter the third pin number:" << std::endl;
	std::cin >> c;
	std::cout << "Enter the fourth pin number:" << std::endl;
	std::cin >> d;
	w =0; //rand() % 2;
	x =0; //rand() % 2;
	y =0; //rand() % 2;
	z =0; //rand() % 2;

	while (((a != w)||(b != x)||(c != y)||(d != z))&&(counter != 3)){
	std::cout << "that is not the correct pin!!" << std::endl;
	std::cout << "TRY AGAIN!!" << std::endl;
	std::cout << "First:" << std::endl;
	std::cin >> a;
	std::cout << "Second:" << std::endl;
	std::cin >> b;
	std::cout << "Third:" << std::endl;
	std::cin >> c;
	std::cout << "Fourth:" << std::endl;
	std::cin >> d;
	counter=counter+1;
	}
	if((counter == 3)&&((a != w)||(b != x)||(c != y)||(d != z))){
	std::cout << "YOU HAVE FAILED TO OPEN IN IT IN 4 TRIES" << std::endl;
	}
	if((a == w)&&(b == x)&&(c == y)&&(d == z)){
	std::cout << "You have guessed the right number!" << std::endl;
	}

	return 0;

}
