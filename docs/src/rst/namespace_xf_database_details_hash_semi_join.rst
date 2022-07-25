.. index:: pair: namespace; hash_semi_join
.. _doxid-namespacexf_1_1database_1_1details_1_1hash__semi__join:
.. _cid-xf::database::details::hash_semi_join:

namespace hash_semi_join
========================

.. toctree::
	:hidden:



.. ref-code-block:: cpp
	:class: overview-code-block





.. FunctionSection

.. _doxid-namespacexf_1_1database_1_1details_1_1hash__semi__join_1a3270416774d5e8c2af8dd765528e5374:
.. _cid-xf::database::details::hash_semi_join::semi_join_unit:

semi_join_unit
--------------


.. code-block:: cpp
	
	#include "xf_database/hash_semi_join.hpp"



.. ref-code-block:: cpp
	:class: title-code-block

	template <
	    int WPayload,
	    int WKey
	    >
	void semi_join_unit (
	    hls::stream <ap_uint <WKey>>& inner_row_istrm,
	    hls::stream <ap_uint <WKey>>& outer_key_istrm,
	    hls::stream <ap_uint <WPayload>>& outer_playload_istrm,
	    hls::stream <ap_uint <18>>& nm_istrm,
	    hls::stream <bool>& outer_end_istrm,
	    hls::stream <ap_uint <WPayload>>& join_ostrm,
	    hls::stream <bool>& join_end_ostrm
	    )

compare key, if match, output the joined row from outer table only once.

