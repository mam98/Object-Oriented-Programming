#ifndef BRICK_H
#define BRICK_H
//#include <time.h>
#include "Entity.h"
#include "Board.h"

class Brick : public Entity //ABSTRACT CLASS, ADD MOVING AND STEEL BRICKS
{
public:
    Brick(LTexture*,Board*,Point);
    virtual ~Brick();
    // void setBounds();
    enum BRICK_FRAMES {FRAME0,FRAME1,FRAME2,FRAME3,FRAME4,NUM_BRICK_FRAMES};
    enum COLORS {PURPLE,RED,YELLOW,TURQ,GRAY,NUM_BRICK_COLORS};
    bool getPower();
protected:
    SDL_Rect spriteClips[NUM_BRICK_COLORS][NUM_BRICK_FRAMES];
    int brickHealth;
    int brickDamage;
    int color;
    virtual void render(long int&, SDL_Renderer*)=0;
    void setDimensions(int,int);
    int incrementDmg();
    Board* gameBoard;
    bool isPowered;
};

#endif // BRICK_H