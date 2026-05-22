#ifndef ALGO_H
#define ALGO_H

#include "PathNode.h"
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <fstream>
#include <iostream>
using namespace std;
// Task 1
PathNode* findSocialPath(double adjMatrix[100][100], int startPerson, int goalPerson);
vector<int> calcHeuristic(double adjMatrix[100][100], int goal, int n);
PathNode* buildPath(const vector<int> &parent, const vector<double> &gCost, const vector<double> &hCost, int start, int goal);
// Task 2
PathNode* findDronePath(double adjMatrix[100][100], int coords[100][2],int startPoint, int goalPoint, int mode);
double getHeuristic(int mode, int x1, int x2, int y1, int y2);
// Task 3
PathNode* findWarehousePath(int warehouse[100][100], int m, int n,int startX, int startY,int goalX, int goalY, int mode);
PathNode *buildPath3(int pX[100][100], int pY[100][100], string dirName[100][100], double gCost[100][100], double hCost[100][100],int startX, int startY, int goalX, int goalY);
double getHeuristicMaze(int mode, int x1, int x2, int y1, int y2);
// Task 4
PathNode* findEvacuationPath(int floorPlan[100][100], int m, int n,int startX, int startY,int exitX, int exitY, double weightMatrix[100][100], int mode);
#endif