#ifndef _DUMY_NODES_HPP_
#define _DUMY_NODES_HPP_

#include<iostream>
#include <behaviortree_cpp_v3/action_node.h>

class ApproachObject : public BT::SyncActionNode {
    public:
        ApproachObject(const std::string &name) : BT::SyncActionNode(name, {}){}
        BT::NodeStatus tick() override {
            std::cout << "ApproachObject: " << this->name() << std::endl;
            return BT::NodeStatus::SUCCESS;
        }
};

inline BT::NodeStatus CheckBattery() {
  std::cout << "[ Battery: OK ]" << std::endl;
  return BT::NodeStatus::SUCCESS;
}

class GripperInterface {
    public:
        GripperInterface(): _open(true) {} 
        BT::NodeStatus open(){
            this->_open = true;
            std::cout << "GripperInterface::open" << std::endl;
            return BT::NodeStatus::SUCCESS;
        }

        BT::NodeStatus close() {
            this->_open = false;
            std::cout << "GripperInterface::close" << std::endl;
            return BT::NodeStatus::SUCCESS;
        }
    private:
        bool _open;
};

#endif