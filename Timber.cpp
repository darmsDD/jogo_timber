#include <SFML/Graphics.hpp>

using namespace sf;

int main()
{
    //Create a video object;
    VideoMode vm(1366,768);

    //Create and open a windown for the game
    RenderWindow window(vm,"Timber!!!",Style::Fullscreen);
   
    //Create a texture to hold a graphic on the GPU
    Texture textureBackground;

    //Load a graphic into the texture
    textureBackground.loadFromFile("graphics/background.png");

    //create a sprite
    Sprite spriteBackground;

    //Attach the texture to the sprite
    spriteBackground.setTexture(textureBackground);

    //set the spriteBackground to cover the screen
        spriteBackground.setPosition(0,0);


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
        window.draw(spriteBackground);
       
       //Show everything we just drew
       window.display();
    }

    return 0;

}