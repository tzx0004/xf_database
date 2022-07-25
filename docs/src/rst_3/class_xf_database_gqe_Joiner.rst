.. index:: pair: class; xf::database::gqe::Joiner
.. _doxid-classxf_1_1database_1_1gqe_1_1_joiner:
.. _cid-xf::database::gqe::joiner:

class xf::database::gqe::Joiner
===============================

.. toctree::
	:hidden:

.. code-block:: cpp
	:class: overview-code-block

	#include "gqe_join.hpp"


Overview
~~~~~~~~



.. _doxid-classxf_1_1database_1_1gqe_1_1_joiner_1a77c3fddc720e9a1695412a06ef55b506:
.. _cid-xf::database::gqe::joiner::~joiner:
.. ref-code-block:: cpp
	:class: overview-code-block

	class Joiner: public :ref:`xf::database::gqe::Base<doxid-classxf_1_1database_1_1gqe_1_1_base>`

Inherited Members
-----------------

.. ref-code-block:: cpp
	:class: overview-inherited-code-block


Methods
~~~~~~~

.. FunctionSection

.. _doxid-classxf_1_1database_1_1gqe_1_1_joiner_1a22bf68fe65d8d5f8e0a48be47f9f1ea6:
.. _cid-xf::database::gqe::joiner::joiner:

Joiner
------


.. ref-code-block:: cpp
	:class: title-code-block

	Joiner (:ref:`FpgaInit<doxid-classxf_1_1database_1_1gqe_1_1_fpga_init>`& obj)

constructor of :ref:`Joiner <doxid-classxf_1_1database_1_1gqe_1_1_joiner>` .

Passing :ref:`FpgaInit <doxid-classxf_1_1database_1_1gqe_1_1_fpga_init>` obj to :ref:`Joiner <doxid-classxf_1_1database_1_1gqe_1_1_joiner>` class. Splitting :ref:`FpgaInit <doxid-classxf_1_1database_1_1gqe_1_1_fpga_init>` (OpenCL context, program, commandqueue, host/device buffers creation/allocation etc.) and :ref:`Joiner <doxid-classxf_1_1database_1_1gqe_1_1_joiner>` Init, guaranteens OpenCL stuff are not released after each join call. So the joiner may launch multi-times.



.. rubric:: Parameters:

.. list-table::
    :widths: 20 80

    *
        - obj

        - the :ref:`FpgaInit <doxid-classxf_1_1database_1_1gqe_1_1_fpga_init>` instance.

.. _doxid-classxf_1_1database_1_1gqe_1_1_joiner_1a141481944b58c4dd1d7ecd41777200cb:
.. _cid-xf::database::gqe::joiner::run:

run
---


.. ref-code-block:: cpp
	:class: title-code-block

	:ref:`ErrCode<doxid-namespacexf_1_1database_1_1gqe_1ab8c63d2eec74d13d9f190082ca614298>` run (
	    :ref:`Table<doxid-classxf_1_1database_1_1gqe_1_1_table>`& tab_a,
	    std::string filter_a,
	    :ref:`Table<doxid-classxf_1_1database_1_1gqe_1_1_table>`& tab_b,
	    std::string filter_b,
	    std::string join_str,
	    :ref:`Table<doxid-classxf_1_1database_1_1gqe_1_1_table>`& tab_c,
	    std::string output_str,
	    int join_type = :ref:`INNER_JOIN<doxid-namespacexf_1_1database_1_1gqe_1a48260a37f3c58f033217c43cdfe10380a0190ab4db681e407952c182bd745834d>`,
	    :ref:`JoinStrategyBase<doxid-classxf_1_1database_1_1gqe_1_1_join_strategy_base>`* strategyimp = nullptr
	    )

Run join with the input arguments defined strategy, which includes.

* solution: the join solution (direct-join or partation-join)

* sec_o: left table sec number

* sec_l: right table sec number

* slice_num: the slice number that used in probe

* log_part, the partition number of left/right table

* coef_exp_partO: the expansion coefficient of table O result buffer size / input buffer size, this param affects the output buffer size, but not the perf

* coef_exp_partL: the expansion coefficient of table L result buffer size / input buffer size, this param affects the output buffer size, but not the perf

* coef_exp_join: the expansion coefficient of result buffer size / input buffer size, this param affects the output buffer size, but not the perf

Usage:

::

   auto smanual = new gqe::JoinStrategyManualSet(solution, sec_o, sec_l, slice_num, log_part, coef_exp_partO,
 coef_exp_partL, coef_exp_join);

   ErrCode err = bigjoin.run(
       tab_o, "o_rowid > 0",
       tab_l, "",
       "o_orderkey = l_orderkey",
       tab_c, "c1=l_orderkey, c2=o_rowid, c3=l_rowid",
       gqe::INNER_JOIN,
       smanual);
   delete smanual;

:ref:`Table <doxid-classxf_1_1database_1_1gqe_1_1_table>` tab_o filter condition like "o_rowid > 0", o_rowid is the col name of tab_o when no filter conditions, given empty fitler condition ""

The join condition like "left_join_key_0=right_join_key_0" when dual key join is enabled, using comma as the seperator in join condition, e.g. "left_join_key_0=right_join_key_0,left_join_key_1=right_join_key_1"

Output strings are like "output_c0 = tab_a_col/tab_b_col", when several columns are output, using comma as the seperator



.. rubric:: Parameters:

.. list-table::
    :widths: 20 80

    *
        - tab_a

        - left table

    *
        - filter_a

        - filter condition of left table

    *
        - tab_b

        - right table

    *
        - filter_b

        - filter condition of right table

    *
        - join_str

        - join condition(s)

    *
        - tab_c

        - result table

    *
        - output_str

        - output columns

    *
        - join_type

        - INNER_JOIN(default) | SEMI_JOIN | ANTI_JOIN.

    *
        - strategyimp

        - pointer to an object of :ref:`JoinStrategyBase <doxid-classxf_1_1database_1_1gqe_1_1_join_strategy_base>` or its derived type.

