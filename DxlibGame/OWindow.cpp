#include "OWindow.h"
#include "DxLib.h"

struct WINDOW_SETTINGS {
	bool IsFullScreen = false;
	int ScreenSize_X;
	int Screen_Size_Y;
	int ColorbitDepth;
};

WINDOW_SETTINGS WS;

OWindow::OWindow(int ScreenSize_X, int Screen_Size_Y, int ColorbitDepth) {
	WS.IsFullScreen = true;
	WS.ScreenSize_X = ScreenSize_X;
	WS.Screen_Size_Y = Screen_Size_Y;
	WS.ColorbitDepth = ColorbitDepth;
};

void OWindow::MakeWindow() {
	ChangeWindowMode(WS.IsFullScreen);
	SetGraphMode(WS.ScreenSize_X, WS.Screen_Size_Y, WS.ColorbitDepth);
}
