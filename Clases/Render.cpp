/* 
 * File:   Render.cpp
 * Author: linuxero
 * 
 * Created on March 5, 2014, 8:08 AM
 */

#include "Render.h"

Render::Render() : sprite(), renderPos() {
}

Render::Render(const Render& orig) {
}

Render::~Render() {
}



void Render::SetTexture(sf::Texture &tex)
{
	sprite = sf::Sprite(tex);
}



void Render::Draw(sf::RenderWindow &window, const sf::Vector2f &posPrev, const sf::Vector2f &posNew, float interpolation)
{
	renderPos = sf::Vector2f(
		posPrev.x + ((posNew.x - posPrev.x) * interpolation),
		posPrev.y + ((posNew.y - posPrev.y) * interpolation));

	sprite.setPosition(renderPos.x, renderPos.y);
	window.draw(sprite);
}