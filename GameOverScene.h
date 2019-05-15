/**
* @file GameOverScene.h
*/
#ifndef GameOverSCENE_H_INCLUDED
#define GameOverSCENE_H_INCLUDED
#include "Scene.h"

/**
* �Q�[���I�[�o�[���.
*/
class GameOverScene : public Scene
{
public:
	GameOverScene() : Scene("GameOverScene") {}
	virtual ~GameOverScene() = default;

	virtual bool Initialize() override { return true; }
	virtual void ProcessInput() override;
	virtual void Update(float) override {}
	virtual void Render() override {}
	virtual void Finalize() override {}

};

#endif // !GAMEOVERSCENE_H_INCLUDED