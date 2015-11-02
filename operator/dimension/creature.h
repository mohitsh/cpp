
#ifndef CREATURE_H
#define CREATURE_H

#include <iostream>
#include <string>
#include "point2d.h"


class Creature
{

private:
	std::string m_strName;
	Point2D m_cLocation;
	
	creature(){}

public:
	Creature(std::String strName, const Point2D
