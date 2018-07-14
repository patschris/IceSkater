#ifndef _IceSkater_
#define _IceSkater_

class IceSkater {
    private:
	    int Dist, pos;
	public:
		IceSkater(int);
    	IceSkater(int, int);
	    ~IceSkater();
	    void start();
	    void skate(int);
	    void rotate();
	    void jump();
};

#endif