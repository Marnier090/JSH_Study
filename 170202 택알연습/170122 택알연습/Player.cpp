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
	cout << "\n1. �����Ѵ� 2. ��ų��� 3. ����ģ��\n" << endl;
	cin >> m_iBehavior;
}

void CPlayer::Release()
{

}