#pragma once

#include <sdl2/SDL.h>
#include <string>

class Display {
public:
	Display(int width, int height, const std::string& title);
	virtual ~Display();
	bool isClosed();
	void clear(float r, float g, float b, float a);
	void update();
protected:
private:
	Display(const Display& other) {}
	Display& operator=(const Display& other) {}

	SDL_Window* m_window;
	SDL_GLContext m_glcontext;
	bool m_isClosed;
};

