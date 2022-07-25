.. index:: pair: class; xf::database::gqe::AggrCommand
.. _doxid-classxf_1_1database_1_1gqe_1_1_aggr_command:
.. _cid-xf::database::gqe::aggrcommand:

class xf::database::gqe::AggrCommand
====================================

.. toctree::
	:hidden:

.. code-block:: cpp
	:class: overview-code-block

	#include "xf_database/aggr_command.hpp"


Overview
~~~~~~~~

Class for generating configuration bits of ``gqeAggr`` kernel.

.. _doxid-classxf_1_1database_1_1gqe_1_1_aggr_command_1aa0036c48a5ba1e4c1446d886348e61ef:
.. _cid-xf::database::gqe::aggrcommand::setfilter:
.. ref-code-block:: cpp
	:class: overview-code-block


Methods
~~~~~~~

.. FunctionSection

.. _doxid-classxf_1_1database_1_1gqe_1_1_aggr_command_1af9988a6525c0d91f98fbe70e7514e822:
.. _cid-xf::database::gqe::aggrcommand::aggrcommand:

AggrCommand
-----------


.. ref-code-block:: cpp
	:class: title-code-block

	AggrCommand ()

construct of :ref:`AggrCommand <doxid-classxf_1_1database_1_1gqe_1_1_aggr_command>` .

The aggregate command used buffer is allocated on host. Some default settings are provided.

.. _doxid-classxf_1_1database_1_1gqe_1_1_aggr_command_1aa3652569ed2a682c6cc2aba73c7ab92e:
.. _cid-xf::database::gqe::aggrcommand::scan:

Scan
----


.. ref-code-block:: cpp
	:class: title-code-block

	void Scan (std::vector <int8_t> index)

scan valid cols and shuffle for evaluation 1.



.. rubric:: Parameters:

.. list-table::
    :widths: 20 80

    *
        - index

        - input valid column ids

.. _doxid-classxf_1_1database_1_1gqe_1_1_aggr_command_1ad467607a3f0d5b7c02e7b89ecbbc158e:
.. _cid-xf::database::gqe::aggrcommand::setevaluation:

setEvaluation
-------------


setEvaluation overload (1)
++++++++++++++++++++++++++


.. ref-code-block:: cpp
	:class: title-code-block

	void setEvaluation (
	    int eval_id,
	    std::string s0,
	    std::vector <int32_t> index,
	    int post_div = :ref:`nosf<doxid-namespacexf_1_1database_1_1gqe_1a3f6f95ebe9eaadfcfb19f268195eb1cba1fc63f01ed5c54d492fc8612179d3c93>`
	    )

set Evaluation string.



.. rubric:: Parameters:

.. list-table::
    :widths: 20 80

    *
        - eval_id

        - most support two evaluations

    *
        - s0

        - evaluation string for special strm format (not support '/')

    *
        - index

        - evaluation constants for each strm, default 0

    *
        - post_div

        - post division alu operation, nosf for no division, sf10 for "a/10", sf100 for "a/100", sf1k for "a/1000", sf10k for "a/10000" (a is result of evaluation expression)

.. _doxid-classxf_1_1database_1_1gqe_1_1_aggr_command_1a4174b8963f797eb488527055f03db664:
.. _cid-xf::database::gqe::aggrcommand::setevaluation-2:

setEvaluation overload (2)
++++++++++++++++++++++++++


.. ref-code-block:: cpp
	:class: title-code-block

	void setEvaluation (
	    int eval_id,
	    std::string eval_str
	    )

set Evaluation string.



.. rubric:: Parameters:

.. list-table::
    :widths: 20 80

    *
        - eval_id

        - most two evaluations

    *
        - eval_str

        - evaluation expression string

.. _doxid-classxf_1_1database_1_1gqe_1_1_aggr_command_1a152401419342f335102378c604004ee7:
.. _cid-xf::database::gqe::aggrcommand::setfilter-2:

setFilter
---------


setFilter overload (1)
++++++++++++++++++++++


.. ref-code-block:: cpp
	:class: title-code-block

	void setFilter (std::string filter_string)

set Filter string.

The string uses ``a`` , ``b`` , ``c`` , ``d`` to refer to first to the fourth column, and supports comparison and logical operator like C++. Parentheses can be used to group logic, but notice that the underlying hardware module does not support comparing one column with multiple constant boundaries in OR relationship. Integral constants will be extracted from expression.

For example, an expression could be ``(a < 10 && b < 20) || (c >= d)`` .



.. rubric:: Parameters:

.. list-table::
    :widths: 20 80

    *
        - filter_string

        - filter expression string

.. _doxid-classxf_1_1database_1_1gqe_1_1_aggr_command_1ac38b7bb0c454c2d4e657a9712c239176:
.. _cid-xf::database::gqe::aggrcommand::setshuffle0:

setShuffle0
-----------


.. ref-code-block:: cpp
	:class: title-code-block

	void setShuffle0 (std::vector <int8_t> index)

set shuffle0 column ids.



.. rubric:: Parameters:

.. list-table::
    :widths: 20 80

    *
        - index

        - shuffle0 key list,move evaluation keys to first 4 locations

.. _doxid-classxf_1_1database_1_1gqe_1_1_aggr_command_1a099ae03465cec174b4d69afed2768dbc:
.. _cid-xf::database::gqe::aggrcommand::setshuffle1:

setShuffle1
-----------


.. ref-code-block:: cpp
	:class: title-code-block

	void setShuffle1 (std::vector <int8_t> index)

set shuffle1 column ids.



.. rubric:: Parameters:

.. list-table::
    :widths: 20 80

    *
        - index

        - shuffle1 key list,move filter keys to first 4 locations

