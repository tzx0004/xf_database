.. index:: pair: class; xf::database::gqe::AggrStrategyManualSet
.. _doxid-classxf_1_1database_1_1gqe_1_1_aggr_strategy_manual_set:
.. _cid-xf::database::gqe::aggrstrategymanualset:

class xf::database::gqe::AggrStrategyManualSet
==============================================

.. toctree::
	:hidden:

.. code-block:: cpp
	:class: overview-code-block

	#include "gqe_aggr_strategy.hpp"


Overview
~~~~~~~~



.. _doxid-classxf_1_1database_1_1gqe_1_1_aggr_strategy_manual_set_1a7ed06123558a9c92ef6fd1e445603aa6:
.. _cid-xf::database::gqe::aggrstrategymanualset::aggrstrategymanualset:
.. _doxid-classxf_1_1database_1_1gqe_1_1_aggr_strategy_manual_set_1aeeeff647f6f3409e4550795f122dc944:
.. _cid-xf::database::gqe::aggrstrategymanualset::~aggrstrategymanualset:
.. ref-code-block:: cpp
	:class: overview-code-block

	class AggrStrategyManualSet: public :ref:`xf::database::gqe::AggrStrategyBase<doxid-classxf_1_1database_1_1gqe_1_1_aggr_strategy_base>`

Inherited Members
-----------------

.. ref-code-block:: cpp
	:class: overview-inherited-code-block


Methods
~~~~~~~

.. FunctionSection

.. _doxid-classxf_1_1database_1_1gqe_1_1_aggr_strategy_manual_set_1a1dbbcdb6254638b3f839e6ed56df4165:
.. _cid-xf::database::gqe::aggrstrategymanualset::aggrstrategymanualset-2:

AggrStrategyManualSet
---------------------


.. ref-code-block:: cpp
	:class: title-code-block

	AggrStrategyManualSet (
	    size_t _sol,
	    size_t _sec_l,
	    size_t _slice_num,
	    size_t _log_part
	    )

construct of :ref:`AggrStrategyManualSet <doxid-classxf_1_1database_1_1gqe_1_1_aggr_strategy_manual_set>` .

derived class of :ref:`AggrStrategyBase <doxid-classxf_1_1database_1_1gqe_1_1_aggr_strategy_base>` , for set solution and parameters manually



.. rubric:: Parameters:

.. list-table::
    :widths: 20 80

    *
        - sol

        - solution id SOL0 | SOL1 | SOL2.

    *
        - sec_l

        - section number of input table

    *
        - slice_num

        - slice number of probe kernel.

    *
        - log_part

        - log number of hash partition.

.. _doxid-classxf_1_1database_1_1gqe_1_1_aggr_strategy_manual_set_1a1a1079eb70108a8525a295c37521d951:
.. _cid-xf::database::gqe::aggrstrategymanualset::getsolutionparams:

getSolutionParams
-----------------


.. ref-code-block:: cpp
	:class: title-code-block

	virtual std::vector <size_t> getSolutionParams (:ref:`Table<doxid-classxf_1_1database_1_1gqe_1_1_table>` tab_a)

get solution id and parameters.



.. rubric:: Parameters:

.. list-table::
    :widths: 20 80

    *
        - tab_a

        - table to do aggregation

