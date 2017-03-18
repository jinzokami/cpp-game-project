#include "Sprite.hpp"

Sprite::Sprite()
{
}

Sprite::Sprite(const char* imgPath)
{
	*image = Image(imgPath);
}

Sprite::Sprite(const char * imgPath, float x, float y)
{
	*image = Image(imgPath);
	this->x = x;
	this->y = y;
	w = image->image->w;
	h = image->image->h;
}

Sprite::Sprite(const char * imgPath, float x, float y, float w, float h)
{
	*image = Image(imgPath);
	this->x = x;
	this->y = y;
	this->w = w;
	this->h = h;
}

Sprite::Sprite(Image * image)
{
	this->image = image;
}

Sprite::Sprite(Image * image, float x, float y)
{
	this->image = image;
	this->x = x;
	this->y = y;
	this->w = image->image->w;
	this->h = image->image->h;
}

Sprite::Sprite(Image * image, float x, float y, float w, float h)
{
	this->image = image;
	this->x = x;
	this->y = y;
	this->w = w;
	this->h = h;
}

Sprite::~Sprite()
{
	delete image;
}

void Sprite::draw(Graphics* g)
{
	g->draw(image->image, x, y, w, h);
}
