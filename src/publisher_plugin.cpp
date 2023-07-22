/*
 * Copyright (c) 2023, Czech Technical University in Prague
 * Copyright (c) 2019, paplhjak
 * Copyright (c) 2009, Willow Garage, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 *    * Redistributions of source code must retain the above copyright
 *      notice, this list of conditions and the following disclaimer.
 *
 *    * Redistributions in binary form must reproduce the above copyright
 *      notice, this list of conditions and the following disclaimer in the
 *      documentation and/or other materials provided with the distribution.
 *
 *    * Neither the name of the copyright holder nor the names of its
 *      contributors may be used to endorse or promote products derived from
 *      this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

#include <list>
#include <string>

#include <point_cloud_transport/publisher_plugin.hpp>
#include <point_cloud_transport/single_subscriber_publisher.hpp>

namespace point_cloud_transport
{

PublisherPlugin::EncodeResult PublisherPlugin::encode(const sensor_msgs::msg::PointCloud2& raw) const
{
  return this->encode(raw);
}

void PublisherPlugin::advertise(
  std::shared_ptr<rclcpp::Node> nh,
  const std::string & base_topic,
  rmw_qos_profile_t custom_qos,
  const rclcpp::PublisherOptions & options)
{
  advertiseImpl(nh, base_topic, custom_qos, options);
}

void PublisherPlugin::publish(const sensor_msgs::msg::PointCloud2::ConstSharedPtr & message) const
{
  publish(*message);
}

std::string PublisherPlugin::getLookupName(const std::string & transport_name)
{
  return "point_cloud_transport/" + transport_name + "_pub";
}

}  // namespace point_cloud_transport
