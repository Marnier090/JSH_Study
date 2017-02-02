#include "CharactorSelectScene.h"
#include "SceneMgr.h"
#include "ObjMgr.h"
#include "Include.h"
#include "JiHo.h"
#include "HungMuk.h"
#include "SungJun.h"

CCharactorSelectScene::CCharactorSelectScene(void)
: m_iCharactorNum(0)
{
}

CCharactorSelectScene::~CCharactorSelectScene(void)
{
	Release();
}

void	CCharactorSelectScene::Initialize()
{
}

int		CCharactorSelectScene::Update()
{
	if(m_iCharactorNum < 1 || m_iCharactorNum > 4)
	{
		m_iCharactorNum = 0;
		return 0;
	}
	else if(m_iCharactorNum == 4)
		m_iEndCheck = 1;
	else
	{
		CObj* pPlayer = NULL;

		switch(m_iCharactorNum)
		{
		case 1:
			pPlayer = new CSungJun;
			break;
		case 2:
			pPlayer = new CHungMuk;
			break;
		case 3:
			pPlayer = new CJiHo;
			break;
		}

		CObjMgr::GetInstance()->AddObj(pPlayer, OT_PLAYER);

		CSceneMgr::GetInstance()->ChangeScene(ST_SELECTSCENE);
	}
	system("cls");

	return m_iEndCheck;
}

void	CCharactorSelectScene::Render()
{
	cout << "1, ±è½ÂÁØ, 2. ÀÓÇü¹¬, 3. ¾ÈÁöÈ£, 4. Á¾·á" << endl;
	cin>>m_iCharactorNum;
}

void	CCharactorSelectScene::Release()
{
}