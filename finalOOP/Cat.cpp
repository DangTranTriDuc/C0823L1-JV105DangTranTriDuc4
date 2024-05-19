#include<bits/stdc++.h>
#include"Animal.h"
#include"Cat.h"
using namespace std;
	Cat::Cat() : Animal(){
		eyeColor = "";
	    earType = "";
	    clawSharpness = 0;
	    canMeow = false;
	    affectionLevel = 0;
	    huntingHabit = 0;
	}
	Cat::Cat(string& idOfCat,string& eyeColor,string& earType,int clawSharpness,bool canMeow,int affectionLevel,int huntingHabit):Animal(species,  age,  birthYear,  habitat,  hobbies,  sound,  threatLevel,
	     	population,  reproductionRate,  gender,  id,  deathYear,  foodType,  color,vaccineReaction,  reproductiveCharacteristic,  nationality,  furType,
	     	bodyStructure,  weight,  height,  healthStatus,  feedingFrequency,diseases,  personality,  reproductiveHealth,  rarityLevel,  moodStatus,bodyTemperature)
	{	
		this->idOfCat = idOfCat;
	    this->eyeColor = eyeColor;
	    this->earType = earType;
	    this->clawSharpness = clawSharpness;
	    this->canMeow = canMeow;
	    this->affectionLevel = affectionLevel;
	    this->huntingHabit = huntingHabit;
	}
    string Cat::getIdOfCat() 
    {
        return idOfCat;
    }

    void Cat::setId(string& _idOfCat)
    {
        this->idOfCat=_idOfCat;
    }

    string Cat::getEyeColor() 
    {
        return eyeColor;
    }

    void Cat::setEyeColor(string& _eyeColor)
    {
        this->eyeColor = _eyeColor;
    }

    string Cat::getEarType() 
    {
        return earType;
    }

    void Cat::setEarType(string& _earType)
    {
        this->earType = _earType;
    }

    int Cat::getClawSharpness() 
    {
        return clawSharpness;
    }

    void Cat::setClawSharpness(int _clawSharpness)
    {
       this->clawSharpness = _clawSharpness;
    }

    bool Cat::getCanMeow() 
    {
        return canMeow;
    }

    void Cat::setCanMeow(bool _canMeow)
    {
        this->canMeow = _canMeow;
    }

    int Cat::getAffectionLevel() 
    {
        return affectionLevel;
    }

    void Cat::setAffectionLevel(int _affectionLevel)
    {
        this->affectionLevel = _affectionLevel;
    }

    int Cat::getHuntingHabit() 
    {
        return huntingHabit;
    }

    void Cat::setHuntingHabit(int _huntingHabit)
    {
        this->huntingHabit = _huntingHabit;
    }

    void Cat::meow() 
    {
        if (this->canMeow)
        {
            cout << "The cat is meowing!" << endl;
        }
        else
        {
            cout << "This cat cannot meow." << endl;
        }
    }

    void Cat::defend() 
    {
        if (this->clawSharpness > 5)
        {
            cout << "The cat is defending itself with sharp claws!" << endl;
        }
        else
        {
            cout << "The cat's claws are not sharp enough to defend effectively." << endl;
        }
    }

    void Cat::run() 
    {
        cout << "The cat is running!" << endl;
    }

    void Cat::climb() 
    {
        cout << "The cat is climbing!" << endl;
    }

    void Cat::markTerritory() 
    {
        cout << "The cat is marking its territory!" << endl;
    }
    
    void Cat::input()
    {
    	Animal::input();
        cout << "Enter cat's ID: ";
        cin.ignore();
        getline(cin, idOfCat);
        cout << "Enter eye color: ";
        getline(cin, eyeColor);
        cout << "Enter ear type: ";
        getline(cin, earType);
        cout << "Enter claw sharpness (1-10): ";
        cin >> clawSharpness;
        cout << "Can the cat meow? (true/false): ";
        cin >>  canMeow;
        cout << "Enter affection level (1-10): ";
        cin >> affectionLevel;
        cout << "Enter hunting habit level (1-10): ";
        cin >> huntingHabit;
        cin.ignore(); 
    }
    void Cat::output() 
    {
    	Animal::output();
        cout << "Cat's ID: " << this->idOfCat 
         << "Eye color: " << this->eyeColor 
         << "Ear type: " << this->earType 
         << "Claw sharpness: " << this->clawSharpness 
         << "Can meow: " <<  (this->canMeow ? "Yes" : "No")
         << "Affection level: " << this->affectionLevel 
         << "Hunting habit level: " << this->huntingHabit 
		 << endl;
    }
    Cat::~Cat(){}


