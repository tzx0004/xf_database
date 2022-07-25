.. index:: pair: class; xf::database::gqe::Aggregator
.. _doxid-classxf_1_1database_1_1gqe_1_1_aggregator:
.. _cid-xf::database::gqe::aggregator:

class xf::database::gqe::Aggregator
===================================

.. toctree::
	:hidden:

.. code-block:: cpp
	:class: overview-code-block

	#include "xf_database/gqe_aggr.hpp"


Overview
~~~~~~~~



.. _doxid-classxf_1_1database_1_1gqe_1_1_aggregator_1a5aaf25962d1d10f4a2e6b2edf64c788e:
.. _cid-xf::database::gqe::aggregator::~aggregator:
.. ref-code-block:: cpp
	:class: overview-code-block


Methods
~~~~~~~

.. FunctionSection

.. _doxid-classxf_1_1database_1_1gqe_1_1_aggregator_1a04a196d3e3a9e31ee4db57d2548acd3b:
.. _cid-xf::database::gqe::aggregator::aggregator:

Aggregator
----------


.. ref-code-block:: cpp
	:class: title-code-block

	Aggregator (std::string xclbin)

construct of :ref:`Aggregator <doxid-classxf_1_1database_1_1gqe_1_1_aggregator>` .



.. rubric:: Parameters:

.. list-table::
    :widths: 20 80

    *
        - xclbin

        - xclbin path

.. _doxid-classxf_1_1database_1_1gqe_1_1_aggregator_1a84e65484d5c77b5c71de28564e56e885:
.. _cid-xf::database::gqe::aggregator::aggregate:

aggregate
---------


.. ref-code-block:: cpp
	:class: title-code-block

	:ref:`ErrCode<doxid-namespacexf_1_1database_1_1gqe_1ab8c63d2eec74d13d9f190082ca614298>` aggregate (
	    :ref:`Table<doxid-classxf_1_1database_1_1gqe_1_1_table>`& tab_in,
	    std::vector <:ref:`EvaluationInfo<doxid-structxf_1_1database_1_1gqe_1_1_evaluation_info>`> evals_info,
	    std::string filter_str,
	    std::string group_keys_str,
	    std::string output_str,
	    :ref:`Table<doxid-classxf_1_1database_1_1gqe_1_1_table>`& tab_out,
	    :ref:`AggrStrategyBase<doxid-classxf_1_1database_1_1gqe_1_1_aggr_strategy_base>`* strategyImp = nullptr
	    )

aggregate function.

Usage:

::

     err_code = bigaggr.aggregate(tab_l, //input table
                                  {{"l_extendedprice * (-l_discount+c2) / 100", {0, 100}},
                                   {"l_extendedprice * (-l_discount+c2) * (l_tax+c3) / 10000", {0, 100, 100}}
                                  }, // evaluation
                                  "l_shipdate<=19980902", //filter
                                  "l_returnflag,l_linestatus", // group keys
                                  "c0=l_returnflag, c1=l_linestatus,c2=sum(eval0),c3=sum(eval1)", // mapping
                                  tab_c, //output table
                                  sptr); //strategy

Input filter_str like "19940101<=o_orderdate && o_orderdate<19950101", o_orderdate and o_orderdate must be exsisted colunm names in input table when no filter conditions, input ""

Input evaluation information as a struct :ref:`EvaluationInfo <doxid-structxf_1_1database_1_1gqe_1_1_evaluation_info>` , creata a valid Evaluation struct using initializer list, e.g. {"l_extendedprice * (-l_discount+c2) / 100", {0, 100}} :ref:`EvaluationInfo <doxid-structxf_1_1database_1_1gqe_1_1_evaluation_info>` has two members: evaluation string and evaluation constants. In the evaluation string, you can input a final division calculation. Divisor only supports: 10,100,1000,10000 In the evaluation constants, input a constant for each column, if no constant, like "l_extendedprice" above, input zero.

Input Group keys in a string, like "group_key0, group_key1", use comma as seperator

Output strings are like "c0=tab_in_col1, c1=tab_in_col2", when contains several columns, use comma as seperator

StrategyImp class pointer of derived class of :ref:`AggrStrategyBase <doxid-classxf_1_1database_1_1gqe_1_1_aggr_strategy_base>` .



.. rubric:: Parameters:

.. list-table::
    :widths: 20 80

    *
        - tab_in

        - input table

    *
        - evals_info

        - Evalutaion information

    *
        - filter_str

        - filter condition

    *
        - group_keys_str

        - group keys

    *
        - out_ptr

        - output list, output1 = tab_a_col1

    *
        - tab_out

        - result table

    *
        - strategyImp

        - pointer to an object of :ref:`AggrStrategyBase <doxid-classxf_1_1database_1_1gqe_1_1_aggr_strategy_base>` or its derived type.

