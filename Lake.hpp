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