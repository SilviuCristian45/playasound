#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

#pragma comment(lib, "winmm.lib") //sa anuntam linkerul ca vrem sa adaugam winm.lib (e o librarie precompilata bro)

int main() {
	const string musicPath = "andrei, OSCAR, CALINACHO & AMULY - ROCERI (OFFICIAL VIDEO).wav";

	PlaySound(musicPath.c_str(), NULL, SND_SYNC);

	return 0;
}