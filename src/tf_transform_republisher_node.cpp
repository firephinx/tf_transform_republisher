#include <ros/ros.h>
#include "tf_transform_republisher/tf_transform_republisher.h"

int main(int argc, char **argv)
{
  ros::init(argc, argv, "tf_transform_republisher_node", ros::init_options::AnonymousName);

  TFTransformRepublisher tf_transform_republisher;

  ros::spin();

  return 0;
}