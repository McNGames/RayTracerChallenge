#include "tuple.h"
#include <cstdlib>

tuple::tuple(double x, double y, double z, double w) : x(x), y(y), z(z), w(w) {}

tuple tuple::point(double x, double y, double z) {
            return tuple(x, y, z, 1.0);
        }
tuple tuple::vector(double x, double y, double z) {
    return tuple(x, y, z, 0.0);
}
bool tuple::operator==(const tuple& other) const {
    double epsilon = 0.00001;
    return std::abs(x - other.x) < epsilon && std::abs(y - other.y) < epsilon && std::abs(z - other.z) < epsilon && std::abs(w - other.w) < epsilon;
}