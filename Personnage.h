#pragma once

#include <string>


class Personnage
{
public:
	//Constructor and Destructor
	Personnage(int Pdv, int Fo, int intel, int Def, int Man, int Pdm, int Poi, int Dex, int Sag, int Cha, int Ini ,std::string NamePerso, int Resi);
	~Personnage();

	//Set and Get
	int GetPointDeVie();
	int GetForce();
	int GetIntelligence();
	int GetDefense();
	int GetMana();
	int GetPointDeMouvement();
	int GetPoids();
	int GetDexterite();
	int GetSagesse();
	int GetChance();
	int GetInitiative();
	std::string GetNamePersonnage();
	int GetResistance();
	

	void SetPointDeVie(int Pdv);
	void SetForce(int Fo);
	void SetIntelligence(int Intel);
	void SetDefense(int Def);
	void SetMana(int Man);
	void SetPointDeMouvement(int Pdm);
	void SetPoids(int Poi);
	void SetDexterite(int dext);
	void SetSagesse(int sag);
	void SetChance(int Cha);
	void SetInitiative(int Ini);
	void SetResistance(int Resi);


	//Combat

	void AttaquePhysique(Personnage& cible);
	void AttaqueMagique(Personnage& cible);
	float Coefficient();


private:

	int PointDeVie;
	int Force;
	int Intelligence;
	int Defense;
	int Mana;
	int PointDeMouvement;
	int Poids;
	int Dexterite;
	int Sagesse;
	int Chance;
	int Initiative;
	std::string NamePersonnage;
	int Resistance;


};

