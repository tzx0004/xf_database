.. index:: pair: namespace; hash_multi_join
.. _doxid-namespacexf_1_1database_1_1details_1_1hash__multi__join:
.. _cid-xf::database::details::hash_multi_join:

namespace hash_multi_join
=========================

.. toctree::
	:hidden:



.. _doxid-namespacexf_1_1database_1_1details_1_1hash__multi__join_1a667dc91afcaa7f23a48badf40f643a74:
.. _cid-xf::database::details::hash_multi_join::dup_join_flag:
.. ref-code-block:: cpp
	:class: overview-code-block





.. FunctionSection

.. _doxid-namespacexf_1_1database_1_1details_1_1hash__multi__join_1a95a51ca561433ec8086f45258b0eb961:
.. _cid-xf::database::details::hash_multi_join::multi_probe_htb:

multi_probe_htb
---------------


.. code-block:: cpp
	
	#include "xf_database/hash_multi_join.hpp"



.. ref-code-block:: cpp
	:class: title-code-block

	template <
	    int HASHW,
	    int KEYW,
	    int PW,
	    int B_PW,
	    int ARW
	    >
	void multi_probe_htb (
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

Probe the hash table.

.. _doxid-namespacexf_1_1database_1_1details_1_1hash__multi__join_1a93568c7df208315de3422859e3ce5db0:
.. _cid-xf::database::details::hash_multi_join::multi_probe_wrapper:

multi_probe_wrapper
-------------------


.. code-block:: cpp
	
	#include "xf_database/hash_multi_join.hpp"



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
	void multi_probe_wrapper (
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

Top function of hash multi join probe.

.. _doxid-namespacexf_1_1database_1_1details_1_1hash__multi__join_1a5477dd914a61b9ee5d3ca173d29936c2:
.. _cid-xf::database::details::hash_multi_join::build_merge_multi_probe_wrapper:

build_merge_multi_probe_wrapper
-------------------------------


.. code-block:: cpp
	
	#include "xf_database/hash_multi_join.hpp"



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
	void build_merge_multi_probe_wrapper (
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

Top function of hash multi join PU.

.. _doxid-namespacexf_1_1database_1_1details_1_1hash__multi__join_1af95e08e3a4609fad3ec35b9c30e90259:
.. _cid-xf::database::details::hash_multi_join::join_unit_1:

join_unit_1
-----------


.. code-block:: cpp
	
	#include "xf_database/hash_multi_join.hpp"



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
	    hls::stream <ap_uint <3>>& join_flag_strm_o,
	    hls::stream <ap_uint <KEYW>>& i1_t_key_strm,
	    hls::stream <ap_uint <T_PW>>& i1_t_pld_strm,
	    hls::stream <ap_uint <ARW>>& i1_nm_strm,
	    hls::stream <bool>& i1_e0_strm,
	    hls::stream <ap_uint <KEYW>>& i_base_s_key_strm,
	    hls::stream <ap_uint <S_PW>>& i_base_s_pld_strm,
	    hls::stream <ap_uint <KEYW>>& i_overflow_s_key_strm,
	    hls::stream <ap_uint <S_PW>>& i_overflow_s_pld_strm,
	    hls::stream <ap_uint <KEYW+S_PW+T_PW>>& o_j_strm,
	    hls::stream <bool>& o_e_strm
	    )

hash hit branch of t_strm

.. _doxid-namespacexf_1_1database_1_1details_1_1hash__multi__join_1a25843d2cfda699fe779e499b7aaae44f:
.. _cid-xf::database::details::hash_multi_join::join_unit_2:

join_unit_2
-----------


.. code-block:: cpp
	
	#include "xf_database/hash_multi_join.hpp"



.. ref-code-block:: cpp
	:class: title-code-block

	template <
	    int KEYW,
	    int S_PW,
	    int T_PW,
	    int ARW
	    >
	void join_unit_2 (
	    hls::stream <ap_uint <3>>& join_flag_strm_o,
	    hls::stream <ap_uint <KEYW>>& i2_t_key_strm,
	    hls::stream <ap_uint <T_PW>>& i2_t_pld_strm,
	    hls::stream <ap_uint <ARW>>& i2_nm_strm,
	    hls::stream <bool>& i2_e0_strm,
	    hls::stream <ap_uint <KEYW+S_PW+T_PW>>& o2_j_strm,
	    hls::stream <bool>& o2_e_strm
	    )

hash unhit branch of t_strm

.. _doxid-namespacexf_1_1database_1_1details_1_1hash__multi__join_1ad1e122bc2b99ec6595f0d28f3e34c60e:
.. _cid-xf::database::details::hash_multi_join::split_stream:

split_stream
------------


.. code-block:: cpp
	
	#include "xf_database/hash_multi_join.hpp"



.. ref-code-block:: cpp
	:class: title-code-block

	template <
	    int KEYW,
	    int S_PW,
	    int T_PW,
	    int ARW
	    >
	void split_stream (
	    hls::stream <ap_uint <3>>& join_flag_strm_o,
	    hls::stream <ap_uint <KEYW>>& i_t_key_strm,
	    hls::stream <ap_uint <T_PW>>& i_t_pld_strm,
	    hls::stream <ap_uint <ARW>>& i_nm_strm,
	    hls::stream <bool>& i_e0_strm,
	    hls::stream <ap_uint <3>>& join1_flag_strm,
	    hls::stream <ap_uint <KEYW>>& i1_t_key_strm,
	    hls::stream <ap_uint <T_PW>>& i1_t_pld_strm,
	    hls::stream <ap_uint <ARW>>& i1_nm_strm,
	    hls::stream <bool>& i1_e0_strm,
	    hls::stream <ap_uint <3>>& join2_flag_strm,
	    hls::stream <ap_uint <KEYW>>& i2_t_key_strm,
	    hls::stream <ap_uint <T_PW>>& i2_t_pld_strm,
	    hls::stream <ap_uint <ARW>>& i2_nm_strm,
	    hls::stream <bool>& i2_e0_strm
	    )

split t_strm to hash hit branch and hash unhit branch

.. _doxid-namespacexf_1_1database_1_1details_1_1hash__multi__join_1a5d7a06ab47847c6e28eed063b9794f16:
.. _cid-xf::database::details::hash_multi_join::combine_stream:

combine_stream
--------------


.. code-block:: cpp
	
	#include "xf_database/hash_multi_join.hpp"



.. ref-code-block:: cpp
	:class: title-code-block

	template <
	    int KEYW,
	    int S_PW,
	    int T_PW,
	    int ARW
	    >
	void combine_stream (
	    hls::stream <ap_uint <KEYW+S_PW+T_PW>> i_j_strm [2],
	    hls::stream <bool> i_e_strm [2],
	    hls::stream <ap_uint <KEYW+S_PW+T_PW>>& o_j_strm,
	    hls::stream <bool>& o_e_strm
	    )

combine hash hit and unhit branches

.. _doxid-namespacexf_1_1database_1_1details_1_1hash__multi__join_1a5f4370e5f00de82051b80a59cd8d23fc:
.. _cid-xf::database::details::hash_multi_join::multi_join_unit:

multi_join_unit
---------------


.. code-block:: cpp
	
	#include "xf_database/hash_multi_join.hpp"



.. ref-code-block:: cpp
	:class: title-code-block

	template <
	    int KEYW,
	    int S_PW,
	    int T_PW,
	    int ARW
	    >
	void multi_join_unit (
	    int pu_id,
	    ap_uint <32>& depth,
	    hls::stream <ap_uint <3>>& join_flag_strm,
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

top function of multi join

