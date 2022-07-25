.. index:: pair: namespace; hash_group_aggregate
.. _doxid-namespacexf_1_1database_1_1details_1_1hash__group__aggregate:
.. _cid-xf::database::details::hash_group_aggregate:

namespace hash_group_aggregate
==============================

.. toctree::
	:hidden:

	struct_xf_database_details_hash_group_aggregate_COLUMN_DATA.rst



.. _doxid-namespacexf_1_1database_1_1details_1_1hash__group__aggregate_1aa8c9bde51b0da99e5e65400d9c66b7bc:
.. _cid-xf::database::details::hash_group_aggregate::read_config:
.. _doxid-namespacexf_1_1database_1_1details_1_1hash__group__aggregate_1a3b67ef11f9e1eec43f097be5c0ef8297:
.. _cid-xf::database::details::hash_group_aggregate::write_info:
.. _doxid-namespacexf_1_1database_1_1details_1_1hash__group__aggregate_1aa5a7ec491fb5516ddde529dae554df76:
.. _cid-xf::database::details::hash_group_aggregate::combine_col:
.. _doxid-namespacexf_1_1database_1_1details_1_1hash__group__aggregate_1ad74d48ce71ffb30b6d7a18a90cb1e8b5:
.. _cid-xf::database::details::hash_group_aggregate::split_col:
.. _doxid-namespacexf_1_1database_1_1details_1_1hash__group__aggregate_1ae9e36f97d43b95b07342415e5a6f76d6:
.. _cid-xf::database::details::hash_group_aggregate::input_mux:
.. _doxid-namespacexf_1_1database_1_1details_1_1hash__group__aggregate_1a2ed53214f6766ae6fa7ffd2921c0af0e:
.. _cid-xf::database::details::hash_group_aggregate::dispatch:
.. _doxid-namespacexf_1_1database_1_1details_1_1hash__group__aggregate_1a23ab9e91e700432c0074d1f777caed72:
.. _cid-xf::database::details::hash_group_aggregate::dispatch_wrapper:
.. _doxid-namespacexf_1_1database_1_1details_1_1hash__group__aggregate_1a3f5a0da8c001328e1637d07aa66877aa:
.. _cid-xf::database::details::hash_group_aggregate::aggr_min_max:
.. _doxid-namespacexf_1_1database_1_1details_1_1hash__group__aggregate_1a156806236922b7653d553124adaaade2:
.. _cid-xf::database::details::hash_group_aggregate::aggr_cnt_nz:
.. _doxid-namespacexf_1_1database_1_1details_1_1hash__group__aggregate_1ab69f3da06fc51e95d59e1a597eb1f735:
.. _cid-xf::database::details::hash_group_aggregate::aggr_sum:
.. _doxid-namespacexf_1_1database_1_1details_1_1hash__group__aggregate_1a5b5bcb03a1e331b10a96eff6a4d2082e:
.. _cid-xf::database::details::hash_group_aggregate::aggr_mean:
.. _doxid-namespacexf_1_1database_1_1details_1_1hash__group__aggregate_1a6fa5847fc084bc1076925274ad764ed8:
.. _cid-xf::database::details::hash_group_aggregate::update_key_elem:
.. _doxid-namespacexf_1_1database_1_1details_1_1hash__group__aggregate_1ab13b6d8ef277966dca21bad0d14c4ab2:
.. _cid-xf::database::details::hash_group_aggregate::update_pld_elem:
.. _doxid-namespacexf_1_1database_1_1details_1_1hash__group__aggregate_1a86c4d93fe0bc51614ed57a446c309811:
.. _cid-xf::database::details::hash_group_aggregate::read_key_uram:
.. _doxid-namespacexf_1_1database_1_1details_1_1hash__group__aggregate_1a10c2dbfe4c47802c81da8c079cac108f:
.. _cid-xf::database::details::hash_group_aggregate::read_pld_uram:
.. _doxid-namespacexf_1_1database_1_1details_1_1hash__group__aggregate_1a8882bbdb0398d84cd8ea71c638da9833:
.. _cid-xf::database::details::hash_group_aggregate::collect_unit:
.. _doxid-namespacexf_1_1database_1_1details_1_1hash__group__aggregate_1ad5dc4fc0815b69b649b2b6a91bdd92e0:
.. _cid-xf::database::details::hash_group_aggregate::calculate_aggr_mean:
.. ref-code-block:: cpp
	:class: overview-code-block

	// structs

	template <
	    int _Width,
	    int _ColumnNM
	    >
	struct :ref:`COLUMN_DATA<doxid-structxf_1_1database_1_1details_1_1hash__group__aggregate_1_1_c_o_l_u_m_n___d_a_t_a>` 





