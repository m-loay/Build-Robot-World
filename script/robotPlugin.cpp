#include <gazebo/gazebo.hh>

namespace gazebo
{
  class WorldPluginRobot : public WorldPlugin
  {
    public: WorldPluginRobot() : WorldPlugin()
            {
              printf("Welcome to Robot World World! \n");
            }

    public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
            {
               
            }
  };
  GZ_REGISTER_WORLD_PLUGIN(WorldPluginRobot)
}

