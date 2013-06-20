/*
 * basicDijkstra.h
 *
 *  Created on: May 18, 2013
 *      Author: fabi
 */

#ifndef BASICDIJKSTRA_H_
#define BASICDIJKSTRA_H_

#include <stdlib.h>
#include "graphStruct.h"

void advDijkstra(Graph *graph, Route *route, int start);
void advInit(Route *route, int start, int *nodes);
int advNodesEmpty(int *nodes, int countNodes);


#endif /* BASICDIJKSTRA_H_ */