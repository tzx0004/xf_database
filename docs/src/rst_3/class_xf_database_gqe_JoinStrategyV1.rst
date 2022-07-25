.. index:: pair: class; xf::database::gqe::JoinStrategyV1
.. _doxid-classxf_1_1database_1_1gqe_1_1_join_strategy_v1:
.. _cid-xf::database::gqe::joinstrategyv1:

class xf::database::gqe::JoinStrategyV1
=======================================

.. toctree::
	:hidden:

.. code-block:: cpp
	:class: overview-code-block

	#include "gqe_join_strategy.hpp"


Overview
~~~~~~~~



.. _doxid-classxf_1_1database_1_1gqe_1_1_join_strategy_v1_1a0eaebee2f2f3ce289077d38ebbc244a4:
.. _cid-xf::database::gqe::joinstrategyv1::~joinstrategyv1:
.. ref-code-block:: cpp
	:class: overview-code-block

	class JoinStrategyV1: public :ref:`xf::database::gqe::JoinStrategyBase<doxid-classxf_1_1database_1_1gqe_1_1_join_strategy_base>`

Inherited Members
-----------------

.. ref-code-block:: cpp
	:class: overview-inherited-code-block


Methods
~~~~~~~

.. FunctionSection

.. _doxid-classxf_1_1database_1_1gqe_1_1_join_strategy_v1_1a8474e1e50515ddae36b534c7e0c13fcf:
.. _cid-xf::database::gqe::joinstrategyv1::joinstrategyv1:

JoinStrategyV1
--------------


.. ref-code-block:: cpp
	:class: title-code-block

	JoinStrategyV1 ()

construct of :ref:`JoinStrategyV1 <doxid-classxf_1_1database_1_1gqe_1_1_join_strategy_v1>` .

.. _doxid-classxf_1_1database_1_1gqe_1_1_join_strategy_v1_1a33ffb4c648c5f3389f66f148f9b031dc:
.. _cid-xf::database::gqe::joinstrategyv1::getsolutionparams:

getSolutionParams
-----------------


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

