#pragma once
#include "unit.h"

class CSungJun :
	public CUnit
{
public:
	virtual void	Initialize();
	virtual int		Update();
	virtual void	Render();
	virtual void	Release();

public:
	CSungJun(void);
	virtual ~CSungJun(void);
};
