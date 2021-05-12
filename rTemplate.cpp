#include "rTemplate.h"

wxBEGIN_EVENT_TABLE(rTemplate, wxFrame)
	EVT_BUTTON(1001, SaveButtonClicked)
wxEND_EVENT_TABLE()

rTemplate::rTemplate() : wxFrame(nullptr, wxID_ANY, "New Recipe", wxPoint(30, 30), wxSize(1500, 1000)) {
	grid = new wxBoxSizer(wxHORIZONTAL);
	topLeftGrid = new wxBoxSizer(wxHORIZONTAL);
	LColumn = new wxBoxSizer(wxVERTICAL);
	rColumn = new wxBoxSizer(wxVERTICAL);

	
	rName = new wxTextCtrl(this, wxID_ANY, "", wxDefaultPosition, wxSize(300, 150));
	//rName->SetFont(wxFont(16, wxFONTFAMILY_DECORATIVE, wxFONTSIZE_LARGE, wxFONTWEIGHT_BOLD));
	

	btnSave = new wxButton(this, 1001, "Save Recipe", wxDefaultPosition, wxSize(190, 150));
	ingredients = new wxListBox(this, wxID_ANY, wxDefaultPosition, wxSize(500, 790));

	//wxStaticBitmap* image = new wxStaticBitmap();
	instructions = new wxTextCtrl(this, wxID_ANY, "Cooking Instructions");
	
	topLeftGrid->Add(rName);
	topLeftGrid->Add(10, 0, 0);
	topLeftGrid->Add(btnSave);

	LColumn->Add(topLeftGrid);
	LColumn->Add(0, 10, 0);
	LColumn->Add(ingredients);

	//rColumn->Add(image);
	rColumn->Add(instructions);

	grid->Add(LColumn);
	grid->Add(rColumn);

	this->SetSizer(grid);
	grid->Layout();
}

rTemplate::~rTemplate() {

}

void rTemplate::SaveButtonClicked(wxCommandEvent& evnt) {
	/*
	std::ofstream ofs;
	ofs.open("Recipes.txt");

	ofs << "N\n";
	ofs.close();
	*/
	rName->SaveFile("Recipes.txt");

	evnt.Skip();
}
