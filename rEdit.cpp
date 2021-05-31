#include "rEdit.h"

wxBEGIN_EVENT_TABLE(rEdit, wxFrame)
	EVT_BUTTON(1001, OnSaveClicked)
	//EVT_BUTTON(1002, OnLoadClicked)
wxEND_EVENT_TABLE()

rEdit::rEdit() : wxFrame(nullptr, wxID_ANY, "Edit Recipe", wxPoint(30, 30), wxSize(1500, 1000)) {
	//grid = new wxGridSizer(wxHORIZONTAL);
	column = new wxBoxSizer(wxVERTICAL);
	//rcolumn = new wxBoxSizer(wxVERTICAL);

	Lname = new wxTextCtrl(this, wxID_ANY, "RECIPE NAME", wxDefaultPosition, wxDefaultSize, wxTE_READONLY);
	Lingredients = new wxTextCtrl(this, wxID_ANY, "INGREDIENTS", wxDefaultPosition, wxDefaultSize, wxTE_READONLY);
	Linstructions = new wxTextCtrl(this, wxID_ANY, "COOKING INSTRUCTIONS", wxDefaultPosition, wxSize(150, 25), wxTE_READONLY);

	name = new wxTextCtrl(this, wxID_ANY, "", wxDefaultPosition, wxDefaultSize);
	ingredients = new wxTextCtrl(this, wxID_ANY, "", wxDefaultPosition, wxSize(110, 300), wxTE_MULTILINE);
	instructions = new wxTextCtrl(this, wxID_ANY, "", wxDefaultPosition, wxDefaultSize, wxTE_MULTILINE);

	save = new wxButton(this, 1001, "Save Recipe", wxDefaultPosition, wxDefaultSize);
	//load = new wxButton(this, 1002, "Load Recipes", wxDefaultPosition, wxDefaultSize);
	

	//recipeList = new wxComboBox(this, 1002, "Recipes", wxDefaultPosition, wxDefaultSize, 0, recipes, wxCB_READONLY, wxDefaultValidator, "");
	this->SetSizer(column);
	column->Add(Lname);
	column->Add(name);
	column->Add(Lingredients);
	column->Add(ingredients);
	column->Add(Linstructions);
	column->Add(instructions);
	column->Add(save);

	//rcolumn->Add(load);
	//rcolumn->Add(recipeList);

	//grid->Add(column);
	//grid->Add(rcolumn);

	//this->SetSizer(grid);
	//grid->Layout();
}

rEdit::~rEdit() {

}

void rEdit::OnSaveClicked(wxCommandEvent& evnt) {
	std::ofstream ofs;
	ofs.open("Recipes.txt", std::fstream::app);

	ofs << ":n" << std::endl;
	ofs << name->GetValue() << std::endl;
	ofs << ":ing" << std::endl;
	ofs << ingredients->GetValue() << std::endl;
	ofs << ":ins" << std::endl;
	ofs << instructions->GetValue() << std::endl;

	ofs.close();
}

/*
void rEdit::OnLoadClicked(wxCommandEvent& evnt) {
	std::ifstream ifs;
	std::string NAME = ":n";
	std::string ING = ":ing";
	std::string INS = ":ins";

	ifs.open("Recipes.txt");


	while (!ifs.eof()) {
		std::string temp;
		getline(ifs, temp);

		if (temp == NAME) {
			getline(ifs, temp);
			//recipeList->Set(temp);
		}
	}
}

*/