#include "OWindow.h"
#include "DxLib.h"

struct WINDOW_SETTINGS {
	int ScreenSize_X;
	int Screen_Size_Y;
	int ColorbitDepth;
};

WINDOW_SETTINGS WS;

OWindow::OWindow(int ScreenSize_X, int Screen_Size_Y, int ColorbitDepth) {
	WS.ScreenSize_X = ScreenSize_X;
	WS.Screen_Size_Y = Screen_Size_Y;
	WS.ColorbitDepth = ColorbitDepth;
};

void OWindow::MakeWindow() {
	SetGraphMode(WS.ScreenSize_X, WS.Screen_Size_Y, WS.ColorbitDepth);
}
