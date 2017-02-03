#pragma once
#include "Include.h"
#include "ObjMgr.h"
#include "Player.h"

class CCollisionMgr
{
	DECLARE_SINGLETON(CCollisionMgr);

private:
	CPlayer* m_pPlayer;

	list<CObj*>::iterator m_iter;
	list<CObj*>::iterator m_iter_end;

public:
	void CollisonCheck(CObj* _pObj, OBJTYPE _ObjType);

private:
	CCollisionMgr(void);
	~CCollisionMgr(void);
};
