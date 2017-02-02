#pragma 

typedef struct tagUnitInfo
{
	int	m_iHP;
	int m_iMaxHP;
	int	m_iMP;
	int m_iMaxMP;

	wstring wstrClass;

	tagUnitInfo(void)
		: m_iHP(0), m_iMaxHP(0), m_iMP(0), m_iMaxMP(0)
	{

	}

}UNITINFO;