.. FunctionSection

.. _doxid-namespacexf_1_1database_1_1details_1_1hash__group__aggregate_1ae228e785555062ba735bdd7673f7c474:
.. _cid-xf::database::details::hash_group_aggregate::stream_to_buf:

stream_to_buf
-------------


.. code-block:: cpp
	
	#include "xf_database/hash_group_aggregate.hpp"



.. ref-code-block:: cpp
	:class: title-code-block

	template <
	    int _WKey,
	    int _KeyNM,
	    int _WPay,
	    int _PayNM,
	    int _WBuffer,
	    int _BurstLenW
	    >
	void stream_to_buf (
	    hls::stream <:ref:`COLUMN_DATA<doxid-structxf_1_1database_1_1details_1_1hash__group__aggregate_1_1_c_o_l_u_m_n___d_a_t_a>` <_WKey, _KeyNM>>& strm_undo_key,
	    hls::stream <:ref:`COLUMN_DATA<doxid-structxf_1_1database_1_1details_1_1hash__group__aggregate_1_1_c_o_l_u_m_n___d_a_t_a>` <_WPay, _PayNM>>& strm_undo_pld,
	    hls::stream <bool>& strm_undo_e,
	    ap_uint <_WBuffer>* pong_buf
	    )

write data from streams to DDR/HBM

.. _doxid-namespacexf_1_1database_1_1details_1_1hash__group__aggregate_1aef7e4dd40bd410ca8bd7008e3813d71b:
.. _cid-xf::database::details::hash_group_aggregate::buf_to_stream:

buf_to_stream
-------------


.. code-block:: cpp
	
	#include "xf_database/hash_group_aggregate.hpp"



.. ref-code-block:: cpp
	:class: title-code-block

	template <
	    int _WKey,
	    int _KeyNM,
	    int _WPay,
	    int _PayNM,
	    int _WBuffer,
	    int _BurstLenR
	    >
	void buf_to_stream (
	    ap_uint <_WBuffer>* in_buf,
	    int unhandle_cnt,
	    hls::stream <:ref:`COLUMN_DATA<doxid-structxf_1_1database_1_1details_1_1hash__group__aggregate_1_1_c_o_l_u_m_n___d_a_t_a>` <_WKey, _KeyNM>>& kout_strm,
	    hls::stream <:ref:`COLUMN_DATA<doxid-structxf_1_1database_1_1details_1_1hash__group__aggregate_1_1_c_o_l_u_m_n___d_a_t_a>` <_WPay, _PayNM>>& pout_strm,
	    hls::stream <bool>& eout_strm
	    )

read data from overflow-buffer to streams

.. _doxid-namespacexf_1_1database_1_1details_1_1hash__group__aggregate_1a4365d21154b727107abb3273d3ab0481:
.. _cid-xf::database::details::hash_group_aggregate::hash_wrapper:

hash_wrapper
------------


.. code-block:: cpp
	
	#include "xf_database/hash_group_aggregate.hpp"



.. ref-code-block:: cpp
	:class: title-code-block

	template <
	    int HASH_MODE,
	    int KEYW,
	    int KeyNM,
	    int HASHW
	    >
	void hash_wrapper (
	    hls::stream <:ref:`COLUMN_DATA<doxid-structxf_1_1database_1_1details_1_1hash__group__aggregate_1_1_c_o_l_u_m_n___d_a_t_a>` <KEYW, KeyNM>>& i_key_strm,
	    hls::stream <bool>& i_e_strm,
	    ap_uint <32> round,
	    hls::stream <ap_uint <HASHW>>& o_hash_strm,
	    hls::stream <:ref:`COLUMN_DATA<doxid-structxf_1_1database_1_1details_1_1hash__group__aggregate_1_1_c_o_l_u_m_n___d_a_t_a>` <KEYW, KeyNM>>& o_key_strm,
	    hls::stream <bool>& o_e_strm
	    )

