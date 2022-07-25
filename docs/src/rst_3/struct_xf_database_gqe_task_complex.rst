.. index:: pair: struct; xf::database::gqe::task_complex
.. _doxid-structxf_1_1database_1_1gqe_1_1task__complex:
.. _cid-xf::database::gqe::task_complex:

struct xf::database::gqe::task_complex
======================================

.. toctree::
	:hidden:

.. code-block:: cpp
	:class: overview-code-block

	#include "gqe_workshop.hpp"




.. _doxid-structxf_1_1database_1_1gqe_1_1task__complex_1af58b68c20c3418a1d581feec563d7133:
.. _cid-xf::database::gqe::task_complex::tsk_type:
.. _doxid-structxf_1_1database_1_1gqe_1_1task__complex_1a09f4625e65f6287028da4e0dee59a135:
.. _cid-xf::database::gqe::task_complex::tab_a:
.. _doxid-structxf_1_1database_1_1gqe_1_1task__complex_1a656599815473e4ad1a112d48128b6332:
.. _cid-xf::database::gqe::task_complex::filter_a:
.. _doxid-structxf_1_1database_1_1gqe_1_1task__complex_1a86da5759de3a36a663127228cc90fedd:
.. _cid-xf::database::gqe::task_complex::tab_a_sec_ready:
.. _doxid-structxf_1_1database_1_1gqe_1_1task__complex_1a9def1e1ccb61fcbe1767b866ebcb2015:
.. _cid-xf::database::gqe::task_complex::tab_part_a:
.. _doxid-structxf_1_1database_1_1gqe_1_1task__complex_1a1691ddeea6c028447c033deabe9c45c8:
.. _cid-xf::database::gqe::task_complex::tab_b:
.. _doxid-structxf_1_1database_1_1gqe_1_1task__complex_1ac2fe7cddbe5f2dbee80220111dceec8d:
.. _cid-xf::database::gqe::task_complex::filter_b:
.. _doxid-structxf_1_1database_1_1gqe_1_1task__complex_1ab3d31d6a856d4aed53e40dbb90056035:
.. _cid-xf::database::gqe::task_complex::tab_b_sec_ready:
.. _doxid-structxf_1_1database_1_1gqe_1_1task__complex_1a81e0b89002b544a546873d0952e9d348:
.. _cid-xf::database::gqe::task_complex::tab_part_b:
.. _doxid-structxf_1_1database_1_1gqe_1_1task__complex_1ad0dee2fc51785d19a205f4465baca1ea:
.. _cid-xf::database::gqe::task_complex::join_str:
.. _doxid-structxf_1_1database_1_1gqe_1_1task__complex_1af7d002b9585bfe8423d5f9f40ae7ffdd:
.. _cid-xf::database::gqe::task_complex::output_str:
.. _doxid-structxf_1_1database_1_1gqe_1_1task__complex_1a60cbcbf6168f18cfd64d87be22d42b50:
.. _cid-xf::database::gqe::task_complex::tab_c:
.. _doxid-structxf_1_1database_1_1gqe_1_1task__complex_1ab2b1a7e6f11a785225f091eb758fc798:
.. _cid-xf::database::gqe::task_complex::tab_c_sec_ready_promise:
.. _doxid-structxf_1_1database_1_1gqe_1_1task__complex_1ace0db802dca747284ff83427239dc20f:
.. _cid-xf::database::gqe::task_complex::join_type:
.. _doxid-structxf_1_1database_1_1gqe_1_1task__complex_1a5272013313fa01ef2be1c55a98332e5a:
.. _cid-xf::database::gqe::task_complex::strategyimp:
.. ref-code-block:: cpp
	:class: overview-code-block

	// fields

	:ref:`task_complex_type<doxid-namespacexf_1_1database_1_1gqe_1a03403d41046015c5b17a37f3eb1c9923>` tsk_type
	:ref:`TableSection<doxid-classxf_1_1database_1_1gqe_1_1_table_section>`* tab_a
	string filter_a
	vector <future <size_t>>* tab_a_sec_ready
	:ref:`TableSection<doxid-classxf_1_1database_1_1gqe_1_1_table_section>`* tab_part_a
	:ref:`TableSection<doxid-classxf_1_1database_1_1gqe_1_1_table_section>`* tab_b
	string filter_b
	vector <future <size_t>>* tab_b_sec_ready
	:ref:`TableSection<doxid-classxf_1_1database_1_1gqe_1_1_table_section>`* tab_part_b
	string join_str
	string output_str
	:ref:`TableSection<doxid-classxf_1_1database_1_1gqe_1_1_table_section>`* tab_c
	vector <promise <size_t>>* tab_c_sec_ready_promise
	int join_type
	:ref:`JoinStrategyBase<doxid-classxf_1_1database_1_1gqe_1_1_join_strategy_base>`* strategyimp

