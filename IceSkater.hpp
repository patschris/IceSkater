class IceSkater {
    private:
	    int Dist, pos;
	public:
    	IceSkater(int, int);
	    ~IceSkater();
	    void start();
	    void skate(int);
	    void rotate();
	    void jump();
};