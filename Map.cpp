#include "Map.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>


Map::Map(std::string n, std::string fn){
	name = n;
	fileName = fn;
}

Map::~Map(){

}

void Map::bonjour() {
	std::cout << "Bonjour, je suis le village  <" << name << "> et je lis le fichier <" << fileName << "." << std::endl;
	
	for (size_t i = 0; i < structMap.size(); ++i) {
		for (size_t j = 0; j < structMap[i].size(); ++j) {
			std::cout << structMap[i][j] << " ";
		}
		std::cout << std::endl;
	}


}


bool Map::loadMap() {
	std::ifstream file(fileName);

	if (file) {
		std::string line;
		while (getline(file, line)) {
			std::string snumber = "";
			std::vector<int> vect;
			int number;
			for (size_t i = 0; i < line.size(); ++i) {
				if (line[i] == ' ') {
					
					std::istringstream(snumber) >> number;
					vect.push_back(number);
					snumber = "";
				}
				else {
					snumber += line[i];
				}
			}
			std::istringstream(snumber) >> number;
			vect.push_back(number);
			structMap.push_back(vect);
			vect.clear();
		}

		return true;
	}
	else {
		std::cout << "ERREUR: Impossible d'ouvrir le fichier en lecture." << std::endl;
		return false;
	}
}
