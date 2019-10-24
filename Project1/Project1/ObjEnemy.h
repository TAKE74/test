#pragma once
//使用するヘッダー
#include"GameL\SceneObjManager.h"
//使用するネームスペース
using namespace GameL;

//オブジェクト：敵
class CObjEnemy :public CObj
{
public:
	CObjEnemy() {};
	~CObjEnemy() {};
	void Init();	//イニシャライズ
	void Action();	//アクション
	void Draw();	//ドロー
private:
	float m_x;	
	float m_y;

};

