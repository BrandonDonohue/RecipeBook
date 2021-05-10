#pragma once

#include "wx/wx.h"
#include "cMain.h"
#include "rTemplate.h"


class Launcher : public wxApp {

public:
	Launcher();
	~Launcher();

	virtual bool OnInit();

private:
	//cMain* m_frame1 = nullptr;
	rTemplate* m_frame1 = nullptr;
};

