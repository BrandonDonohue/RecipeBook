#pragma once
#include "wx/wx.h"
#include <fstream>


class rTemplate : public wxFrame {

public:
	rTemplate();
	~rTemplate();

	wxBoxSizer* grid = nullptr;
	wxBoxSizer* topLeftGrid = nullptr;
	wxBoxSizer* LColumn = nullptr;
	wxBoxSizer* rColumn = nullptr;

	wxTextCtrl* rName = nullptr;
	wxTextCtrl* instructions = nullptr;

	wxButton* btnSave = nullptr;

	wxListBox* ingredients = nullptr;


	void SaveButtonClicked(wxCommandEvent& evnt);

	wxDECLARE_EVENT_TABLE();
};

