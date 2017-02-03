#pragma once
#include "Monster.h"

class CRain :
	public CMonster
{
public:
	virtual void	Initialize();
	virtual int		Update();
	virtual void	Render();
	virtual void	Release();

public:
	CRain(void);
	virtual ~CRain(void);
};
