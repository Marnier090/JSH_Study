#pragma once
#include "Player.h"

class CHungMuk :
	public CPlayer
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
