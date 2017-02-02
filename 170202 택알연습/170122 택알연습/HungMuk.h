#pragma once
#include "unit.h"

class CHungMuk :
	public CUnit
{
public:
	virtual void	Initialize();
	virtual int		Update();
	virtual void	Render();
	virtual void	Release();

public:
	CHungMuk(void);
	virtual ~CHungMuk(void);
};
