#include "ament_index_cpp/get_package_share_directory.hpp"
#include "behaviortree_cpp_v3/bt_factory.h"
#include "bt_demo/dummy_nodes.hpp"

int main () {
    BT::BehaviorTreeFactory factory;
    factory.registerNodeType<ApproachObject>("ApproachObject");
    factory.registerSimpleCondition("CheckBattery",
        [&](BT::TreeNode&) { return CheckBattery(); });
    GripperInterface gripper;
    factory.registerSimpleAction("OpenGripper",
        [&](BT::TreeNode&) { return gripper.open(); });
    factory.registerSimpleAction("CloseGripper",
        [&](BT::TreeNode&) { return gripper.close(); });
    auto tree = factory.createTreeFromFile(
        ament_index_cpp::get_package_share_directory("bt_demo") + "/my_tree.xml");
    tree.tickRootWhileRunning();
    return 0;
}