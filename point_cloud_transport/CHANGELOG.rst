^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
Changelog for package point_cloud_transport
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

2.0.6 (2024-05-16)
------------------
* [rolling] Get user specified parameters at startup (`#80 <https://github.com/ros-perception/point_cloud_transport/issues/80>`_) (`#84 <https://github.com/ros-perception/point_cloud_transport/issues/84>`_)
  Co-authored-by: Alejandro Hernández Cordero <ahcorde@gmail.com>
  (cherry picked from commit 90c603a1e8fb56c3203ff6870e4f2205c37e59b4)
  Co-authored-by: john-maidbot <78750993+john-maidbot@users.noreply.github.com>
* Rename the republish_node to pc_republish_node. (`#75 <https://github.com/ros-perception/point_cloud_transport/issues/75>`_) (`#76 <https://github.com/ros-perception/point_cloud_transport/issues/76>`_)
  The major reason for this is that image_transport already
  has a republish_node, and when we are building for distribution
  we can't have two files named /opt/ros/rolling/lib/librepublish_node.so
  Rename this one to libpc_republish_node, which should remove
  the conflict.
  Co-authored-by: Chris Lalancette <clalancette@gmail.com>
* Contributors: Alejandro Hernández Cordero, mergify[bot]

2.0.5 (2023-03-26)
------------------
* Cleanup republisher (`#58 <https://github.com/ros-perception/point_cloud_transport/issues/58>`_) (`#71 <https://github.com/ros-perception/point_cloud_transport/issues/71>`_)
  Co-authored-by: Alejandro Hernández Cordero <ahcorde@gmail.com>
* Improve Windows support (`#50 <https://github.com/ros-perception/point_cloud_transport/issues/50>`_) (`#62 <https://github.com/ros-perception/point_cloud_transport/issues/62>`_)
* Fixed MacOS M1 build (`#57 <https://github.com/ros-perception/point_cloud_transport/issues/57>`_) (`#60 <https://github.com/ros-perception/point_cloud_transport/issues/60>`_)
* Contributors: Alejandro Hernández Cordero, john-maidbot

2.0.4 (2023-02-14)
-------------------
* Change tl_expected for rcpputils (`#48 <https://github.com/ros-perception/point_cloud_transport//issues/48>`_) (`#52 <https://github.com/ros-perception/point_cloud_transport//issues/52>`_)
* Clean CMake (`#49 <https://github.com/ros-perception/point_cloud_transport//issues/49>`_) (`#51 <https://github.com/ros-perception/point_cloud_transport//issues/51>`_)
* Contributors: Alejandro Hernández Cordero

2.0.3 (2023-12-12)
-------------------
* Fixed draco subscriber parameter names (`#43 <https://github.com/ros-perception/point_cloud_transport/issues/43>`_) (`#45 <https://github.com/ros-perception/point_cloud_transport/issues/45>`_)
  (cherry picked from commit 48cd0ced3dcf12d13bf648a903d691355480b18b)
  Co-authored-by: Alejandro Hernández Cordero <ahcorde@gmail.com>
* Contributors: mergify[bot]

2.0.2 (2023-10-05)
-------------------
* Fix param name (`#39 <https://github.com/ros-perception/point_cloud_transport/issues/39>`_) (`#41 <https://github.com/ros-perception/point_cloud_transport/issues/41>`_)
  (cherry picked from commit 7acc9458dbfd75dcb4e8e2c984fd16e5d5d5aac8)
  Co-authored-by: Alejandro Hernández Cordero <ahcorde@gmail.com>
* Fixed param name (`#36 <https://github.com/ros-perception/point_cloud_transport/issues/36>`_) (`#38 <https://github.com/ros-perception/point_cloud_transport/issues/38>`_)
  (cherry picked from commit 851434a59ef2de7bccb1a46e27882c0480534289)
  Co-authored-by: Alejandro Hernández Cordero <ahcorde@gmail.com>
* Contributors: mergify[bot]

2.0.1 (2023-09-20)
-------------------
* feat: replace third party expected with ros package (`#32 <https://github.com/ros-perception/point_cloud_transport/issues/32>`_) (`#34 <https://github.com/ros-perception/point_cloud_transport/issues/34>`_)
  (cherry picked from commit d13b7a2feb63c82cbd619a99a7eed7c95f9ac558)
  Co-authored-by: Daisuke Nishimatsu <42202095+wep21@users.noreply.github.com>
* fix: modify wrong install for header (`#30 <https://github.com/ros-perception/point_cloud_transport/issues/30>`_)
* Contributors: Daisuke Nishimatsu, mergify[bot]

2.0.0 (2023-09-18)
-------------------
* Removed warning (`#28 <https://github.com/ros-perception/point_cloud_transport/issues/28>`_)
* Added point_cloud_transport_py (`#26 <https://github.com/ros-perception/point_cloud_transport/issues/26>`_)
* Bug fixes from porting tutorials (`#18 <https://github.com/ros-perception/point_cloud_transport/issues/18>`_)
* Use whitelist instead of blacklist (`#13 <https://github.com/ros-perception/point_cloud_transport/issues/13>`_)
* Add ThirdParty folder to support building offline without FetchContent (`#12 <https://github.com/ros-perception/point_cloud_transport/issues/12>`_)
* Fix pointcloud-codec and python bindings (`#3 <https://github.com/ros-perception/point_cloud_transport/issues/3>`_)
* Contributors: Alejandro Hernández Cordero, john-maidbot
