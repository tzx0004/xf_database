.. index:: pair: namespace; join_v2
.. _doxid-namespacexf_1_1database_1_1details_1_1join__v2:
.. _cid-xf::database::details::join_v2:

namespace join_v2
=================

.. toctree::
	:hidden:



.. _doxid-namespacexf_1_1database_1_1details_1_1join__v2_1a5797d13358b4e77eedeae0bcd1eb283f:
.. _cid-xf::database::details::join_v2::mul_ch_read:
.. _doxid-namespacexf_1_1database_1_1details_1_1join__v2_1a8b19fe0c42f18639a25839405fcee75d:
.. _cid-xf::database::details::join_v2::bloomfilter_wrapper:
.. _doxid-namespacexf_1_1database_1_1details_1_1join__v2_1ac764a19061514a0a8d83d899399ba5e1:
.. _cid-xf::database::details::join_v2::dispatch_wrapper:
.. _doxid-namespacexf_1_1database_1_1details_1_1join__v2_1aff49518c1694b7293283c684f3ff55c4:
.. _cid-xf::database::details::join_v2::merge1_1:
.. _doxid-namespacexf_1_1database_1_1details_1_1join__v2_1a884ac9e3d97ef37ac44ab0c9d4b24371:
.. _cid-xf::database::details::join_v2::merge2_1:
.. _doxid-namespacexf_1_1database_1_1details_1_1join__v2_1a7a54f30ee852229fb1858bb14f310d69:
.. _cid-xf::database::details::join_v2::merge4_1:
.. _doxid-namespacexf_1_1database_1_1details_1_1join__v2_1af921e244a6f022345c2997c97fbf9f45:
.. _cid-xf::database::details::join_v2::merge8_1:
.. _doxid-namespacexf_1_1database_1_1details_1_1join__v2_1a1c00915a2a02968599c8a8f2af2af9da:
.. _cid-xf::database::details::join_v2::merge1_1_wrapper:
.. _doxid-namespacexf_1_1database_1_1details_1_1join__v2_1aedbf7fbd43b07159700a834a335386b4:
.. _cid-xf::database::details::join_v2::merge2_1_wrapper:
.. _doxid-namespacexf_1_1database_1_1details_1_1join__v2_1a998faf09fcc248de253e810d52345932:
.. _cid-xf::database::details::join_v2::merge4_1_wrapper:
.. _doxid-namespacexf_1_1database_1_1details_1_1join__v2_1aab52fa5e274c6a39fcda5e8fe060614e:
.. _cid-xf::database::details::join_v2::probe_addr_gen:
.. _doxid-namespacexf_1_1database_1_1details_1_1join__v2_1af1610f05e7541982582e7dc7825c3bcc:
.. _cid-xf::database::details::join_v2::probe_unit:
.. _doxid-namespacexf_1_1database_1_1details_1_1join__v2_1a64b060ff3b3054bd2f394bb8d3968ed1:
.. _cid-xf::database::details::join_v2::build_probe_wrapper:
.. _doxid-namespacexf_1_1database_1_1details_1_1join__v2_1a086f89f2b54387657f915fbf750a0d36:
.. _cid-xf::database::details::join_v2::access_srow_w:
.. _doxid-namespacexf_1_1database_1_1details_1_1join__v2_1a7e97f39b65fdd403b703eb6ecf4bf3a9:
.. _cid-xf::database::details::join_v2::access_srow_r:
.. _doxid-namespacexf_1_1database_1_1details_1_1join__v2_1a9bfaee3d97594aa0fd806efa8a590f1b:
.. _cid-xf::database::details::join_v2::access_srow:
.. _doxid-namespacexf_1_1database_1_1details_1_1join__v2_1ae0c802afe338751e4a6aa86e04c7f2a7:
.. _cid-xf::database::details::join_v2::collect_unit:
.. ref-code-block:: cpp
	:class: overview-code-block





.. FunctionSection

.. _doxid-namespacexf_1_1database_1_1details_1_1join__v2_1a36999a61a22dd793766e963c6cee9de2:
.. _cid-xf::database::details::join_v2::mux:

mux
---


.. code-block:: cpp
	
	#include "xf_database/hash_join_v2.hpp"



.. ref-code-block:: cpp
	:class: title-code-block

	template <int IN_NM>
	ap_uint <3> mux (ap_uint <IN_NM> rd)

