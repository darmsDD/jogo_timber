#include <SFML/Graphics.hpp>

using namespace sf;

int main()
{
    //Create a video object;
    VideoMode vm(1366,768);

    //Create and open a windown for the game
    RenderWindow window(vm,"Timber!!!",Style::Fullscreen);
    while(window.isOpen())
    {
        /*
        Handle the players inputs
        */    
       if(Keyboard::isKeyPressed(Keyboard::Escape))
       {
            window.close();    
       }

        /*
        Update the scene
        */

        /*
        Draw the scene
        */    
       
       //Clear everything from the last frame
       window.clear();
       
       //Draw our game scene here

       //Show everything we just drew
       window.display();
    }

    return 0;

}