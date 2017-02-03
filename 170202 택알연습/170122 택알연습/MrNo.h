#pragma once
#include "Monster.h"

class CMrNo :
	public CMonster
{
public:
	virtual void	Initialize();
	virtual int		Update();
	virtual void	Render();
	virtual void	Release();

public:
	CMrNo(void);
	virtual ~CMrNo(void);
};
