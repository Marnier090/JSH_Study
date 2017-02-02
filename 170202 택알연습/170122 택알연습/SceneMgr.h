#pragma once
#include "Scene.h"
#include "Include.h"

class CSceneMgr
{
	
private:
	CScene*		m_pCScene;
	SCENETYPE	m_eScneType;

public:
	CScene* GetScene() {return m_pCScene;}

public:
	void	ChangeScene(SCENETYPE	_eScneType);

/////////////////////////////////////////

DECLARE_SINGLETON(CSceneMgr);

//private:
//	static CSceneMgr* m_pSceneMgr;
//
//public:
//	static CSceneMgr* GetInstance();
//	static void DestroyInstance();
//
private:
	CSceneMgr(void);
	virtual ~CSceneMgr(void);
///////////////////////////////////////////
};