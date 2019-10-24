//STLデバック機能をOFFにする
#define _SECURE_SCL(0)
#define _HAS_ITERATOR_DEBUGGING(0)

//GAMELで使用するヘッダー
#include "GameL\DrawTexture.h"

//使用するネームスペース
using namespace GameL;

//使用するヘッダー
#include "SceneMain.h"
#include "GameHead.h"

//コントラクタ
CSceneMain::CSceneMain()
{

}

//デクトラクタ
CSceneMain::~CSceneMain()
{

}

//ゲームメイン初期化メソッド
void CSceneMain::InitScene()
{
	//外部グラッフィックファイルを読み込み0番に登録
	Draw::LoadImage(L"", 0, TEX_SIZE_);
}

//ゲームメイン実行メソッド
void CSceneMain::Scene()
{

}