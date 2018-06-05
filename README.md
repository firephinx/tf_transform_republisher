# tf_transform_republisher

This ros package is used for republishing a tf transform topic locally.

## Configuration Instructions
1. Modify the parameters in the launch/tf_transform_republisher.launch file to your liking.
2. `static_tf_transform` set to `true` looks up the transform from the `input_tf_transform_child_frame_id` frame to the `input_tf_transform_parent_frame_id` once and saves the transform. Afterwards, the tf_transform_republisher node continually publishes the saved transform using the `output_tf_transform_parent_frame_id` and `output_tf_transform_child_frame_id` frames at the `publish_frequency` rate.
2. `static_tf_transform` set to `false` continually looks up the transform from the `input_tf_transform_child_frame_id` frame to the `input_tf_transform_parent_frame_id`. Then, the tf_transform_republisher node publishes the most recent transform using the `output_tf_transform_parent_frame_id` and `output_tf_transform_child_frame_id` frames at the `publish_frequency` rate.

## Usage Instructions
1. First build the ros package using `catkin_make` in your catkin workspace.
2. Source your `devel/setup.bash` in your catkin workspace.
3. Start the tf_transform_republisher node with the command `roslaunch tf_transform_republisher tf_transform_republisher_node.launch`.