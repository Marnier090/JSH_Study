#pragma once
#include "field.h"

class CNormalField :
	public CField
{
public:
	virtual void	Initialize();
	virtual int		Update();
	virtual void	Render();
	virtual void	Release();

public:
	CNormalField(void);
	virtual ~CNormalField(void);
};
