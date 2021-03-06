#pragma once
#include "obj.h"
#include "Include.h"

class CUnit :
	public CObj
{
protected:
	UNITINFO	m_tUnitInfo;

public:
	virtual void	Initialize();
	virtual int		Update();
	virtual void	Render();
	virtual void	Release();

public:
	UNITINFO* GetUnitInfo(){return &m_tUnitInfo;}

public:
	CUnit(void);
	virtual ~CUnit(void);
};
