#pragma once
#include "wx/wx.h"



class cMain : public wxFrame {

public:
	cMain();
	~cMain();

	int nFieldWidth = 10;
	int nFieldHeight = 10;
	wxButton** btn;

	void OnButtonClicked(wxCommandEvent& evnt);

	wxDECLARE_EVENT_TABLE();
};

