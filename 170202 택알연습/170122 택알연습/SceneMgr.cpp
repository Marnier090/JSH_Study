#include "SceneMgr.h"
#include "CharactorSelectScene.h"
#include "SelectScene.h"

//CSceneMgr* CSceneMgr::m_pSceneMgr = NULL;
IMPLEMENT_SINGLETON(CSceneMgr);
CSceneMgr::CSceneMgr(void)
: m_pCScene(NULL)
, m_eScneType(ST_END)
{
}

CSceneMgr::~CSceneMgr(void)
{
}

void	CSceneMgr::ChangeScene(SCENETYPE	_eScneType)
{
	if(m_pCScene != NULL)
		delete m_pCScene;

	switch(_eScneType)
	{
	case ST_CARACTORSELECT:
		m_pCScene = new CCharactorSelectScene;
		m_pCScene->Initialize();
		break;

	case ST_SELECTSCENE:
		m_pCScene = new CSelectScene;
		m_pCScene->Initialize();
		break;
	}
}


///////////////////////////////////////////
//CSceneMgr* CSceneMgr::GetInstance()
//{
//	if(m_pSceneMgr == NULL)
//	{
//		m_pSceneMgr = new CSceneMgr;
//	}
//	return m_pSceneMgr;
//}
//
//void CSceneMgr::DestroyInstance()
//{
//	if(m_pSceneMgr != NULL)
//	{
//		delete m_pSceneMgr;
//		m_pSceneMgr = NULL;
//	}
//}

////////////////////////////////////////////

