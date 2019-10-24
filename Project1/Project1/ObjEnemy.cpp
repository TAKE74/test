//使用するヘッダーファイル
#include "GameL\DrawTexture.h"

#include "GameHead.h"
#include "ObjEnemy.h"

//使用するネームスペース
using namespace GameL;

//イニシャライズ
void CObjEnemy::Init()
{
	m_x = 600;
	m_y = 400;
	Hits::SetHitBox(this, m_x, m_y, 32, 32, ELEMENT_ENEMY, OBJ_ENEMY, 1);
}

//アクション
void CObjEnemy::Action()
{
	//HitBoxの内容更新
	CHitBox*hit = Hits::GetHitBox(this);
	hit->SetPos(m_x, m_y);
}

//ドロー
void CObjEnemy::Draw()
{
	//描画カラー情報
	float C[4] = { 1.0f,1.0f,1.0f,1.0f };

	RECT_F src;//描画元切り取り位置
	RECT_F dst;//描画先位置

	//切り取り位置の設定
	src.m_top = 0.0f;
	src.m_left = 32.0f;
	src.m_right = 64.0f;
	src.m_bottom = 32.0f;

	//表示位置の設定
	dst.m_top = 0.0f + m_y;
	dst.m_left = 32.0f+m_x;
	dst.m_right = 0.0f+m_x;
	dst.m_bottom = 32.0f+m_y;

	Draw::Draw(0, &src, &dst,c, 0.0f);
}