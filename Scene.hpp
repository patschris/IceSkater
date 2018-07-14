#ifndef _Scene_
#define _Scene_

class Scene {
    private:
        Background background;
        Lake lake;
        IceSkater iceskater;
        int length, distance;
	public:
	    Scene(int, int);
	    ~Scene();
	    void plot();
};

#endif