#pragma once
#include "wx/wx.h"
#include <fstream>
//#include "Recipe.h"

class rEdit : public wxFrame {

public:
	rEdit();
	~rEdit();

	//wxGridSizer* grid;
	wxBoxSizer* column;
	
	wxTextCtrl* Lname;					//L means "label", the uneditable box
	wxTextCtrl* Lingredients;
	wxTextCtrl* Linstructions;

	wxTextCtrl* name;
	wxTextCtrl* ingredients;
	wxTextCtrl* instructions;

	//wxBoxSizer* rcolumn;

	//wxComboBox* recipeList;
	//wxString* recipes;
	//wxButton* load;

	wxButton* save;
	//wxStaticBitmap* image;

	void OnSaveClicked(wxCommandEvent& evnt);
	//void OnLoadClicked(wxCommandEvent& evnt);


	wxDECLARE_EVENT_TABLE();

};

