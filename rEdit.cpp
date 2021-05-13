#include "rEdit.h"

wxBEGIN_EVENT_TABLE(rEdit, wxFrame)
	EVT_BUTTON(1001, OnSaveClicked)
wxEND_EVENT_TABLE()

rEdit::rEdit() : wxFrame(nullptr, wxID_ANY, "Edit Recipe", wxPoint(30, 30), wxSize(1500, 1000)) {
	column = new wxBoxSizer(wxVERTICAL);

	Lname = new wxTextCtrl(this, wxID_ANY, "RECIPE NAME", wxDefaultPosition, wxDefaultSize, wxTE_READONLY);
	Lingredients = new wxTextCtrl(this, wxID_ANY, "INGREDIENTS", wxDefaultPosition, wxDefaultSize, wxTE_READONLY);
	Linstructions = new wxTextCtrl(this, wxID_ANY, "COOKING INSTRUCTIONS", wxDefaultPosition, wxDefaultSize, wxTE_READONLY);

	name = new wxTextCtrl(this, wxID_ANY, "", wxDefaultPosition, wxDefaultSize);
	ingredients = new wxTextCtrl(this, wxID_ANY, "", wxDefaultPosition, wxSize(110, 300), wxTE_MULTILINE);
	instructions = new wxTextCtrl(this, wxID_ANY, "", wxDefaultPosition, wxDefaultSize, wxTE_MULTILINE);

	save = new wxButton(this, 1001, "Save Recipe", wxDefaultPosition, wxSize(350, 300));

	this->SetSizer(column);
	column->Add(Lname);
	column->Add(name);
	column->Add(Lingredients);
	column->Add(ingredients);
	column->Add(Linstructions);
	column->Add(instructions);
	column->Add(save);
}

rEdit::~rEdit() {

}

void rEdit::OnSaveClicked(wxCommandEvent& evnt) {
	std::ofstream ofs;
	ofs.open("Recipes.txt");

	ofs << "-R" << std::endl;
	ofs << ":n" << std::endl;
	ofs << name->GetValue() << std::endl;
	ofs << ":ing" << std::endl;
	ofs << ingredients->GetValue() << std::endl;
	ofs << ":ins" << std::endl;
	ofs << instructions->GetValue() << std::endl;
	ofs << "-S" << std::endl;

	ofs.close();
}
