/*
 *  Created on: 2017-12-26
 *      Author: Young.Geo
 *          QQ: 473763733
 *       Email: anxan524@126.com
 */


#include <iostream>
#include <memory>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

int main(int argc, char * argv[])
{
    rclcpp::init(argc, argv);

    std::shared_ptr<rclcpp::Node> node = NULL;


    node = rclcpp::Node::make_shared("node_test");

    rclcpp::WallRate loop_rate(2);

    while (rclcpp::ok())
    {
        std::cout << "node_test ... " << std::endl;
        loop_rate.sleep();
    }

    return 0;
}
