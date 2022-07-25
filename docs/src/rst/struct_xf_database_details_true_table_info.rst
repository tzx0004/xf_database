.. index:: pair: struct; xf::database::details::true_table_info
.. _doxid-structxf_1_1database_1_1details_1_1true__table__info:
.. _cid-xf::database::details::true_table_info:

template struct xf::database::details::true_table_info
======================================================

.. toctree::
	:hidden:

.. code-block:: cpp
	:class: overview-code-block

	#include "dynamic_filter.hpp"


Overview
~~~~~~~~

Static Information about true table module.

.. ref-code-block:: cpp
	:class: overview-code-block

	template <int NCOL>
	struct true_table_info

	// typedefs

	typedef ap_uint <32> :ref:`cfg_type<doxid-structxf_1_1database_1_1details_1_1true__table__info_1a891ffadd25d7c9052b77615bebfd64a8>`

	// fields

	static const size_t :ref:`addr_width<doxid-structxf_1_1database_1_1details_1_1true__table__info_1a0662c6e2ecb2ed42baf03e74efea366e>`
	static const size_t :ref:`dwords_num<doxid-structxf_1_1database_1_1details_1_1true__table__info_1a3e4a112097274d52948367fcc9a87ab1>`

Typedefs
--------

.. _doxid-structxf_1_1database_1_1details_1_1true__table__info_1a891ffadd25d7c9052b77615bebfd64a8:
.. _cid-xf::database::details::true_table_info::cfg_type:
.. ref-code-block:: cpp
	:class: title-code-block

	typedef ap_uint <32> cfg_type

type of config stream.

Fields
------

.. _doxid-structxf_1_1database_1_1details_1_1true__table__info_1a0662c6e2ecb2ed42baf03e74efea366e:
.. _cid-xf::database::details::true_table_info::addr_width:
.. ref-code-block:: cpp
	:class: title-code-block

	static const size_t addr_width

width of address.

.. _doxid-structxf_1_1database_1_1details_1_1true__table__info_1a3e4a112097274d52948367fcc9a87ab1:
.. _cid-xf::database::details::true_table_info::dwords_num:
.. ref-code-block:: cpp
	:class: title-code-block

	static const size_t dwords_num

number of dwords to read for complete table.

