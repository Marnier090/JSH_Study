#include "SelectScene.h"
#include "ObjMgr.h"
#include "SceneMgr.h"

CSelectScene::CSelectScene(void)
: m_iSelectScene(0)
{
}

CSelectScene::~CSelectScene(void)
{
}

void	CSelectScene::Initialize()
{
}

int		CSelectScene::Update()
{
	CObjMgr::GetInstance()->Update();

	if(m_iSelectScene < 1 || m_iSelectScene > 5)
	{
		m_iSelectScene = 0;
		return 0;
	}
	else if(m_iSelectScene == 5)
		m_iEndCheck = 1;
	else
	{
		switch(m_iSelectScene)
		{
		case 1:
			CSceneMgr::GetInstance()->ChangeScene(ST_EASYFIELD);
			break;
		case 2:
			CSceneMgr::GetInstance()->ChangeScene(ST_NORMALFIELD);
			break;
		case 3:
			CSceneMgr::GetInstance()->ChangeScene(ST_HARDFIELD);
			break;
		case 4:
			//CSceneMgr::GetInstance()->ChangeScene(ST_SELECTSCENE);
			break;
		}
	}

	return m_iEndCheck;
}

void	CSelectScene::Render()
{
	system("cls");
	CObjMgr::GetInstance()->Render();

	cout << "\n===============================================" << endl;
	cout << "1. 초보사냥터" << " " << "2. 중급사냥터" << " " << "3. 고급사냥터" << " " << "4. 상점" << " " << "5. 나가기" << endl;
	cin >> m_iSelectScene;
	
	system("pause");
}

void	CSelectScene::Release()
{
}