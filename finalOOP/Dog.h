#ifndef DOG_H
#define DOG_H
#include<bits/stdc++.h>
#include"Animal.h"
using namespace std ; 
class Dog : public Animal {
	private:
	    string idOfDog;
	    string breed;
	    bool trained;
	    float tailLength;
	    int threatLevel;
	    int furChangeFrequency;
	    int IQ;
	public:
		Dog();
		Dog(string& idOfDog, string& breed, bool trained, float tailLength,int threatLevel, int furChangeFrequency, int IQ);
		string getId();
		void setId(string& _id);
		string getBreed();
		void setBreed(string& _breed);
		bool isTrained();
		void setTrained(bool _trained);
		float getTailLength();
		void setTailLength(float _tailLength);
		int getThreatLevel();
		void setThreatLevel(int _threatLevel);
		int getFurChangeFrequency();
		void setFurChangeFrequency(int _furChangeFrequency);
		int getIQ();
		void setIQ(int _IQ);
		void sleep() ;
		void play();
		void eat();
		void chase();
		void bark();
		void input();
		void output();
};
#endif
