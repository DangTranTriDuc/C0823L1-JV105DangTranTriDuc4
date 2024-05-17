#ifndef BIRD_H
#define BIRD_H
#include<bits/stdc++.h>
#include"Animal.h"
#include"Cat.h"
#include"Bird.h"
#include"Dog.h"
using namespace std ; 
class ListOfAnimal {
	private:
		vector<Animal> animals ;
		Dog dog ;
		Cat cat;
		Bird bird;
	public:
		void mainMenu();
};
#endif