.. _doxid-classxf_1_1database_1_1gqe_1_1_aggr_command_1ac0b2ab6402526280156a49b053d74ef9:
.. _cid-xf::database::gqe::aggrcommand::setshuffle2:

setShuffle2
-----------


.. ref-code-block:: cpp
	:class: title-code-block

	void setShuffle2 (std::vector <int8_t> index)

set shuffle2 column ids.



.. rubric:: Parameters:

.. list-table::
    :widths: 20 80

    *
        - index

        - set column indexes of keys

.. _doxid-classxf_1_1database_1_1gqe_1_1_aggr_command_1a279e2053192126cc437d9d43aea0bb2d:
.. _cid-xf::database::gqe::aggrcommand::setshuffle3:

setShuffle3
-----------


.. ref-code-block:: cpp
	:class: title-code-block

	void setShuffle3 (std::vector <int8_t> index)

set shuffle3 column ids.



.. rubric:: Parameters:

.. list-table::
    :widths: 20 80

    *
        - index

        - set column indexes of payloads

.. _doxid-classxf_1_1database_1_1gqe_1_1_aggr_command_1a716fca9c12196255415ec1e9145e5887:
.. _cid-xf::database::gqe::aggrcommand::setgroupaggr:

setGroupAggr
------------


.. ref-code-block:: cpp
	:class: title-code-block

	void setGroupAggr (
	    int ind,
	    ap_uint <4> aggr_op
	    )

set Group Aggregation type of setting index



.. rubric:: Parameters:

.. list-table::
    :widths: 20 80

    *
        - ind

        - set index of column

    *
        - aggr_op

        - Aggregation type of setting index

.. _doxid-classxf_1_1database_1_1gqe_1_1_aggr_command_1a6bfd80785e1392e3c98ac2617d688980:
.. _cid-xf::database::gqe::aggrcommand::setgroupaggrs:

setGroupAggrs
-------------


.. ref-code-block:: cpp
	:class: title-code-block

	void setGroupAggrs (std::vector <ap_uint <4>> index)

set Group Aggregation types



.. rubric:: Parameters:

.. list-table::
    :widths: 20 80

    *
        - index

        - list of Aggregation types, starting from the first column, align with columns in shuffle3

.. _doxid-classxf_1_1database_1_1gqe_1_1_aggr_command_1a105f7ce5c426acde7022b5a67c5aafd7:
.. _cid-xf::database::gqe::aggrcommand::setmerge:

setMerge
--------


.. ref-code-block:: cpp
	:class: title-code-block

	void setMerge (
	    int m_id,
	    std::vector <uint8_t> index
	    )

set Merge column index in setting round of merge

merge flow : four list : key, count, aggr_l and aggr_h, each one has size 8 key is aligned with shuffle2, count, aggr_l and aggr_h are aligned with shuffle3 and setGroupAggr merge 0,1,2 merge key into the other three merge 3,4 merge count pld into other two



.. rubric:: Parameters:

.. list-table::
    :widths: 20 80

    *
        - m_id

        - round id of column merge

    *
        - index

        - merge colum list in current round

.. _doxid-classxf_1_1database_1_1gqe_1_1_aggr_command_1a78035399b71e83a3d045f606ac38c7b3:
.. _cid-xf::database::gqe::aggrcommand::columnmerge:

columnMerge
-----------


.. ref-code-block:: cpp
	:class: title-code-block

	void columnMerge (std::vector <ap_uint <4>> index)

set Merge codes in each round of merge

merge flow : four list : key, count, aggr_h, aggr_l (each one has size 8) key is aligned with shuffle2, count, aggr_h and aggr_l are aligned with shuffle3 and setGroupAggr merge 0,1,2 merge key into the other three merge 3,4 merge count pld into other two



.. rubric:: Parameters:

.. list-table::
    :widths: 20 80

    *
        - index

        - coded merging indexes

.. _doxid-classxf_1_1database_1_1gqe_1_1_aggr_command_1ad374e7c2733486643d42d5f6123f3e83:
.. _cid-xf::database::gqe::aggrcommand::setdirectaggrs:

setDirectAggrs
--------------


.. ref-code-block:: cpp
	:class: title-code-block

	void setDirectAggrs (std::vector <uint8_t> index)

set demux direct aggregations



.. rubric:: Parameters:

.. list-table::
    :widths: 20 80

    *
        - index

        - columns of using direct aggregations

.. _doxid-classxf_1_1database_1_1gqe_1_1_aggr_command_1a976bfd3b51f7dd0732f67e24270faaf1:
.. _cid-xf::database::gqe::aggrcommand::setwritecol:

setWriteCol
-----------


.. ref-code-block:: cpp
	:class: title-code-block

	void setWriteCol (std::vector <int8_t> index)

set output column ids.



.. rubric:: Parameters:

.. list-table::
    :widths: 20 80

    *
        - index

        - output column ids

.. _doxid-classxf_1_1database_1_1gqe_1_1_aggr_command_1ae4995c00e1eb86bcb5050172f127f8e3:
.. _cid-xf::database::gqe::aggrcommand::getconfigbits:

getConfigBits
-------------


.. ref-code-block:: cpp
	:class: title-code-block

	ap_uint <W>* getConfigBits () const

return config bit array.

.. _doxid-classxf_1_1database_1_1gqe_1_1_aggr_command_1ae079e60f2d4c995f72d56a85fda5d654:
.. _cid-xf::database::gqe::aggrcommand::getconfigoutbits:

getConfigOutBits
----------------


.. ref-code-block:: cpp
	:class: title-code-block

	ap_uint <W>* getConfigOutBits ()

return config out bit array.

