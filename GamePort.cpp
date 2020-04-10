#include <iostream>
#include <SFML/Graphics.hpp>

int main() {
	std::cout << "Hello world" << std::endl;
	sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
	sf::CircleShape shape(100.f);
	shape.setFillColor(sf::Color::Green);

	while (window.isOpen()) {
		sf::Event event;
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed) {
				window.close();
			}
		}

		window.clear();
		window.draw(shape);
		window.display();
	}

	return 0;
}

// Structure of the project

class CardObj {
    std::string name;
    sf::Texture texture;
public:
    Card(const Texture& tex) : texture(tex) {
        //
    }

    virtual bool play();
    virtual void draw();
}

typedef shared_ptr<CardObj> Card


typedefrd > enum {
    Manage = 0,
    Design = 1,
    Develop = 2,
    Content = 3
} WorkType;

class Projects {
    std::string name;
    unordered_map<WorkType, int> require, done;

    int income;
    vector<Situation> situations;

public:

};

class Situation {
    bool is_active;
    std::functional activate;

    Situation(std::functional func) : activate(func) {
        //
    }
};

class ProjectCard : public Card, public Project {
    //
};

class Worker {
private:
    Role role;
    bool worked_today;
};

class OpportunityCard : public Card {
    Role role;
};

class FeatureOpportunityCard : OpportunityCard, Project {
    //
};

class SituationOpportunityCard : OpportunityCard, Situation {
    //
};

class Deck {
    std::queue<Card*> cards;

public:
    Deck();
    Deck(vector<Card*> cards);
    Card new_card();
    void Shuffle();
};

class Hand {
    vector<Card*> cards;
public:
    get_card(size_t index);
    void add_card(Deck);
};

class Player {
    Hand hand;
    int money;
    int bitches;

    vector<Project> projects;

public:
    get_card(Card);
}

vector<Card>


class Game {
    vector<Player> players;
    Deck projects, opportunities, fuckups;
public:
    Game(int player_num) : players(player_num), projects(load_cards("projects")) {
        // load cards
    }
    void Run() {
        //graphics
        // 
    }
    friend Situation;
}

class Engine {
    //
}
// _______________________

class PlayerAdapter {
    Command wait_for_commnd() {
        return "положить хуй на игру";
    }
}

class AIAdapter {
    Command do_move() {
        // processing

        return "сыграть карту";
    }
}

int main() {
    // Temporary govnocode
    cout << "player numbers:" << endl;
    int num_players;
    std::cin >> player_num;
    // 
    PlayerAdapter player;
    AIAdapter ai1, ai2;
    cout << "Choose: host/connect" << endl;
    int connet_type;
    cin >> connect_type;
    if (connect_type == 0) {
        randomize(get_time);
        int seed = random() % 32000;
    }
    else {
        //get seed
        randomize(seed);
    }
    Game my_gay(player_num, seed);
    my_gay.Run();
    while (my_gay.is_runnin) {
        game.process_command(player.wait_for_command());
        game.process_command(ai1.do_move());
        game.process_command(ai2.do_move());
    }
    return 0;
}


PlayerAdapterFromPC
AIAdapter
NetAdapter

person -> )[game
AI     -> }[game
Net    -> * [game