Calculate hash value based on key.

.. _doxid-namespacexf_1_1database_1_1details_1_1hash__group__aggregate_1a51dc2effd5a6b7f00d16fe22acb2e928:
.. _cid-xf::database::details::hash_group_aggregate::merge1_1:

merge1_1
--------


.. code-block:: cpp
	
	#include "xf_database/hash_group_aggregate.hpp"



.. ref-code-block:: cpp
	:class: title-code-block

	template <
	    int KEYW,
	    int KeyNM,
	    int PW,
	    int PayNM,
	    int HASHW
	    >
	void merge1_1 (
	    hls::stream <:ref:`COLUMN_DATA<doxid-structxf_1_1database_1_1details_1_1hash__group__aggregate_1_1_c_o_l_u_m_n___d_a_t_a>` <KEYW, KeyNM>>& i_key_strm,
	    hls::stream <:ref:`COLUMN_DATA<doxid-structxf_1_1database_1_1details_1_1hash__group__aggregate_1_1_c_o_l_u_m_n___d_a_t_a>` <PW, PayNM>>& i_pld_strm,
	    hls::stream <ap_uint <HASHW>>& i_hash_strm,
	    hls::stream <bool>& i_e_strm,
	    hls::stream <:ref:`COLUMN_DATA<doxid-structxf_1_1database_1_1details_1_1hash__group__aggregate_1_1_c_o_l_u_m_n___d_a_t_a>` <KEYW, KeyNM>>& o_key_strm,
	    hls::stream <:ref:`COLUMN_DATA<doxid-structxf_1_1database_1_1details_1_1hash__group__aggregate_1_1_c_o_l_u_m_n___d_a_t_a>` <PW, PayNM>>& o_pld_strm,
	    hls::stream <ap_uint <HASHW>>& o_hash_strm,
	    hls::stream <bool>& o_e_strm
	    )

Merge stream of multiple channels into one PU, merge 1 to 1.

.. _doxid-namespacexf_1_1database_1_1details_1_1hash__group__aggregate_1a5347a2316275ac30a49720f09a0ca26d:
.. _cid-xf::database::details::hash_group_aggregate::merge2_1:

merge2_1
--------


.. code-block:: cpp
	
	#include "xf_database/hash_group_aggregate.hpp"



.. ref-code-block:: cpp
	:class: title-code-block

	template <
	    int KEYW,
	    int KeyNM,
	    int PW,
	    int PayNM,
	    int HASHW
	    >
	void merge2_1 (
	    hls::stream <:ref:`COLUMN_DATA<doxid-structxf_1_1database_1_1details_1_1hash__group__aggregate_1_1_c_o_l_u_m_n___d_a_t_a>` <KEYW, KeyNM>>& i0_key_strm,
	    hls::stream <:ref:`COLUMN_DATA<doxid-structxf_1_1database_1_1details_1_1hash__group__aggregate_1_1_c_o_l_u_m_n___d_a_t_a>` <KEYW, KeyNM>>& i1_key_strm,
	    hls::stream <:ref:`COLUMN_DATA<doxid-structxf_1_1database_1_1details_1_1hash__group__aggregate_1_1_c_o_l_u_m_n___d_a_t_a>` <PW, PayNM>>& i0_pld_strm,
	    hls::stream <:ref:`COLUMN_DATA<doxid-structxf_1_1database_1_1details_1_1hash__group__aggregate_1_1_c_o_l_u_m_n___d_a_t_a>` <PW, PayNM>>& i1_pld_strm,
	    hls::stream <ap_uint <HASHW>>& i0_hash_strm,
	    hls::stream <ap_uint <HASHW>>& i1_hash_strm,
	    hls::stream <bool>& i0_e_strm,
	    hls::stream <bool>& i1_e_strm,
	    hls::stream <:ref:`COLUMN_DATA<doxid-structxf_1_1database_1_1details_1_1hash__group__aggregate_1_1_c_o_l_u_m_n___d_a_t_a>` <KEYW, KeyNM>>& o_key_strm,
	    hls::stream <:ref:`COLUMN_DATA<doxid-structxf_1_1database_1_1details_1_1hash__group__aggregate_1_1_c_o_l_u_m_n___d_a_t_a>` <PW, PayNM>>& o_pld_strm,
	    hls::stream <ap_uint <HASHW>>& o_hash_strm,
	    hls::stream <bool>& o_e_strm
	    )

