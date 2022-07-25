.. index:: pair: struct; xf::database::details::bitonic_sort_inst <type_t, 2>
.. _doxid-structxf_1_1database_1_1details_1_1bitonic__sort__inst_3_01type__t_00_012_01_4:
.. _cid-xf::database::details::bitonic_sort_inst-2:

template struct xf::database::details::bitonic_sort_inst <type_t, 2>
====================================================================

.. toctree::
	:hidden:

.. code-block:: cpp
	:class: overview-code-block

	#include "bitonic_sort.hpp"


Overview
~~~~~~~~

Template Termination condition.

.. ref-code-block:: cpp
	:class: overview-code-block

	template <typename type_t>
	struct bitonic_sort_inst <type_t, 2>


Methods
~~~~~~~

.. FunctionSection

.. _doxid-structxf_1_1database_1_1details_1_1bitonic__sort__inst_3_01type__t_00_012_01_4_1a3f3f4d5b8ebe500d10218036f935cb63:
.. _cid-xf::database::details::bitonic_sort_inst::sub_sort-2:

sub_sort
--------


.. ref-code-block:: cpp
	:class: title-code-block

	static int sub_sort (
	    type_t a [2],
	    type_t b [2],
	    bool sign
	    )

Sort Termination condition.

.. _doxid-structxf_1_1database_1_1details_1_1bitonic__sort__inst_3_01type__t_00_012_01_4_1aa391776168a1a4d5a86edd4f90084b58:
.. _cid-xf::database::details::bitonic_sort_inst::sub_merge-2:

sub_merge
---------


.. ref-code-block:: cpp
	:class: title-code-block

	static int sub_merge (
	    type_t a [4],
	    type_t b [4],
	    bool sign
	    )

Merge Termination condition.

