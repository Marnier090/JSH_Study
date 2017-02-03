#include "MrNo.h"
#include "SceneMgr.h"

CMrNo::CMrNo(void)
{
	m_tUnitInfo.wstrName = L"MrNo";

	m_tUnitInfo.m_iHP = m_tUnitInfo.m_iMaxHP = 200;
	m_tUnitInfo.m_iMP = m_tUnitInfo.m_iMaxMP = 3;
	m_tUnitInfo.m_iAtk = 10;
}

CMrNo::~CMrNo(void)
{
}

void CMrNo::Initialize()
{

}

int	CMrNo::Update()
{
	if(m_tUnitInfo.m_iHP <= 0)
	{
		cout << "MrNo가 죽었습니다" << endl;

		CSceneMgr::GetInstance()->ChangeScene(ST_SELECTSCENE); // 원래는 여기서 해주는게 아닌데, 우리 게임에서는 얘가 죽으면 씬이 바뀌니까 알지?
		return 2;
	}

	return 0;
}

void CMrNo::Render()
{
	cout << "ID : ";
	wcout<< m_tUnitInfo.wstrName << endl;
	cout << "HP : " << m_tUnitInfo.m_iHP << " / " << m_tUnitInfo.m_iMaxHP << endl;
	cout << "MP : " << m_tUnitInfo.m_iMP << " / " << m_tUnitInfo.m_iMaxMP << endl;
	cout << "\nMrNo : 오레가 탈주왕!" << endl;

	CMonster::Render();
}

void CMrNo::Release()
{

}