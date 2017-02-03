#include "Player.h"

CPlayer::CPlayer(void)
: m_iBehavior(0)
{
}

CPlayer::~CPlayer(void)
{
}

void CPlayer::Initialize()
{

}

int	CPlayer::Update()
{
	return 0;
}

void CPlayer::Render()
{
	cout << "\n1. 공격한다 2. 스킬사용 3. 도망친다\n" << endl;
	cin >> m_iBehavior;
}

void CPlayer::Release()
{

}