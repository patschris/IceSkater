#ifndef _Lake_
#define _Lake_

/* New type that indicates lake's color */
enum Color {dark, light};

class Lake {
    private:
        /* Lake's length */
	    int length;
	    /* Lake's color */
        Color color;
    public:
        Lake(int);
        ~Lake();
        void light_up();
        void darken();
        void rotate();
};

#endif