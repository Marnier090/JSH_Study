#pragma once
#include "unit.h"

class CJiHo :
	public CUnit
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
