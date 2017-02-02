#include "CharactorSelectScene.h"
#include "SceneMgr.h"
#include "Enum.h"

int main()
{
	wcin.imbue( locale( "korean" ) );
	wcout.imbue( locale( "korean" ) );

	CSceneMgr* pSceneMgr = CSceneMgr::GetInstance();
	pSceneMgr->ChangeScene(ST_CARACTORSELECT);

	while(1)
	{
		if( pSceneMgr->GetScene()->Update() == 1)
			break;

		pSceneMgr->GetScene()->Render();
	}

	return 0;
}