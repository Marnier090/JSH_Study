#pragma once
#include "scene.h"

class CSelectScene :
	public CScene
{
public:
	virtual void	Initialize();
	virtual int		Update();
	virtual void	Render();
	virtual void	Release();

public:
	CSelectScene(void);
	virtual ~CSelectScene(void);
};
