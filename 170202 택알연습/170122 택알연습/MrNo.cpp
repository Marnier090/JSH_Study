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
		cout << "MrNo�� �׾����ϴ�" << endl;

		CSceneMgr::GetInstance()->ChangeScene(ST_SELECTSCENE); // ������ ���⼭ ���ִ°� �ƴѵ�, �츮 ���ӿ����� �갡 ������ ���� �ٲ�ϱ� ����?
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
	cout << "\nMrNo : ������ Ż�ֿ�!" << endl;

	CMonster::Render();
}

void CMrNo::Release()
{

}