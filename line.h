#ifndef LINE_H
#define LINE_H


class line
{
    public:
        line();
        line(double k1, double k2, double c1, double c2);
        virtual ~line();
        void setValue(double k1, double k2, double c1, double c2);
        friend void printValue(line &lin);
        bool perpend();

    protected:

    private:
        double y1, y2, k1, k2, c1, c2, x;
};

#endif // LINE_H
