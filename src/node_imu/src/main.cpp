/*
 *  Created on: 2017-12-26
 *      Author: Young.Geo
 *          QQ: 473763733
 *       Email: anxan524@126.com
 */

#include <rclcpp/rclcpp.hpp>

#include "node_imu.h"
#include "global.h"

int main(int argc, const char **argv)
{

    rclcpp::init(argc, (char **)argv);//init node
    //global_init(argc, argv);
    std::shared_ptr<rclcpp::Node> node = rclcpp::Node::make_shared("node_imu");
    node_imu_main(node);

    return 0;
}
