#include <SFML/Graphics.hpp>

using namespace sf;

int main()
{
    //Create a video object;
    VideoMode vm(1366,768);

    //Create and open a windown for the game
    RenderWindow window(vm,"Timber!!!",Style::Fullscreen);


    return 0;

}