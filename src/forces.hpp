#ifndef FORCES_HPP
#define FORCES_HPP

#include "util.hpp"
#include "particle_system.hpp"

using std::vector;

class PointGravity : public Force {
public:
  PointGravity(const Vec2d center, const double intensity);
  void apply(const double time, const double particleMass, const vector<Vec2d>& positions,
             vector<Vec2d>& accelerations) const;
private:
  Vec2d center_;
  double intensity_;
};

class LinearDamping : public Damping {
public:
  LinearDamping(const double intensity);
  Vec2d acceleration(const double time, const double mass, const Vec2d velocity) const;

private:
  double intensity_;
};


#endif