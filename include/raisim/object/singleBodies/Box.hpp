//
// Created by kangd on 18.10.17.
//

#ifndef RAISIM_COLLISIONBOX_HPP
#define RAISIM_COLLISIONBOX_HPP

#include "SingleBodyObject.hpp"

namespace raisim {

class Box : public SingleBodyObject {

  /// NOTE
  /// body origin of Box is C.O.M of Box
 public:
  Box(double xLength, double yLength, double zLength, double mass);
  Vec<3> getDim() { Vec<3> vec = {xLength_, yLength_, zLength_}; return vec; }

 protected:

  double xLength_;
  double yLength_;
  double zLength_;
};

} // raisim


#endif //RAISIM_COLLISIONBOX_HPP
