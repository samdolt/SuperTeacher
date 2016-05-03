#pragma once
#include <utility>
#include <memory>
#include <vector>
#include <SFML/Graphics.hpp>
#include "ResourceManager.h"


class Object {
public:
    virtual void add_drawable(std::shared_ptr<sf::Drawable> drawable);
    virtual std::vector<std::shared_ptr<sf::Drawable>> get_drawables(void);
private:
	std::vector<std::shared_ptr<sf::Drawable>> m_drawable;
	
};
