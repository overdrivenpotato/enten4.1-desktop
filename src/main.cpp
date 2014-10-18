#include <SDL.h>

int main() {
    SDL_Init(SDL_INIT_VIDEO);

    //Require OpenGL 3.1 support
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 3);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 1);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK,
                        SDL_GL_CONTEXT_PROFILE_CORE);

    SDL_Window* window = SDL_CreateWindow("Enten 4.1", 0, 0, 640, 480,
                                                       SDL_WINDOW_OPENGL
                                                     | SDL_WINDOWPOS_CENTERED);
    SDL_GLContext context = SDL_GL_CreateContext(window);

    // TODO

    SDL_GL_DeleteContext(context);
    SDL_Quit();
    return 0;
}