.. index:: pair: namespace; gqe
.. _doxid-namespacexf_1_1database_1_1gqe:
.. _cid-xf::database::gqe:

namespace gqe
=============

.. toctree::
	:hidden:

	enum_xf_database_gqe_DATASIZE.rst
	enum_xf_database_gqe_DIV_SCALE_1.rst
	enum_xf_database_gqe_ErrCode.rst
	enum_xf_database_gqe_SOLUTION.rst
	enum_xf_database_gqe_TypeEnum.rst
	enum_xf_database_gqe_WorkerFunctions.rst
	enum_xf_database_gqe_task_complex_type.rst
	struct_xf_database_gqe_ColPtr.rst
	struct_xf_database_gqe_EvaluationInfo.rst
	struct_xf_database_gqe_Key.rst
	struct_xf_database_gqe_KeyHasher.rst
	struct_xf_database_gqe_Payloads.rst
	struct_xf_database_gqe_StrategySet.rst
	struct_xf_database_gqe_memcpy_task.rst
	struct_xf_database_gqe_migrate_task.rst
	struct_xf_database_gqe_task_complex.rst
	class_xf_database_gqe_AggrConfig.rst
	class_xf_database_gqe_AggrStrategyBase.rst
	class_xf_database_gqe_AggrStrategyManualSet.rst
	class_xf_database_gqe_Aggregator.rst
	class_xf_database_gqe_Base.rst
	class_xf_database_gqe_BaseConfig.rst
	class_xf_database_gqe_BloomFilter.rst
	class_xf_database_gqe_BloomFilterConfig.rst
	class_xf_database_gqe_Client.rst
	class_xf_database_gqe_Filter.rst
	class_xf_database_gqe_FpgaInit.rst
	class_xf_database_gqe_JoinConfig.rst
	class_xf_database_gqe_JoinStrategyBase.rst
	class_xf_database_gqe_JoinStrategyManualSet.rst
	class_xf_database_gqe_JoinStrategyV1.rst
	class_xf_database_gqe_Joiner.rst
	class_xf_database_gqe_MemCoppier.rst
	class_xf_database_gqe_PartJoinConfig.rst
	class_xf_database_gqe_PlatformInit.rst
	class_xf_database_gqe_SafeQueue.rst
	class_xf_database_gqe_Table.rst
	class_xf_database_gqe_TableSection.rst
	class_xf_database_gqe_Worker.rst
	class_xf_database_gqe_Workshop.rst





