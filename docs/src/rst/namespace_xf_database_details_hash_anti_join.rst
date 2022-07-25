.. index:: pair: namespace; hash_anti_join
.. _doxid-namespacexf_1_1database_1_1details_1_1hash__anti__join:
.. _cid-xf::database::details::hash_anti_join:

namespace hash_anti_join
========================

.. toctree::
	:hidden:



.. ref-code-block:: cpp
	:class: overview-code-block





.. FunctionSection

.. _doxid-namespacexf_1_1database_1_1details_1_1hash__anti__join_1a4e9cd2d575650828043a7fe5f98d80c9:
.. _cid-xf::database::details::hash_anti_join::anti_probe_htb:

anti_probe_htb
--------------


.. code-block:: cpp
	
	#include "xf_database/hash_anti_join.hpp"



.. ref-code-block:: cpp
	:class: title-code-block

	template <
	    int HASHW,
	    int KEYW,
	    int PW,
	    int B_PW,
	    int ARW
	    >
	void anti_probe_htb (
	    ap_uint <32>& depth,
	    hls::stream <ap_uint <HASHW>>& i_hash_strm,
	    hls::stream <ap_uint <KEYW>>& i_key_strm,
	    hls::stream <ap_uint <PW>>& i_pld_strm,
	    hls::stream <bool>& i_e_strm,
	    hls::stream <ap_uint <ARW>>& o_base_addr_strm,
	    hls::stream <ap_uint <ARW>>& o_nm0_strm,
	    hls::stream <bool>& o_e0_strm,
	    hls::stream <ap_uint <ARW>>& o_overflow_addr_strm,
	    hls::stream <ap_uint <ARW>>& o_nm1_strm,
	    hls::stream <bool>& o_e1_strm,
	    hls::stream <ap_uint <KEYW>>& o_key_strm,
	    hls::stream <ap_uint <B_PW>>& o_pld_strm,
	    hls::stream <ap_uint <ARW>>& o_nm2_strm,
	    hls::stream <bool>& o_e2_strm,
	    ap_uint <72>* bit_vector0,
	    ap_uint <72>* bit_vector1
	    )

Probe the hash table and output address which hash same hash_value and hash hit number.

.. _doxid-namespacexf_1_1database_1_1details_1_1hash__anti__join_1a8c5c5417d40a3289fc9cfff5bba21dde:
.. _cid-xf::database::details::hash_anti_join::anti_probe_wrapper:

anti_probe_wrapper
------------------


.. code-block:: cpp
	
	#include "xf_database/hash_anti_join.hpp"



.. ref-code-block:: cpp
	:class: title-code-block

	template <
	    int HASHW,
	    int KEYW,
	    int PW,
	    int S_PW,
	    int T_PW,
	    int ARW
	    >
	void anti_probe_wrapper (
	    ap_uint <32>& depth,
	    hls::stream <ap_uint <HASHW>>& i_hash_strm,
	    hls::stream <ap_uint <KEYW>>& i_key_strm,
	    hls::stream <ap_uint <PW>>& i_pld_strm,
	    hls::stream <bool>& i_e_strm,
	    hls::stream <ap_uint <KEYW>>& o_t_key_strm,
	    hls::stream <ap_uint <T_PW>>& o_t_pld_strm,
	    hls::stream <ap_uint <ARW>>& o_nm_strm,
	    hls::stream <bool>& o_e0_strm,
	    hls::stream <ap_uint <KEYW>>& o_base_s_key_strm,
	    hls::stream <ap_uint <S_PW>>& o_base_s_pld_strm,
	    hls::stream <ap_uint <KEYW>>& o_overflow_s_key_strm,
	    hls::stream <ap_uint <S_PW>>& o_overflow_s_pld_strm,
	    ap_uint <256>* htb_buf,
	    ap_uint <256>* stb_buf,
	    ap_uint <72>* bit_vector0,
	    ap_uint <72>* bit_vector1
	    )

Top function of hash join probe.

