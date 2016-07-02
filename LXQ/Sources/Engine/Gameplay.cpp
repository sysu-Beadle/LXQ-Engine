#include "Gameplay.h"
#include "IScene.h"
#include "Logger.h"
#include "Platform/Time.h"
#include "ObjectFactor.h"


Gameplay::Gameplay()
{
}


Gameplay::~Gameplay()
{
}

void Gameplay::Initialize()
{
	_scene.reset(ObjectFactor::Create<IScene>());
}

void Gameplay::Finalize()
{
	_scene.reset();
}

bool Gameplay::MainLoop()
{
	this->Tick();
	this->Draw();

	return true;
}

void Gameplay::Tick()
{
	// TODO: update all objects

	LOGI << "TICK: " << Time::GetDeltaTime();
}

void Gameplay::Draw()
{
	// TODO: render scene
}
