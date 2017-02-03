#pragma 

typedef struct tagUnitInfo
{
	int	m_iHP;
	int m_iMaxHP;
	int	m_iMP;
	int m_iMaxMP;

	int m_iAtk;
	int m_iMtk;

	wstring wstrName;

	tagUnitInfo(void)
		: m_iHP(0), m_iMaxHP(0), m_iMP(0), m_iMaxMP(0)
		, m_iAtk(0), m_iMtk(0)
	{
	}

}UNITINFO;