#pragma once

int GetRandomNumber(int from, int to) {
	return (rand()*(to+1-from)) / (RAND_MAX+1)+from;
}