#pragma once
#include "Recipe.h"

class Storage {
public:
	std::string name;
	std::vector<Recipe> recipes;
	std::vector<Recipe> types;

	Storage(std::string n, std::vector<Recipe> re, std::vector<Recipe> ty) {
		name = n;
		recipes = re;
		types = ty;
	}

};

