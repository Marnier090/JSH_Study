#pragma once
#include "scene.h"

class CField :
	public CScene
{
public:
	virtual void	Initialize();
	virtual int		Update();
	virtual void	Render();
	virtual void	Release();

public:
	CField(void);
	virtual ~CField(void);
};
