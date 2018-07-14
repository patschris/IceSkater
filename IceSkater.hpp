#ifndef _IceSkater_
#define _IceSkater_

class IceSkater {
    private:
		/* The distance that iceskater glides */
	    int Dist;
		/* The distance from the edge of the lake */
		int pos;
	public:
		IceSkater(int);
	    ~IceSkater();
	    void start();
	    void skate(int);
	    void rotate();
	    void jump();
};

#endif