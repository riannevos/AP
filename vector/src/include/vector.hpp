class Vector {

public:
    int x;
    int y;

    Vector();
    Vector(int x, int y);

    Vector operator-() const;
    Vector operator-(const Vector& rhs) const; // w - v past w niet aan (ook v niet)
    Vector operator+(const Vector& rhs) const;

    Vector& operator-=(const Vector& rhs); // w+=v past w wel aan, daarom returnt ie een reference, niet een nieuw object

};