.. _doxid-namespacexf_1_1database_1_1details_1_1hash__anti__join_1a401b82748c2c03c612dda3efc4236cf6:
.. _cid-xf::database::details::hash_anti_join::build_merge_anti_probe_wrapper:

build_merge_anti_probe_wrapper
------------------------------


.. code-block:: cpp
	
	#include "xf_database/hash_anti_join.hpp"



.. ref-code-block:: cpp
	:class: title-code-block

	template <
	    int HASH_MODE,
	    int HASHWH,
	    int HASHWL,
	    int KEYW,
	    int S_PW,
	    int T_PW,
	    int ARW
	    >
	void build_merge_anti_probe_wrapper (
	    ap_uint <32>& depth,
	    hls::stream <ap_uint <HASHWL>>& i_hash_strm,
	    hls::stream <ap_uint <KEYW>>& i_key_strm,
	    hls::stream <ap_uint <T_PW>>& i_pld_strm,
	    hls::stream <bool>& i_e_strm,
	    hls::stream <ap_uint <KEYW>>& o_t_key_strm,
	    hls::stream <ap_uint <T_PW>>& o_t_pld_strm,
	    hls::stream <ap_uint <ARW>>& o_nm_strm,
	    hls::stream <bool>& o_e_strm,
	    hls::stream <ap_uint <KEYW>>& o_base_s_key_strm,
	    hls::stream <ap_uint <S_PW>>& o_base_s_pld_strm,
	    hls::stream <ap_uint <KEYW>>& o_overflow_s_key_strm,
	    hls::stream <ap_uint <S_PW>>& o_overflow_s_pld_strm,
	    ap_uint <256>* htb_buf,
	    ap_uint <256>* stb_buf
	    )

Top function of hash join PU.

.. _doxid-namespacexf_1_1database_1_1details_1_1hash__anti__join_1ad4e2b6af506e9e4193a9ca09b3c1f312:
.. _cid-xf::database::details::hash_anti_join::join_unit_1:

join_unit_1
-----------


.. code-block:: cpp
	
	#include "xf_database/hash_anti_join.hpp"



.. ref-code-block:: cpp
	:class: title-code-block

	template <
	    int KEYW,
	    int S_PW,
	    int T_PW,
	    int ARW
	    >
	void join_unit_1 (
	    ap_uint <32>& join_depth,
	    hls::stream <ap_uint <KEYW>>& i1_t_key_strm,
	    hls::stream <ap_uint <T_PW>>& i1_t_pld_strm,
	    hls::stream <ap_uint <ARW>>& i1_nm_strm,
	    hls::stream <bool>& i1_e0_strm,
	    hls::stream <ap_uint <KEYW>>& i_base_s_key_strm,
	    hls::stream <ap_uint <S_PW>>& i_base_s_pld_strm,
	    hls::stream <ap_uint <KEYW>>& i_overflow_s_key_strm,
	    hls::stream <ap_uint <S_PW>>& i_overflow_s_pld_strm,
	    hls::stream <ap_uint <KEYW+S_PW+T_PW>>& o1_j_strm,
	    hls::stream <bool>& o1_e_strm
	    )

compare the same hash value, if key not match, output row

.. _doxid-namespacexf_1_1database_1_1details_1_1hash__anti__join_1a8e5cc623e89b1cc8ddafe3b08e0641ce:
.. _cid-xf::database::details::hash_anti_join::join_unit_2:

join_unit_2
-----------


.. code-block:: cpp
	
	#include "xf_database/hash_anti_join.hpp"



.. ref-code-block:: cpp
	:class: title-code-block

	template <
	    int KEYW,
	    int S_PW,
	    int T_PW,
	    int ARW
	    >
	void join_unit_2 (
	    hls::stream <ap_uint <KEYW>>& i2_t_key_strm,
	    hls::stream <ap_uint <T_PW>>& i2_t_pld_strm,
	    hls::stream <ap_uint <ARW>>& i2_nm_strm,
	    hls::stream <bool>& i2_e0_strm,
	    hls::stream <ap_uint <KEYW+S_PW+T_PW>>& o2_j_strm,
	    hls::stream <bool>& o2_e_strm
	    )

