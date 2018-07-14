#ifndef _Lake_
#define _Lake_

enum Color {dark, light};

class Lake {
    private:
	    int length;
	    Color color;
    public:
        Lake(int);
        ~Lake();
        void lightup();
        void darken();
        void rotate();
};

#endif