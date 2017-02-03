#include "SceneMgr.h"
#include "CharactorSelectScene.h"
#include "SelectScene.h"
#include "EasyField.h"
#include "NormalField.h"
#include "HardField.h"

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

	case ST_EASYFIELD:
		m_pCScene = new CEasyField;
		m_pCScene->Initialize();
		break;

	case ST_NORMALFIELD:
		m_pCScene = new CNormalField;
		m_pCScene->Initialize();
		break;

	case ST_HARDFIELD:
		m_pCScene = new CHardField;
		m_pCScene->Initialize();
		break;

	default:
		return;
	}

	m_eScneType = _eScneType;
}