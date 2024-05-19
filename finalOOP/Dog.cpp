#include<bits/stdc++.h>
#include"Animal.h"
#include"Dog.h"
using namespace std ;
	Dog::Dog() : Animal(){
		idOfDog = "";
        breed = "";
        trained = false;
        tailLength = 0.0f;
        threatLevel = 0;
        furChangeFrequency = 0;
        IQ = 0;
	}
	
	Dog::Dog(string& idOfDog, string& breed, bool trained, float tailLength, int threatLevel, int furChangeFrequency, int IQ) : Animal(species,  age,  birthYear,  habitat,  hobbies,  sound,  threatLevel,
	     	population,  reproductionRate,  gender,  id,  deathYear,  foodType,  color,vaccineReaction,  reproductiveCharacteristic,  nationality,  furType,
	     	bodyStructure,  weight,  height,  healthStatus,  feedingFrequency,diseases,  personality,  reproductiveHealth,  rarityLevel,  moodStatus,bodyTemperature){
	     		this->idOfDog = idOfDog;
		        this->breed = breed;
		        this->trained = trained;
		        this->tailLength = tailLength;
		        this->threatLevel = threatLevel;
		        this->furChangeFrequency = furChangeFrequency;
		        this->IQ = IQ;
			}
    string Dog::getId() 
    {
        return id;
    }

    void Dog::setId( string& _id)
    {
        id = _id;
    }

    string Dog::getBreed() 
    {
        return breed;
    }

    void Dog::setBreed( string& _breed)
    {
        breed = _breed;
    }

    bool Dog::isTrained() 
    {
        return trained;
    }

    void Dog::setTrained(bool _trained)
    {
        trained = _trained;
    }

    float Dog::getTailLength() 
    {
        return tailLength;
    }

    void Dog::setTailLength(float _tailLength)
    {
        tailLength = _tailLength;
    }

    int Dog::getThreatLevel() 
    {
        return threatLevel;
    }

    void Dog::setThreatLevel(int _threatLevel)
    {
        threatLevel = _threatLevel;
    }

    int Dog::getFurChangeFrequency() 
    {
        return furChangeFrequency;
    }

    void Dog::setFurChangeFrequency(int _furChangeFrequency)
    {
        furChangeFrequency = _furChangeFrequency;
    }

    int Dog::getIQ() 
    {
        return IQ;
    }

    void Dog::setIQ(int _IQ)
    {
        IQ = _IQ;
    }

    void Dog::sleep() 
    {
        cout << "The dog is sleeping." << endl;
    }

    void Dog::play() 
    {
        cout << "The dog is playing." << endl;
    }

    void Dog::eat() 
    {
        cout << "The dog is eating." << endl;
    }

    void Dog::chase() 
    {
        cout << "The dog is chasing." << endl;
    }

    void Dog::bark() 
    {
        cout << "Woof! Woof!" << endl;
    }

    void Dog::input()
    {
        Animal::input();
        cout << "Enter dog's ID: ";
        cin.ignore();
        getline(cin, id);
        cout << "Enter dog's breed: ";
        getline(cin, breed);
        cout << "Is the dog trained? (true/false): ";
        cin  >> trained;
        cout << "Enter tail length: ";
        cin >> tailLength;
        cout << "Enter threat level (1-10): ";
        cin >> threatLevel;
        cout << "Enter fur change frequency: ";
        cin >> furChangeFrequency;
        cout << "Enter dog's IQ: ";
        cin >> IQ;
        cin.ignore(); 
    }

    void Dog::output() 
    {
        Animal::output();
        cout << "Dog's ID: " << id << endl;
        cout << "Breed: " << breed << endl;
        cout << "Trained: " << boolalpha << trained << endl;
        cout << "Tail length: " << tailLength << endl;
        cout << "Threat level: " << threatLevel << endl;
        cout << "Fur change frequency: " << furChangeFrequency << endl;
        cout << "IQ: " << IQ << endl;
    }
    Dog::~Dog(){}
