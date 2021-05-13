#pragma once
#include "wx/wx.h"
#include <fstream>

class rEdit : public wxFrame {

public:
	rEdit();
	~rEdit();

	wxBoxSizer* column;
	wxTextCtrl* Lname;					//L means "label", the uneditable box
	wxTextCtrl* Lingredients;
	wxTextCtrl* Linstructions;

	wxTextCtrl* name;
	wxTextCtrl* ingredients;
	wxTextCtrl* instructions;

	wxButton* save;
	//wxStaticBitmap* image;

	void OnSaveClicked(wxCommandEvent& evnt);


	wxDECLARE_EVENT_TABLE();

};

