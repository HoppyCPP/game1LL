// HelloSFML.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <SFML/Graphics.hpp>
#define vm_length 1920
#define vm_height 1080 

// Makes code easer to type
using namespace sf;

int main()
{
    //create a video mode object
    VideoMode vm(vm_length, vm_height);
        
    // Create and open window for the game
    RenderWindow window(vm, "Timber!!", Style::Fullscreen); 

    // Create a tsture to hold a graphic on the gpu
    Texture textureBackground;

    // Load a graphic into the texture
    textureBackground.loadFromFile("graphics/background.png");

    // Create a sprite
    Sprite spriteBackground;

    //Attach texture
    spriteBackground.setTexture(textureBackground);

    // Set toe cover screen 0,0 is at top left
    spriteBackground.setPosition(0, 0);

   

    // Main game loop
    while (window.isOpen()) {
        
        if (Keyboard::isKeyPressed(Keyboard::Escape)) {
            window.close();
        
        }  

        // Draw scene

        window.clear();

        // Drawing stuff ayaayyaay
        window.draw(spriteBackground);

        // Show us the magic
        window.display();

    
    }


    return 0;
}




