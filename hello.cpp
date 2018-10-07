#include <gazebo/gazebo.hh>

namespace gazebo
{
  class WorldPluginMyRobot : public WorldPlugin
  {
    public: WorldPluginMyRobot() : WorldPlugin()
            {
	      printf("\n##################################");
              printf("\nHi girls and boys,\n");
              printf("	Welcome to the warehouse!\n");
	      printf("##################################");
	      printf("\nCoffee, tee, or robots?\n");
            }

    public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
            {
            }
  };
  GZ_REGISTER_WORLD_PLUGIN(WorldPluginMyRobot)
}