Merge stream of multiple channels into one PU, merge 2 to 1.

.. _doxid-namespacexf_1_1database_1_1details_1_1hash__group__aggregate_1a5dd4c65ed40a80ba5fdd92fa880ddc84:
.. _cid-xf::database::details::hash_group_aggregate::merge4_1:

merge4_1
--------


.. code-block:: cpp
	
	#include "xf_database/hash_group_aggregate.hpp"



.. ref-code-block:: cpp
	:class: title-code-block

	template <
	    int KEYW,
	    int KeyNM,
	    int PW,
	    int PayNM,
	    int HASHW
	    >
	void merge4_1 (
	    hls::stream <:ref:`COLUMN_DATA<doxid-structxf_1_1database_1_1details_1_1hash__group__aggregate_1_1_c_o_l_u_m_n___d_a_t_a>` <KEYW, KeyNM>>& i0_key_strm,
	    hls::stream <:ref:`COLUMN_DATA<doxid-structxf_1_1database_1_1details_1_1hash__group__aggregate_1_1_c_o_l_u_m_n___d_a_t_a>` <KEYW, KeyNM>>& i1_key_strm,
	    hls::stream <:ref:`COLUMN_DATA<doxid-structxf_1_1database_1_1details_1_1hash__group__aggregate_1_1_c_o_l_u_m_n___d_a_t_a>` <KEYW, KeyNM>>& i2_key_strm,
	    hls::stream <:ref:`COLUMN_DATA<doxid-structxf_1_1database_1_1details_1_1hash__group__aggregate_1_1_c_o_l_u_m_n___d_a_t_a>` <KEYW, KeyNM>>& i3_key_strm,
	    hls::stream <:ref:`COLUMN_DATA<doxid-structxf_1_1database_1_1details_1_1hash__group__aggregate_1_1_c_o_l_u_m_n___d_a_t_a>` <PW, PayNM>>& i0_pld_strm,
	    hls::stream <:ref:`COLUMN_DATA<doxid-structxf_1_1database_1_1details_1_1hash__group__aggregate_1_1_c_o_l_u_m_n___d_a_t_a>` <PW, PayNM>>& i1_pld_strm,
	    hls::stream <:ref:`COLUMN_DATA<doxid-structxf_1_1database_1_1details_1_1hash__group__aggregate_1_1_c_o_l_u_m_n___d_a_t_a>` <PW, PayNM>>& i2_pld_strm,
	    hls::stream <:ref:`COLUMN_DATA<doxid-structxf_1_1database_1_1details_1_1hash__group__aggregate_1_1_c_o_l_u_m_n___d_a_t_a>` <PW, PayNM>>& i3_pld_strm,
	    hls::stream <ap_uint <HASHW>>& i0_hash_strm,
	    hls::stream <ap_uint <HASHW>>& i1_hash_strm,
	    hls::stream <ap_uint <HASHW>>& i2_hash_strm,
	    hls::stream <ap_uint <HASHW>>& i3_hash_strm,
	    hls::stream <bool>& i0_e_strm,
	    hls::stream <bool>& i1_e_strm,
	    hls::stream <bool>& i2_e_strm,
	    hls::stream <bool>& i3_e_strm,
	    hls::stream <:ref:`COLUMN_DATA<doxid-structxf_1_1database_1_1details_1_1hash__group__aggregate_1_1_c_o_l_u_m_n___d_a_t_a>` <KEYW, KeyNM>>& o_key_strm,
	    hls::stream <:ref:`COLUMN_DATA<doxid-structxf_1_1database_1_1details_1_1hash__group__aggregate_1_1_c_o_l_u_m_n___d_a_t_a>` <PW, PayNM>>& o_pld_strm,
	    hls::stream <ap_uint <HASHW>>& o_hash_strm,
	    hls::stream <bool>& o_e_strm
	    )

Merge stream of multiple channels into one PU, merge 4 to 1.

