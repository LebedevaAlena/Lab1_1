#ifndef LINE_H
#define LINE_H


class line
{
   public:
        line();
        line(double k, double c);
        virtual ~line();
        line(line &lin);
        bool perpend(line &lin);

        double Perpendicular(double k1, double c1, double k2, double c2);
    protected:

    private:
        double k, c;
        friend void printValue(line &lin);
};

#endif // LINE_H
