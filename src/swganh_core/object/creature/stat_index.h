// This file is part of SWGANH which is released under the MIT license.
// See file LICENSE or go to http://swganh.com/LICENSE
#pragma once

namespace swganh
{
namespace object
{

/**
 * Represents a Stats index.
 */
enum StatIndex :
uint16_t
{
    HEALTH = 0,
    STRENGTH,
    CONSTITUTION,
    ACTION,
    QUICKNESS,
    STAMINA,
    MIND,
    FOCUS,
    WILLPOWER
};

enum MainStatIndex :

uint16_t
{
	MAINHEALTH = 0,
	MAINACTION = 3,
	MAINMIND = 6
};

inline MainStatIndex& operator++(MainStatIndex& e)
{
	static MainStatIndex next[] = { MainStatIndex::MAINACTION, MainStatIndex::MAINMIND, MainStatIndex::MAINHEALTH };
	return e=next[e];
}

}
}