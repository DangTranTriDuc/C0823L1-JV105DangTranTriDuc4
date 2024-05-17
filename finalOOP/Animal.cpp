#include"Animal.h"
#include<bits/stdc++.h>
using namespace std ;
		Animal::Animal() {
	        species = "";
	        age = 0;
	        birthYear = 0;
	        habitat = "";
	        hobbies = "";
	        sound = "";
	        threatLevel = 0;
	        population = 0;
	        reproductionRate = 0;
	        gender = false;
	        id = "";
	        deathYear = 0;
	        foodType = "";
	        color = "";
	        vaccineReaction = false;
	        reproductiveCharacteristic = "";
	        nationality = "";
	        furType = "";
	        bodyStructure = "";
	        weight = 0.0f;
	        height = 0.0f;
	        healthStatus = "";
	        feedingFrequency = 0;
	        diseases = "";
	        personality = "";
	        reproductiveHealth = "";
	        rarityLevel = 0;
	        moodStatus = "";
	        bodyTemperature = 0.0f;
	    }
		
		Animal::Animal(string species, int age, int birthYear, string habitat, string hobbies, string sound, int threatLevel,
	        int population, int reproductionRate, bool gender, string id, int deathYear, string foodType, string color,
	        bool vaccineReaction, string reproductiveCharacteristic, string nationality, string furType,
	        string bodyStructure, float weight, float height, string healthStatus, int feedingFrequency,
	        string diseases, string personality, string reproductiveHealth, int rarityLevel, string moodStatus,
	        float bodyTemperature)
	        : species(species), age(age), birthYear(birthYear), habitat(habitat), hobbies(hobbies), sound(sound),
	        threatLevel(threatLevel), population(population), reproductionRate(reproductionRate), gender(gender),
	        id(id), deathYear(deathYear), foodType(foodType), color(color), vaccineReaction(vaccineReaction),
	        reproductiveCharacteristic(reproductiveCharacteristic), nationality(nationality), furType(furType),
	        bodyStructure(bodyStructure), weight(weight), height(height), healthStatus(healthStatus),
	        feedingFrequency(feedingFrequency), diseases(diseases), personality(personality),
	        reproductiveHealth(reproductiveHealth), rarityLevel(rarityLevel), moodStatus(moodStatus),
	        bodyTemperature(bodyTemperature) {
	    }
	    
		string Animal::getSpecies()  {
	        return species;
	    }
	
	    void Animal::setSpecies( string& value) {
	        this->species = value;
	    }
	
	    int Animal::getAge()  {
	        return age;
	    }
	
	    void Animal::setAge(int value) {
	        this->age = value;
	    }
	
	    int Animal::getBirthYear()  {
	        return birthYear;
	    }
	
	    void Animal::setBirthYear(int value) {
	        this->birthYear = value;
	    }
	
	    string Animal::getHabitat()  {
	        return habitat;
	    }
	
	    void Animal::setHabitat( string& value) {
	        this->habitat = value;
	    }
	
	    string Animal::getHobbies()  {
	        return hobbies;
	    }
	
	    void Animal::setHobbies( string& value) {
	        this->hobbies = value;
	    }
	
	    string Animal::getSound()  {
	        return sound;
	    }
	
	    void Animal::setSound( string& value) {
	        this->sound = value;
	    }
	
	    int Animal::getThreatLevel()  {
	        return threatLevel;
	    }
	
	    void Animal::setThreatLevel(int value) {
	        this->threatLevel = value;
	    }
	
	    int Animal::getPopulation()  {
	        return population;
	    }
	
	    void Animal::setPopulation(int value) {
	        this->population = value;
	    }
	
	    int Animal::getReproductionRate()  {
	        return reproductionRate;
	    }
	
	    void Animal::setReproductionRate(int value) {
	        this->reproductionRate = value;
	    }    
	    bool Animal::getGender()  {
	        return gender;
	    }
	
	    void Animal::setGender(bool value) {
	        this->gender = value;
	    }
	
	    string Animal::getId()  {
	        return id;
	    }
	
	    void Animal::setId( string& value) {
	        this->id = value;
	    }
	
	    int Animal::getDeathYear()  {
	        return deathYear;
	    }
	
	    void Animal::setDeathYear(int value) {
	        this->deathYear = value;
	    }
	
	    string Animal::getFoodType()  {
	        return foodType;
	    }
	
	    void Animal::setFoodType( string& value) {
	        this->foodType = value;
	    }
	
	    string Animal::getColor()  {
	        return color;
	    }
	
	    void Animal::setColor( string& value) {
	        this->color = value;
	    }
	
	    bool Animal::getVaccineReaction()  {
	        return vaccineReaction;
	    }
	
	    void Animal::setVaccineReaction(bool value) {
	        this->vaccineReaction = value;
	    }
	    string Animal::getReproductiveCharacteristic()  {
	        return reproductiveCharacteristic;
	    }
	
	    void Animal::setReproductiveCharacteristic( string& value) {
	        this->reproductiveCharacteristic = value;
	    }
	
	    string Animal::getNationality()  {
	        return nationality;
	    }
	
	    void Animal::setNationality(string& value) {
	        this->nationality = value;
	    }
	
	    string Animal::getFurType()  {
	        return furType;
	    }
	
	    void Animal::setFurType(string& value) {
	        this->furType = value;
	    }
	
	    string Animal::getBodyStructure()  {
	        return bodyStructure;
	    }
	
	    void Animal::setBodyStructure(string& value) {
	        this->bodyStructure = value;
	    }
	
	    float Animal::getWeight()  {
	        return weight;
	    }
	
	    void Animal::setWeight(float value) {
	        this->weight = value;
	    }
	
	    float Animal::getHeight()  {
	        return height;
	    }
	
	    void Animal::setHeight(float value) {
	        this->height = value;
	    }
	
	    string Animal::getHealthStatus()  {
	        return healthStatus;
	    }
	
	    void Animal::setHealthStatus( string& value) {
	        this->healthStatus = value;
	    }
	
	    int Animal::getFeedingFrequency()  {
	        return feedingFrequency;
	    }
	
	    void Animal::setFeedingFrequency(int value) {
	        this->feedingFrequency = value;
	    }
	    string Animal::getDiseases()  {
	        return diseases;
	    }
	
	    void Animal::setDiseases( string& value) {
	        this->diseases = value;
	    }
	
	    string Animal::getPersonality()  {
	        return personality;
	    }
	
	    void Animal::setPersonality( string& value) {
	        this->personality = value;
	    }
	
	    string Animal::getReproductiveHealth()  {
	        return reproductiveHealth;
	    }
	
	    void Animal::setReproductiveHealth( string& value) {
	        this->reproductiveHealth = value;
	    }
	
	    int Animal::getRarityLevel()  {
	        return rarityLevel;
	    }
	
	    void Animal::setRarityLevel(int value) {
	        this->rarityLevel = value;
	    }
	
	    string Animal::getMoodStatus()  {
	        return moodStatus;
	    }
	
	    void Animal::setMoodStatus(string& value) {
	        this->moodStatus = value;
	    }
	
	    float Animal::getBodyTemperature()  {
	        return bodyTemperature;
	    }
	
	    void Animal::setBodyTemperature(float value) {
	        this->bodyTemperature = value;
	    }
	    void Animal::input() {
	    	cout << "Enter ID: ";
	        getline(cin, id);
	    	
	        cout << "Enter species: ";
	        getline(cin, species);
	
	        cout << "Enter age: ";
	        cin >> age;
	
	        cout << "Enter birth year: ";
	        cin >> birthYear;
	
	        cin.ignore(); 
	
	        cout << "Enter habitat: ";
	        getline(cin, habitat);
	
	        cout << "Enter hobbies: ";
	        getline(cin, hobbies);
	
	        cout << "Enter sound: ";
	        getline(cin, sound);
	
	        cout << "Enter threat level: ";
	        cin >> threatLevel;
	
	        cout << "Enter population: ";
	        cin >> population;
	
	        cout << "Enter reproduction rate: ";
	        cin >> reproductionRate;
	
	        cout << "Enter gender (0 for female, 1 for male): ";
	        cin >> gender; 
	
	        cout << "Enter death year: ";
	        cin >> deathYear;
	
	        cin.ignore(); 
	
	        cout << "Enter food type: ";
	        getline(cin, foodType);
	
	        cout << "Enter color: ";
	        getline(cin, color);
	
	        cout << "Enter vaccine reaction (0 for no, 1 for yes): ";
	        cin >> vaccineReaction;
	
	        cin.ignore(); 
	
	        cout << "Enter reproductive characteristic: ";
	        getline(cin, reproductiveCharacteristic);
	
	        cout << "Enter nationality: ";
	        getline(cin, nationality);
	
	        cout << "Enter fur type: ";
	        getline(cin, furType);
	
	        cout << "Enter body structure: ";
	        getline(cin, bodyStructure);
	
	        cout << "Enter weight: ";
	        cin >> weight;
	
	        cout << "Enter height: ";
	        cin >> height;
	
	        cin.ignore(); 
	
	        cout << "Enter health status: ";
	        getline(cin, healthStatus);
	
	        cout << "Enter feeding frequency: ";
	        cin >> feedingFrequency;
	
	        cin.ignore(); 
	
	        cout << "Enter diseases: ";
	        getline(cin, diseases);
	
	        cout << "Enter personality: ";
	        getline(cin, personality);
	
	        cout << "Enter reproductive health: ";
	        getline(cin, reproductiveHealth);
	
	        cout << "Enter rarity level: ";
	        cin >> rarityLevel;
	
	        cin.ignore();
	        
	        cout << "Enter mood status: ";
	        getline(cin, moodStatus);
	
	        cout << "Enter body temperature: ";
	        cin >> bodyTemperature;
	    }
	    void Animal::output()  {
	        cout << " ID: " << this->id
				 << "Species: " << this->species
	             << " Age: " << this->age
	             << " Birth Year: " << this->birthYear
	             << " Habitat: " << this->habitat
	             << " Hobbies: " << this->hobbies
	             << " Sound: " << this->sound
	             << " Threat Level: " << this->threatLevel
	             << " Population: " << this->population
	             << " Reproduction Rate: " << this->reproductionRate
	             << " Gender: " << (this->gender ? "Male" : "Female")
	             << " Death Year: " << this->deathYear
	             << " Food Type: " << this->foodType
	             << " Color: " << this->color
	             << " Vaccine Reaction: " << (this->vaccineReaction ? "Yes" : "No")
	             << " Reproductive Characteristic: " << this->reproductiveCharacteristic
	             << " Nationality: " << this->nationality
	             << " Fur Type: " << this->furType
	             << " Body Structure: " << this->bodyStructure
	             << " Weight: " << this->weight
	             << " Height: " << this->height
	             << " Health Status: " << this->healthStatus
	             << " Feeding Frequency: " << this->feedingFrequency
	             << " Diseases: " << this->diseases
	             << " Personality: " << this->personality
	             << " Reproductive Health: " << this->reproductiveHealth
	             << " Rarity Level: " << this->rarityLevel
	             << " Mood Status: " << this->moodStatus
	             << " Body Temperature: " << this->bodyTemperature
	             << endl;
	    }
	    void move()  { //di_chuyen
	        cout << "Animal is moving." << endl;
	    }
	
	     void sleep()  { //ngu
	        cout << "Animal is sleeping." << endl;
	    }
	
	     void digHole()  {//dao_hang
	        cout << "Animal is digging a hole." << endl;
	    }
	
	     void hunt()  { //san_bat
	        cout << "Animal is hunting." << endl;
	    }
	
	     void reproduce()  {//sinh_san
	        cout << "Animal is reproducing." << endl;
	    }
	
	     void glide()  {//mua_luon
	        cout << "Animal is gliding." << endl;
	    }
	
	     void formPack()  { //tao_to
	        cout << "Animal is forming a pack." << endl;
	    }
	
	     void eat()  { //an
	        cout << "Animal is eating." << endl;
	    }
	
	     void takeCareOfYoung()  { //cham_soc_con_cai
	        cout << "Animal is taking care of the young." << endl;
	    }
	
	     void swimAndCrawl()  { //boi_va_lan
	        cout << "Animal is swimming and crawling." << endl;
	    }
