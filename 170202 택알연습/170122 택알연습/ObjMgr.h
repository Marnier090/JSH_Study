#pragma once
#include "Include.h"

class CObj; //전방선언

class CObjMgr
{
	DECLARE_SINGLETON(CObjMgr);

private:
	list<CObj*>	m_ObjList[OT_END];

	list<CObj*>::iterator m_iter;
	list<CObj*>::iterator m_iter_end;

public:
	void AddObj(CObj* _pObj, OBJTYPE _eObjType);
	void DeleteList(OBJTYPE _eObjType);

public:
	void	Initialize();
	int		Update();
	void	Render();
	void	Release();

private:
	CObjMgr(void);
	~CObjMgr(void);
};
