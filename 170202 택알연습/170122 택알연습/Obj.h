#pragma once

#include "Include.h"

class CObj
{
public:
	virtual void	Initialize()PURE;
	virtual int		Update()	PURE;
	virtual void	Render()	PURE;
	virtual void	Release()	PURE;


public:
	CObj(void);
	virtual ~CObj(void);
};
