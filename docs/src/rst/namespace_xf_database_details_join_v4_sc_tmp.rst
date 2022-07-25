.. index:: pair: namespace; sc_tmp
.. _doxid-namespacexf_1_1database_1_1details_1_1join__v4_1_1sc__tmp:
.. _cid-xf::database::details::join_v4::sc_tmp:

namespace sc_tmp
================

.. toctree::
	:hidden:



.. _doxid-namespacexf_1_1database_1_1details_1_1join__v4_1_1sc__tmp_1a29c31293c7623ca55ce129d6978c8ec4:
.. _cid-xf::database::details::join_v4::sc_tmp::stb_addr_gen:
.. _doxid-namespacexf_1_1database_1_1details_1_1join__v4_1_1sc__tmp_1afcfc5f0d743a94e55b11076a09f6006c:
.. _cid-xf::database::details::join_v4::sc_tmp::split_row:
.. _doxid-namespacexf_1_1database_1_1details_1_1join__v4_1_1sc__tmp_1a15d4f3be0b46b97a953b115949e92588:
.. _cid-xf::database::details::join_v4::sc_tmp::write_row:
.. _doxid-namespacexf_1_1database_1_1details_1_1join__v4_1_1sc__tmp_1a34c0e7949e7b20c58e0088eb89823bb2:
.. _cid-xf::database::details::join_v4::sc_tmp::read_row:
.. _doxid-namespacexf_1_1database_1_1details_1_1join__v4_1_1sc__tmp_1ade6a182924f7d3e52b1197bd83e42813:
.. _cid-xf::database::details::join_v4::sc_tmp::combine_row:
.. _doxid-namespacexf_1_1database_1_1details_1_1join__v4_1_1sc__tmp_1abe68fad90981eee24f850f373a26b5af:
.. _cid-xf::database::details::join_v4::sc_tmp::read_stb:
.. ref-code-block:: cpp
	:class: overview-code-block





.. FunctionSection

.. _doxid-namespacexf_1_1database_1_1details_1_1join__v4_1_1sc__tmp_1aa1380cc35bf0281d75381599a99de654:
.. _cid-xf::database::details::join_v4::sc_tmp::write_stb:

write_stb
---------


.. code-block:: cpp
	
	#include "xf_database/hash_join_v4.hpp"



.. ref-code-block:: cpp
	:class: title-code-block

	template <
	    int ARW,
	    int RW
	    >
	void write_stb (
	    ap_uint <64>* stb_buf,
	    hls::stream <ap_uint <ARW>>& i_addr_strm,
	    hls::stream <ap_uint <RW>>& i_row_strm,
	    hls::stream <bool>& i_e_strm
	    )

Write s-table to HBM/DDR.

