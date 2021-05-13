#pragma once

#include "wx/wx.h"
#include "cMain.h"
#include "rTemplate.h"
#include "rEdit.h"


class Launcher : public wxApp {

public:
	Launcher();
	~Launcher();

	virtual bool OnInit();

private:
	//cMain* m_frame1 = nullptr;
	//rTemplate* m_frame1 = nullptr;
	rEdit* m_frame1 = nullptr;
};

