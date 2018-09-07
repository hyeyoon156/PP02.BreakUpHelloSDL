#include<SDL.h>

SDL_Window* g_pWindow = 0;
SDL_Renderer* g_pRenderer = 0;

void init() {}
void render() {}
void update() {}
void handleEvents() {}
void clean(){}

bool g_bRunning = false;
bool init(const char* title, int xpos, int ypos,
	int width, int height, int flags)
{
	if (SDL_Init(SDL_INIT_EVERYTHING) >= 0)
	{
		g_pWindow = SDL_CreateWindow(title, xpos, ypos, width, height, flags);

		if (g_pWindow != 0)
		{
			g_pRenderer = SDL_CreateRenderer(g_pWindow, -1, 0);
		}
	}
	else {
		return false;
	}
	return true;
}

void render()
{
	SDL_SetRenderDrawColor()
}

int main()
{
	init();

	while (g_bRunning)
	{
		handleEvents();
		update();
		render();
	}
	clean();

}