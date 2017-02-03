#pragma once
#include "field.h"

class CEasyField :
	public CField
{
public:
	virtual void	Initialize();
	virtual int		Update();
	virtual void	Render();
	virtual void	Release();

public:
	CEasyField(void);
	virtual ~CEasyField(void);
};
