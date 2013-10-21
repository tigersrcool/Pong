/*
 * Pong.c
 *
 *  Created on: Oct 15, 2013
 *      Author: C15Kirsten.Larson
 */

#include "Pong.h"



ball createball(int Posx, int Posy, int Velx, int Vely, char radius) {
	ball Kball;
	Kball.position.x = Posx;
	Kball.position.y = Posy;
	Kball.velocity.x = Velx;
	Kball.velocity.y = Vely;
	Kball.radius = radius;

	return (Kball);
}

ball moveball(ball ballmoved){
	ballmoved.position.x = ballmoved.position.x + ballmoved.velocity.x;
	ballmoved.position.y = ballmoved.position.y + ballmoved.velocity.y;

	if (ballmoved.position.x + ballmoved.radius >= scrnwdt){
		ballmoved.velocity.x = -ballmoved.velocity.x;
	}

	if (ballmoved.position.x - ballmoved.radius <= 0){
		ballmoved.velocity.x = -ballmoved.velocity.x;
	}

	if (ballmoved.position.y + ballmoved.radius >= scrnht){
		ballmoved.velocity.y = -ballmoved.velocity.y;
	}

	if (ballmoved.position.y - ballmoved.radius <= 0){
		ballmoved.velocity.y = -ballmoved.velocity.y;
	}

	return (ballmoved);

}