.. _doxid-namespacexf_1_1database_1_1gqe_1a48260a37f3c58f033217c43cdfe10380a0190ab4db681e407952c182bd745834d:
.. _cid-xf::database::gqe::inner_join:
.. _doxid-namespacexf_1_1database_1_1gqe_1a48260a37f3c58f033217c43cdfe10380af2a6ffa9b416a2bb39c05a4cd1cfa641:
.. _cid-xf::database::gqe::semi_join:
.. _doxid-namespacexf_1_1database_1_1gqe_1a48260a37f3c58f033217c43cdfe10380ab2a0c1279e8d14c82351d78fff1a95e9:
.. _cid-xf::database::gqe::anti_join:
.. _doxid-namespacexf_1_1database_1_1gqe_1a3d634b7915370dfbd6e208deb446037ca60ba797fbb7d468893617a15ee046982:
.. _cid-xf::database::gqe::pu_nm:
.. _doxid-namespacexf_1_1database_1_1gqe_1a3d634b7915370dfbd6e208deb446037ca013b9e88ee6fbf229c9ef95940a5c92f:
.. _cid-xf::database::gqe::ht_buff_depth:
.. _doxid-namespacexf_1_1database_1_1gqe_1a3d634b7915370dfbd6e208deb446037ca56949feff44975fc4e837e11c466421a:
.. _cid-xf::database::gqe::s_buff_depth:
.. _doxid-namespacexf_1_1database_1_1gqe_1a3d634b7915370dfbd6e208deb446037cae01cd14837263291bd06f2891316d85f:
.. _cid-xf::database::gqe::hbm_buff_depth:
.. _doxid-namespacexf_1_1database_1_1gqe_1a3d634b7915370dfbd6e208deb446037ca925b1b8660d26b07c72f15b88b90f2d7:
.. _cid-xf::database::gqe::vec_len:
.. _doxid-namespacexf_1_1database_1_1gqe_1a3d634b7915370dfbd6e208deb446037ca7669a06505ac6b6d0b68db7dfa6dba5c:
.. _cid-xf::database::gqe::key_sz:
.. _doxid-namespacexf_1_1database_1_1gqe_1a5546bf110ef81b73694ef763ff6dec76:
.. _cid-xf::database::gqe::ddr_size_in_byte:
.. _doxid-namespacexf_1_1database_1_1gqe_1ae7d286ee32f84ca28770bbc388e29f51:
.. _cid-xf::database::gqe::hbm_size_in_byte:
.. _doxid-namespacexf_1_1database_1_1gqe_1a9940135e21e2e5ff81cc2260a9fefed1:
.. _cid-xf::database::gqe::init_hardware:
.. _doxid-namespacexf_1_1database_1_1gqe_1a4c336e9952de1aee38bba8c399c1dac3:
.. _cid-xf::database::gqe::load_binary:
.. ref-code-block:: cpp
	:class: overview-code-block

	// enums

	enum
	{
	    INNER_JOIN = 0
	    SEMI_JOIN = 1
	    ANTI_JOIN = 2
	}

	enum
	{
	    PU_NM = 8
	    HT_BUFF_DEPTH =  (1  < <23)
	    S_BUFF_DEPTH =  (1  < <23)
	    HBM_BUFF_DEPTH =  (1  < <23)
	    VEC_LEN = 8
	    KEY_SZ = sizeof (int64_t)
	}

	enum :ref:`DATASIZE<doxid-namespacexf_1_1database_1_1gqe_1a8a6cd4358c775df1c39fcbf8307f2c4e>`
	enum :ref:`DIV_SCALE_1<doxid-namespacexf_1_1database_1_1gqe_1a65579f9a57bec7aa91d280bf31865c68>`
	enum :ref:`ErrCode<doxid-namespacexf_1_1database_1_1gqe_1ab8c63d2eec74d13d9f190082ca614298>`
	enum :ref:`SOLUTION<doxid-namespacexf_1_1database_1_1gqe_1ae7a2de26e1ca59288898c354f44d2a86>`
	enum :ref:`TypeEnum<doxid-namespacexf_1_1database_1_1gqe_1a5365f96f233b0c2f45c92dbd750345d2>`
	enum :ref:`WorkerFunctions<doxid-namespacexf_1_1database_1_1gqe_1a1f23de90125b65db8f998e75b2565816>`
	enum :ref:`task_complex_type<doxid-namespacexf_1_1database_1_1gqe_1a03403d41046015c5b17a37f3eb1c9923>`

	// structs

	struct :ref:`ColPtr<doxid-structxf_1_1database_1_1gqe_1_1_col_ptr>` 
	struct :ref:`EvaluationInfo<doxid-structxf_1_1database_1_1gqe_1_1_evaluation_info>` 
	struct :ref:`Key<doxid-structxf_1_1database_1_1gqe_1_1_key>` 
	struct :ref:`KeyHasher<doxid-structxf_1_1database_1_1gqe_1_1_key_hasher>` 
	struct :ref:`Payloads<doxid-structxf_1_1database_1_1gqe_1_1_payloads>` 
	struct :ref:`StrategySet<doxid-structxf_1_1database_1_1gqe_1_1_strategy_set>` 
	struct :ref:`memcpy_task<doxid-structxf_1_1database_1_1gqe_1_1memcpy__task>` 
	struct :ref:`migrate_task<doxid-structxf_1_1database_1_1gqe_1_1migrate__task>` 
	struct :ref:`task_complex<doxid-structxf_1_1database_1_1gqe_1_1task__complex>` 

	// classes

	class :ref:`AggrConfig<doxid-classxf_1_1database_1_1gqe_1_1_aggr_config>` 
	class :ref:`AggrStrategyBase<doxid-classxf_1_1database_1_1gqe_1_1_aggr_strategy_base>` 
	class :ref:`AggrStrategyManualSet<doxid-classxf_1_1database_1_1gqe_1_1_aggr_strategy_manual_set>` 
	class :ref:`Aggregator<doxid-classxf_1_1database_1_1gqe_1_1_aggregator>` 
	class :ref:`Base<doxid-classxf_1_1database_1_1gqe_1_1_base>` 
	class :ref:`BaseConfig<doxid-classxf_1_1database_1_1gqe_1_1_base_config>` 
	class :ref:`BloomFilter<doxid-classxf_1_1database_1_1gqe_1_1_bloom_filter>` 
	class :ref:`BloomFilterConfig<doxid-classxf_1_1database_1_1gqe_1_1_bloom_filter_config>` 
	class :ref:`Client<doxid-classxf_1_1database_1_1gqe_1_1_client>` 
	class :ref:`Filter<doxid-classxf_1_1database_1_1gqe_1_1_filter>` 
	class :ref:`FpgaInit<doxid-classxf_1_1database_1_1gqe_1_1_fpga_init>` 
	class :ref:`JoinConfig<doxid-classxf_1_1database_1_1gqe_1_1_join_config>` 
	class :ref:`JoinStrategyBase<doxid-classxf_1_1database_1_1gqe_1_1_join_strategy_base>` 
	class :ref:`JoinStrategyManualSet<doxid-classxf_1_1database_1_1gqe_1_1_join_strategy_manual_set>` 
	class :ref:`JoinStrategyV1<doxid-classxf_1_1database_1_1gqe_1_1_join_strategy_v1>` 
	class :ref:`Joiner<doxid-classxf_1_1database_1_1gqe_1_1_joiner>` 
	class :ref:`MemCoppier<doxid-classxf_1_1database_1_1gqe_1_1_mem_coppier>` 
	class :ref:`PartJoinConfig<doxid-classxf_1_1database_1_1gqe_1_1_part_join_config>` 
	class :ref:`PlatformInit<doxid-classxf_1_1database_1_1gqe_1_1_platform_init>` 

	template <typename T>
	class :ref:`SafeQueue<doxid-classxf_1_1database_1_1gqe_1_1_safe_queue>` 

	class :ref:`Table<doxid-classxf_1_1database_1_1gqe_1_1_table>` 
	class :ref:`TableSection<doxid-classxf_1_1database_1_1gqe_1_1_table_section>` 
	class :ref:`Worker<doxid-classxf_1_1database_1_1gqe_1_1_worker>` 
	class :ref:`Workshop<doxid-classxf_1_1database_1_1gqe_1_1_workshop>` 

	// global variables

	const int64_t DDR_SIZE_IN_BYTE
	const int64_t HBM_SIZE_IN_BYTE

