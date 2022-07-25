.. index:: pair: class; xf::database::gqe::AggrStrategyBase
.. _doxid-classxf_1_1database_1_1gqe_1_1_aggr_strategy_base:
.. _cid-xf::database::gqe::aggrstrategybase:

class xf::database::gqe::AggrStrategyBase
=========================================

.. toctree::
	:hidden:

.. code-block:: cpp
	:class: overview-code-block

	#include "gqe_aggr_strategy.hpp"


Overview
~~~~~~~~



.. _doxid-classxf_1_1database_1_1gqe_1_1_aggr_strategy_base_1abdecd8d06e8d6498e8ad2ad77f6fd3f5:
.. _cid-xf::database::gqe::aggrstrategybase::~aggrstrategybase:
.. ref-code-block:: cpp
	:class: overview-code-block

	class AggrStrategyBase

	    // direct descendants

	    class :ref:`xf::database::gqe::AggrStrategyManualSet<doxid-classxf_1_1database_1_1gqe_1_1_aggr_strategy_manual_set>` 


Methods
~~~~~~~

.. FunctionSection

.. _doxid-classxf_1_1database_1_1gqe_1_1_aggr_strategy_base_1afd0fb86b6fcafce2ea0727df77bab819:
.. _cid-xf::database::gqe::aggrstrategybase::aggrstrategybase:

AggrStrategyBase
----------------


.. ref-code-block:: cpp
	:class: title-code-block

	AggrStrategyBase ()

construct of :ref:`AggrStrategyBase <doxid-classxf_1_1database_1_1gqe_1_1_aggr_strategy_base>` .

.. _doxid-classxf_1_1database_1_1gqe_1_1_aggr_strategy_base_1af815c5efa7b293d6346e46f71c1bfbb6:
.. _cid-xf::database::gqe::aggrstrategybase::getsolutionparams:

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

        - input table

