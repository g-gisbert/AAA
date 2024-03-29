#include "Personnage.h"
#include <iostream>
#include <math.h>
#include <string>
#include <stdlib.h>
#include <time.h> 

Personnage::Personnage(int Pdv, int Fo, int intel, int Def, int Man, int Pdm, int Poi, int Dex, int Sag, int Cha, int Ini, std::string NamePerso, int Resi) {

	PointDeVie = Pdv;
	Force = Fo;
	Intelligence = intel;
	Defense = Def;
	Mana = Man;
	PointDeMouvement = Pdm;
	Poids = Poi;
	Dexterite = Dex;
	Sagesse = Sag;
	Chance = Cha;
	Initiative = Ini;
	NamePersonnage = NamePerso;
	Resistance = Resi;

}

Personnage::~Personnage() {
	
}

int Personnage::GetPointDeVie() {
	return(PointDeVie);
}

int Personnage::GetForce() {
	return(Force);
}

int Personnage::GetIntelligence() {
	return(Intelligence);
}

int Personnage::GetDefense() {
	return(Defense);
}

int Personnage::GetMana() {
	return(Mana);
}

int Personnage::GetPointDeMouvement() {
	return(PointDeMouvement);
}

int Personnage::GetPoids() {
	return(Poids);
}

int Personnage::GetDexterite() {
	return(Dexterite);
}

int Personnage::GetChance() {
	return(Chance);
}

int Personnage::GetSagesse() {
	return(Sagesse);
}

int Personnage::GetInitiative() {
	return(Initiative);
}

std::string Personnage::GetNamePersonnage() {
	return(NamePersonnage);
}

int Personnage::GetResistance() {
	return(Resistance);
}

void Personnage::SetPointDeVie(int Pdv) {
	PointDeVie = Pdv;
}

void Personnage::SetForce(int Fo) {
	Force = Fo;
}

void Personnage::SetIntelligence(int Intel) {
	Intelligence = Intel;
}

void Personnage::SetDefense(int Def) {
	Defense = Def;
}

void Personnage::SetMana(int Man) {
	Mana = Man;
}

void Personnage::SetPointDeMouvement(int Pdm) {
	PointDeMouvement = Pdm;
}

void Personnage::SetPoids(int Poi) {
	Poids = Poi;
}

void Personnage::SetChance(int Cha) {
	Chance = Cha;
}

void Personnage::SetSagesse(int Sag) {
	Sagesse = Sag;
}

void Personnage::SetDexterite(int Dex) {
	Dexterite = Dex;
}

void Personnage::SetInitiative(int Ini) {
	Initiative = Ini;
}

void Personnage::SetResistance(int Resi) {
	Resistance = Resi;
}

void Personnage::AttaquePhysique(Personnage& cible) {
	float degats = 0;
	float defenses = 0;
	degats = float(Force) * (Coefficient() + 1.f);
	defenses = (float(cible.GetDefense())) * (cible.Coefficient() + 1.f);
	cible.SetPointDeVie(int(cible.GetPointDeVie() - (degats - defenses)));
}

void Personnage::AttaqueMagique(Personnage& cible) {
	
}

float Personnage::Coefficient() {
	float random = 0;
	random = rand() % 101;
	float x = 0;
	std::cout << "rand" << random << std::endl;

	if (random <= (10 - (Chance/10.f))) {
		x = float((1 / (10 - (Chance / 10.f))) * random);
		std::cout << "rand1 " << x << std::endl;
		return(float((1 / (10 - (Chance / 10.f))) * random - 1));
	}

	if ((10 - (Chance / 10.f)) < random && random < (90 - (Chance / 10.f))) {
		x = 1;
		std::cout << "rand2 " << x << std::endl;
		return(0);
	}

	if (random >= (90 - (Chance / 10.f))) {
		x = float((3 / (10 + (Chance / 10.f))) * random - (12 + ((-14 / 9) * (Chance / 10.f) + 14)));
		std::cout << "rand3 " << x << std::endl;
		return(float((3 / (10 + (Chance / 10.f))) * random - (12 + ((-14 / 9) * (Chance / 10.f) + 14))));
	}
}