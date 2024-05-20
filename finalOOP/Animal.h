#ifndef ANIMAL_H
#define ANIMAL_H
#include<bits/stdc++.h>
using namespace std;
class Animal {
	protected:
		string species; // chung_loai
	    int age; //tuoi
	    int birthYear;  //nam_sinh
	    string habitat; //moi_truong_song
	    string hobbies; //so_thich
	    string sound; //tieng_keu
	    int threatLevel; //muc_do_de_doa
	    int population; //so_luong_ca_the
	    int reproductionRate; //tan_suat_sinh_san
	    bool gender; //gioi_tinh
	    string id;//ma_so
	    int deathYear; // nam_mat
	    string foodType; //loai_thuc_an 
	    string color; //mau_sac
	    bool vaccineReaction; //phan_ung_voi_vaccine
	    string rationality; //quoc_tich
	    string feproductiveCharacteristic;
	    string nurType; //loai_long
	    string bodyStructure; //cau_truc_co_the
	    float weight; //can_nang
	    float height; //chieu_cao
	    string healthStatus; //tinh_trang_suc_khoe
	    int feedingFrequency; //tan_suat_an
	    string diseases; // benh_da_mac_phai
	    string personality; //tinh_cach
	    string reproductiveHealth; //suc_khoe_sinh_san
	    int rarityLevel; //do_hiem
	    string moodStatus; //trang_thai_tinh_than
	    float bodyTemperature; //nhiet_do_co_the
	public:
		Animal();
		Animal(string species, int age, int birthYear, string habitat, string hobbies, string sound, int threatLevel,
	        int population, int reproductionRate, bool gender, string id, int deathYear, string foodType, string color,
	        bool vaccineReaction, string reproductiveCharacteristic, string nationality, string furType,
	        string bodyStructure, float weight, float height, string healthStatus, int feedingFrequency,
	        string diseases, string personality, string reproductiveHealth, int rarityLevel, string moodStatus,
	        float bodyTemperature);    
	    string getSpecies();
		void setSpecies(string& value);
		int getAge();
		void setAge(int value);
		int getBirthYear();
		void setBirthYear(int value);
		string getHabitat();
		void setHabitat(string& value);
		string getHobbies();
		void setHobbies(string& value);
		string getSound();
		void setSound(string& value);
		int getThreatLevel();
		void setThreatLevel(int value);
		int getPopulation();
		void setPopulation(int value);
		int getReproductionRate();
		void setReproductionRate(int value);
		bool getGender();
		void setGender(bool value);
		string getId();
		void setId(string& value);
		int getDeathYear();
		void setDeathYear(int value);
		string getFoodType();
		void setFoodType( string& value);
		string getColor();
		void setColor( string& value);
		bool getVaccineReaction();
		void setVaccineReaction(bool value);
		string getReproductiveCharacteristic();
		void setReproductiveCharacteristic( string& value);
		string getNationality();
		void setNationality( string& value);
		string getFurType();
		void setFurType( string& value);
		string getBodyStructure();
		void setBodyStructure( string& value);
		float getWeight();
		void setWeight(float value);
		float getHeight();
		void setHeight(float value);
		string getHealthStatus();
		void setHealthStatus( string& value);
		int getFeedingFrequency();
		void setFeedingFrequency(int value);
		string getDiseases();
		void setDiseases( string& value);
		string getPersonality();
		void setPersonality( string& value);
		string getReproductiveHealth();
		void setReproductiveHealth( string& value);
		int getRarityLevel();
		void setRarityLevel(int value);
		string getMoodStatus();
		void setMoodStatus(string& value);
		float getBodyTemperature();
		void setBodyTemperature(float value);
		virtual void input();
		virtual void output();
		void move();
		void sleep();
		void digHole();
		void hunt();
		void reproduce();
		void glide();
		void formPack();
		void eat();
		void takeCareOfYoung();
		void swimAndCrawl();
		virtual ~Animal();
};
#endif
