#ifndef TUPLE_H
#define TUPLE_H


class tuple {
public:
    double x, y, z, w;
    tuple(double x, double y, double z, double w);
    static tuple point(double x, double y, double z);
    static tuple vector(double x, double y, double z);
    bool operator==(const tuple& other) const;
};;
#endif