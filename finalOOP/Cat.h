#ifndef CAT_H
#define CAT_H
#include<bits/stdc++.h>
#include"Animal.h"
using namespace std ;
class Cat : public Animal {
	private:
		string idOfCat;
	    string eyeColor;
	    string earType;
	    int clawSharpness;
	    bool canMeow;
	    int affectionLevel;
	    int huntingHabit;
	public:
		Cat();
		Cat(string& idOfCat,string& eyeColor,string& earType,int clawSharpness,bool canMeow,int affectionLevel,int huntingHabit);
		string getIdOfCat();
		void setId(string& _idOfCat);
		string getEyeColor();
		void setEyeColor(string& _eyeColor);
		string getEarType();
		void setEarType(string& _earType);
		int getClawSharpness();
		void setClawSharpness(int _clawSharpness);
		bool getCanMeow();
		void setCanMeow(bool _canMeow);
		int getAffectionLevel();
		void setAffectionLevel(int _affectionLevel);
		int getHuntingHabit();
		void setHuntingHabit(int _huntingHabit);
		void meow();
		void defend();
		void run();
		void climb();
		void markTerritory();
		void input();
		void output(); 
		~Cat();
};
#endif
