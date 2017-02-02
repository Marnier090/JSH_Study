#pragma once

#include "Include.h"

class CScene
{
protected:
	int		m_iEndCheck;

public:
	virtual void	Initialize()PURE;
	virtual int		Update()	PURE;
	virtual void	Render()	PURE;
	virtual void	Release()	PURE;

public:
	CScene(void);
	virtual ~CScene(void);
};