.. _doxid-namespacexf_1_1database_1_1details_1_1hash__group__aggregate_1af64ded970a4e70ef84dbf0a7d50e9d40:
.. _cid-xf::database::details::hash_group_aggregate::initial_uram:

initial_uram
------------


.. code-block:: cpp
	
	#include "xf_database/hash_group_aggregate.hpp"



.. ref-code-block:: cpp
	:class: title-code-block

	template <
	    int _WKey,
	    int _KeyNM,
	    int _WPay,
	    int _PayNM,
	    int _WHash,
	    int _Wcnt
	    >
	void initial_uram (
	    ap_uint <4> op,
	    ap_uint <_WKey*_KeyNM+_Wcnt>* key_uram,
	    ap_uint <_WPay*_PayNM>* pld_uram0,
	    ap_uint <_WPay*_PayNM>* pld_uram1,
	    ap_uint <_WPay*_PayNM>* pld_uram2
	    )

initiaalize uram

.. _doxid-namespacexf_1_1database_1_1details_1_1hash__group__aggregate_1a950ec556acd30e77134781b1bd765e71:
.. _cid-xf::database::details::hash_group_aggregate::update_key_uram:

update_key_uram
---------------


.. code-block:: cpp
	
	#include "xf_database/hash_group_aggregate.hpp"



.. ref-code-block:: cpp
	:class: title-code-block

	template <
	    int _WKey,
	    int _KeyNM,
	    int _WPay,
	    int _PayNM,
	    int _WHash,
	    int _Wcnt
	    >
	void update_key_uram (
	    hls::stream <ap_uint <_WHash>>& i_hash_strm,
	    hls::stream <:ref:`COLUMN_DATA<doxid-structxf_1_1database_1_1details_1_1hash__group__aggregate_1_1_c_o_l_u_m_n___d_a_t_a>` <_WKey, _KeyNM>>& i_key_strm,
	    hls::stream <:ref:`COLUMN_DATA<doxid-structxf_1_1database_1_1details_1_1hash__group__aggregate_1_1_c_o_l_u_m_n___d_a_t_a>` <_WPay, _PayNM>>& i_pld_strm,
	    hls::stream <bool>& i_e_strm,
	    ap_uint <_Wcnt> key_column,
	    ap_uint <32>& unhandle_cnt,
	    ap_uint <_WKey*_KeyNM+_Wcnt>* key_uram,
	    hls::stream <:ref:`COLUMN_DATA<doxid-structxf_1_1database_1_1details_1_1hash__group__aggregate_1_1_c_o_l_u_m_n___d_a_t_a>` <_WKey, _KeyNM>>& undokey_strm,
	    hls::stream <:ref:`COLUMN_DATA<doxid-structxf_1_1database_1_1details_1_1hash__group__aggregate_1_1_c_o_l_u_m_n___d_a_t_a>` <_WPay, _PayNM>>& undopld_strm,
	    hls::stream <bool>& o_e0_strm,
	    hls::stream <ap_uint <_WHash>>& o_hash_strm,
	    hls::stream <:ref:`COLUMN_DATA<doxid-structxf_1_1database_1_1details_1_1hash__group__aggregate_1_1_c_o_l_u_m_n___d_a_t_a>` <_WPay, _PayNM>>& o_pld_strm,
	    hls::stream <bool>& o_e1_strm
	    )

update key uram for insert new key

.. _doxid-namespacexf_1_1database_1_1details_1_1hash__group__aggregate_1a64638634d652f6ddc986d93ea6eb4b93:
.. _cid-xf::database::details::hash_group_aggregate::update_pld_uram:

update_pld_uram
---------------


.. code-block:: cpp
	
	#include "xf_database/hash_group_aggregate.hpp"



.. ref-code-block:: cpp
	:class: title-code-block

	template <
	    int _WPay,
	    int _PayNM,
	    int _WHash,
	    int _Wcnt
	    >
	void update_pld_uram (
	    hls::stream <ap_uint <_WHash>>& i_hash_strm,
	    hls::stream <:ref:`COLUMN_DATA<doxid-structxf_1_1database_1_1details_1_1hash__group__aggregate_1_1_c_o_l_u_m_n___d_a_t_a>` <_WPay, _PayNM>>& i_pld_strm,
	    hls::stream <bool>& i_e_strm,
	    ap_uint <32> op,
	    ap_uint <_Wcnt> pld_column,
	    ap_uint <_WPay*_PayNM>* pld_uram0,
	    ap_uint <_WPay*_PayNM>* pld_uram1,
	    ap_uint <_WPay*_PayNM>* pld_uram2
	    )

