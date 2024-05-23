#include<bits/stdc++.h>
#include"ListOfAnimal.h"
using namespace std ;
ListOfAnimal::ListOfAnimal(){}

void ListOfAnimal::mainMenu(){
	int choice ;
	bool flag = true;
	do {
		cout<<"---List Of Fuction---"<<endl;
		cout<<"1.Them moi Animal"<<endl;//1
		cout<<"2.Danh sach Animal"<<endl; //2
		cout<<"3.Chinh sua thong tin Animal"<<endl; //7
		cout<<"4.Xoa thong tin Animnal"<<endl;//4
		cout<<"5.Tim kiem Animal theo nam sinh"<<endl;//12
		cout<<"6.Danh gia tinh cach Animal"<<endl;//6
		cout<<"7.Tim kiem dong vat theo ID"<<endl;//10
		cout<<"8.Tim kiem dong vat theo chung loai"<<endl;//11
		cout<<"9.Tinh toan chi so can nang Animal"<<endl; //13
		cout<<"10.Danh gia muc do nguy hiem Animal"<<endl;//15
		cout<<"11.Xac dinh kich thuoc Animal"<<endl;//16
		cout<<"12.Tinh tong so dong vat 4 chan"<<endl; //17
		cout<<"13.Tinh tong so dong vat biet bay"<<endl; //18
		cout<<"14.Xuat file Animal"<<endl;//21
		cout<<"15.Tim animal co chieu cao thap nhat"<<endl;
		cout<<"16.Danh gia muc do tuyet chung Animal"<<endl;//23
		cout<<"17.Theo doi chu ky sinh san Animal"<<endl; //24
		cout<<"18.Xac dinh moi truong song Animal"<<endl;//25
		cout<<"19.Tim Animal co can nang cao nhat"<<endl; //thay so 5
		cout<<"20.Tim Animal co chieu cao cao nhat"<<endl;//thay so 14
		cout<<"21.Tim kiem Animal theo quoc tich"<<endl;
		cout<<"22.tinh chieu cao trung binh cua dogs va cats"<<endl;
		cout<<"23.Danh gia tinh cach cua Animal"<<endl;
		cout<<"24.Kiem tra muc do ve sinh cua Animal"<<endl;
		cout<<"26.Exit the program."<<endl;
		cout<<"Choose your option: "; cin>>choice;
		switch(choice) {
			case 1:
			{
				inputAnimal();
				break;
			}
			case 2:
			{
				outputAnimal();
				break;
			}
			case 3:
			{
				editInfoAnimal();
				break;
			}	
			case 4:
        	{
        		deleteAnimal();
        		break;
        	}
		    case 5:
		    {
		    	searchAnimalByBirthYear();
		        break;
		    }
		    case 6:
		    {
		    	assessTemperament();
		    	break;
		    }
		    case 7:
		    {
		    	Animal* animal = findById();
		    	animal->output();
		        break;
		    }
		    case 8:
		    {
		    	searchAnimalBySpecies();
		        break;
		    }
		    case 9:
		    {
		        caculateBMI() ;   
		        break;
		    }
		    case 10:
		    {
		        assessLevelOfThreat();    
		        break;
		    }
		    case 11:
		    {
		        checkAnimalSize();    
		        break;
		    }
		    case 12:
		    {
		        sumAnimalFourLegs();    
		        break;
		    }
		    case 13:
		    {
		        sumAnimalFly() ;   
		        break;
		    }
		    case 14:
		    {
		        exportToFile()  ;  
		        break;
		    }
		    case 15:
		    {
		        minHeightOfAnimal();    
		        break;
		    }
		    case 16:
		    {
		        assessLevelOfExtinction();    
		        break;
		    }
		    case 17:
		    {
		        assessReproductiveCycle();
		        break;
		    }
		    case 18:
		    {
		        identifyHabitat();    
		        break;
		    }
		    case 19:
		    {
		        maxWeightOfAnimal();    
		        break;
		    }
		    case 20:
		    {
		        maxHeightOfAnimal() ;   
		        break;
		    }
		    case 21:
		    {
		        searchAnimalByNationality();    
		        break;
		    }
		    case 22:
		    {
		        averageHeightOfDogsAndCats();    
		        break;
		    }
		    case 23:
		    {
		        assessTemperament();    
		        break;
		    }
		    case 24:
		    {
		        checkHygieneLevel();
		        break;
		    }
		    case 25:
		    {
		        searchBySpecificFoodType()  ;  
		        break;
		    }
			case 26:
			{
				flag = false ;
				cout<<"Exiting the program..."<<endl;
			}
		}	
	}while(flag);
}
void ListOfAnimal::addNewAnimal(Animal* animal){
	animals.push_back(animal);
}
void ListOfAnimal::inputAnimal(){
	int count ;
	cout<<"Nhap so luong Animal:"; cin>>count;
	for(int i=0 ;i<count;i++){
		cout<<"---Danh sach Animal---"<<endl;
		cout<<"1.Them moi Cat"<<endl;
		cout<<"2.Them moi Dog"<<endl;
		cout<<"3.Them moi Bird"<<endl;
		cout<<"4.Return main menu."<<endl;
		cout<<"Choose option:"; int choice; cin>>choice;
		switch(choice){
			case 1: {
				Cat* cat = new Cat();
				cat->input();
				addNewAnimal(cat);
				break;
			}
			case 2: {
				Dog* dog = new Dog();
				dog->input();
				addNewAnimal(dog);
				break;
			}
			case 3:{
				Bird* bird = new Bird();
				bird->input();
				addNewAnimal(bird);
				break;
			}
			case 4:{
				mainMenu();
				break;
			}
			default:{
				cout<<"Does not exist!"<<endl;
				mainMenu();	
				break;
			}
		}
	}	
	mainMenu();
}
void ListOfAnimal::outputAnimal(){
	cout<<"---List Of Animal---"<<endl;
	for(Animal* animal:animals){
		if(Dog* dog = dynamic_cast<Dog*>(animal)){
			dog->output();
		}else if (Cat* cat = dynamic_cast<Cat*>(animal)){
			cat->output();
		}else if(Bird* bird = dynamic_cast<Bird*>(animal)){
			bird->output();
		}
	}
}
void ListOfAnimal::searchAnimalByBirthYear(){
	vector<Animal*> birthYearAnimals ;
	int searchBirthYear ;
	cout<<"Enter search birthYear"; cin>>searchBirthYear ;
	for(Animal* animal:animals){
		if(animal->getBirthYear() == searchBirthYear){
			birthYearAnimals.push_back(animal);
		}
	}
	cout<<"---List Of Animal---"<<endl;
	for(Animal* animal:birthYearAnimals){
		if(Dog* dog = dynamic_cast<Dog*>(animal)){
			dog->output();
		}else if (Cat* cat = dynamic_cast<Cat*>(animal)){
			cat->output();
		}else if(Bird* bird = dynamic_cast<Bird*>(animal)){
			bird->output();
		}
	}
}
Animal* ListOfAnimal::findById(){
	string findId;
	cout<<"Enter find ID:"; cin.ignore(); getline(cin,findId);
	for(Animal* animal:animals){
		if(animal->getId() == findId){
			return animal;
		}
	}
	return nullptr;
}
void ListOfAnimal::assessLevelOfExtinction(){
	Animal* animal = findById();
	animal->output();
	if(animal->getRarityLevel()==1){
		cout<<"-Endangered-"<<endl;
	}else if (animal->getRarityLevel()==2){
		cout<<"-Extinct in the wild-"<<endl;
	}else if(animal->getRarityLevel()==3){
		cout<<"-Extinct-"<<endl;
	}
}
void ListOfAnimal::assessLevelOfThreat(){
	Animal* animal = findById();
	animal->output();
	if(animal->getThreatLevel()==1){
		cout<<"-No threat-"<<endl;
	}else if(animal->getThreatLevel()==2){
		cout<<"-Slight threat-"<<endl;
	}else if(animal->getThreatLevel()==3){
		cout<<"-Very Threatening-"<<endl;
	}
}
void ListOfAnimal::identifyHabitat(){
	Animal* animal = findById();
	animal->output();
	if (animal->getHabitat()=="can"){
		cout<<"-Animal lives on land-"<<endl;
	}else if (animal->getHabitat()=="nuoc"){
		cout<<"-Animal lives underwater-"<<endl;
	}else if (animal->getHabitat()=="troi"){
		cout<<"-Animal lives in the sky-"<<endl;
	}
}
void ListOfAnimal::caculateBMI(){
	Animal* animal = findById();
	animal->output();
	float weight = animal->getWeight();
	float height = animal->getHeight();
	float BMI = weight / pow(height,3);
	
	if (BMI < 3) {
        cout << "Underweight" << endl;
    } else if (BMI >= 3 && BMI <= 5) {
        cout << "Normal weight" << endl;
    } else if (BMI > 5 && BMI <= 7) {
        cout << "Overweight" << endl;
    } else {
        cout << "Obese" << endl;
    }
}
void ListOfAnimal::maxWeightOfAnimal(){
	if(animals.empty()){
		cout<<"Don't have any animals in list !"<<endl;
	}
	Animal* animalWithHighestWeight = animals[0];
	for (size_t i = 1; i < animals.size(); i++) {
        if (animals[i]->getWeight() > animalWithHighestWeight->getWeight()) {
            animalWithHighestWeight = animals[i];
        }
    }
    cout<<"Animal has highest Weight :"<<animalWithHighestWeight->getWeight()<<endl;
    animalWithHighestWeight->output();
}
void ListOfAnimal::maxHeightOfAnimal(){
	if(animals.empty()){
		cout<<"Don't have any animals in list !"<<endl;
	}
	Animal* animalWithHighestHeight = animals[0];
	for (size_t i = 1; i < animals.size(); i++) {
        if (animals[i]->getHeight() > animalWithHighestHeight->getHeight()) {
            animalWithHighestHeight = animals[i];
        }
    }
    cout<<"Animal has highest Height"<<animalWithHighestHeight->getHeight()<<endl;
    animalWithHighestHeight->output();
}
void ListOfAnimal::deleteAnimal(){
    Animal* foundAnimal = findById();
    if (foundAnimal)
    {
        auto it = remove(animals.begin(), animals.end(), foundAnimal);
        animals.erase(it);
        delete foundAnimal;
        cout << "Animal deleted successfully." << endl;
    }
    else
    {
        cout << "Animal not found!" << endl;
    }
}
void ListOfAnimal::sortByBirthYear(){
	vector<Animal*> animalsByBirthYear;
	animalsByBirthYear.assign(animals.begin(), animals.end());
    sort(animalsByBirthYear.begin(), animalsByBirthYear.end(), [](Animal* a, Animal* b)
    {
        return a->getBirthYear() < b->getBirthYear();
    });
    cout << "---List Of Animal sort by birthYear---" << endl;
    for(Animal* animal:animalsByBirthYear)
    {
        if(Dog* dog = dynamic_cast<Dog*>(animal))
        {
            dog->output();
        }
        else if (Cat* cat = dynamic_cast<Cat*>(animal))
        {
            cat->output();
        }
        else if(Bird* bird = dynamic_cast<Bird*>(animal))
        {
            bird->output();
        }
    }
}
void ListOfAnimal::checkAnimalSize(){
    Animal* foundAnimal = findById();
    if (foundAnimal)
    {
        string animalType = foundAnimal->getFurType();
        double weight = foundAnimal->getWeight();

        string sizeCategory;
        if (animalType == "bird")
        {
            if (weight >= 1 && weight <= 2)
                sizeCategory = "Medium";
            else if (weight > 2 && weight <= 3)
                sizeCategory = "Big";
        }
        else if (animalType == "cat")
        {
            if (weight >= 3 && weight <= 5)
                sizeCategory = "Normal";
            else if (weight > 5 && weight <= 9)
                sizeCategory = "Big";
        }
        else if (animalType == "dog")
        {
            if (weight >= 7 && weight <= 15)
                sizeCategory = "Normal";
            else if (weight > 15 && weight <= 25)
                sizeCategory = "Big";
        }
        if (!sizeCategory.empty())
        {
            cout << "The animal with ID " << foundAnimal->getId() << " is categorized as: " << sizeCategory << endl;
        }
        else
        {
            cout << "The size category for this animal is not defined." << endl;
        }
    }
    else
    {
        cout << "Animal not found!" << endl;
    }
}
void ListOfAnimal::sumAnimalFourLegs(){
    int sumFourLegs=0;
    cout<<"---List Of Animal---"<<endl;
    for(Animal* animal:animals)
    {
        if(Dog* dog = dynamic_cast<Dog*>(animal))
        {
            sumFourLegs+=1;
        }
        else if (Cat* cat = dynamic_cast<Cat*>(animal))
        {
            sumFourLegs+=1;
        }
    }
    cout<<"Sum of animal four legs: "<<sumFourLegs<<endl;
}
void ListOfAnimal::sumAnimalFly(){
    int sumBirdCanFly=0;
    for(Animal* animal:animals)
    {
        if(Bird* bird = dynamic_cast<Bird*>(animal))
        {
           sumBirdCanFly+=1;
        }
    }
    cout<<"Sum of Bird can fly: "<<sumBirdCanFly<<endl;
}
void ListOfAnimal::averageHeightOfDogsAndCats(){
    double totalHeight = 0.0;
    int count = 0;
    cout << "--List of average Height Dog and Cat---" << endl;
    for (Animal* animal : animals)
    {
        if (Dog* dog = dynamic_cast<Dog*>(animal))
        {
            totalHeight += dog->getHeight();  
            count++;
        }
        else if (Cat* cat = dynamic_cast<Cat*>(animal))
        {
            totalHeight += cat->getHeight();  
            count++;
        }
    }

    if (count > 0)
    {
        double averageHeight = totalHeight / count;
        cout << "Average height of dogs and cats: " << averageHeight << endl;
    }
    else
    {
        cout << "No dogs or cats in the list." << endl;
    }
}
void ListOfAnimal::searchAnimalBySpecies() {
    string searchSpecies;
    cout << "Enter species to search: ";
    cin.ignore();
    getline(cin, searchSpecies);

    vector<Animal*> speciesAnimals;
    for (Animal* animal : animals) {
        if (animal->getSpecies() == searchSpecies) {
            speciesAnimals.push_back(animal);
        }
    }

    if (speciesAnimals.empty()) {
        cout << "No animals found for the species: " << searchSpecies << endl;
    } else {
        cout << "--- Animals of species " << searchSpecies << " ---" << endl;
        for (Animal* animal : speciesAnimals) {
            if (Dog* dog = dynamic_cast<Dog*>(animal)) {
                dog->output();
            } else if (Cat* cat = dynamic_cast<Cat*>(animal)) {
                cat->output();
            } else if (Bird* bird = dynamic_cast<Bird*>(animal)) {
                bird->output();
            }
        }
    }
}
void ListOfAnimal::exportToFile() {
    ofstream outFile("animals.txt");
    if (!outFile) {
        cout << "Error opening file for writing!" << endl;
        return;
    }
    for (Animal* animal : animals) {
        outFile << "ID: " << animal->getId() << endl;
        outFile << "Species: " << animal->getSpecies() << endl;
        outFile << "Age: " << animal->getAge() << endl;
        outFile << "Birth Year: " << animal->getBirthYear() << endl;
        outFile << "Habitat: " << animal->getHabitat() << endl;
        outFile << "Hobbies: " << animal->getHobbies() << endl;
        outFile << "Sound: " << animal->getSound() << endl;
        outFile << "Threat Level: " << animal->getThreatLevel() << endl;
        outFile << "Population: " << animal->getPopulation() << endl;
        outFile << "Reproduction Rate: " << animal->getReproductionRate() << endl;
        outFile << "Gender: " << (animal->getGender() ? "Male" : "Female") << endl;
        outFile << "Death Year: " << animal->getDeathYear() << endl;
        outFile << "Food Type: " << animal->getFoodType() << endl;
        outFile << "Color: " << animal->getColor() << endl;
        outFile << "Vaccine Reaction: " << (animal->getVaccineReaction() ? "Yes" : "No") << endl;
        outFile << "Reproductive Characteristic: " << animal->getReproductiveCharacteristic() << endl;
        outFile << "Nationality: " << animal->getNationality() << endl;
        outFile << "Fur Type: " << animal->getFurType() << endl;
        outFile << "Body Structure: " << animal->getBodyStructure() << endl;
        outFile << "Weight: " << animal->getWeight() << endl;
        outFile << "Height: " << animal->getHeight() << endl;
        outFile << "Health Status: " << animal->getHealthStatus() << endl;
        outFile << "Feeding Frequency: " << animal->getFeedingFrequency() << endl;
        outFile << "Diseases: " << animal->getDiseases() << endl;
        outFile << "Personality: " << animal->getPersonality() << endl;
        outFile << "Reproductive Health: " << animal->getReproductiveHealth() << endl;
        outFile << "Rarity Level: " << animal->getRarityLevel() << endl;
        outFile << "Mood Status: " << animal->getMoodStatus() << endl;
        outFile << "Body Temperature: " << animal->getBodyTemperature() << endl;
        outFile << endl;
    }
    outFile.close();
    cout << "Animal data has been exported to animals.txt" << endl;
}
void ListOfAnimal::searchAnimalByNationality() {
    string searchNationality;
    cout << "Enter nationality to search: ";
    cin.ignore();
    getline(cin, searchNationality);

    vector<Animal*> nationalityAnimals;
    for (Animal* animal : animals) {
        if (animal->getNationality() == searchNationality) {
            nationalityAnimals.push_back(animal);
        }
    }

    if (nationalityAnimals.empty()) {
        cout << "No animals found for the nationality: " << searchNationality << endl;
    } else {
        cout << "--- Animals of nationality " << searchNationality << " ---" << endl;
        for (Animal* animal : nationalityAnimals) {
            if (Dog* dog = dynamic_cast<Dog*>(animal)) {
                dog->output();
            } else if (Cat* cat = dynamic_cast<Cat*>(animal)) {
                cat->output();
            } else if (Bird* bird = dynamic_cast<Bird*>(animal)) {
                bird->output();
            }
        }
    }
}
void ListOfAnimal::editInfoAnimal(){
	Animal* editAnimal= findById();
	if(Dog* dog = dynamic_cast<Dog*>(editAnimal)){
			infoDog(dog);
	}else if (Cat* cat = dynamic_cast<Cat*>(editAnimal)){
			infoCat(cat);
	}else if(Bird* bird = dynamic_cast<Bird*>(editAnimal)){
			infoBird(bird);
	}
}
void ListOfAnimal::infoDog(Dog* dog){
	bool flag = true;
	do{
		int choice ;
		cout<<"---List Of Attributes---"<<endl;
		cout<<"1.species"<<endl;
		cout<<"2.age"<<endl;
		cout<<"3.birth year"<<endl;
		cout<<"4.habitat"<<endl;
		cout<<"5.hobbies"<<endl;
		cout<<"6.sound"<<endl;
		cout<<"7.threat level"<<endl;
		cout<<"8.population"<<endl;
		cout<<"9.reproduction rate"<<endl;
		cout<<"10.gender"<<endl;
		cout<<"11.death year"<<endl;
		cout<<"12.food type"<<endl;
		cout<<"13.color"<<endl;
		cout<<"14.vaccine reaction"<<endl;
		cout<<"15.reproductive Characteristic"<<endl;
		cout<<"16.nationality"<<endl;
		cout<<"17.fur type"<<endl;
		cout<<"18.body Structure"<<endl;
		cout<<"19.weight"<<endl;
		cout<<"20.height"<<endl;
		cout<<"21.health status"<<endl;
		cout<<"22.feeding frequency"<<endl;
		cout<<"23.diseases"<<endl;
		cout<<"24.personality"<<endl;
		cout<<"25.reproductive Health"<<endl;
		cout<<"26.rarityLevel"<<endl;
		cout<<"27.mood status"<<endl;
		cout<<"28.body temperature"<<endl;
		cout<<"29.breed"<<endl;
		cout<<"30.trained"<<endl;
		cout<<"31.tail Length"<<endl;
		cout<<"32.fur Change Frequency"<<endl;
		cout<<"33.IQ"<<endl;
		cout<<"34.Return main menu"<<endl;
		cout<<"Choose attribute update:"; cin>>choice;
		switch(choice){
			case 1:
			    {
			    	string newSpecies;
			    	cout<<"Enter new species: "; cin.ignore();
			    	getline(cin,newSpecies);
			        dog->setSpecies(newSpecies);
			        break;
			    }
			case 2:
			    {
			        int newAge ;
			        cout<<"Enter new age: "; cin.ignore();
			        cin>>newAge;
			        dog->setAge(newAge);
			        break;
			    }
			case 3:
			    {
			        int newBirthYear ;
			        cout<<"Enter new birth year: "; 
			        cin>>newBirthYear;
			        dog->setBirthYear(newBirthYear);
			        break;
			    }
			case 4:
			    {
			        string newHabitat;
			        cout<<"Enter new habitat: "; cin.ignore();
			        getline(cin,newHabitat);
			        dog->setHabitat(newHabitat);
			        break;
			    }
			case 5:
			    {
			        string newHobbies;
			        cout<<"Enter new hobbies: "; cin.ignore();
			        getline(cin,newHobbies);
			        dog->setHobbies(newHobbies);
			        break;
			    }
			case 6:
			    {
			        string newSound;
			        cout<<"Enter new sound: "; cin.ignore();
			        getline(cin,newSound);
			        dog->setSound(newSound);
			        break;
			    }
			case 7:
			    {
			        int newThreatLevel;
			        cout<<"Enter new threat Level: ";  
			        cin>>newThreatLevel;
			        dog->setThreatLevel(newThreatLevel);
			        break;
			    }
			case 8:
			    {
			        int newPopulation ;
			        cout<<"Enter new population: "; 
			        cin>>newPopulation;
			        dog->setPopulation(newPopulation);
			        break;
			    }
			case 9:
			    {
			        int newreproductionRate ;
			        cout<<"Enter new reproduction Rate: ";
			        cin>>newreproductionRate;
			        dog->setReproductionRate(newreproductionRate);
			        break;
			    }
			case 10:
			    {
			        bool newGender ;
			        cout<<"Enter new gender (0 for female, 1 for male): ";
			        cin>>newGender;
			        dog->setGender(newGender);
			        break;
			    }
			case 11:
			    {
			    	int newDeathYear;
			        cout << "Enter new death year: ";
	        		cin >> newDeathYear;
	        		dog->setDeathYear(newDeathYear);
			        break;
			    }
			case 12:
			    {
			    	string newFoodType;
			        cout << "Enter new food type: "; cin.ignore();
	        		getline(cin, newFoodType);
	        		dog->setFoodType(newFoodType);
			        break;
			    }
			case 13:
			    {
			        string newColor;
			        cout << "Enter new color: "; cin.ignore();
	        		getline(cin, newColor);
	        		dog->setColor(newColor);
			        break;
			    }
			
			case 14:
			    {
			        bool newVaccineReaction;
			        cout << "Enter new vaccine reaction (0 for no, 1 for yes): ";
	        		cin >> newVaccineReaction;
	        		dog->setVaccineReaction(newVaccineReaction);
			        break;
			    }
			
			case 15:
			    {
			    	string newReproductiveCharacteristic;
			        cout << "Enter reproductive characteristic: "; cin.ignore();
	        		getline(cin, newReproductiveCharacteristic);
	        		dog->setReproductiveCharacteristic(newReproductiveCharacteristic);
			        break;
			    }
			
			case 16:
			    {
			    	string newNationality;
			        cout << "Enter new nationality: "; cin.ignore(); 
	        		getline(cin, newNationality);
	        		dog->setNationality(newNationality);
			        break;
			    }
			
			case 17:
			    {
			    	string newFurTupe;
			        cout << "Enter new fur type: "; cin.ignore();
	        		getline(cin, newFurTupe);
	        		dog->setFurType(newFurTupe);
			        break;
			    }
			
			case 18:
			    {	string newBodyStructure ;
			        cout << "Enter body structure: "; cin.ignore();
	        		getline(cin, newBodyStructure);
	        		dog->setBodyStructure(newBodyStructure);
			        break;
			    }
			
			case 19:
			    {
			        float newWeight;
			        cout << "Enter new weight: ";
	        		cin >> newWeight;
	        		dog->setWeight(newWeight);
			        break;
			    }
			
			case 20:
			    {
			    	float newHeight;
			        cout << "Enter new height: ";
	        		cin >> newHeight;
	        		dog->setHeight(newHeight);
			        break;
			    }
			
			case 21:
			    {
			    	string newHealthStatus;
			        cout << "Enter new health status: "; cin.ignore();
	        		getline(cin, newHealthStatus);
	        		dog->setHealthStatus(newHealthStatus);
			        break;
			    }
			
			case 22:
			    {
			    	int newFeedingFrequency ;
			        cout << "Enter new feeding frequency: ";
	        		cin >> newFeedingFrequency;
	        		dog->setFeedingFrequency(newFeedingFrequency);
			        break;
			    }
			
			case 23:
			    {
			    	string newDiseases;
			        cout << "Enter new diseases: "; cin.ignore();
	        		getline(cin, newDiseases);
	        		dog->setDiseases(newDiseases);
			        break;
			    }
			
			case 24:
			    {
			    	string newPersonality;
			        cout << "Enter new personality: "; cin.ignore();
	        		getline(cin, newPersonality);
	        		dog->setPersonality(newPersonality);
			        break;
			    }
			
			case 25:
			    {
			    	string newReproductiveHealth;
			        cout << "Enter new reproductive health: "; cin.ignore();
	        		getline(cin, newReproductiveHealth);
	        		dog->setReproductiveHealth(newReproductiveHealth);
			        break;
			    }
			
			case 26:
			    {
			    	int newRarityLevel;
			        cout << "Enter new rarity level: ";
	        		cin >> newRarityLevel;
	        		dog->setRarityLevel(newRarityLevel);
			        break;
			    }
			
			case 27:
			    {
			    	string newMoodStatus ;
			        cout << "Enter new mood status: "; cin.ignore();
	        		getline(cin, newMoodStatus);
	        		dog->setMoodStatus(newMoodStatus);
			        break;
			    }
			
			case 28:
			    {
			    	int newBodyTemperature;
			        cout << "Enter new body temperature: ";
	        		cin >> newBodyTemperature;
	        		dog->setBodyTemperature(newBodyTemperature);
			        break;
			    }
			
			case 29:
			    {
			    	string newBreed;
			        cout << "Enter new breed: "; cin.ignore();
        			getline(cin, newBreed);
        			dog->setBreed(newBreed);
			        break;
			    }
			
			case 30:
			    {
			    	bool newTrained ;
			        cout << "Enter new the dog trained? (0 for false, 1 for true): ";
        			cin  >> newTrained;
        			dog->setTrained(newTrained);
			        break;
			    }
			
			case 31:
			    {
			    	float newTailLength ;
			        cout << "Enter new tail length: ";
        			cin >> newTailLength;
        			dog->setTailLength(newTailLength);
			        break;
			    }
			
			case 32:
			    {
			    	int newFurChangeFrequency ;
			        cout << "Enter new fur change frequency: ";
        			cin >> newFurChangeFrequency;
        			dog->setFurChangeFrequency(newFurChangeFrequency);
			        break;
			    }
			
			case 33:
			    {
			    	int newIQ;
			        cout << "Enter new dog's IQ: ";
        			cin >> newIQ;
        			dog->setIQ(newIQ);
			        break;
			    }
			case 34:
				{
					flag = false;
					mainMenu();
					break;
				}
			default:
				{
				cout<<"Does not exist!"<<endl;
				break;
				}
			}
		}while(flag);
	}
