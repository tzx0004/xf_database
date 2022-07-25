.. index:: pair: class; xf::database::gqe::MemCoppier
.. _doxid-classxf_1_1database_1_1gqe_1_1_mem_coppier:
.. _cid-xf::database::gqe::memcoppier:

class xf::database::gqe::MemCoppier
===================================

.. toctree::
	:hidden:

.. code-block:: cpp
	:class: overview-code-block

	#include "gqe_memcpy.hpp"




.. _doxid-classxf_1_1database_1_1gqe_1_1_mem_coppier_1a61873d6bd00cffc74f948e42762bb2ec:
.. _cid-xf::database::gqe::memcoppier::cpy_t:
.. _doxid-classxf_1_1database_1_1gqe_1_1_mem_coppier_1ac3bea942511cee9dd0090f7ba927a523:
.. _cid-xf::database::gqe::memcoppier::m:
.. _doxid-classxf_1_1database_1_1gqe_1_1_mem_coppier_1aa1bd3ddef0f7c4a4bd6c25965e645031:
.. _cid-xf::database::gqe::memcoppier::cv:
.. _doxid-classxf_1_1database_1_1gqe_1_1_mem_coppier_1a2d0e35f2e81a1215bfa21afdf1ad4bd6:
.. _cid-xf::database::gqe::memcoppier::z_run:
.. _doxid-classxf_1_1database_1_1gqe_1_1_mem_coppier_1ad260fd6b122622c0ab0c04298f31b6c6:
.. _cid-xf::database::gqe::memcoppier::n_run:
.. _doxid-classxf_1_1database_1_1gqe_1_1_mem_coppier_1a35084e474f1e3e4e1d712000b2789f49:
.. _cid-xf::database::gqe::memcoppier::q:
.. _doxid-classxf_1_1database_1_1gqe_1_1_mem_coppier_1a652ce762bbc4b03ae6f651a9b32f92c8:
.. _cid-xf::database::gqe::memcoppier::operator:
.. _doxid-classxf_1_1database_1_1gqe_1_1_mem_coppier_1a7e6db0d66cf6cfe07628da88c1bf5d2e:
.. _cid-xf::database::gqe::memcoppier::memcoppier:
.. _doxid-classxf_1_1database_1_1gqe_1_1_mem_coppier_1abccd8c7ac5459bf73f0e79e598550e32:
.. _cid-xf::database::gqe::memcoppier::memcoppier-2:
.. _doxid-classxf_1_1database_1_1gqe_1_1_mem_coppier_1aa2b894dd49d481388b9dc266b52d5bfe:
.. _cid-xf::database::gqe::memcoppier::start:
.. _doxid-classxf_1_1database_1_1gqe_1_1_mem_coppier_1a0bb05c843887bfa836e49e716ab4ce19:
.. _cid-xf::database::gqe::memcoppier::release:
.. _doxid-classxf_1_1database_1_1gqe_1_1_mem_coppier_1afe1c52a7511611074458b38da8916b2d:
.. _cid-xf::database::gqe::memcoppier::addtask:
.. ref-code-block:: cpp
	:class: overview-code-block

	// fields

	thread cpy_t[T_N]
	mutex m[T_N]
	condition_variable cv[T_N]
	bool z_run
	bool n_run
	:ref:`SafeQueue<doxid-classxf_1_1database_1_1gqe_1_1_safe_queue>` <:ref:`memcpy_task<doxid-structxf_1_1database_1_1gqe_1_1memcpy__task>`> q[T_N]

