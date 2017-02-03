#pragma once
#include "field.h"

class CHardField :
	public CField
{
public:
	virtual void	Initialize();
	virtual int		Update();
	virtual void	Render();
	virtual void	Release();

public:
	CHardField(void);
	virtual ~CHardField(void);
};
