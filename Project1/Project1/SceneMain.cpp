//STL�f�o�b�N�@�\��OFF�ɂ���
#define _SECURE_SCL(0)
#define _HAS_ITERATOR_DEBUGGING(0)

//GAMEL�Ŏg�p����w�b�_�[
#include "GameL\DrawTexture.h"

//�g�p����l�[���X�y�[�X
using namespace GameL;

//�g�p����w�b�_�[
#include "SceneMain.h"
#include "GameHead.h"

//�R���g���N�^
CSceneMain::CSceneMain()
{

}

//�f�N�g���N�^
CSceneMain::~CSceneMain()
{

}

//�Q�[�����C�����������\�b�h
void CSceneMain::InitScene()
{
	//�O���O���b�t�B�b�N�t�@�C����ǂݍ���0�Ԃɓo�^
	Draw::LoadImage(L"", 0, TEX_SIZE_);
}

//�Q�[�����C�����s���\�b�h
void CSceneMain::Scene()
{

}