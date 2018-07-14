#ifndef _Background_
#define _Background_

/*
The Background consists of mountains, Trees and a Little House
*/
class Background {
    private:
        Trees trees;
        Little_house house;
        Mountains mountain;
	public:
    	Background() ;
	    ~Background() ;
};

#endif