.. index:: pair: class; xf::database::gqe::Filter
.. _doxid-classxf_1_1database_1_1gqe_1_1_filter:
.. _cid-xf::database::gqe::filter:

class xf::database::gqe::Filter
===============================

.. toctree::
	:hidden:

.. code-block:: cpp
	:class: overview-code-block

	#include "gqe_filter.hpp"


Overview
~~~~~~~~



.. ref-code-block:: cpp
	:class: overview-code-block

	class Filter: public :ref:`xf::database::gqe::Base<doxid-classxf_1_1database_1_1gqe_1_1_base>`

Inherited Members
-----------------

.. ref-code-block:: cpp
	:class: overview-inherited-code-block


Methods
~~~~~~~

.. FunctionSection

.. _doxid-classxf_1_1database_1_1gqe_1_1_filter_1a4b9fbc3e64605089f56e83d43708f45f:
.. _cid-xf::database::gqe::filter::filter:

Filter
------


.. ref-code-block:: cpp
	:class: title-code-block

	Filter (:ref:`FpgaInit<doxid-classxf_1_1database_1_1gqe_1_1_fpga_init>`& obj)

constructor of :ref:`Filter <doxid-classxf_1_1database_1_1gqe_1_1_filter>` .

Initializes hardware as well as loads binary to FPGA by class :ref:`Base <doxid-classxf_1_1database_1_1gqe_1_1_base>` & :ref:`FpgaInit <doxid-classxf_1_1database_1_1gqe_1_1_fpga_init>`



.. rubric:: Parameters:

.. list-table::
    :widths: 20 80

    *
        - obj

        - :ref:`FpgaInit <doxid-classxf_1_1database_1_1gqe_1_1_fpga_init>` class object

.. _doxid-classxf_1_1database_1_1gqe_1_1_filter_1a9c0e755b89861cc38663352c907deefa:
.. _cid-xf::database::gqe::filter::~filter:

~Filter
-------


.. ref-code-block:: cpp
	:class: title-code-block

	~Filter ()

deconstructor of :ref:`Filter <doxid-classxf_1_1database_1_1gqe_1_1_filter>` .

clProgram, commandQueue, and Context will be released by class :ref:`Base <doxid-classxf_1_1database_1_1gqe_1_1_base>`

.. _doxid-classxf_1_1database_1_1gqe_1_1_filter_1a2df733163fb12a6abdfcfb8c88eaf346:
.. _cid-xf::database::gqe::filter::run:

run
---


.. ref-code-block:: cpp
	:class: title-code-block

	:ref:`ErrCode<doxid-namespacexf_1_1database_1_1gqe_1ab8c63d2eec74d13d9f190082ca614298>` run (
	    :ref:`Table<doxid-classxf_1_1database_1_1gqe_1_1_table>`& tab_in,
	    std::string input_str,
	    :ref:`BloomFilter<doxid-classxf_1_1database_1_1gqe_1_1_bloom_filter>`& bf_in,
	    std::string filter_condition,
	    :ref:`Table<doxid-classxf_1_1database_1_1gqe_1_1_table>`& tab_out,
	    std::string output_str,
	    :ref:`StrategySet<doxid-structxf_1_1database_1_1gqe_1_1_strategy_set>` params
	    )

gqeFilter run function.

Usage:

::

   err_code = Filter.run(
       tab_in,
       "l_orderkey",
       bf_in,
       "19940101<=l_orderdate && l_orderdate<19950101",
       tab_c1,
       "c1=l_extendedprice, c2=l_discount, c3=o_orderdate, c4=l_orderkey",
       params);

Input filter_condition like "19940101<=l_orderdate && l_orderdate<19950101", l_orderdate must be exsisted in colunm names of the input table, when no filter conditions, input ""

Input key name(s) string like "l_orderkey_0", when enable dual key join, use comma as seperator, "l_orderkey_0, l_orderkey_1"

Output mapping is like "output_c0 = tab_in_col", when contains several columns, use comma as seperator



.. rubric:: Parameters:

.. list-table::
    :widths: 20 80

    *
        - tab_in

        - input table

    *
        - input_str

        - key column names(s) of the input table to be bloom-filtered

    *
        - bf_in

        - input bloom-filter from which the hash-table used

    *
        - filter_condition

        - filter condition used in dynamic filter

    *
        - tab_out

        - result table

    *
        - output_str

        - output column mapping

    *
        - params

        - :ref:`StrategySet <doxid-structxf_1_1database_1_1gqe_1_1_strategy_set>` struct contatins number of sections of the input table. params.sec_l = 0: uses section info from input table; params.sec_l >= 1: separates input table into params.sec_l sections evenly



.. rubric:: Returns:

error code

