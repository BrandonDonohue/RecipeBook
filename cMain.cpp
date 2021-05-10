#include "cMain.h"

wxBEGIN_EVENT_TABLE(cMain, wxFrame)
wxEND_EVENT_TABLE()

cMain::cMain() : wxFrame(nullptr, wxID_ANY, "Recipe Book", wxPoint(30, 30), wxSize(1500, 1000)) {
	btn = new wxButton * [nFieldWidth * nFieldHeight];
	wxGridSizer* grid = new wxGridSizer(nFieldWidth, nFieldHeight, 0, 0);

	for (int row = 0; row < nFieldWidth; row++) {
		for (int column = 0; column < nFieldHeight; column++) {
			btn[column * nFieldWidth + row] = new wxButton(this, 10000 + (column * nFieldWidth + row));
			grid->Add(btn[column * nFieldWidth + row], 1, wxEXPAND | wxALL);

			btn[column * nFieldWidth + row]->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &cMain::OnButtonClicked, this);
		}
	}

	this->SetSizer(grid);
	grid->Layout();
}

cMain::~cMain() {
	delete[]btn;
}

void cMain::OnButtonClicked(wxCommandEvent& evnt) {
	//Get coordinate of button in field array
	int x = (evnt.GetId() - 10000) % nFieldWidth;
	int y = (evnt.GetId() - 10000) / nFieldHeight;

	evnt.Skip();
}
