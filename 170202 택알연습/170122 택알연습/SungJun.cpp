#include "SungJun.h"
#include "SceneMgr.h"
#include "CollisionMgr.h"

CSungJun::CSungJun(void)
{
	m_wstrClass = L"고백 마스터";
	m_tUnitInfo.wstrName = L"김승준";

	m_tUnitInfo.m_iHP = m_tUnitInfo.m_iMaxHP = 500;
	m_tUnitInfo.m_iMP = m_tUnitInfo.m_iMaxMP = 3;
	m_tUnitInfo.m_iAtk = 20;
}

CSungJun::~CSungJun(void)
{
}

void CSungJun::BehaviorCheck()
{
	if(m_iBehavior == 1)
		CCollisionMgr::GetInstance()->CollisonCheck(this, OT_MONSTER);
}

void CSungJun::Initialize()
{
}

int	CSungJun::Update()
{
	CPlayer::Update();

	BehaviorCheck();

	m_iBehavior = 0;

	return 0;
}

void CSungJun::Render()
{ 
	cout << "클래스 : ";
	wcout << m_wstrClass << endl;
	cout << "ID : ";
	wcout<< m_tUnitInfo.wstrName << endl;
	cout << "HP : " << m_tUnitInfo.m_iHP << " / " << m_tUnitInfo.m_iMaxHP << endl;
	cout << "MP : " << m_tUnitInfo.m_iMP << " / " << m_tUnitInfo.m_iMaxMP << endl;

	if(CSceneMgr::GetInstance()->GetSceneType() != ST_SELECTSCENE)
		CPlayer::Render();
}

void CSungJun::Release()
{
}