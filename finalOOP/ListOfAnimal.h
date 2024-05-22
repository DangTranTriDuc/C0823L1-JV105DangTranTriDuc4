#ifndef LISTOFANIMAL_H
#define LISTOFANIMAL_H
#include<bits/stdc++.h>
#include"Animal.h"
#include"Cat.h"
#include"Bird.h"
#include"Dog.h"
using namespace std ; 
class ListOfAnimal {
	private:
		vector<Animal*> animals ;
	public:
		ListOfAnimal();
		void mainMenu();
		void addNewAnimal(Animal* animal);
		void inputAnimal();
		void outputAnimal();
		void searchAnimalByBirthYear();
		void assessLevelOfExtinction();
		Animal* findById();
		void assessLevelOfThreat();
		void identifyHabitat();
		void caculateBMI();
		void maxHeightOfAnimal();
		void maxWeightOfAnimal();
		void deleteAnimal();
		void sortByBirthYear();
		void checkAnimalSize();
		void sumAnimalFourLegs();
		void sumAnimalFly();
		void averageHeightOfDogsAndCats();
		void searchAnimalBySpecies();
		void exportToFile();
		void searchAnimalByNationality();
		void editInfoAnimal();
		void infoDog(Dog* dog);
		void infoCat(Cat* cat);
		void infoBird(Bird* bird);
		~ListOfAnimal();
};
#endif
