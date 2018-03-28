#include "node_imu.h"


static int imu_init(imu_t *imu)
{
    int fd = 0;

    xzero(&imu, sizeof(imu_t));
    xassert((fd = xsk_init_client("192.168.0.103", 9001, 0)) > 0);

    imu->serial_fd = fd;

    return 0;
}

static int  make_imu(imu_t *imu)
{
    xassert(imu);
    //
}

/**
  this is node_imu main
*/



int node_imu_main(std::shared_ptr<rclcpp::Node> &node)
{
    //
    imu_t imu;
    rclcpp::WallRate r(10);

    xassert((0 == imu_init(&imu)));


    auto timer_callback = [=, &imu]() -> void
    {
        if (!imu.jy901.isStart) {
            xdebug("imu not start");
            return;
        }

        make_imu(&imu);
    };

    node->create_wall_timer(std::chrono::milliseconds(500), timer_callback);


    while (rclcpp::ok())
    {
        serial_par(&imu.jy901, imu.serial_fd);
        rclcpp::spin_some(node);
        r.sleep();
    }
    rclcpp::shutdown();
    return 0;
}
