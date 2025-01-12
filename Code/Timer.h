#ifndef TIMER_H_
#define TIMER_H_

#include "Feanwork/Animation.h"
#include "Feanwork/Object.h"
using namespace Feanwork;

class Timer : public Object, public Animation
{
public:
	Timer(int _resourceID, float _xPos, float _yPos, std::string _anim, bool _active = false, std::string _name = "");
	~Timer();

	bool update(Game* _game);
	bool render(Game* _game);
	void collisionCallback(sf::Vector2f _depth, sf::Vector2f _normal, Object* _collision, Game* _game);
	void reset();

	void setRound(int _round)
		{ mRound = _round; }

	int getRound()
		{ return mRound; }

protected:
	int			mRound;
	bool		mRoundSet;
	std::string mName;
};

#endif