update pld uram to calculate aggregate

.. _doxid-namespacexf_1_1database_1_1details_1_1hash__group__aggregate_1a2e7512f301db56159f8e2442db50f27b:
.. _cid-xf::database::details::hash_group_aggregate::update_uram:

update_uram
-----------


.. code-block:: cpp
	
	#include "xf_database/hash_group_aggregate.hpp"



.. ref-code-block:: cpp
	:class: title-code-block

	template <
	    int _HashMode,
	    int _WHash,
	    int _WKey,
	    int _KeyNM,
	    int _WPay,
	    int _PayNM,
	    int _Wcnt,
	    int _WBuffer,
	    int _BurstLenW
	    >
	void update_uram (
	    hls::stream <ap_uint <_WHash>>& i_hash_strm,
	    hls::stream <:ref:`COLUMN_DATA<doxid-structxf_1_1database_1_1details_1_1hash__group__aggregate_1_1_c_o_l_u_m_n___d_a_t_a>` <_WKey, _KeyNM>>& i_key_strm,
	    hls::stream <:ref:`COLUMN_DATA<doxid-structxf_1_1database_1_1details_1_1hash__group__aggregate_1_1_c_o_l_u_m_n___d_a_t_a>` <_WPay, _PayNM>>& i_pld_strm,
	    hls::stream <bool>& i_e_strm,
	    ap_uint <32> op,
	    ap_uint <32> key_column,
	    ap_uint <32> pld_column,
	    ap_uint <32> round,
	    ap_uint <32>& unhandle_cnt,
	    ap_uint <_WKey*_KeyNM+_Wcnt>* key_uram,
	    ap_uint <_WPay*_PayNM>* pld_uram0,
	    ap_uint <_WPay*_PayNM>* pld_uram1,
	    ap_uint <_WPay*_PayNM>* pld_uram2,
	    ap_uint <_WBuffer>* out_buf
	    )

compute aggregate result and update URAM

.. _doxid-namespacexf_1_1database_1_1details_1_1hash__group__aggregate_1a59ca458348f1a53eb29b359b8070db99:
.. _cid-xf::database::details::hash_group_aggregate::uram_to_stream:

uram_to_stream
--------------


.. code-block:: cpp
	
	#include "xf_database/hash_group_aggregate.hpp"



.. ref-code-block:: cpp
	:class: title-code-block

	template <
	    int _WKey,
	    int _KeyNM,
	    int _WPay,
	    int _PayNM,
	    int _WHash,
	    int _Wcnt
	    >
	void uram_to_stream (
	    ap_uint <_WKey*_KeyNM+_Wcnt>* key_uram,
	    ap_uint <_WPay*_PayNM>* pld_uram0,
	    ap_uint <_WPay*_PayNM>* pld_uram1,
	    ap_uint <_WPay*_PayNM>* pld_uram2,
	    ap_uint <32> key_column,
	    ap_uint <32> pld_column,
	    hls::stream <:ref:`COLUMN_DATA<doxid-structxf_1_1database_1_1details_1_1hash__group__aggregate_1_1_c_o_l_u_m_n___d_a_t_a>` <_WKey, _KeyNM>>& aggr_key_out,
	    hls::stream <:ref:`COLUMN_DATA<doxid-structxf_1_1database_1_1details_1_1hash__group__aggregate_1_1_c_o_l_u_m_n___d_a_t_a>` <_WPay, _PayNM>> aggr_pld_out [3],
	    hls::stream <bool>& o_e_strm
	    )

output aggregate result stored in URAM

.. _doxid-namespacexf_1_1database_1_1details_1_1hash__group__aggregate_1ac873b5c7606f126464835e83e03cd043:
.. _cid-xf::database::details::hash_group_aggregate::hash_aggr_pu_wrapper:

hash_aggr_pu_wrapper
--------------------


