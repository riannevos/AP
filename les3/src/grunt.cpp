//We maken een grunt-klasse. Op basis hiervan kunnen we dan grunt-objecten maken.

class Grunt {
    // attributen (eigenschappen)
    public: //kan ook: private
    int x, y, health;

    //Constructors en this
    Grunt(int x_start, int y_start, int health_start){
        this->x = x_start;
        this->y = y_start;
        this->health = health_start;
    }

    // member functies
    void move(int xoffset, int yoffset){
        x += xoffset;
        y += yoffset;
    }

};