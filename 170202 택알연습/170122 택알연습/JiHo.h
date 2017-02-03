#pragma once
#include "Player.h"

class CJiHo :
	public CPlayer
{
public:
	virtual void	Initialize();
	virtual int		Update();
	virtual void	Render();
	virtual void	Release();

public:
	CJiHo(void);
	virtual ~CJiHo(void);
};
