.. index:: pair: struct; xf::database::gqe::memcpy_task
.. _doxid-structxf_1_1database_1_1gqe_1_1memcpy__task:
.. _cid-xf::database::gqe::memcpy_task:

struct xf::database::gqe::memcpy_task
=====================================

.. toctree::
	:hidden:

.. code-block:: cpp
	:class: overview-code-block

	#include "gqe_memcpy.hpp"




.. _doxid-structxf_1_1database_1_1gqe_1_1memcpy__task_1ad8be27d2cea02a2354cb314d4cda8f89:
.. _cid-xf::database::gqe::memcpy_task::evt_wait_list:
.. _doxid-structxf_1_1database_1_1gqe_1_1memcpy__task_1a3ecc671bb0f59ceb11e7f86a5f240626:
.. _cid-xf::database::gqe::memcpy_task::evt_wait_num:
.. _doxid-structxf_1_1database_1_1gqe_1_1memcpy__task_1a4ce44b0b5e3886251406b6543a51f29f:
.. _cid-xf::database::gqe::memcpy_task::evt_copy:
.. _doxid-structxf_1_1database_1_1gqe_1_1memcpy__task_1a06b64373ac94d8983c5213dbf2b3e852:
.. _cid-xf::database::gqe::memcpy_task::src:
.. _doxid-structxf_1_1database_1_1gqe_1_1memcpy__task_1af1e3b22b879f070c79042231d546bcbf:
.. _cid-xf::database::gqe::memcpy_task::dst:
.. _doxid-structxf_1_1database_1_1gqe_1_1memcpy__task_1a62be80628b0728383634c7ec621b5b52:
.. _cid-xf::database::gqe::memcpy_task::bias:
.. _doxid-structxf_1_1database_1_1gqe_1_1memcpy__task_1a1bae7e9d0e4bd2219756c75caf5d62df:
.. _cid-xf::database::gqe::memcpy_task::length:
.. _doxid-structxf_1_1database_1_1gqe_1_1memcpy__task_1ae8a937676319c387a96c4142d7546ff2:
.. _cid-xf::database::gqe::memcpy_task::acc:
.. ref-code-block:: cpp
	:class: overview-code-block

	// fields

	cl_event* evt_wait_list
	size_t evt_wait_num
	cl_event* evt_copy
	vector <vector <char*>>* src
	vector <vector <char*>>* dst
	vector <vector <size_t>>* bias
	vector <vector <size_t>>* length
	vector <vector <size_t>>* acc

