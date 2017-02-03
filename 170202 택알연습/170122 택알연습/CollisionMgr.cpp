#include "CollisionMgr.h"
#include "ObjMgr.h"
#include "Monster.h"
#include "Unit.h"

IMPLEMENT_SINGLETON(CCollisionMgr);
CCollisionMgr::CCollisionMgr(void)
{
}

CCollisionMgr::~CCollisionMgr(void)
{
}

void CCollisionMgr::CollisonCheck(CObj* _pObj, OBJTYPE _ObjType)
{
	m_iter		= CObjMgr::GetInstance()->GetObjList(_ObjType).begin();
	m_iter_end	= CObjMgr::GetInstance()->GetObjList(_ObjType).end();

	for(; m_iter != m_iter_end; ++m_iter)
	{
		if( ((CMonster*)(*m_iter))->GetCollisionCheck() == 1 ) //
		{
			if(((CUnit*)(*m_iter))->GetUnitInfo()->m_iHP >= 0)
				((CUnit*)(*m_iter))->GetUnitInfo()->m_iHP -= ((CUnit*)_pObj)->GetUnitInfo()->m_iAtk;
		}
	}
}