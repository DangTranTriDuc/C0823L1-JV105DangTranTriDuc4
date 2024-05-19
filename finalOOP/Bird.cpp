#include<bits/stdc++.h>
#include"Animal.h"
#include"Bird.h"
using namespace std;
	Bird::Bird() : Animal() {
        idOfBird = "";
        migrationPattern = "";
        nestingHabit = "";
        species = "";
        vocalization = "";
        wingspan = "";
		huntingHabits="";
    }
    Bird::Bird(string& id,string& migration, string& nesting,
         string& birdSpecies, string& birdVocalization,
         string& birdWingspan,string& huntingHabits) : Animal( species,  age,  birthYear,  habitat,  hobbies,  sound,  threatLevel,
	     population,  reproductionRate,  gender,  id,  deathYear,  foodType,  color,vaccineReaction,  reproductiveCharacteristic,  nationality,  furType,
	     bodyStructure,  weight,  height,  healthStatus,  feedingFrequency,diseases,  personality,  reproductiveHealth,  rarityLevel,  moodStatus,bodyTemperature) 
	{
        this->idOfBird = id;
        this->migrationPattern = migration;
        this->nestingHabit = nesting;
        this->species = birdSpecies;
        this->vocalization = birdVocalization;
        this->wingspan = birdWingspan;
    }
	    string Bird::getIdOfBird()  {
	        return idOfBird;
	    }
	
	    void Bird::setIdOfBird( string& _idOfBird) {
	        this->idOfBird = _idOfBird;
	    }
	
	    string Bird::getMigrationPattern()  {
	        return migrationPattern;
	    }
	
	    void Bird::setMigrationPattern( string& _migrationPattern) {
	        this->migrationPattern = _migrationPattern;
	    }
	
	    string Bird::getNestingHabit()  {
	        return nestingHabit;
	    }
	
	    void Bird::setNestingHabit( string& _nestingHabit) {
	        this->nestingHabit = _nestingHabit;
	    }
	
	    string Bird::getSpecies()  {
	        return species;
	    }
	
	    void Bird::setSpecies( string& _species) {
	        this->species = _species;
	    }
	
	    string Bird::getVocalization()  {
	        return vocalization;
	    }
	
	    void Bird::setVocalization( string& _vocalization) {
	        this->vocalization = _vocalization;
	    }
	
	    string Bird::getWingspan()  {
	        return wingspan;
	    }
	
	    void Bird::setWingspan( string& _wingspan) {
	        this->wingspan = _wingspan;
	    }
	    
	    string Bird::getHuntingHabits() {
         return huntingHabits;
    	}

	    void Bird::setHuntingHabits(string& _huntingHabits) {
	        this->huntingHabits = _huntingHabits;
	    }
	    
	    void Bird::sing() {
        	cout << "Bird is singing" << endl;
	    }
	
	    void Bird::buildNest() {
	        cout << "Bird is building Nest" << endl;
	    }
	
	    void Bird::fly() {
	        cout << "Bird is flying" << endl;
	    }
	
	    void Bird::glide() {
	        cout << "Bird is gliding" << endl;
	    }
	
	    void Bird::forage() {
	        cout << "Bird is foraging" << endl;
	    }
	    void Bird::input() {
	    	Animal::input();
	        cout << "Enter bird's ID Of Bird: ";
	        cin.ignore();
	        getline(cin, idOfBird);
	        cout << "Enter migration pattern: ";
	        getline(cin, migrationPattern);
	        cout << "Enter nesting habit: ";
	        getline(cin, nestingHabit);
	        cout << "Enter bird species: ";
	        getline(cin, species);
	        cout << "Enter vocalization: ";
	        getline(cin, vocalization);
	        cout << "Enter wingspan: ";
	        getline(cin, wingspan);
	        cout << "Enter Hunting Habits:" ;
	        getline(cin,huntingHabits);
    	}

	    void Bird::output()  {
	    	Animal::output();
	        cout << "Bird's ID: " << this->idOfBird 
		         << " Migration pattern: " << this->migrationPattern 
		         << " Nesting habit: " << this->nestingHabit 
		         << " Species: " << this->species 
		         << " Vocalization: " << this->vocalization 
		         << " Wingspan: " << this->wingspan 
		         << " Hunting Habits:"<<this->huntingHabits
				 << endl;
	    }
	    Bird::~Bird(){}