void ListOfAnimal::infoCat(Cat* cat){
	bool flag = true;
	do{
		int choice ;
		cout<<"---List Of Attributes---"<<endl;
		cout<<"1.species"<<endl;
		cout<<"2.age"<<endl;
		cout<<"3.birth year"<<endl;
		cout<<"4.habitat"<<endl;
		cout<<"5.hobbies"<<endl;
		cout<<"6.sound"<<endl;
		cout<<"7.threat level"<<endl;
		cout<<"8.population"<<endl;
		cout<<"9.reproduction rate"<<endl;
		cout<<"10.gender"<<endl;
		cout<<"11.death year"<<endl;
		cout<<"12.food type"<<endl;
		cout<<"13.color"<<endl;
		cout<<"14.vaccine reaction"<<endl;
		cout<<"15.reproductive Characteristic"<<endl;
		cout<<"16.nationality"<<endl;
		cout<<"17.fur type"<<endl;
		cout<<"18.body Structure"<<endl;
		cout<<"19.weight"<<endl;
		cout<<"20.height"<<endl;
		cout<<"21.health status"<<endl;
		cout<<"22.feeding frequency"<<endl;
		cout<<"23.diseases"<<endl;
		cout<<"24.personality"<<endl;
		cout<<"25.reproductive Health"<<endl;
		cout<<"26.rarityLevel"<<endl;
		cout<<"27.mood status"<<endl;
		cout<<"28.body temperature"<<endl;
		cout<<"29.eye Color"<<endl;
		cout<<"30.ear Type"<<endl;
		cout<<"31.claw Sharpness"<<endl;
		cout<<"32.can Meow"<<endl;
		cout<<"33.affection Level"<<endl;
		cout<<"34.hunting Habit"<<endl;
		cout<<"35.Return main menu"<<endl;
		cout<<"Choose attribute update:"; cin>>choice;
		switch(choice){
			case 1:
			    {
			    	string newSpecies;
			    	cout<<"Enter new species: "; cin.ignore();
			    	getline(cin,newSpecies);
			        cat->setSpecies(newSpecies);
			        break;
			    }
			case 2:
			    {
			        int newAge ;
			        cout<<"Enter new age: "; cin.ignore();
			        cin>>newAge;
			        cat->setAge(newAge);
			        break;
			    }
			case 3:
			    {
			        int newBirthYear ;
			        cout<<"Enter new birth year: "; 
			        cin>>newBirthYear;
			        cat->setBirthYear(newBirthYear);
			        break;
			    }
			case 4:
			    {
			        string newHabitat;
			        cout<<"Enter new habitat: "; cin.ignore();
			        getline(cin,newHabitat);
			        cat->setHabitat(newHabitat);
			        break;
			    }
			case 5:
			    {
			        string newHobbies;
			        cout<<"Enter new hobbies: "; cin.ignore();
			        getline(cin,newHobbies);
			        cat->setHobbies(newHobbies);
			        break;
			    }
			case 6:
			    {
			        string newSound;
			        cout<<"Enter new sound: "; cin.ignore();
			        getline(cin,newSound);
			        cat->setSound(newSound);
			        break;
			    }
			case 7:
			    {
			        int newThreatLevel;
			        cout<<"Enter new threat Level: ";  
			        cin>>newThreatLevel;
			        cat->setThreatLevel(newThreatLevel);
			        break;
			    }
			case 8:
			    {
			        int newPopulation ;
			        cout<<"Enter new population: "; 
			        cin>>newPopulation;
			        cat->setPopulation(newPopulation);
			        break;
			    }
			case 9:
			    {
			        int newreproductionRate ;
			        cout<<"Enter new reproduction Rate: ";
			        cin>>newreproductionRate;
			        cat->setReproductionRate(newreproductionRate);
			        break;
			    }
			case 10:
			    {
			        bool newGender ;
			        cout<<"Enter new gender (0 for female, 1 for male): ";
			        cin>>newGender;
			        cat->setGender(newGender);
			        break;
			    }
			case 11:
			    {
			    	int newDeathYear;
			        cout << "Enter new death year: ";
	        		cin >> newDeathYear;
	        		cat->setDeathYear(newDeathYear);
			        break;
			    }
			case 12:
			    {
			    	string newFoodType;
			        cout << "Enter new food type: "; cin.ignore();
	        		getline(cin, newFoodType);
	        		cat->setFoodType(newFoodType);
			        break;
			    }
			case 13:
			    {
			        string newColor;
			        cout << "Enter new color: "; cin.ignore();
	        		getline(cin, newColor);
	        		cat->setColor(newColor);
			        break;
			    }
			
			case 14:
			    {
			        bool newVaccineReaction;
			        cout << "Enter new vaccine reaction (0 for no, 1 for yes): ";
	        		cin >> newVaccineReaction;
	        		cat->setVaccineReaction(newVaccineReaction);
			        break;
			    }
			
			case 15:
			    {
			    	string newReproductiveCharacteristic;
			        cout << "Enter reproductive characteristic: "; cin.ignore();
	        		getline(cin, newReproductiveCharacteristic);
	        		cat->setReproductiveCharacteristic(newReproductiveCharacteristic);
			        break;
			    }
			
			case 16:
			    {
			    	string newNationality;
			        cout << "Enter new nationality: "; cin.ignore(); 
	        		getline(cin, newNationality);
	        		cat->setNationality(newNationality);
			        break;
			    }
			
			case 17:
			    {
			    	string newFurTupe;
			        cout << "Enter new fur type: "; cin.ignore();
	        		getline(cin, newFurTupe);
	        		cat->setFurType(newFurTupe);
			        break;
			    }
			
			case 18:
			    {	string newBodyStructure ;
			        cout << "Enter body structure: "; cin.ignore();
	        		getline(cin, newBodyStructure);
	        		cat->setBodyStructure(newBodyStructure);
			        break;
			    }
			
			case 19:
			    {
			        float newWeight;
			        cout << "Enter new weight: ";
	        		cin >> newWeight;
	        		cat->setWeight(newWeight);
			        break;
			    }
			
			case 20:
			    {
			    	float newHeight;
			        cout << "Enter new height: ";
	        		cin >> newHeight;
	        		cat->setHeight(newHeight);
			        break;
			    }
			
			case 21:
			    {
			    	string newHealthStatus;
			        cout << "Enter new health status: "; cin.ignore();
	        		getline(cin, newHealthStatus);
	        		cat->setHealthStatus(newHealthStatus);
			        break;
			    }
			
			case 22:
			    {
			    	int newFeedingFrequency ;
			        cout << "Enter new feeding frequency: ";
	        		cin >> newFeedingFrequency;
	        		cat->setFeedingFrequency(newFeedingFrequency);
			        break;
			    }
			
			case 23:
			    {
			    	string newDiseases;
			        cout << "Enter new diseases: "; cin.ignore();
	        		getline(cin, newDiseases);
	        		cat->setDiseases(newDiseases);
			        break;
			    }
			
			case 24:
			    {
			    	string newPersonality;
			        cout << "Enter new personality: "; cin.ignore();
	        		getline(cin, newPersonality);
	        		cat->setPersonality(newPersonality);
			        break;
			    }
			
			case 25:
			    {
			    	string newReproductiveHealth;
			        cout << "Enter new reproductive health: "; cin.ignore();
	        		getline(cin, newReproductiveHealth);
	        		cat->setReproductiveHealth(newReproductiveHealth);
			        break;
			    }
			
			case 26:
			    {
			    	int newRarityLevel;
			        cout << "Enter new rarity level: ";
	        		cin >> newRarityLevel;
	        		cat->setRarityLevel(newRarityLevel);
			        break;
			    }
			
			case 27:
			    {
			    	string newMoodStatus ;
			        cout << "Enter new mood status: "; cin.ignore();
	        		getline(cin, newMoodStatus);
	        		cat->setMoodStatus(newMoodStatus);
			        break;
			    }
			
			case 28:
			    {
			    	int newBodyTemperature;
			        cout << "Enter new body temperature: ";
	        		cin >> newBodyTemperature;
	        		cat->setBodyTemperature(newBodyTemperature);
			        break;
			    }
			
			case 29:
			    {
			    	string newEyeColor ;
			    	cout << "Enter new eye color: "; cin.ignore();
        			getline(cin, newEyeColor);
        			cat->setEyeColor(newEyeColor);
			        break;
			    }
			
			case 30:
			    {
			    	string newEarType;
			    	cout << "Enter new ear type: "; cin.ignore();
        			getline(cin, newEarType);
        			cat->setEarType(newEarType);
			        break;
			    }
			
			case 31:
			    {
			    	int newClawSharpness ;
			    	cout << "Enter new claw sharpness (1-10): ";
        			cin >> newClawSharpness;
        			cat->setClawSharpness(newClawSharpness);
			        break;
			    }
			
			case 32:
			    {
			    	bool newCanMeow ;
			    	cout << "Can the cat meow? (0 for false, 1 for true): ";
        			cin >>  newCanMeow;
        			cat->setCanMeow(newCanMeow);
			        break;
			    }
			
			case 33:
			    {
			    	int newAffectionLevel ;
			    	cout << "Enter affection level (1-10): ";
        			cin >> newAffectionLevel;
        			cat->setAffectionLevel(newAffectionLevel);
			        break;
			    }
			case 34:
				{	int newHuntingHabit;
					cout << "Enter hunting habit level (1-10): ";
        			cin >> newHuntingHabit;
        			cat->setHuntingHabit(newHuntingHabit);
					break;
				}    
			case 35:
				{
					flag = false;
					mainMenu();
					break;
				}
			default:
				{
				cout<<"Does not exist!"<<endl;
				break;
				}
			}
		}while(flag);
	}