Multiplier Only support mux8_1, mux4_1, mux2_1.

.. _doxid-namespacexf_1_1database_1_1details_1_1join__v2_1ade8cf83a38c948f85e3bb77bca655df3:
.. _cid-xf::database::details::join_v2::hash_wrapper:

hash_wrapper
------------


.. code-block:: cpp
	
	#include "xf_database/hash_join_v2.hpp"



.. ref-code-block:: cpp
	:class: title-code-block

	template <
	    int HASH_MODE,
	    int KEYW,
	    int HASHW,
	    int EN_BF
	    >
	void hash_wrapper (
	    hls::stream <ap_uint <KEYW>>& i_key_strm,
	    hls::stream <bool>& i_e_strm,
	    hls::stream <ap_uint <64>>& l_hash_strm,
	    hls::stream <ap_uint <HASHW>>& s_hash_strm,
	    hls::stream <ap_uint <KEYW>>& o_key_strm,
	    hls::stream <bool>& o_e0_strm,
	    hls::stream <bool>& o_e1_strm
	    )

calculate hash value based on key

.. _doxid-namespacexf_1_1database_1_1details_1_1join__v2_1ab89429e5ec90f5e40caf33c628ca40d0:
.. _cid-xf::database::details::join_v2::dispatch:

dispatch
--------


.. code-block:: cpp
	
	#include "xf_database/hash_join_v2.hpp"



.. ref-code-block:: cpp
	:class: title-code-block

	template <
	    int KEYW,
	    int PW,
	    int HASHWH,
	    int HASHWL,
	    int PU,
	    int EN_BF
	    >
	void dispatch (
	    hls::stream <ap_uint <KEYW>>& i_key_strm,
	    hls::stream <ap_uint <PW>>& i_pld_strm,
	    hls::stream <ap_uint <HASHWH+HASHWL>>& i_hash_strm,
	    hls::stream <bool>& i_vld_strm,
	    hls::stream <bool>& i_e_strm,
	    hls::stream <ap_uint <KEYW>> o_key_strm [PU],
	    hls::stream <ap_uint <PW>> o_pld_strm [PU],
	    hls::stream <ap_uint <HASHWL>> o_hash_strm [PU],
	    hls::stream <bool> o_e_strm [PU],
	    const int is_build
	    )

dispatch data to multiple PU based one the hash value every PU with different hash_value.

.. _doxid-namespacexf_1_1database_1_1details_1_1join__v2_1afab4928995b8d7a2dab199d3101ca15c:
.. _cid-xf::database::details::join_v2::dispatch_unit:

dispatch_unit
-------------


.. code-block:: cpp
	
	#include "xf_database/hash_join_v2.hpp"



.. ref-code-block:: cpp
	:class: title-code-block

	template <
	    int HASH_MODE,
	    int KEYW,
	    int PW,
	    int HASHWH,
	    int HASHWL,
	    int PU,
	    int BF_W,
	    bool EN_BF
	    >
	void dispatch_unit (
	    hls::stream <ap_uint <KEYW>>& i_key_strm,
	    hls::stream <ap_uint <PW>>& i_pld_strm,
	    hls::stream <bool>& i_e_strm,
	    hls::stream <ap_uint <KEYW>> o_key_strm [PU],
	    hls::stream <ap_uint <PW>> o_pld_strm [PU],
	    hls::stream <ap_uint <HASHWL>> o_hash_strm [PU],
	    hls::stream <bool> o_e_strm [PU],
	    ap_uint <16>* bit_vec_0,
	    ap_uint <16>* bit_vec_1,
	    ap_uint <16>* bit_vec_2,
	    const int is_build
	    )

read data from multiple channel, dispatch data based on hash value to multiple PU.

.. _doxid-namespacexf_1_1database_1_1details_1_1join__v2_1a31d89fe912b114a8f564787de97606b5:
.. _cid-xf::database::details::join_v2::build_bitmap:

build_bitmap
------------


.. code-block:: cpp
	
	#include "xf_database/hash_join_v2.hpp"



