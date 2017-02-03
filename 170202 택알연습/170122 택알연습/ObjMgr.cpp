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

list<CObj*>& CObjMgr::GetObjList(OBJTYPE _eObjType)
{
	return m_ObjList[_eObjType];
}

void CObjMgr::Initialize()
{

}

int	CObjMgr::Update()
{
	int iResult = 0;

	for(int i = 0; i < OT_END; ++i)
	{
		m_iter = m_ObjList[i].begin();
		m_iter_end	= m_ObjList[i].end();

		while(m_iter != m_iter_end)
		{
			iResult = (*m_iter)->Update();

			if(iResult == 1)		// �����ֱ�
			{
				delete (*m_iter);
				m_iter = m_ObjList[i].erase(m_iter);
			}
			else if(iResult == 2)	// ����ȯ (���ʿ��� �����ְ� �Ǹ� iter�� ����ȯ�ϸ鼭 �����ټ��� �����Ƿ�)
				return 0;
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