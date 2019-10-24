//�g�p����w�b�_�[�t�@�C��
#include "GameL\DrawTexture.h"

#include "GameHead.h"
#include "ObjEnemy.h"

//�g�p����l�[���X�y�[�X
using namespace GameL;

//�C�j�V�����C�Y
void CObjEnemy::Init()
{
	m_x = 600;
	m_y = 400;
	Hits::SetHitBox(this, m_x, m_y, 32, 32, ELEMENT_ENEMY, OBJ_ENEMY, 1);
}

//�A�N�V����
void CObjEnemy::Action()
{
	//HitBox�̓��e�X�V
	CHitBox*hit = Hits::GetHitBox(this);
	hit->SetPos(m_x, m_y);
}

//�h���[
void CObjEnemy::Draw()
{
	//�`��J���[���
	float C[4] = { 1.0f,1.0f,1.0f,1.0f };

	RECT_F src;//�`�挳�؂���ʒu
	RECT_F dst;//�`���ʒu

	//�؂���ʒu�̐ݒ�
	src.m_top = 0.0f;
	src.m_left = 32.0f;
	src.m_right = 64.0f;
	src.m_bottom = 32.0f;

	//�\���ʒu�̐ݒ�
	dst.m_top = 0.0f + m_y;
	dst.m_left = 32.0f+m_x;
	dst.m_right = 0.0f+m_x;
	dst.m_bottom = 32.0f+m_y;

	Draw::Draw(0, &src, &dst,c, 0.0f);
}