output unequel hash value row

.. _doxid-namespacexf_1_1database_1_1details_1_1hash__anti__join_1a08b7b3a8eeadd44d1f06b72b8075ecde:
.. _cid-xf::database::details::hash_anti_join::split_stream:

split_stream
------------


.. code-block:: cpp
	
	#include "xf_database/hash_anti_join.hpp"



.. ref-code-block:: cpp
	:class: title-code-block

	template <
	    int KEYW,
	    int S_PW,
	    int T_PW,
	    int ARW
	    >
	void split_stream (
	    hls::stream <ap_uint <KEYW>>& i_t_key_strm,
	    hls::stream <ap_uint <T_PW>>& i_t_pld_strm,
	    hls::stream <ap_uint <ARW>>& i_nm_strm,
	    hls::stream <bool>& i_e0_strm,
	    hls::stream <ap_uint <KEYW>>& i1_t_key_strm,
	    hls::stream <ap_uint <T_PW>>& i1_t_pld_strm,
	    hls::stream <ap_uint <ARW>>& i1_nm_strm,
	    hls::stream <bool>& i1_e0_strm,
	    hls::stream <ap_uint <KEYW>>& i2_t_key_strm,
	    hls::stream <ap_uint <T_PW>>& i2_t_pld_strm,
	    hls::stream <ap_uint <ARW>>& i2_nm_strm,
	    hls::stream <bool>& i2_e0_strm
	    )

split t_strm to hash hit stream and hash unhit stream

.. _doxid-namespacexf_1_1database_1_1details_1_1hash__anti__join_1a0f5beebf500ef2d7c8cfe80070fbffa4:
.. _cid-xf::database::details::hash_anti_join::combine_stream:

combine_stream
--------------


.. code-block:: cpp
	
	#include "xf_database/hash_anti_join.hpp"



.. ref-code-block:: cpp
	:class: title-code-block

	template <
	    int KEYW,
	    int S_PW,
	    int T_PW,
	    int ARW
	    >
	void combine_stream (
	    hls::stream <ap_uint <KEYW+S_PW+T_PW>>& o1_j_strm,
	    hls::stream <bool>& o1_e_strm,
	    hls::stream <ap_uint <KEYW+S_PW+T_PW>>& o2_j_strm,
	    hls::stream <bool>& o2_e_strm,
	    hls::stream <ap_uint <KEYW+S_PW+T_PW>>& o_j_strm,
	    hls::stream <bool>& o_e_strm
	    )

comebine hash hit stream and hash unhit stream output

.. _doxid-namespacexf_1_1database_1_1details_1_1hash__anti__join_1a8df2cd67314e30ee1d4b6a05afb3f719:
.. _cid-xf::database::details::hash_anti_join::anti_join_unit:

anti_join_unit
--------------


.. code-block:: cpp
	
	#include "xf_database/hash_anti_join.hpp"



.. ref-code-block:: cpp
	:class: title-code-block

	template <
	    int KEYW,
	    int S_PW,
	    int T_PW,
	    int ARW
	    >
	void anti_join_unit (
	    int pu_id,
	    ap_uint <32>& depth,
	    hls::stream <ap_uint <KEYW>>& i_t_key_strm,
	    hls::stream <ap_uint <T_PW>>& i_t_pld_strm,
	    hls::stream <ap_uint <ARW>>& i_nm_strm,
	    hls::stream <bool>& i_e0_strm,
	    hls::stream <ap_uint <KEYW>>& i_base_s_key_strm,
	    hls::stream <ap_uint <S_PW>>& i_base_s_pld_strm,
	    hls::stream <ap_uint <KEYW>>& i_overflow_s_key_strm,
	    hls::stream <ap_uint <S_PW>>& i_overflow_s_pld_strm,
	    hls::stream <ap_uint <KEYW+S_PW+T_PW>>& o_j_strm,
	    hls::stream <bool>& o_e_strm
	    )

top function of anti_join unit

