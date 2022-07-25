.. index:: pair: struct; xf::database::gqe::migrate_task
.. _doxid-structxf_1_1database_1_1gqe_1_1migrate__task:
.. _cid-xf::database::gqe::migrate_task:

struct xf::database::gqe::migrate_task
======================================

.. toctree::
	:hidden:

.. code-block:: cpp
	:class: overview-code-block

	#include "gqe_worker.hpp"




.. _doxid-structxf_1_1database_1_1gqe_1_1migrate__task_1a33edd603dc092edd7434f6d2e17030f2:
.. _cid-xf::database::gqe::migrate_task::func:
.. _doxid-structxf_1_1database_1_1gqe_1_1migrate__task_1a62240f85e92e1ac9b87ae88510760776:
.. _cid-xf::database::gqe::migrate_task::k_id:
.. _doxid-structxf_1_1database_1_1gqe_1_1migrate__task_1a6f17185ed31506af9cfb3fdef11aa8d7:
.. _cid-xf::database::gqe::migrate_task::p_id:
.. _doxid-structxf_1_1database_1_1gqe_1_1migrate__task_1aecaf6337ab8d19db4cb8181438b2b7db:
.. _cid-xf::database::gqe::migrate_task::arg_buf_idx:
.. _doxid-structxf_1_1database_1_1gqe_1_1migrate__task_1a46163a1b3386c83ab2d4b9ede76dbd1e:
.. _cid-xf::database::gqe::migrate_task::arg_head:
.. _doxid-structxf_1_1database_1_1gqe_1_1migrate__task_1a22ed208d2fbf18ce45c66575a43e3a56:
.. _cid-xf::database::gqe::migrate_task::arg_size:
.. _doxid-structxf_1_1database_1_1gqe_1_1migrate__task_1a9971b63734033c7f22a53f5aabc54ce2:
.. _cid-xf::database::gqe::migrate_task::res_row:
.. _doxid-structxf_1_1database_1_1gqe_1_1migrate__task_1ada76858817569d37208cf67c8028a7c7:
.. _cid-xf::database::gqe::migrate_task::evt_wait_list:
.. _doxid-structxf_1_1database_1_1gqe_1_1migrate__task_1a4925db9bc229ca478ae8ea01812d4500:
.. _cid-xf::database::gqe::migrate_task::evt_wait_num:
.. _doxid-structxf_1_1database_1_1gqe_1_1migrate__task_1a9d9c1d1e25ee7e07fe5c02a48859c228:
.. _cid-xf::database::gqe::migrate_task::evt:
.. ref-code-block:: cpp
	:class: overview-code-block

	// fields

	:ref:`WorkerFunctions<doxid-namespacexf_1_1database_1_1gqe_1a1f23de90125b65db8f998e75b2565816>` func
	size_t k_id
	size_t p_id
	vector <size_t>* arg_buf_idx
	vector <vector <size_t>>* arg_head
	vector <vector <size_t>>* arg_size
	vector <size_t>* res_row
	cl_event* evt_wait_list
	size_t evt_wait_num
	cl_event* evt

