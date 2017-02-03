#pragma once
#include "unit.h"

class CPlayer :
	public CUnit
{
protected:
	wstring m_wstrClass;
	int		m_iBehavior;

public:
	virtual void	Initialize();
	virtual int		Update();
	virtual void	Render();
	virtual void	Release();

public:
	CPlayer(void);
	virtual ~CPlayer(void);
};
