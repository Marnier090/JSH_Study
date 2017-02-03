#pragma once
#include "unit.h"

class CMonster :
	public CUnit
{
protected:
	bool	m_bCollsionCheck;

public:
	bool	GetCollisionCheck(){return m_bCollsionCheck;}

public:
	virtual void	Initialize();
	virtual int		Update();
	virtual void	Render();
	virtual void	Release();

public:
	CMonster(void);
	virtual ~CMonster(void);
};
