#pragma once
#include<string>
#include<vector>
class Recipe {
public:
	std::string name;
	std::vector<std::string> ingredients;
	std::string instructions;
	std::string image;

	Recipe(std::string n, std::vector<std::string> ing, std::string ins, std::string img) {
		name = n;
		ingredients = ing;
		instructions = ins;
		image = img;
	}

	void SaveRecipe();
	void LoadRecipe();
};

