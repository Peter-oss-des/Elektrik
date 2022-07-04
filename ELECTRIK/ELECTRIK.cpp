#include "ELECTRIK.h"
#include "SFML/Graphics.hpp"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]

void main(array<String^>^ args) {
	Application::EnableVisualStyles;
	Application::SetCompatibleTextRenderingDefault(false);
	ELECTRIK::ELECTRIK form;
	Application::Run(%form);

/*	sf::RenderWindow window(sf::VideoMode(600, 500), "IEEE Equivalent Circuit");
	sf::Event e;

	sf::RectangleShape wire;
	wire.setOutlineColor(sf::Color::Black);
	wire.setOutlineThickness(1);

	sf::Text values;
	sf::Font font;
	font.loadFromFile("C:/Users/PETER/Documents/Isipho gaming/ELECTRIK/ELECTRIK/Debug/resources/sansation.ttf");
	values.setFont(font);
	values.setCharacterSize(50);

	sf::Texture resistance;
	sf::Sprite resistor;
	resistance.loadFromFile("C:/Users/PETER/Documents/Isipho gaming/ELECTRIK/ELECTRIK/Debug/resources/resistor.png");
	resistor.setTexture(resistance);
	resistor.setScale(0.049, 0.13);

	sf::Texture inductance;
	sf::Texture inductance1;
	sf::Sprite inductor;
	sf::Sprite inductor1;
	inductance.loadFromFile("C:/Users/PETER/Documents/Isipho gaming/ELECTRIK/ELECTRIK/Debug/resources/inductor.png");
	inductance1.loadFromFile("C:/Users/PETER/Documents/Isipho gaming/ELECTRIK/ELECTRIK/Debug/resources/inductor - Copy.png");
	inductor.setTexture(inductance);
	inductor.setScale(0.042, 0.17);
	inductor1.setTexture(inductance1);
	inductor1.setScale(0.17, 0.042);

	sf::Texture var_resistance;
	sf::Sprite var_resistor;
	var_resistance.loadFromFile("C:/Users/PETER/Documents/Isipho gaming/ELECTRIK/ELECTRIK/Debug/resources/var_resistor - Copy.png");
	var_resistor.setTexture(var_resistance);
	var_resistor.setScale(0.049, 0.039);

	while (window.isOpen()) {
		while (window.pollEvent(e)) {

			window.clear(sf::Color::White);

			//1
			wire.setPosition(100, 100);
			wire.setSize(sf::Vector2f(60, 0));
			window.draw(wire);

			resistor.setPosition(150, 75);
			window.draw(resistor);
			values.setPosition(150, 90);
			//values.setString(text_r1);

			//2
			wire.setPosition(190, 100);
			wire.setSize(sf::Vector2f(65, 0));
			window.draw(wire);

			inductor.setPosition(250, 55);
			window.draw(inductor);

			//3
			wire.setPosition(290, 100);
			wire.setSize(sf::Vector2f(65, 0));
			window.draw(wire);

			//4
			wire.setPosition(350, 100);
			wire.setSize(sf::Vector2f(50, 0));
			window.draw(wire);

			inductor.setPosition(400, 55);
			window.draw(inductor);

			//11
			wire.setPosition(450, 100);
			wire.setSize(sf::Vector2f(50, 0));
			window.draw(wire);

			//5
			wire.setPosition(100, 250);
			wire.setSize(sf::Vector2f(250, 0));
			window.draw(wire);

			//6
			wire.setPosition(350, 250);
			wire.setSize(sf::Vector2f(150, 0));
			window.draw(wire);

			//7
			wire.setPosition(350, 100);
			wire.setSize(sf::Vector2f(0, 55));
			window.draw(wire);

			inductor1.setPosition(345, 150);
			window.draw(inductor1);

			//8
			wire.setPosition(350, 190);
			wire.setSize(sf::Vector2f(0, 60));
			window.draw(wire);

			//9
			wire.setPosition(500, 100);
			wire.setSize(sf::Vector2f(0, 50));
			window.draw(wire);

			var_resistor.setPosition(475, 150);
			window.draw(var_resistor);

			//10
			wire.setPosition(500, 200);
			wire.setSize(sf::Vector2f(0, 50));
			window.draw(wire);

			window.display();

			if (e.type == sf::Event::Closed) {
				window.close();
			}
		}
	}*/
}