.. index:: pair: namespace; v2_8m
.. _doxid-namespacexf_1_1database_1_1details_1_1v2__8m:
.. _cid-xf::database::details::v2_8m:

namespace v2_8m
===============

.. toctree::
	:hidden:



.. _doxid-namespacexf_1_1database_1_1details_1_1v2__8m_1ab052c570817f859dd0183eff8786cb43:
.. _cid-xf::database::details::v2_8m::hash_wrapper:
.. _doxid-namespacexf_1_1database_1_1details_1_1v2__8m_1a88fa7ecc1d857650f20145f3d6fae6ff:
.. _cid-xf::database::details::v2_8m::dispatch_wrapper:
.. _doxid-namespacexf_1_1database_1_1details_1_1v2__8m_1a648430ed797e758051637bbce0faf500:
.. _cid-xf::database::details::v2_8m::build_hp_tb:
.. _doxid-namespacexf_1_1database_1_1details_1_1v2__8m_1a1bec556ef9caad454a6631841f1f4925:
.. _cid-xf::database::details::v2_8m::probe_hp_tb:
.. _doxid-namespacexf_1_1database_1_1details_1_1v2__8m_1a811cef93ebdc61680547f25f6114fa73:
.. _cid-xf::database::details::v2_8m::build_unit:
.. _doxid-namespacexf_1_1database_1_1details_1_1v2__8m_1a1efe5f776b3a996f822db07cab2fd286:
.. _cid-xf::database::details::v2_8m::probe_unit:
.. _doxid-namespacexf_1_1database_1_1details_1_1v2__8m_1a1cf887dcf7f3a1e92e11c32217498142:
.. _cid-xf::database::details::v2_8m::build_probe_wrapper:
.. ref-code-block:: cpp
	:class: overview-code-block





.. FunctionSection

.. _doxid-namespacexf_1_1database_1_1details_1_1v2__8m_1a5414934b7f75a069904dacf9cbb678f2:
.. _cid-xf::database::details::v2_8m::dispatch:

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
	    int PU
	    >
	void dispatch (
	    hls::stream <ap_uint <KEYW>>& i_key_strm,
	    hls::stream <ap_uint <PW>>& i_pld_strm,
	    hls::stream <ap_uint <HASHWH+HASHWL>>& i_hash_strm,
	    hls::stream <bool>& i_e_strm,
	    hls::stream <ap_uint <KEYW>> o_key_strm [PU],
	    hls::stream <ap_uint <PW>> o_pld_strm [PU],
	    hls::stream <ap_uint <HASHWL>> o_hash_strm [PU],
	    hls::stream <bool> o_e_strm [PU]
	    )

dispatch data to multiple PU based on the hash value Each PU is assigned with a different hash_value

.. _doxid-namespacexf_1_1database_1_1details_1_1v2__8m_1ab84edb8c32be1a2845a5d92d5324d422:
.. _cid-xf::database::details::v2_8m::dispatch_unit:

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
	    int PU
	    >
	void dispatch_unit (
	    hls::stream <ap_uint <KEYW>>& i_key_strm,
	    hls::stream <ap_uint <PW>>& i_pld_strm,
	    hls::stream <bool>& i_e_strm,
	    hls::stream <ap_uint <KEYW>> o_key_strm [PU],
	    hls::stream <ap_uint <PW>> o_pld_strm [PU],
	    hls::stream <ap_uint <HASHWL>> o_hash_strm [PU],
	    hls::stream <bool> o_e_strm [PU]
	    )

dispatch data based on hash value to multiple PU

.. _doxid-namespacexf_1_1database_1_1details_1_1v2__8m_1a62c0293201ab9379c1f93c3dd653c269:
.. _cid-xf::database::details::v2_8m::build_bitmap_lp:

build_bitmap_lp
---------------


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
	void build_bitmap_lp (
	    hls::stream <ap_uint <HASHW>>& i_hash_strm,
	    hls::stream <ap_uint <KEYW>>& i_key_strm,
	    hls::stream <ap_uint <PW>>& i_pld_strm,
	    hls::stream <bool>& i_e_strm,
	    hls::stream <ap_uint <HASHW>> o_hv_strm [8],
	    hls::stream <ap_uint <ARW-9>> o_hp_strm [8],
	    hls::stream <bool> o_e_strm [8],
	    ap_uint <72>* bit_vector0,
	    ap_uint <72>* bit_vector1,
	    ap_uint <72>* bit_vector2,
	    ap_uint <72>* bit_vector3
	    )

scan small table to build bitmap

.. _doxid-namespacexf_1_1database_1_1details_1_1v2__8m_1a3a5004aa1f6af9dcbed728c74954f944:
.. _cid-xf::database::details::v2_8m::build_bitmap:

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
	    int ARW,
	    int HP_DH
	    >
	void build_bitmap (
	    hls::stream <ap_uint <HASHW>>& i_hash_strm,
	    hls::stream <ap_uint <KEYW>>& i_key_strm,
	    hls::stream <ap_uint <PW>>& i_pld_strm,
	    hls::stream <bool>& i_e_strm,
	    ap_uint <72>* bit_vector0,
	    ap_uint <72>* bit_vector1,
	    ap_uint <72>* bit_vector2,
	    ap_uint <72>* bit_vector3,
	    ap_uint <HASHW> hp_addr_tb [ARW-8][HP_DH],
	    ap_uint <1>* tg_tb
	    )

scan small table to build bitmap

.. _doxid-namespacexf_1_1database_1_1details_1_1v2__8m_1a4e2d42faf375fd1d4a7f3d343cc330c7:
.. _cid-xf::database::details::v2_8m::build_unit_lp:

build_unit_lp
-------------


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
	void build_unit_lp (
	    hls::stream <ap_uint <HASHW>>& i_hash_strm,
	    hls::stream <ap_uint <KEYW>>& i_key_strm,
	    hls::stream <ap_uint <PW>>& i_pld_strm,
	    hls::stream <bool>& i_e_strm,
	    hls::stream <ap_uint <KEYW+S_PW>>& o_row_strm,
	    hls::stream <ap_uint <9>>& o_lp_strm,
	    hls::stream <ap_uint <HASHW>>& o_hv_strm,
	    hls::stream <bool>& o_tg_strm,
	    hls::stream <bool>& o_e_strm,
	    ap_uint <72>* bit_vector0,
	    ap_uint <72>* bit_vector1,
	    ap_uint <72>* bit_vector2,
	    ap_uint <72>* bit_vector3
	    )

read data from multiple channel. Build hash table using BRAM/URAM. Cache small table to HBM.

.. _doxid-namespacexf_1_1database_1_1details_1_1v2__8m_1a50f3fce15d162bfd1ea498495124e573:
.. _cid-xf::database::details::v2_8m::probe_head:

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
	    hls::stream <ap_uint <9>>& o_lp_strm,
	    hls::stream <ap_uint <8>>& o_nm0_strm,
	    hls::stream <ap_uint <8>>& o_nm1_strm,
	    hls::stream <ap_uint <KEYW>>& o_key_strm,
	    hls::stream <ap_uint <PW>>& o_pld_strm,
	    hls::stream <ap_uint <HASHW>>& o_hv_strm,
	    hls::stream <bool>& o_tg_strm,
	    hls::stream <bool>& o_e0_strm,
	    hls::stream <bool>& o_e1_strm,
	    ap_uint <72>* bit_vector0,
	    ap_uint <72>* bit_vector1,
	    ap_uint <72>* bit_vector2,
	    ap_uint <72>* bit_vector3
	    )

read data from multiple channel

probe the hash table and output address which hash same hash_value maybe add bloom filter

