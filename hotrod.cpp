#include <daylite/node.hpp>

#include "wheel_states.hpp"
#include "wheel_calibration.hpp"

using namespace daylite;
using namespace hotrod;
using namespace bson_bind;

int main(int argc, char *argv[])
{
  auto n = node::create_node("hotrod");
  
  auto pub = n->advertise("robot/wheel_states");
  
  return 0;
}