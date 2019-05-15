/*
* @file main.cpp
*/
#include <iostream>
#include "Scene.h"
#include "TitleScene.h"

int main()
{
	SceneStack& sceneStack = SceneStack::Instance();
	sceneStack.Push(std::make_shared<TitleScene>());

	for (;;) {
		const float deltaTIme = 1.0f / 60.f;
		sceneStack.Update(deltaTIme);
		sceneStack.Render();
	}
}