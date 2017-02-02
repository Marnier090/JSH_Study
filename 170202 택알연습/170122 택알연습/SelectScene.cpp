#include "SelectScene.h"
#include "ObjMgr.h"

CSelectScene::CSelectScene(void)
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
	return m_iEndCheck;
}

void	CSelectScene::Render()
{
	CObjMgr::GetInstance()->Render();
}

void	CSelectScene::Release()
{
}