#pragma once
#include <vector>

class Texture;

class Sprite
{
private:
	std::vector<Texture*>* _textureFrame;

	int _frame;
	int _frameMaxCount;
	int _frameDuration;
	int _aniSpeed;

	int _x;
	int _y;
	float _pivotY;

	bool _isLoop;
	bool _isPlay;

public:
	Sprite(const char* filename, bool isLoop);
	~Sprite();

public:
	void Update(int deltaTime);
	void Render();

	void SetPosition(int x, int y);
	void SetLength(int length);
	void SetPivotY(float pivot);
	void SetAlpha(int value);
	void Play();
	void Stop();
	void SetLoop(bool isLoop);
};