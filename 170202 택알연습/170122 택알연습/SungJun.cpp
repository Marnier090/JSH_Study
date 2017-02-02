#include "SungJun.h"

CSungJun::CSungJun(void)
{
	m_tUnitInfo.wstrClass = L"섹스마스터";
	
	m_tUnitInfo.m_iHP = m_tUnitInfo.m_iMaxHP = 500;
	m_tUnitInfo.m_iMP = m_tUnitInfo.m_iMaxMP = 3;
}

CSungJun::~CSungJun(void)
{
}

void CSungJun::Initialize()
{
}

int	CSungJun::Update()
{
	return 0;
}

void CSungJun::Render()
{
	system("cls");
	wcout << m_tUnitInfo.wstrClass << endl;
	cout << "오레가 헨타이다" << endl;
	cout << m_tUnitInfo.m_iHP << " / " << m_tUnitInfo.m_iMaxHP << endl;
	cout << m_tUnitInfo.m_iMP << " / " << m_tUnitInfo.m_iMaxMP << endl;
	system("pause");
}

void CSungJun::Release()
{
}