void ListOfAnimal::infoBird(Bird* bird){
	bool flag = true;
	do{
		int choice ;
		cout<<"---List Of Attributes---"<<endl;
		cout<<"1.species"<<endl;
		cout<<"2.age"<<endl;
		cout<<"3.birth year"<<endl;
		cout<<"4.habitat"<<endl;
		cout<<"5.hobbies"<<endl;
		cout<<"6.sound"<<endl;
		cout<<"7.threat level"<<endl;
		cout<<"8.population"<<endl;
		cout<<"9.reproduction rate"<<endl;
		cout<<"10.gender"<<endl;
		cout<<"11.death year"<<endl;
		cout<<"12.food type"<<endl;
		cout<<"13.color"<<endl;
		cout<<"14.vaccine reaction"<<endl;
		cout<<"15.reproductive Characteristic"<<endl;
		cout<<"16.nationality"<<endl;
		cout<<"17.fur type"<<endl;
		cout<<"18.body Structure"<<endl;
		cout<<"19.weight"<<endl;
		cout<<"20.height"<<endl;
		cout<<"21.health status"<<endl;
		cout<<"22.feeding frequency"<<endl;
		cout<<"23.diseases"<<endl;
		cout<<"24.personality"<<endl;
		cout<<"25.reproductive Health"<<endl;
		cout<<"26.rarityLevel"<<endl;
		cout<<"27.mood status"<<endl;
		cout<<"28.body temperature"<<endl;
		cout<<"29.migration Pattern"<<endl;
		cout<<"30.nesting Habit"<<endl;
		cout<<"31.vocalization"<<endl;
		cout<<"32.wing span"<<endl;
		cout<<"33.hunting Habit"<<endl;
		cout<<"34.Return main menu"<<endl;
		cout<<"Choose attribute update:"; cin>>choice;
		switch(choice){
			case 1:
			    {
			    	string newSpecies;
			    	cout<<"Enter new species: "; cin.ignore();
			    	getline(cin,newSpecies);
			        bird->setSpecies(newSpecies);
			        break;
			    }
			case 2:
			    {
			        int newAge ;
			        cout<<"Enter new age: "; cin.ignore();
			        cin>>newAge;
			        bird->setAge(newAge);
			        break;
			    }
			case 3:
			    {
			        int newBirthYear ;
			        cout<<"Enter new birth year: "; 
			        cin>>newBirthYear;
			        bird->setBirthYear(newBirthYear);
			        break;
			    }
			case 4:
			    {
			        string newHabitat;
			        cout<<"Enter new habitat: "; cin.ignore();
			        getline(cin,newHabitat);
			        bird->setHabitat(newHabitat);
			        break;
			    }
			case 5:
			    {
			        string newHobbies;
			        cout<<"Enter new hobbies: "; cin.ignore();
			        getline(cin,newHobbies);
			        bird->setHobbies(newHobbies);
			        break;
			    }
			case 6:
			    {
			        string newSound;
			        cout<<"Enter new sound: "; cin.ignore();
			        getline(cin,newSound);
			        bird->setSound(newSound);
			        break;
			    }
			case 7:
			    {
			        int newThreatLevel;
			        cout<<"Enter new threat Level: ";  
			        cin>>newThreatLevel;
			        bird->setThreatLevel(newThreatLevel);
			        break;
			    }
			case 8:
			    {
			        int newPopulation ;
			        cout<<"Enter new population: "; 
			        cin>>newPopulation;
			        bird->setPopulation(newPopulation);
			        break;
			    }
			case 9:
			    {
			        int newreproductionRate ;
			        cout<<"Enter new reproduction Rate: ";
			        cin>>newreproductionRate;
			        bird->setReproductionRate(newreproductionRate);
			        break;
			    }
			case 10:
			    {
			        bool newGender ;
			        cout<<"Enter new gender (0 for female, 1 for male): ";
			        cin>>newGender;
			        bird->setGender(newGender);
			        break;
			    }
			case 11:
			    {
			    	int newDeathYear;
			        cout << "Enter new death year: ";
	        		cin >> newDeathYear;
	        		bird->setDeathYear(newDeathYear);
			        break;
			    }
			case 12:
			    {
			    	string newFoodType;
			        cout << "Enter new food type: "; cin.ignore();
	        		getline(cin, newFoodType);
	        		bird->setFoodType(newFoodType);
			        break;
			    }
			case 13:
			    {
			        string newColor;
			        cout << "Enter new color: "; cin.ignore();
	        		getline(cin, newColor);
	        		bird->setColor(newColor);
			        break;
			    }
			
			case 14:
			    {
			        bool newVaccineReaction;
			        cout << "Enter new vaccine reaction (0 for no, 1 for yes): ";
	        		cin >> newVaccineReaction;
	        		bird->setVaccineReaction(newVaccineReaction);
			        break;
			    }
			
			case 15:
			    {
			    	string newReproductiveCharacteristic;
			        cout << "Enter reproductive characteristic: "; cin.ignore();
	        		getline(cin, newReproductiveCharacteristic);
	        		bird->setReproductiveCharacteristic(newReproductiveCharacteristic);
			        break;
			    }
			
			case 16:
			    {
			    	string newNationality;
			        cout << "Enter new nationality: "; cin.ignore(); 
	        		getline(cin, newNationality);
	        		bird->setNationality(newNationality);
			        break;
			    }
			
			case 17:
			    {
			    	string newFurTupe;
			        cout << "Enter new fur type: "; cin.ignore();
	        		getline(cin, newFurTupe);
	        		bird->setFurType(newFurTupe);
			        break;
			    }
			
			case 18:
			    {	string newBodyStructure ;
			        cout << "Enter body structure: "; cin.ignore();
	        		getline(cin, newBodyStructure);
	        		bird->setBodyStructure(newBodyStructure);
			        break;
			    }
			
			case 19:
			    {
			        float newWeight;
			        cout << "Enter new weight: ";
	        		cin >> newWeight;
	        		bird->setWeight(newWeight);
			        break;
			    }
			
			case 20:
			    {
			    	float newHeight;
			        cout << "Enter new height: ";
	        		cin >> newHeight;
	        		bird->setHeight(newHeight);
			        break;
			    }
			
			case 21:
			    {
			    	string newHealthStatus;
			        cout << "Enter new health status: "; cin.ignore();
	        		getline(cin, newHealthStatus);
	        		bird->setHealthStatus(newHealthStatus);
			        break;
			    }
			
			case 22:
			    {
			    	int newFeedingFrequency ;
			        cout << "Enter new feeding frequency: ";
	        		cin >> newFeedingFrequency;
	        		bird->setFeedingFrequency(newFeedingFrequency);
			        break;
			    }
			
			case 23:
			    {
			    	string newDiseases;
			        cout << "Enter new diseases: "; cin.ignore();
	        		getline(cin, newDiseases);
	        		bird->setDiseases(newDiseases);
			        break;
			    }
			
			case 24:
			    {
			    	string newPersonality;
			        cout << "Enter new personality: "; cin.ignore();
	        		getline(cin, newPersonality);
	        		bird->setPersonality(newPersonality);
			        break;
			    }
			
			case 25:
			    {
			    	string newReproductiveHealth;
			        cout << "Enter new reproductive health: "; cin.ignore();
	        		getline(cin, newReproductiveHealth);
	        		bird->setReproductiveHealth(newReproductiveHealth);
			        break;
			    }
			
			case 26:
			    {
			    	int newRarityLevel;
			        cout << "Enter new rarity level: ";
	        		cin >> newRarityLevel;
	        		bird->setRarityLevel(newRarityLevel);
			        break;
			    }
			
			case 27:
			    {
			    	string newMoodStatus ;
			        cout << "Enter new mood status: "; cin.ignore();
	        		getline(cin, newMoodStatus);
	        		bird->setMoodStatus(newMoodStatus);
			        break;
			    }
			
			case 28:
			    {
			    	int newBodyTemperature;
			        cout << "Enter new body temperature: ";
	        		cin >> newBodyTemperature;
	        		bird->setBodyTemperature(newBodyTemperature);
			        break;
			    }
			
			case 29:
			    {
			    	string newMigrationPattern ;
			    	cout << "Enter new migration pattern: "; cin.ignore();
	        		getline(cin, newMigrationPattern);
	        		bird->setMigrationPattern(newMigrationPattern);
			        break;
			    }
			
			case 30:
			    {
			    	string newNestingHabit ;
			    	cout << "Enter new nesting habit: "; cin.ignore();
	        		getline(cin, newNestingHabit);
	        		bird->setNestingHabit(newNestingHabit);
			        break;
			    }
			
			case 31:
			    {
			    	string newVocalization ;
			    	cout << "Enter new vocalization: "; cin.ignore();
	        		getline(cin, newVocalization);
	        		bird->setVocalization(newVocalization);
			        break;
			    }
			
			case 32:
			    {
			    	string newWingspan ;
			    	cout << "Enter wingspan: "; cin.ignore();
	        		getline(cin, newWingspan);
	        		bird->setWingspan(newWingspan);
			        break;
			    }
			
			case 33:
			    {
			    	string newHuntingHabits ;
			    	cout << "Enter new Hunting Habits:" ; cin.ignore();
	        		getline(cin,newHuntingHabits);
	        		bird->setHuntingHabits(newHuntingHabits);
			        break;
			    }    
			case 34:
				{
					flag = false;
					mainMenu();
					break;
				}
			default:
				{
				cout<<"Does not exist!"<<endl;
				break;
				}
			}
		}while(flag);
	}	
