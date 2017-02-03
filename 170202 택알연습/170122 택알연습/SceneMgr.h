#pragma once
#include "Scene.h"
#include "Include.h"

class CSceneMgr
{
	DECLARE_SINGLETON(CSceneMgr);

private:
	CScene*		m_pCScene;
	SCENETYPE	m_eScneType;

public:
	CScene*		GetScene()		{return m_pCScene;}
	SCENETYPE	GetSceneType()	{return m_eScneType;}

public:
	void		ChangeScene(SCENETYPE	_eScneType);

private:
	CSceneMgr(void);
	virtual ~CSceneMgr(void);
};