.. index:: pair: class; xf::database::gqe::JoinStrategyBase
.. _doxid-classxf_1_1database_1_1gqe_1_1_join_strategy_base:
.. _cid-xf::database::gqe::joinstrategybase:

class xf::database::gqe::JoinStrategyBase
=========================================

.. toctree::
	:hidden:

.. code-block:: cpp
	:class: overview-code-block

	#include "gqe_join_strategy.hpp"


Overview
~~~~~~~~



.. _doxid-classxf_1_1database_1_1gqe_1_1_join_strategy_base_1a364baa40a391186c38080f5d7d33e001:
.. _cid-xf::database::gqe::joinstrategybase::~joinstrategybase:
.. _doxid-classxf_1_1database_1_1gqe_1_1_join_strategy_base_1a777b80960c8f575fc5c3800c2df3730e:
.. _cid-xf::database::gqe::joinstrategybase::getsolutionparams:
.. ref-code-block:: cpp
	:class: overview-code-block

	class JoinStrategyBase

	    // direct descendants

	    class :ref:`xf::database::gqe::JoinStrategyManualSet<doxid-classxf_1_1database_1_1gqe_1_1_join_strategy_manual_set>` 
	    class :ref:`xf::database::gqe::JoinStrategyV1<doxid-classxf_1_1database_1_1gqe_1_1_join_strategy_v1>` 


Methods
~~~~~~~

.. FunctionSection

.. _doxid-classxf_1_1database_1_1gqe_1_1_join_strategy_base_1a39a92fd10a708d67d262f0a5cb1e2aa8:
.. _cid-xf::database::gqe::joinstrategybase::joinstrategybase:

JoinStrategyBase
----------------


.. ref-code-block:: cpp
	:class: title-code-block

	JoinStrategyBase ()

construct of :ref:`JoinStrategyBase <doxid-classxf_1_1database_1_1gqe_1_1_join_strategy_base>` .

.. _doxid-classxf_1_1database_1_1gqe_1_1_join_strategy_base_1aae6e0e7782480b4e4330cc3f4e904d82:
.. _cid-xf::database::gqe::joinstrategybase::getsolutionparams-2:

getSolutionParams
-----------------


getSolutionParams overload (1)
++++++++++++++++++++++++++++++


.. ref-code-block:: cpp
	:class: title-code-block

	virtual :ref:`StrategySet<doxid-structxf_1_1database_1_1gqe_1_1_strategy_set>` getSolutionParams (
	    :ref:`Table<doxid-classxf_1_1database_1_1gqe_1_1_table>` tab_a,
	    :ref:`Table<doxid-classxf_1_1database_1_1gqe_1_1_table>` tab_b
	    )

get solution id and parameters.



.. rubric:: Parameters:

.. list-table::
    :widths: 20 80

    *
        - tab_a

        - left table

    *
        - tab_b

        - right table

