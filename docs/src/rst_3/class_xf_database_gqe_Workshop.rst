.. index:: pair: class; xf::database::gqe::Workshop
.. _doxid-classxf_1_1database_1_1gqe_1_1_workshop:
.. _cid-xf::database::gqe::workshop:

class xf::database::gqe::Workshop
=================================

.. toctree::
	:hidden:

.. code-block:: cpp
	:class: overview-code-block

	#include "gqe_workshop.hpp"




.. _doxid-classxf_1_1database_1_1gqe_1_1_workshop_1a9f79e980f99f37caae0ad791882e8333:
.. _cid-xf::database::gqe::workshop::err:
.. _doxid-classxf_1_1database_1_1gqe_1_1_workshop_1a8f07f2ce42e0c5dd6cbfe5f7bcb5efbe:
.. _cid-xf::database::gqe::workshop::ctx:
.. _doxid-classxf_1_1database_1_1gqe_1_1_workshop_1a6949701ba2dbc3a4527ad06026bdad72:
.. _cid-xf::database::gqe::workshop::worker:
.. _doxid-classxf_1_1database_1_1gqe_1_1_workshop_1ac366ccdb58179f1c1ef8404c4135b126:
.. _cid-xf::database::gqe::workshop::h2p:
.. _doxid-classxf_1_1database_1_1gqe_1_1_workshop_1abc26a0a8485583868d47e7dd68a9d8c6:
.. _cid-xf::database::gqe::workshop::p2h:
.. _doxid-classxf_1_1database_1_1gqe_1_1_workshop_1a5bb71885533cd8c34bc05761cbb5145a:
.. _cid-xf::database::gqe::workshop::join_service_t:
.. _doxid-classxf_1_1database_1_1gqe_1_1_workshop_1af85fa059d3bdd61a4fa5be2260eb7deb:
.. _cid-xf::database::gqe::workshop::join_service_run:
.. _doxid-classxf_1_1database_1_1gqe_1_1_workshop_1a1dd63a6cbb1e189661fc257f4bca340b:
.. _cid-xf::database::gqe::workshop::q:
.. _doxid-classxf_1_1database_1_1gqe_1_1_workshop_1a58ab3cbf00ed0613fa829f44c618c309:
.. _cid-xf::database::gqe::workshop::m:
.. _doxid-classxf_1_1database_1_1gqe_1_1_workshop_1ac17297a38298517e3d360df11f744b9c:
.. _cid-xf::database::gqe::workshop::cv:
.. _doxid-classxf_1_1database_1_1gqe_1_1_workshop_1aa147f41f89b814ac15c817cc84db3e13:
.. _cid-xf::database::gqe::workshop::workshop:
.. _doxid-classxf_1_1database_1_1gqe_1_1_workshop_1aa3344a2c3ea10ee4057b5121a8b8b2da:
.. _cid-xf::database::gqe::workshop::operator:
.. _doxid-classxf_1_1database_1_1gqe_1_1_workshop_1af1f85b0f047e324abd93c919f11a42b1:
.. _cid-xf::database::gqe::workshop::workshop-2:
.. _doxid-classxf_1_1database_1_1gqe_1_1_workshop_1a01b117c7db11631277d42e1d21792bdd:
.. _cid-xf::database::gqe::workshop::~workshop:
.. _doxid-classxf_1_1database_1_1gqe_1_1_workshop_1ae7cb75295ec95b4a22e4ce5a288ef1a4:
.. _cid-xf::database::gqe::workshop::release:
.. _doxid-classxf_1_1database_1_1gqe_1_1_workshop_1a3d8468093a91fb2c4ff05cf03b936293:
.. _cid-xf::database::gqe::workshop::print:
.. _doxid-classxf_1_1database_1_1gqe_1_1_workshop_1a0fc16ddd9859e730aa5a5ce12aeb1327:
.. _cid-xf::database::gqe::workshop::join:
.. _doxid-classxf_1_1database_1_1gqe_1_1_workshop_1a36954beef952e60ededf8674f72d13f5:
.. _cid-xf::database::gqe::workshop::bloomfilter:
.. ref-code-block:: cpp
	:class: overview-code-block

	class Workshop: public :ref:`xf::database::gqe::PlatformInit<doxid-classxf_1_1database_1_1gqe_1_1_platform_init>`

	// fields

	cl_int err
	cl_context ctx
	vector <:ref:`Worker<doxid-classxf_1_1database_1_1gqe_1_1_worker>`> worker
	:ref:`MemCoppier<doxid-classxf_1_1database_1_1gqe_1_1_mem_coppier>` h2p
	:ref:`MemCoppier<doxid-classxf_1_1database_1_1gqe_1_1_mem_coppier>` p2h
	thread join_service_t
	bool join_service_run
	:ref:`SafeQueue<doxid-classxf_1_1database_1_1gqe_1_1_safe_queue>` <:ref:`task_complex<doxid-structxf_1_1database_1_1gqe_1_1task__complex>`> q
	mutex m
	condition_variable cv

Inherited Members
-----------------

.. ref-code-block:: cpp
	:class: overview-inherited-code-block

	// fields

	string :ref:`device_shell_name<doxid-classxf_1_1database_1_1gqe_1_1_platform_init_1a265349a0693a7dbb038bc19d7d053b98>`
	cl_platform_id :ref:`xilinx_platform_id<doxid-classxf_1_1database_1_1gqe_1_1_platform_init_1ab52aabf361cd1c2c788886537f0b0236>`
	int :ref:`device_num<doxid-classxf_1_1database_1_1gqe_1_1_platform_init_1a461206507ed0cba5e64bb1ce2624691f>`
	vector <cl_device_id> :ref:`device_id<doxid-classxf_1_1database_1_1gqe_1_1_platform_init_1a9fd60bd6107380f470d7414a2b7c1cb4>`

