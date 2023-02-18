#include "DxLib.h"
#include "OWindow.h"

OWindow OBJECT_WINDOW(640,480,16);

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow){
	ChangeWindowMode(true);
	SetGraphMode(100, 100, 16);

	if (DxLib_Init() == -1) {
		return -1;
	}

	WaitKey();

	DxLib_End();

	return 0;
}