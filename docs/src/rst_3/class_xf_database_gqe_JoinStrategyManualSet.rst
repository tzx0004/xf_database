.. index:: pair: class; xf::database::gqe::JoinStrategyManualSet
.. _doxid-classxf_1_1database_1_1gqe_1_1_join_strategy_manual_set:
.. _cid-xf::database::gqe::joinstrategymanualset:

class xf::database::gqe::JoinStrategyManualSet
==============================================

.. toctree::
	:hidden:

.. code-block:: cpp
	:class: overview-code-block

	#include "gqe_join_strategy.hpp"


Overview
~~~~~~~~



.. _doxid-classxf_1_1database_1_1gqe_1_1_join_strategy_manual_set_1a2bd9d6593e3351b23ec31ba1f4ec617f:
.. _cid-xf::database::gqe::joinstrategymanualset::joinstrategymanualset:
.. _doxid-classxf_1_1database_1_1gqe_1_1_join_strategy_manual_set_1a4e29da697ce182500fef6fc795c3737f:
.. _cid-xf::database::gqe::joinstrategymanualset::~joinstrategymanualset:
.. _doxid-classxf_1_1database_1_1gqe_1_1_join_strategy_manual_set_1ac6120b7264b087ee3ec59e761c552046:
.. _cid-xf::database::gqe::joinstrategymanualset::getsolutionparams:
.. ref-code-block:: cpp
	:class: overview-code-block

	class JoinStrategyManualSet: public :ref:`xf::database::gqe::JoinStrategyBase<doxid-classxf_1_1database_1_1gqe_1_1_join_strategy_base>`

Inherited Members
-----------------

.. ref-code-block:: cpp
	:class: overview-inherited-code-block


Methods
~~~~~~~

.. FunctionSection

.. _doxid-classxf_1_1database_1_1gqe_1_1_join_strategy_manual_set_1a0f451773c508b81d06361892da8ecf15:
.. _cid-xf::database::gqe::joinstrategymanualset::joinstrategymanualset-2:

JoinStrategyManualSet
---------------------


.. ref-code-block:: cpp
	:class: title-code-block

	JoinStrategyManualSet (
	    size_t _sol,
	    size_t _sec_o,
	    size_t _sec_l,
	    size_t _slice_num,
	    size_t _log_part,
	    float _expansion_partO = 2,
	    float _expansion_partL = 2,
	    float _expansion_join = 1
	    )

construct of :ref:`JoinStrategyManualSet <doxid-classxf_1_1database_1_1gqe_1_1_join_strategy_manual_set>` .

derived class of :ref:`JoinStrategyBase <doxid-classxf_1_1database_1_1gqe_1_1_join_strategy_base>` , for set solution and parameters manually



.. rubric:: Parameters:

.. list-table::
    :widths: 20 80

    *
        - sol

        - solution id SOL0 | SOL1 | SOL2.

    *
        - sec_o

        - section number of left table

    *
        - sec_l

        - section number of right table

    *
        - slice_num

        - slice number of probe kernel.

    *
        - log_part

        - log number of hash partition.

    *
        - _expansion_partO

        - partition O output_buffer_size = _expansion_partO * input_buffer_size

    *
        - _expansion_partL

        - partition L output_buffer_size = _expansion_partL * input_buffer_size

    *
        - _expansion_join

        - join output_buffer_size = _expansion_join * input_buffer_size

.. _doxid-classxf_1_1database_1_1gqe_1_1_join_strategy_manual_set_1a1082e1c3186116a4bf6f5c2948734e72:
.. _cid-xf::database::gqe::joinstrategymanualset::getsolutionparams-2:

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

