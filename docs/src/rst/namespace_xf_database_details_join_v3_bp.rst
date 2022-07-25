.. index:: pair: namespace; bp
.. _doxid-namespacexf_1_1database_1_1details_1_1join__v3_1_1bp:
.. _cid-xf::database::details::join_v3::bp:

namespace bp
============

.. toctree::
	:hidden:



.. _doxid-namespacexf_1_1database_1_1details_1_1join__v3_1_1bp_1a5884a55690398eafce088e92506ed545:
.. _cid-xf::database::details::join_v3::bp::read_status:
.. _doxid-namespacexf_1_1database_1_1details_1_1join__v3_1_1bp_1ab0959bb083fe0c50b8e62d4d4641bbaf:
.. _cid-xf::database::details::join_v3::bp::write_status:
.. _doxid-namespacexf_1_1database_1_1details_1_1join__v3_1_1bp_1a2e81c6eb7546856ceeaaa02b7e6e3ef0:
.. _cid-xf::database::details::join_v3::bp::dispatch_wrapper:
.. _doxid-namespacexf_1_1database_1_1details_1_1join__v3_1_1bp_1a9e2b97978d83eea4d98d2bd5aa952cef:
.. _cid-xf::database::details::join_v3::bp::build_unit:
.. _doxid-namespacexf_1_1database_1_1details_1_1join__v3_1_1bp_1aab8b3f0c8b25eb366823ef50d3111a9a:
.. _cid-xf::database::details::join_v3::bp::build_stb:
.. _doxid-namespacexf_1_1database_1_1details_1_1join__v3_1_1bp_1a64d2e86fd8842861ec60fee9b3d1d12f:
.. _cid-xf::database::details::join_v3::bp::build_wrapper:
.. _doxid-namespacexf_1_1database_1_1details_1_1join__v3_1_1bp_1a1a1133a0f95e525a92393fb8aa15fe49:
.. _cid-xf::database::details::join_v3::bp::bitmap_addr_gen:
.. _doxid-namespacexf_1_1database_1_1details_1_1join__v3_1_1bp_1ae0ef13b008b8537dd9a1f4cd61b8ddbc:
.. _cid-xf::database::details::join_v3::bp::merge_htb:
.. _doxid-namespacexf_1_1database_1_1details_1_1join__v3_1_1bp_1a659b83a936c0e90400d9b49c17facd08:
.. _cid-xf::database::details::join_v3::bp::read_stb_addr_gen:
.. _doxid-namespacexf_1_1database_1_1details_1_1join__v3_1_1bp_1a75d1c475816c9872000df1e25830a3a3:
.. _cid-xf::database::details::join_v3::bp::merge_unit:
.. _doxid-namespacexf_1_1database_1_1details_1_1join__v3_1_1bp_1a278ff4917dbe5cdeb2ad14b0eb207dec:
.. _cid-xf::database::details::join_v3::bp::merge_stb:
.. _doxid-namespacexf_1_1database_1_1details_1_1join__v3_1_1bp_1a6f3181dd1b1cd52984d206a2abe512d4:
.. _cid-xf::database::details::join_v3::bp::merge_wrapper:
.. _doxid-namespacexf_1_1database_1_1details_1_1join__v3_1_1bp_1a028829b11ba52b7aaa0261fa1ea9f186:
.. _cid-xf::database::details::join_v3::bp::probe_htb:
.. _doxid-namespacexf_1_1database_1_1details_1_1join__v3_1_1bp_1a4b34230a9bc65411959e4059f4cf1585:
.. _cid-xf::database::details::join_v3::bp::probe_stb:
.. _doxid-namespacexf_1_1database_1_1details_1_1join__v3_1_1bp_1a0d69622e568f66cdab76acfad3492f83:
.. _cid-xf::database::details::join_v3::bp::probe_wrapper:
.. _doxid-namespacexf_1_1database_1_1details_1_1join__v3_1_1bp_1a4bff7d7ea637b38666699359ba06b054:
.. _cid-xf::database::details::join_v3::bp::initiate_uram:
.. _doxid-namespacexf_1_1database_1_1details_1_1join__v3_1_1bp_1a6c223eba67472aec3241dee0d2f71654:
.. _cid-xf::database::details::join_v3::bp::build_merge_probe_wrapper:
.. _doxid-namespacexf_1_1database_1_1details_1_1join__v3_1_1bp_1a4839c6136752c5303c9bd321a1ef258d:
.. _cid-xf::database::details::join_v3::bp::collect_unit:
.. ref-code-block:: cpp
	:class: overview-code-block





.. FunctionSection

.. _doxid-namespacexf_1_1database_1_1details_1_1join__v3_1_1bp_1a15b2777b1cabcc71ef6986848d103ab9:
.. _cid-xf::database::details::join_v3::bp::join_unit:

join_unit
---------


.. code-block:: cpp
	
	#include "xf_database/hash_join_v3.hpp"



.. ref-code-block:: cpp
	:class: title-code-block

	template <
	    int KEYW,
	    int S_PW,
	    int T_PW,
	    int ARW
	    >
	void join_unit (
	    bool& build_probe_flag,
	    int pu_id,
	    hls::stream <ap_uint <KEYW>>& i_t_key_strm,
	    hls::stream <ap_uint <T_PW>>& i_t_pld_strm,
	    hls::stream <ap_uint <ARW>>& i_nm_strm,
	    hls::stream <bool>& i_e0_strm,
	    hls::stream <ap_uint <KEYW>>& i_s_key_strm,
	    hls::stream <ap_uint <S_PW>>& i_s_pld_strm,
	    hls::stream <bool>& i_e1_strm,
	    hls::stream <ap_uint <KEYW+S_PW+T_PW>>& o_j_strm,
	    hls::stream <bool>& o_e_strm
	    )

compare key, if match output joined row

