.. index:: pair: namespace; hash_multi_join_build_probe
.. _doxid-namespacexf_1_1database_1_1details_1_1hash__multi__join__build__probe:
.. _cid-xf::database::details::hash_multi_join_build_probe:

namespace hash_multi_join_build_probe
=====================================

.. toctree::
	:hidden:



.. _doxid-namespacexf_1_1database_1_1details_1_1hash__multi__join__build__probe_1ad8948e1b2274989eccbfd9b626455e3d:
.. _cid-xf::database::details::hash_multi_join_build_probe::dispatch_wrapper:
.. _doxid-namespacexf_1_1database_1_1details_1_1hash__multi__join__build__probe_1a1ffa8d7da3316ec2f5510b4736556070:
.. _cid-xf::database::details::hash_multi_join_build_probe::merge1_1_wrapper:
.. _doxid-namespacexf_1_1database_1_1details_1_1hash__multi__join__build__probe_1a2f93f0728d13d4e79b6441d0de806408:
.. _cid-xf::database::details::hash_multi_join_build_probe::merge2_1_wrapper:
.. _doxid-namespacexf_1_1database_1_1details_1_1hash__multi__join__build__probe_1a778bcf292e24732fdc8bee9e26d94990:
.. _cid-xf::database::details::hash_multi_join_build_probe::merge4_1_wrapper:
.. _doxid-namespacexf_1_1database_1_1details_1_1hash__multi__join__build__probe_1aa19626dc695f97a42ccd87c1b9b05cb0:
.. _cid-xf::database::details::hash_multi_join_build_probe::initiate_uram:
.. _doxid-namespacexf_1_1database_1_1details_1_1hash__multi__join__build__probe_1a933ba39699e4d5ab6fee43f335f1cfda:
.. _cid-xf::database::details::hash_multi_join_build_probe::dup_join_flag:
.. _doxid-namespacexf_1_1database_1_1details_1_1hash__multi__join__build__probe_1aa3961b0e4a7475d6d32417180c176fe1:
.. _cid-xf::database::details::hash_multi_join_build_probe::collect_unit:
.. ref-code-block:: cpp
	:class: overview-code-block





.. FunctionSection

.. _doxid-namespacexf_1_1database_1_1details_1_1hash__multi__join__build__probe_1a34fa846f11774a97c3612bff72012d68:
.. _cid-xf::database::details::hash_multi_join_build_probe::build_merge_multi_probe_wrapper:

build_merge_multi_probe_wrapper
-------------------------------


.. code-block:: cpp
	
	#include "xf_database/hash_multi_join_build_probe.hpp"



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
	    hls::stream <bool>& i_bp_flag_strm,
	    ap_uint <32>& depth,
	    hls::stream <ap_uint <HASHWL>>& i_hash_strm,
	    hls::stream <ap_uint <KEYW>>& i_key_strm,
	    hls::stream <ap_uint <T_PW>>& i_pld_strm,
	    hls::stream <bool>& i_e_strm,
	    hls::stream <bool>& o_bp_flag_strm,
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

.. _doxid-namespacexf_1_1database_1_1details_1_1hash__multi__join__build__probe_1a076084a084f691c2cbbc484e9d35c2df:
.. _cid-xf::database::details::hash_multi_join_build_probe::join_unit_1:

join_unit_1
-----------


.. code-block:: cpp
	
	#include "xf_database/hash_multi_join_build_probe.hpp"



.. ref-code-block:: cpp
	:class: title-code-block

	template <
	    int KEYW,
	    int S_PW,
	    int T_PW,
	    int ARW
	    >
	void join_unit_1 (
	    bool& build_probe_flag,
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

.. _doxid-namespacexf_1_1database_1_1details_1_1hash__multi__join__build__probe_1a24db67beb0a2fd1fe04874f25ba63d86:
.. _cid-xf::database::details::hash_multi_join_build_probe::join_unit_2:

join_unit_2
-----------


.. code-block:: cpp
	
	#include "xf_database/hash_multi_join_build_probe.hpp"



.. ref-code-block:: cpp
	:class: title-code-block

	template <
	    int KEYW,
	    int S_PW,
	    int T_PW,
	    int ARW
	    >
	void join_unit_2 (
	    bool& build_probe_flag,
	    hls::stream <ap_uint <3>>& join_flag_strm_o,
	    hls::stream <ap_uint <KEYW>>& i2_t_key_strm,
	    hls::stream <ap_uint <T_PW>>& i2_t_pld_strm,
	    hls::stream <ap_uint <ARW>>& i2_nm_strm,
	    hls::stream <bool>& i2_e0_strm,
	    hls::stream <ap_uint <KEYW+S_PW+T_PW>>& o2_j_strm,
	    hls::stream <bool>& o2_e_strm
	    )

hash unhit branch of t_strm

.. _doxid-namespacexf_1_1database_1_1details_1_1hash__multi__join__build__probe_1aba4c8b1d1849f274c9c598a907ffcca5:
.. _cid-xf::database::details::hash_multi_join_build_probe::split_stream:

split_stream
------------


.. code-block:: cpp
	
	#include "xf_database/hash_multi_join_build_probe.hpp"



.. ref-code-block:: cpp
	:class: title-code-block

	template <
	    int KEYW,
	    int S_PW,
	    int T_PW,
	    int ARW
	    >
	void split_stream (
	    bool& build_probe_flag,
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

.. _doxid-namespacexf_1_1database_1_1details_1_1hash__multi__join__build__probe_1a4d7b4f771b4ab1bacd0bb7ecfede9552:
.. _cid-xf::database::details::hash_multi_join_build_probe::combine_stream:

combine_stream
--------------


.. code-block:: cpp
	
	#include "xf_database/hash_multi_join_build_probe.hpp"



.. ref-code-block:: cpp
	:class: title-code-block

	template <
	    int KEYW,
	    int S_PW,
	    int T_PW,
	    int ARW
	    >
	void combine_stream (
	    bool& build_probe_flag,
	    hls::stream <ap_uint <KEYW+S_PW+T_PW>> i_j_strm [2],
	    hls::stream <bool> i_e_strm [2],
	    hls::stream <ap_uint <KEYW+S_PW+T_PW>>& o_j_strm,
	    hls::stream <bool>& o_e_strm
	    )

combine hash hit and unhit branches

.. _doxid-namespacexf_1_1database_1_1details_1_1hash__multi__join__build__probe_1a158d57d29ffd640eff5a8291b01d0a70:
.. _cid-xf::database::details::hash_multi_join_build_probe::multi_join_unit:

multi_join_unit
---------------


.. code-block:: cpp
	
	#include "xf_database/hash_multi_join_build_probe.hpp"



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
	    hls::stream <bool>& i_bp_flag_strm,
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
	    hls::stream <bool>& o_bp_flag_strm,
	    hls::stream <ap_uint <KEYW+S_PW+T_PW>>& o_j_strm,
	    hls::stream <bool>& o_e_strm
	    )

top function of multi join

