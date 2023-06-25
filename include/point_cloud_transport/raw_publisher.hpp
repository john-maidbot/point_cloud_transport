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

#ifndef POINT_CLOUD_TRANSPORT__RAW_PUBLISHER_HPP_
#define POINT_CLOUD_TRANSPORT__RAW_PUBLISHER_HPP_

#include <string>

#include <sensor_msgs/msg/point_cloud2.hpp>
#include <sensor_msgs/msg/point_cloud2__traits.hpp>

#include <point_cloud_transport/simple_publisher_plugin.hpp>

#include "point_cloud_transport/visibility_control.hpp"

namespace point_cloud_transport
{

//! RawPublisher is a simple wrapper for ros::Publisher,
//! publishing unaltered PointCloud2 messages on the base topic.
class RawPublisher
  : public point_cloud_transport::SimplePublisherPlugin<sensor_msgs::msg::PointCloud2>
{
public:
  virtual ~RawPublisher() {}

  virtual std::string getTransportName() const
  {
    return "raw";
  }

  RawPublisher::TypedEncodeResult 
  
  
  
  
  
  (
    const sensor_msgs::msg::PointCloud2 & raw) const
  {
    return raw;
  }

  bool matchesTopic(const std::string& topic, const std::string& datatype) const
  {
    return datatype == std::string(rosidl_generator_traits::data_type<sensor_msgs::msg::PointCloud2>());
  }

protected:
  virtual void publish(
    const sensor_msgs::msg::PointCloud2 & message,
    const PublishFn & publish_fn) const
  {
    publish_fn(message);
  }

  virtual void publish(
    const sensor_msgs::msg::PointCloud2::ConstSharedPtr & message_ptr,
    const PublishFn & publish_fn) const
  {
    publish_fn(*message_ptr);
  }

  virtual std::string getTopicToAdvertise(const std::string & base_topic) const
  {
    return base_topic;
  }
};

}  // namespace point_cloud_transport
#endif  // POINT_CLOUD_TRANSPORT__RAW_PUBLISHER_HPP_
