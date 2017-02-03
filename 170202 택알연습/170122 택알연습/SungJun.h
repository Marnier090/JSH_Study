#pragma once
#include "Player.h"

class CSungJun :
	public CPlayer
{
public:
	void BehaviorCheck();

public:
	virtual void	Initialize();
	virtual int		Update();
	virtual void	Render();
	virtual void	Release();

public:
	CSungJun(void);
	virtual ~CSungJun(void);
};
