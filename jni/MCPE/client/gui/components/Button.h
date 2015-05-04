#ifndef __BUTTON_H__
#define __BUTTON_H__

#include "GuiElement.h"

class MinecraftClient;

class Button : public GuiElement {
public:
	// Size : 168
	char newstuff[48];				// 108
	std::string _text;					// 156
	int _buttonId;					// 160
	bool _toggle;					// 164
	bool _isPressed;					// 165
	bool _isOverrideRendering;	// 166

	Button(int, int, int, int, int, const std::string &);
	Button(int, int, int, const std::string &);
	Button(int, const std::string &, bool);
	virtual ~Button();
	virtual void render(MinecraftClient *, int, int);
	virtual void mouseReleased(MinecraftClient *, int, int, int);
	virtual bool clicked(MinecraftClient *, int, int);
	virtual void released(int, int);
	virtual void setPressed();
	virtual void getYImage(bool);
	virtual void renderBg(MinecraftClient *, int, int);
	virtual void renderFace(MinecraftClient *, int, int);
	void setMsg(const std::string &);
	void setOverrideScreenRendering(bool);
	void isOveridingScreenRendering(void);
	bool isInside(int, int);
	bool hovered(MinecraftClient *, int, int);
};

#endif
