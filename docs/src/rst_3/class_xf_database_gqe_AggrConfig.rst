.. index:: pair: class; xf::database::gqe::AggrConfig
.. _doxid-classxf_1_1database_1_1gqe_1_1_aggr_config:
.. _cid-xf::database::gqe::aggrconfig:

class xf::database::gqe::AggrConfig
===================================

.. toctree::
	:hidden:

	struct_xf_database_gqe_AggrConfig_hashGrpInfo.rst

.. code-block:: cpp
	:class: overview-code-block

	#include "gqe_aggr_config.hpp"


Overview
~~~~~~~~



.. _doxid-classxf_1_1database_1_1gqe_1_1_aggr_config_1ae6f4b2d5eb8006d4523bdb23f8e12b00:
.. _cid-xf::database::gqe::aggrconfig::getaggrconfigoutbits:
.. ref-code-block:: cpp
	:class: overview-code-block

	// structs

	struct :ref:`hashGrpInfo<doxid-structxf_1_1database_1_1gqe_1_1_aggr_config_1_1hash_grp_info>` 


Methods
~~~~~~~

.. FunctionSection

.. _doxid-classxf_1_1database_1_1gqe_1_1_aggr_config_1a8e10e726753454ff5d6010c104307f58:
.. _cid-xf::database::gqe::aggrconfig::aggrconfig:

AggrConfig
----------


.. ref-code-block:: cpp
	:class: title-code-block

	AggrConfig (
	    :ref:`Table<doxid-classxf_1_1database_1_1gqe_1_1_table>` tab_in,
	    std::vector <:ref:`EvaluationInfo<doxid-structxf_1_1database_1_1gqe_1_1_evaluation_info>`> evals_info,
	    std::string filter_str,
	    std::string group_keys_str,
	    std::string output_str,
	    bool avg_to_sum_ = false
	    )

construct of :ref:`AggrConfig <doxid-classxf_1_1database_1_1gqe_1_1_aggr_config>` .

The class generate aggregation configure bits by column names,

Input filter_str like "19940101<=o_orderdate && o_orderdate<19950101", o_orderdate and o_orderdate must be exsisted colunm names in input table when no filter conditions, input ""

Input evaluation information as a struct :ref:`EvaluationInfo <doxid-structxf_1_1database_1_1gqe_1_1_evaluation_info>` , creata a valid Evaluation struct using initializer list, e.g. {"l_extendedprice * (-l_discount+c2) / 100", {0, 100}} :ref:`EvaluationInfo <doxid-structxf_1_1database_1_1gqe_1_1_evaluation_info>` has two members: evaluation string and evaluation constants. In the evaluation string, you can input a final division calculation. Divisor only supports: 10,100,1000,10000 In the evaluation constants, input a constant for each column, if no constant, like "l_extendedprice" above, input zero.

Input Group keys in a string, like "group_key0, group_key1", use comma as seperator

Output strings are like "c0=tab_in_col1, c1=tab_in_col2", when contains several columns, use comma as seperator Usage:

::

  AggrConfig aggr_config(tab_in,
              {{"l_extendedprice * (-l_discount+c2) / 100", {0, 100}}},
              "l_shipdate<=19980902",
              "l_returnflag,l_linestatus",
              "c0=l_returnflag, c1=l_linestatus,c2=sum(eval0),c3=sum(eval1)");



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
        - output_str

        - output list, output1 = tab_a_col1

    *
        - avg_to_sum_

        - if auto fix the avg config

.. _doxid-classxf_1_1database_1_1gqe_1_1_aggr_config_1a766c4f3b818342789b786c7aa3ee4bee:
.. _cid-xf::database::gqe::aggrconfig::getscanlist:

getScanList
-----------


.. ref-code-block:: cpp
	:class: title-code-block

	std::vector <int8_t> getScanList () const

software shuffle list.



.. rubric:: Returns:

software shuffle array to adjust the kernel input

.. _doxid-classxf_1_1database_1_1gqe_1_1_aggr_config_1a1bf4b0bccc9bf5a0ee59e5195a10c623:
.. _cid-xf::database::gqe::aggrconfig::getpartlist:

getPartList
-----------


.. ref-code-block:: cpp
	:class: title-code-block

	std::vector <int8_t> getPartList () const

software shuffle list.



.. rubric:: Returns:

software shuffle array to adjust the kernel input when using partition kernel

.. _doxid-classxf_1_1database_1_1gqe_1_1_aggr_config_1a8936621232455aaa10ec87c35c16ef5d:
.. _cid-xf::database::gqe::aggrconfig::getwriteflag:

getWriteFlag
------------


.. ref-code-block:: cpp
	:class: title-code-block

	std::vector <bool> getWriteFlag () const

Write out flags.



.. rubric:: Returns:

the write flags for each column, 0-invalid 1-valid

.. _doxid-classxf_1_1database_1_1gqe_1_1_aggr_config_1aeae52876dc0755d5dec56e03f49bf729:
.. _cid-xf::database::gqe::aggrconfig::getpartconfigbits:

getPartConfigBits
-----------------


.. ref-code-block:: cpp
	:class: title-code-block

	ap_uint <512>* getPartConfigBits () const

return partition config bits.



.. rubric:: Returns:

partition config bits

.. _doxid-classxf_1_1database_1_1gqe_1_1_aggr_config_1ae2901b511795a25a177a8fca247ce835:
.. _cid-xf::database::gqe::aggrconfig::getaggrconfigbits:

getAggrConfigBits
-----------------


.. ref-code-block:: cpp
	:class: title-code-block

	ap_uint <32>* getAggrConfigBits () const

return aggregation config bits.



.. rubric:: Returns:

aggregation config bits

.. _doxid-classxf_1_1database_1_1gqe_1_1_aggr_config_1aeb4a156082428d5ca35a0cc6f2241055:
.. _cid-xf::database::gqe::aggrconfig::getresults:

getResults
----------


.. ref-code-block:: cpp
	:class: title-code-block

	std::vector <int> getResults (int i)

return merge info for each output (32bits impl).



.. rubric:: Returns:

return merge info for column i

.. _doxid-classxf_1_1database_1_1gqe_1_1_aggr_config_1a97bbb1af61072c8f566d652b8be65457:
.. _cid-xf::database::gqe::aggrconfig::getoutputcolnum:

getOutputColNum
---------------


.. ref-code-block:: cpp
	:class: title-code-block

	int getOutputColNum () const

return output column number.



.. rubric:: Returns:

return output column number

.. _doxid-classxf_1_1database_1_1gqe_1_1_aggr_config_1acbdc4ca3e1c8f3251d3873daf3b11d32:
.. _cid-xf::database::gqe::aggrconfig::getgrpkeynum:

getGrpKeyNum
------------


.. ref-code-block:: cpp
	:class: title-code-block

	int getGrpKeyNum () const

return group key number.



.. rubric:: Returns:

return group key number