.. ref-code-block:: cpp
	:class: title-code-block

	template <
	    int HASHW,
	    int KEYW,
	    int PW,
	    int ARW
	    >
	void build_bitmap (
	    hls::stream <ap_uint <HASHW>>& i_hash_strm,
	    hls::stream <ap_uint <KEYW>>& i_key_strm,
	    hls::stream <ap_uint <PW>>& i_pld_strm,
	    hls::stream <bool>& i_e_strm,
	    ap_uint <72>* bit_vector0,
	    ap_uint <72>* bit_vector1,
	    ap_uint <72>* bit_vector2,
	    ap_uint <72>* bit_vector3
	    )

scan small table to build bitmap

.. _doxid-namespacexf_1_1database_1_1details_1_1join__v2_1a5cd837a63c2dbd338492253e2d0bd1de:
.. _cid-xf::database::details::join_v2::build_unit:

build_unit
----------


.. code-block:: cpp
	
	#include "xf_database/hash_join_v2.hpp"



.. ref-code-block:: cpp
	:class: title-code-block

	template <
	    int HASHW,
	    int KEYW,
	    int PW,
	    int S_PW,
	    int ARW
	    >
	void build_unit (
	    hls::stream <ap_uint <HASHW>>& i_hash_strm,
	    hls::stream <ap_uint <KEYW>>& i_key_strm,
	    hls::stream <ap_uint <PW>>& i_pld_strm,
	    hls::stream <bool>& i_e_strm,
	    hls::stream <ap_uint <KEYW+S_PW>>& o_row_strm,
	    hls::stream <ap_uint <ARW>>& o_addr_strm,
	    hls::stream <bool>& o_e_strm,
	    ap_uint <72>* bit_vector0,
	    ap_uint <72>* bit_vector1,
	    ap_uint <72>* bit_vector2,
	    ap_uint <72>* bit_vector3
	    )

Read data from multiple channel Build hash table using BRAM/URAM, cache small table to HBM.

.. _doxid-namespacexf_1_1database_1_1details_1_1join__v2_1af8de42ca67dddf30ad6b1b3f08e0ab94:
.. _cid-xf::database::details::join_v2::probe_head:

probe_head
----------


.. code-block:: cpp
	
	#include "xf_database/hash_join_v2.hpp"



.. ref-code-block:: cpp
	:class: title-code-block

	template <
	    int HASHW,
	    int KEYW,
	    int PW,
	    int ARW
	    >
	void probe_head (
	    hls::stream <ap_uint <HASHW>>& i_hash_strm,
	    hls::stream <ap_uint <KEYW>>& i_key_strm,
	    hls::stream <ap_uint <PW>>& i_pld_strm,
	    hls::stream <bool>& i_e_strm,
	    hls::stream <ap_uint <ARW>>& o_addr_strm,
	    hls::stream <ap_uint <18>>& o_nm0_strm,
	    hls::stream <ap_uint <18>>& o_nm1_strm,
	    hls::stream <ap_uint <KEYW>>& o_key_strm,
	    hls::stream <ap_uint <PW>>& o_pld_strm,
	    hls::stream <bool>& o_e0_strm,
	    hls::stream <bool>& o_e1_strm,
	    ap_uint <72>* bit_vector0,
	    ap_uint <72>* bit_vector1,
	    ap_uint <72>* bit_vector2,
	    ap_uint <72>* bit_vector3
	    )

probe the hash table and output address which hash same hash_value

.. _doxid-namespacexf_1_1database_1_1details_1_1join__v2_1a1d79515f92132f0abcb7e424258805f0:
.. _cid-xf::database::details::join_v2::join_unit:

join_unit
---------


.. code-block:: cpp
	
	#include "xf_database/hash_join_v2.hpp"



.. ref-code-block:: cpp
	:class: title-code-block

	template <
	    int PW,
	    int S_PW,
	    int B_PW,
	    int KEYW,
	    int WCOLLISION
	    >
	void join_unit (
	    hls::stream <ap_uint <KEYW+S_PW>>& i_srow_strm,
	    hls::stream <ap_uint <KEYW>>& i_bkey_strm,
	    hls::stream <ap_uint <PW>>& i_bpld_strm,
	    hls::stream <ap_uint <WCOLLISION>>& i_nm_strm,
	    hls::stream <bool>& i_e_strm,
	    hls::stream <ap_uint <S_PW+B_PW>>& o_j_strm,
	    hls::stream <bool>& o_e_strm
	    )

compare key, if match output joined row

