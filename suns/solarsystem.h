#ifndef solarsystem_h
#define solarsystem_h


#ifdef __APPLE__
#include <gl/glut.h>
#else
#include <gl/glut.h>
#endif

#include "stars.h"

#define STARS_NUM 10

class SolarSystem {

public:

	SolarSystem();
	~SolarSystem();

	void onDisplay();
	void onUpdate();
	void onKeyboard(unsigned char key, int x, int y);

private:
	Star *stars[STARS_NUM];

	GLdouble viewX, viewY, viewZ;
	GLdouble centerX, centerY, centerZ;
	GLdouble upX, upY, upZ;
};

#endif /* solarsystem_hpp */
