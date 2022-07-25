.. index:: pair: struct; xf::database::details::hash_group_aggregate::COLUMN_DATA
.. _doxid-structxf_1_1database_1_1details_1_1hash__group__aggregate_1_1_c_o_l_u_m_n___d_a_t_a:
.. _cid-xf::database::details::hash_group_aggregate::column_data:

template struct xf::database::details::hash_group_aggregate::COLUMN_DATA
========================================================================

.. toctree::
	:hidden:

.. code-block:: cpp
	:class: overview-code-block

	#include "hash_group_aggregate.hpp"




.. _doxid-structxf_1_1database_1_1details_1_1hash__group__aggregate_1_1_c_o_l_u_m_n___d_a_t_a_1a1ce3c92d60ab24feeee3d1a928931db5:
.. _cid-xf::database::details::hash_group_aggregate::column_data::data:
.. ref-code-block:: cpp
	:class: overview-code-block

	template <
	    int _Width,
	    int _ColumnNM
	    >
	struct COLUMN_DATA

	// fields

	ap_uint <_Width> data[_ColumnNM]

