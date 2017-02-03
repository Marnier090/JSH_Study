#pragma once
#include "Monster.h"

class CHanzo :
	public CMonster
{
public:
	virtual void	Initialize();
	virtual int		Update();
	virtual void	Render();
	virtual void	Release();

public:
	CHanzo(void);
	virtual ~CHanzo(void);
};