.. code-block:: cpp
	
	#include "xf_database/hash_group_aggregate.hpp"



.. ref-code-block:: cpp
	:class: title-code-block

	template <
	    int _HashMode,
	    int _WHash,
	    int _WKey,
	    int _KeyNM,
	    int _WPay,
	    int _PayNM,
	    int _Wcnt,
	    int _WBuffer,
	    int _BurstLenW
	    >
	void hash_aggr_pu_wrapper (
	    hls::stream <ap_uint <_WHash>>& i_hash_strm,
	    hls::stream <:ref:`COLUMN_DATA<doxid-structxf_1_1database_1_1details_1_1hash__group__aggregate_1_1_c_o_l_u_m_n___d_a_t_a>` <_WKey, _KeyNM>>& i_key_strm,
	    hls::stream <:ref:`COLUMN_DATA<doxid-structxf_1_1database_1_1details_1_1hash__group__aggregate_1_1_c_o_l_u_m_n___d_a_t_a>` <_WPay, _PayNM>>& i_pld_strm,
	    hls::stream <bool>& i_e_strm,
	    ap_uint <_WBuffer>* out_buf,
	    ap_uint <32> op,
	    ap_uint <32> key_column,
	    ap_uint <32> pld_column,
	    ap_uint <32> round,
	    ap_uint <32>& unhandle_cnt,
	    hls::stream <:ref:`COLUMN_DATA<doxid-structxf_1_1database_1_1details_1_1hash__group__aggregate_1_1_c_o_l_u_m_n___d_a_t_a>` <_WKey, _KeyNM>>& aggr_key_out,
	    hls::stream <:ref:`COLUMN_DATA<doxid-structxf_1_1database_1_1details_1_1hash__group__aggregate_1_1_c_o_l_u_m_n___d_a_t_a>` <_WPay, _PayNM>> aggr_pld_out [3],
	    hls::stream <bool>& o_e_strm
	    )

hash aggregate processing unit

.. _doxid-namespacexf_1_1database_1_1details_1_1hash__group__aggregate_1a8903b4cc55581aabc3db59483655c5b5:
.. _cid-xf::database::details::hash_group_aggregate::hash_aggr_top:

hash_aggr_top
-------------


.. code-block:: cpp
	
	#include "xf_database/hash_group_aggregate.hpp"



.. ref-code-block:: cpp
	:class: title-code-block

	template <
	    int _WKey,
	    int _KeyNM,
	    int _WPay,
	    int _PayNM,
	    int _HashMode,
	    int _WHashHigh,
	    int _WHashLow,
	    int _CHNM,
	    int _Wcnt,
	    int _WBuffer,
	    int _BurstLenW,
	    int _BurstLenR
	    >
	void hash_aggr_top (
	    hls::stream <ap_uint <_WKey>> strm_key_in [_CHNM][_KeyNM],
	    hls::stream <ap_uint <_WPay>> strm_pld_in [_CHNM][_PayNM],
	    hls::stream <bool> strm_e_in [_CHNM],
	    ap_uint <32> op_type [1<< _WHashHigh+1],
	    ap_uint <32> key_column,
	    ap_uint <32> pld_column,
	    ap_uint <32> round,
	    ap_uint <32> unhandle_cnt_r [1<< _WHashHigh],
	    ap_uint <32> unhandle_cnt_w [1<< _WHashHigh],
	    ap_uint <32>& aggregate_num,
	    ap_uint <_WBuffer>* in_buf0,
	    ap_uint <_WBuffer>* in_buf1,
	    ap_uint <_WBuffer>* in_buf2,
	    ap_uint <_WBuffer>* in_buf3,
	    ap_uint <_WBuffer>* out_buf0,
	    ap_uint <_WBuffer>* out_buf1,
	    ap_uint <_WBuffer>* out_buf2,
	    ap_uint <_WBuffer>* out_buf3,
	    hls::stream <ap_uint <_WKey>> aggr_key_out [_KeyNM],
	    hls::stream <ap_uint <_WPay>> aggr_pld_out [3][_PayNM],
	    hls::stream <bool>& strm_e_out
	    )

do :ref:`hash_group_aggregate <doxid-namespacexf_1_1database_1_1details_1_1hash__group__aggregate>` for once

