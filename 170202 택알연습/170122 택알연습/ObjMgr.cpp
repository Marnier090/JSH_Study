#include "ObjMgr.h"
#include "Obj.h"

IMPLEMENT_SINGLETON(CObjMgr);

CObjMgr::CObjMgr(void)
{
}

CObjMgr::~CObjMgr(void)
{
	Release();
}

void CObjMgr::AddObj(CObj* _pObj, OBJTYPE _eObjType)
{
	m_ObjList[_eObjType].push_back(_pObj);
}

void CObjMgr::DeleteList(OBJTYPE _eObjType)
{
	m_iter		= m_ObjList[_eObjType].begin();
	m_iter_end	= m_ObjList[_eObjType].end();

	for(; m_iter != m_iter_end; ++m_iter)
	{
		delete(*m_iter);
	}

	m_ObjList[_eObjType].clear();
}

void CObjMgr::Initialize()
{

}

int	CObjMgr::Update()
{
	for(int i = 0; i < OT_END; ++i)
	{
		m_iter = m_ObjList[i].begin();
		m_iter_end	= m_ObjList[i].end();

		while(m_iter != m_iter_end)
		{
			if((*m_iter)->Update() == 1)
			{
				delete (*m_iter);
				m_iter = m_ObjList[i].erase(m_iter);
			}
			else
				++m_iter;
		}
	}

	return 0;
}

void CObjMgr::Render()
{
	for(int i = 0; i < OT_END; ++i)
	{
		m_iter = m_ObjList[i].begin();
		m_iter_end	= m_ObjList[i].end();

		for(; m_iter != m_iter_end; ++m_iter)
		{
			(*m_iter)->Render();
		}
	}
}

void CObjMgr::Release()
{
	for(int i = 0; i < OT_END; ++i)
	{
		m_iter = m_ObjList[i].begin();
		m_iter_end	= m_ObjList[i].end();

		for(; m_iter != m_iter_end; ++m_iter)
		{
			delete (*m_iter);
		}

		m_ObjList[i].clear();
	}
}