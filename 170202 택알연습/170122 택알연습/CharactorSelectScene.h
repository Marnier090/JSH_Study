#pragma once
#include "scene.h"

class CCharactorSelectScene :
	public CScene
{
private:
	int		m_iCharactorNum;

public:
	virtual void	Initialize();
	virtual int		Update();
	virtual void	Render();
	virtual void	Release();

public:
	CCharactorSelectScene(void);
	virtual ~CCharactorSelectScene(void);
};
