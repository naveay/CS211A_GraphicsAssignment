/*
 * OpenGL demonstration program for ICS Computer Graphics courses
 * $Id: sceneModule.c,v 1.1 2002/04/03 00:00:43 mshafae Exp $
 *
 */

#include "sceneModule.h"

static float cubeColors[6][4] =
{
  {0.8, 0.8, 0.8, 1.0},
  {0.8, 0.0, 0.0, 1.0},
  {0.0, 0.8, 0.0, 1.0},
  {0.0, 0.0, 0.8, 1.0},
  {0.0, 0.8, 0.8, 1.0},
  {0.8, 0.0, 0.8, 1.0},
};

static float otherCubeColors[6][4] =
{
  {0.4, 0.2, 0.4, 1.0},
  {0.4, 0.1, 0.3, 1.0},
  {0.0, 0.4, 0.2, 1.0},
  {0.0, 0.9, 0.4, 1.0},
  {0.2, 0.4, 0.4, 1.0},
  {0.4, 0.7, 0.4, 1.0},
};

//this is modified so that all the x,y,z coordinates are doubled
static float cubeVertexes[6][4][4] =
{
  {
    {-2.0, -2.0, -2.0, 1.0},
    {-2.0, -2.0, 2.0, 1.0},
    {-2.0, 2.0, 2.0, 1.0},
    {-2.0, 2.0, -2.0, 1.0}},

  {
    {2.0, 2.0, 2.0, 1.0},
    {2.0, -2.0, 2.0, 1.0},
    {2.0, -2.0, -2.0, 1.0},
    {2.0, 2.0, -2.0, 1.0}},

  {
    {-2.0, -2.0, -2.0, 1.0},
    {2.0, -2.0, -2.0, 1.0},
    {2.0, -2.0, 2.0, 1.0},
    {-2.0, -2.0, 2.0, 1.0}},

  {
    {2.0, 2.0, 2.0, 1.0},
    {2.0, 2.0, -2.0, 1.0},
    {-2.0, 2.0, -2.0, 1.0},
    {-2.0, 2.0, 2.0, 1.0}},

  {
    {-2.0, -2.0, -2.0, 1.0},
    {-2.0, 2.0, -2.0, 1.0},
    {2.0, 2.0, -2.0, 1.0},
    {2.0, -2.0, -2.0, 1.0}},

  {
    {2.0, 2.0, 2.0, 1.0},
    {-2.0, 2.0, 2.0, 1.0},
    {-2.0, -2.0, 2.0, 1.0},
    {2.0, -2.0, 2.0, 1.0}}
};

//this is the same as cubeVertexes with the z coordinates increased by 10
static float otherCubeVertexes[6][4][4] =
{
  {
    {-1.0, -1.0, 9.0, 1.0},
    {-1.0, -1.0, 11.0, 1.0},
    {-1.0, 1.0, 11.0, 1.0},
    {-1.0, 1.0, 9.0, 1.0}},

  {
    {1.0, 1.0, 11.0, 1.0},
    {1.0, -1.0, 11.0, 1.0},
    {1.0, -1.0, 9.0, 1.0},
    {1.0, 1.0, 9.0, 1.0}},

  {
    {-1.0, -1.0, 9.0, 1.0},
    {1.0, -1.0, 9.0, 1.0},
    {1.0, -1.0, 11.0, 1.0},
    {-1.0, -1.0, 11.0, 1.0}},

  {
    {1.0, 1.0, 11.0, 1.0},
    {1.0, 1.0, 9.0, 1.0},
    {-1.0, 1.0, 9.0, 1.0},
    {-1.0, 1.0, 11.0, 1.0}},

  {
    {-1.0, -1.0, 9.0, 1.0},
    {-1.0, 1.0, 9.0, 1.0},
    {1.0, 1.0, 9.0, 1.0},
    {1.0, -1.0, 9.0, 1.0}},

  {
    {1.0, 1.0, 11.0, 1.0},
    {-1.0, 1.0, 11.0, 1.0},
    {-1.0, -1.0, 11.0, 1.0},
    {1.0, -1.0, 11.0, 1.0}}
};

void drawScene( ){
  int i;

  for (i = 0; i < 6; ++i) {
    glBegin(GL_POLYGON);
    glColor3fv(&cubeColors[i][0]);
    glVertex4fv(&cubeVertexes[i][0][0]);
    glVertex4fv(&cubeVertexes[i][1][0]);
    glVertex4fv(&cubeVertexes[i][2][0]);
    glVertex4fv(&cubeVertexes[i][3][0]);
    glEnd();

	glBegin(GL_POLYGON);
    glColor3fv(&otherCubeColors[i][0]);
    glVertex4fv(&otherCubeVertexes[i][0][0]);
    glVertex4fv(&otherCubeVertexes[i][1][0]);
    glVertex4fv(&otherCubeVertexes[i][2][0]);
    glVertex4fv(&otherCubeVertexes[i][3][0]);
    glEnd();
  }
}

