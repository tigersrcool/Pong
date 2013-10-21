/*
 * Pong.h
 *
 *  Created on: Oct 15, 2013
 *      Author: C15Kirsten.Larson
 */

#ifndef PONG_H_
#define PONG_H_

#define scrnht 400
#define scrnwdt 400

typedef struct {
	int x;
	int y;
	} vector;

typedef struct {
	vector position;
	vector velocity;
	char radius;
} ball;

ball createball(int Posx, int Posy, int Velx, int Vely, char radius);
ball moveball(ball ballmoved);



#endif /* PONG_H_ */