void ListOfAnimal::minHeightOfAnimal(){
	if(animals.empty()){
		cout<<"Don't have any animals in list !"<<endl;
	}
	Animal* animalWithLowestHeight = animals[0];
	for (size_t i = 1; i < animals.size(); i++) {
        if (animals[i]->getHeight() < animalWithLowestHeight->getHeight()) {
            animalWithLowestHeight = animals[i];
        }
    }
    cout<<"Animal has lowest Height"<<animalWithLowestHeight->getHeight()<<endl;
    animalWithLowestHeight->output();
}
void ListOfAnimal::assessTemperament() {
    Animal* animal = findById();  
    if (!animal) {  
        cout << "Animal not found!" << endl;
        return;
    }
    animal->output();  
    string personality = animal->getPersonality();  
    cout << "Assessing temperament: ";
    if (personality == "calm") {
        cout << "Calm" << endl;
    } else if (personality == "moderate") {
        cout << "Moderate" << endl;
    } else if (personality == "aggressive") {
        cout << "Aggressive" << endl;
    } else {
        cout << "Unknown" << endl;
    }
}
void ListOfAnimal::checkHygieneLevel() {
	Animal* animal = findById();	
	if (animal->getFeedingFrequency() > 2) {
		cout << "- Animal may require more frequent cleaning due to higher food intake."<<endl;
	} else {
	    cout << "- Hygiene level assessment inconclusive based on available data"<<endl;
	}
}
void ListOfAnimal::assessReproductiveCycle(){
	Animal* animal =findById();
	animal->output();
	if(animal->getReproductionRate()==1){
		cout<<"Semelparity"<<endl;
	}else if (animal->getReproductionRate()==2){
		cout<<"Iteroparity"<<endl;
	}
}
void ListOfAnimal::searchBySpecificFoodType() {
    int choice;
    cout << "---List Of Specific Food Type---" << endl;
    cout << "1. Herbivore" << endl;
    cout << "2. Carnivore" << endl;
    cout << "3. Omnivore" << endl;
    cout << "Choose the food type to search: ";
    cin >> choice;
    string searchFoodType;
    switch (choice) {
        case 1:
            searchFoodType = "Herbivore";
            break;
        case 2:
            searchFoodType = "Carnivore";
            break;
        case 3:
            searchFoodType = "Omnivore";
            break;
        default:
            cout << "Invalid choice!" << endl;
            break;
    }
    vector<Animal*> typeFoodAnimals;
    for (auto& animal : animals) {
        if (animal->getFoodType() == searchFoodType) {
            typeFoodAnimals.push_back(animal);
        }
    }
    cout<<"---List Of "<<searchFoodType<<" ---"<<endl;
    for(auto& animal : typeFoodAnimals){
    	animal->output();
	}
}
ListOfAnimal::~ListOfAnimal(){
	for(Animal* animal:animals){
		delete animal;
	}
	animals.clear();
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
