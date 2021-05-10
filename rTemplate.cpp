#include "rTemplate.h"

rTemplate::rTemplate() : wxFrame(nullptr, wxID_ANY, "New Recipe", wxPoint(30, 30), wxSize(1500, 1000)) {
	wxBoxSizer* grid = new wxBoxSizer(wxHORIZONTAL);
	wxBoxSizer* topLeftGrid = new wxBoxSizer(wxHORIZONTAL);
	wxBoxSizer* LColumn = new wxBoxSizer(wxVERTICAL);
	wxBoxSizer* rColumn = new wxBoxSizer(wxVERTICAL);

	wxTextCtrl* rName = new wxTextCtrl(this, wxID_ANY, "Recipe Name", wxDefaultPosition, wxSize(300, 150));

	wxButton* btnSave = new wxButton(this, wxID_ANY, "Save Recipe", wxDefaultPosition, wxSize(190, 150));
	wxListBox* ingredients = new wxListBox(this, wxID_ANY, wxDefaultPosition, wxSize(500, 790));

	//wxStaticBitmap* image = new wxStaticBitmap();
	wxTextCtrl* instructions = new wxTextCtrl(this, wxID_ANY, "Cooking Instructions");
	
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
