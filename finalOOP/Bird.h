#ifndef BIRD_H
#define BIRD_H
#include<bits/stdc++.h>
#include"Animal.h"
using namespace std ; 
class Bird: public Animal {
	private:
		string idOfBird;
	    string migrationPattern;
	    string nestingHabit;
	    string species;
	    string vocalization;
	    string wingspan;
	    string huntingHabits;
	public:
		Bird();
		Bird(string& idOfBird,string& migration, string& nesting,
         	string& birdSpecies, string& birdVocalization,
         	string& birdWingspan,string& huntingHabits);
		string getIdOfBird()  ; 
		void setIdOfBird( string& _idOfBird);
		string getMigrationPattern();
		void setMigrationPattern( string& _migrationPattern);
		string getNestingHabit();
		void setNestingHabit( string& _nestingHabit);
		string getSpecies();
		void setSpecies( string& _species);
		string getVocalization();
		void setVocalization( string& _vocalization);
		string getWingspan();
		void setWingspan( string& _wingspan);
		string getHuntingHabits();
		void setHuntingHabits(string& _huntingHabits);
		void sing() ;
	    void buildNest();
	    void fly();
	    void glide() ;
	    void forage() ;
		void input();
		void output();	
};
#endif
