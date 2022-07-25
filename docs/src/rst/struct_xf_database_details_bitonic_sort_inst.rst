.. index:: pair: struct; xf::database::details::bitonic_sort_inst
.. _doxid-structxf_1_1database_1_1details_1_1bitonic__sort__inst:
.. _cid-xf::database::details::bitonic_sort_inst:

template struct xf::database::details::bitonic_sort_inst
========================================================

.. toctree::
	:hidden:

.. code-block:: cpp
	:class: overview-code-block

	#include "bitonic_sort.hpp"


Overview
~~~~~~~~

sort instance

.. ref-code-block:: cpp
	:class: overview-code-block

	template <
	    typename type_t,
	    int Number
	    >
	struct bitonic_sort_inst


Methods
~~~~~~~

.. FunctionSection

.. _doxid-structxf_1_1database_1_1details_1_1bitonic__sort__inst_1a309f2699b8d28aed2bb9dd0faa40e7ee:
.. _cid-xf::database::details::bitonic_sort_inst::sub_sort:

sub_sort
--------


.. ref-code-block:: cpp
	:class: title-code-block

	static int sub_sort (
	    type_t a [Number],
	    type_t b [Number],
	    bool sign
	    )

sort N, N must be a power of 2

.. _doxid-structxf_1_1database_1_1details_1_1bitonic__sort__inst_1aade65e8b3e8c322b08057ce320e26656:
.. _cid-xf::database::details::bitonic_sort_inst::sub_merge:

sub_merge
---------


.. ref-code-block:: cpp
	:class: title-code-block

	static int sub_merge (
	    type_t a [2 *Number],
	    type_t b [2 *Number],
	    bool sign
	    )

merge a[N] to a[2*N], N must be a power of 2

