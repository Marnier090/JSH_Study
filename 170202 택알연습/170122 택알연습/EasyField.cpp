#include "EasyField.h"
#include "ObjMgr.h"
#include "MrNo.h"

CEasyField::CEasyField(void)
{
	CMrNo* pMrNo = new CMrNo;
	CObjMgr::GetInstance()->AddObj(pMrNo, OT_MONSTER);
}

CEasyField::~CEasyField(void)
{
	Release();
}

void CEasyField::Initialize()
{

}

int	CEasyField::Update()
{
	CObjMgr::GetInstance()->Update();

	return 0;
}

void CEasyField::Render()
{
	system("cls");
	CObjMgr::GetInstance()->Render();

	system("pause");
}

void CEasyField::Release()
{
	CObjMgr::GetInstance()->DeleteList(OT_MONSTER);
}