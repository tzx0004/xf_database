.. index:: pair: class; xf::database::gqe::Worker
.. _doxid-classxf_1_1database_1_1gqe_1_1_worker:
.. _cid-xf::database::gqe::worker:

class xf::database::gqe::Worker
===============================

.. toctree::
	:hidden:

.. code-block:: cpp
	:class: overview-code-block

	#include "gqe_worker.hpp"




.. _doxid-classxf_1_1database_1_1gqe_1_1_worker_1aaa6a0540b2cbd9e3be5ac5e5744e336c:
.. _cid-xf::database::gqe::worker::err:
.. _doxid-classxf_1_1database_1_1gqe_1_1_worker_1a02c183d1564e607f841bf26a9bda6beb:
.. _cid-xf::database::gqe::worker::ctx:
.. _doxid-classxf_1_1database_1_1gqe_1_1_worker_1ad4efa50b6ae0b348b82e7d37afe3618a:
.. _cid-xf::database::gqe::worker::cq:
.. _doxid-classxf_1_1database_1_1gqe_1_1_worker_1a6bd472abad27458705e88be1b223d487:
.. _cid-xf::database::gqe::worker::prg:
.. _doxid-classxf_1_1database_1_1gqe_1_1_worker_1acc3f2b191e6a05ef22706264966ef997:
.. _cid-xf::database::gqe::worker::h_buf:
.. _doxid-classxf_1_1database_1_1gqe_1_1_worker_1a05bbf7314761df2ad8d0633ca289428d:
.. _cid-xf::database::gqe::worker::d_buf:
.. _doxid-classxf_1_1database_1_1gqe_1_1_worker_1a4c2fdf06e445f08f72e11a869688699d:
.. _cid-xf::database::gqe::worker::max_buf_size:
.. _doxid-classxf_1_1database_1_1gqe_1_1_worker_1a847bd8b02fe278ee5e2dd835bec898c5:
.. _cid-xf::database::gqe::worker::acc_buf_size:
.. _doxid-classxf_1_1database_1_1gqe_1_1_worker_1a23eeb2062e2481f85934dd8f9a4308c7:
.. _cid-xf::database::gqe::worker::krn:
.. _doxid-classxf_1_1database_1_1gqe_1_1_worker_1a34d3aec3c9befa703b037cb91921194e:
.. _cid-xf::database::gqe::worker::sub_buf_head:
.. _doxid-classxf_1_1database_1_1gqe_1_1_worker_1af5e325c3c72c6d42c3b2bcf2523d3708:
.. _cid-xf::database::gqe::worker::sub_buf_size:
.. _doxid-classxf_1_1database_1_1gqe_1_1_worker_1acdc52c44e11c7153bcbd5ff19779a504:
.. _cid-xf::database::gqe::worker::sub_buf_parent:
.. _doxid-classxf_1_1database_1_1gqe_1_1_worker_1a25897ab3f0caf2374b55b9ba8b097b6f:
.. _cid-xf::database::gqe::worker::sub_buf:
.. _doxid-classxf_1_1database_1_1gqe_1_1_worker_1afc28e7c80f6d2f6663acb2cf776aad8c:
.. _cid-xf::database::gqe::worker::sub_buf_host_parent:
.. _doxid-classxf_1_1database_1_1gqe_1_1_worker_1a26d9239b916c669145c584e9e996aef3:
.. _cid-xf::database::gqe::worker::migrate_t:
.. _doxid-classxf_1_1database_1_1gqe_1_1_worker_1ac67af51745a3635c3650ff1250738103:
.. _cid-xf::database::gqe::worker::m:
.. _doxid-classxf_1_1database_1_1gqe_1_1_worker_1a88a14820e03e994cfc657dd0ed82879d:
.. _cid-xf::database::gqe::worker::cv:
.. _doxid-classxf_1_1database_1_1gqe_1_1_worker_1ada8e3c20b522f0cc9bd5944618e4fa2b:
.. _cid-xf::database::gqe::worker::migrate_run:
.. _doxid-classxf_1_1database_1_1gqe_1_1_worker_1aef4cad63bf4ab84c8e931f8980f7e358:
.. _cid-xf::database::gqe::worker::q:
.. _doxid-classxf_1_1database_1_1gqe_1_1_worker_1a7732315fceadb9302df6643836da28a4:
.. _cid-xf::database::gqe::worker::operator:
.. _doxid-classxf_1_1database_1_1gqe_1_1_worker_1a37680fd88fb5b2ef437a91fc10beb520:
.. _cid-xf::database::gqe::worker::start:
.. _doxid-classxf_1_1database_1_1gqe_1_1_worker_1ab5452dfe79d8976c0e771bc85ca38329:
.. _cid-xf::database::gqe::worker::worker:
.. _doxid-classxf_1_1database_1_1gqe_1_1_worker_1a7daed00b82418a7de64091d30b6a247d:
.. _cid-xf::database::gqe::worker::worker-2:
.. _doxid-classxf_1_1database_1_1gqe_1_1_worker_1a867ac01b7750b1306ba5e3b2ae978efb:
.. _cid-xf::database::gqe::worker::release:
.. _doxid-classxf_1_1database_1_1gqe_1_1_worker_1a7a08966b8b06c724aca6dbb20dfd7828:
.. _cid-xf::database::gqe::worker::print:
.. _doxid-classxf_1_1database_1_1gqe_1_1_worker_1a84429d6135ace436b487814ca2064aa3:
.. _cid-xf::database::gqe::worker::runkernel:
.. _doxid-classxf_1_1database_1_1gqe_1_1_worker_1a67e5f4ff903c4c3e7855f37c6f281bfd:
.. _cid-xf::database::gqe::worker::migratetodevice:
.. _doxid-classxf_1_1database_1_1gqe_1_1_worker_1ad692a550227cdbe564ed1bdbc0c774f3:
.. _cid-xf::database::gqe::worker::migratemetatohost:
.. _doxid-classxf_1_1database_1_1gqe_1_1_worker_1aee1b2dc7af16afcd6c134ff776c72728:
.. _cid-xf::database::gqe::worker::migraterestohost:
.. ref-code-block:: cpp
	:class: overview-code-block

	// fields

	cl_int err
	cl_context ctx
	cl_command_queue cq
	cl_program prg
	vector <char*> h_buf
	vector <cl_mem> d_buf
	vector <size_t> max_buf_size
	vector <size_t> acc_buf_size
	vector <vector <cl_kernel>> krn
	vector <vector <vector <size_t>>> sub_buf_head
	vector <vector <vector <size_t>>> sub_buf_size
	vector <vector <vector <cl_mem>>> sub_buf_parent
	vector <vector <vector <cl_mem>>> sub_buf
	vector <vector <vector <char*>>> sub_buf_host_parent
	thread migrate_t
	mutex m
	condition_variable cv
	bool migrate_run
	:ref:`SafeQueue<doxid-classxf_1_1database_1_1gqe_1_1_safe_queue>` <:ref:`migrate_task<doxid-structxf_1_1database_1_1gqe_1_1migrate__task>`> q

