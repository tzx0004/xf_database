.. index:: pair: class; xf::database::gqe::BloomFilterConfig
.. _doxid-classxf_1_1database_1_1gqe_1_1_bloom_filter_config:
.. _cid-xf::database::gqe::bloomfilterconfig:

class xf::database::gqe::BloomFilterConfig
==========================================

.. toctree::
	:hidden:

.. code-block:: cpp
	:class: overview-code-block

	#include "gqe_bloomfilter_config.hpp"


Overview
~~~~~~~~



.. ref-code-block:: cpp
	:class: overview-code-block

	class BloomFilterConfig: protected :ref:`xf::database::gqe::BaseConfig<doxid-classxf_1_1database_1_1gqe_1_1_base_config>`


Methods
~~~~~~~

.. FunctionSection

.. _doxid-classxf_1_1database_1_1gqe_1_1_bloom_filter_config_1a45f7c47b2d964f538237bff0d9ec18d5:
.. _cid-xf::database::gqe::bloomfilterconfig::bloomfilterconfig:

BloomFilterConfig
-----------------


.. ref-code-block:: cpp
	:class: title-code-block

	BloomFilterConfig (
	    :ref:`TableSection<doxid-classxf_1_1database_1_1gqe_1_1_table_section>` a,
	    std::string filter_a,
	    :ref:`TableSection<doxid-classxf_1_1database_1_1gqe_1_1_table_section>` b,
	    std::string filter_b,
	    std::string bf_str,
	    :ref:`TableSection<doxid-classxf_1_1database_1_1gqe_1_1_table_section>` c,
	    std::string output_str,
	    bool build_probe
	    )

constructor of :ref:`BloomFilterConfig <doxid-classxf_1_1database_1_1gqe_1_1_bloom_filter_config>` .

The class generates bloom filter configure bits by parsing the bloom filter run arguments,



.. rubric:: Parameters:

.. list-table::
    :widths: 20 80

    *
        - a

        - left table

    *
        - filter_a

        - filter condition of left table

    *
        - b

        - right table

    *
        - filter_b

        - filter condition of right table

    *
        - bf_str

        - bloomfilter condition(s)

    *
        - c

        - result table

    *
        - output_str

        - output column mapping

    *
        - build_probe

        - true for probe, false for build

.. _doxid-classxf_1_1database_1_1gqe_1_1_bloom_filter_config_1aaaad16210b1b94770d6bd3c2c279eebb:
.. _cid-xf::database::gqe::bloomfilterconfig::getbloomfilterconfigbits:

getBloomFilterConfigBits
------------------------


.. ref-code-block:: cpp
	:class: title-code-block

	ap_uint <512>* getBloomFilterConfigBits () const

get the gqeJoin kernel config



.. rubric:: Returns:

bloom filter config bits

.. _doxid-classxf_1_1database_1_1gqe_1_1_bloom_filter_config_1ad7dd6f1faf6ce7dad9feb1d8aca0cab2:
.. _cid-xf::database::gqe::bloomfilterconfig::getshufflescan:

getShuffleScan
--------------


.. ref-code-block:: cpp
	:class: title-code-block

	std::vector <std::vector <int8_t>> getShuffleScan () const

get the sw-shuffle config for scan.



.. rubric:: Returns:

return the scan sw_shuffle cfg

.. _doxid-classxf_1_1database_1_1gqe_1_1_bloom_filter_config_1a24e1004bebf1ba7edcfd458a0b498c3b:
.. _cid-xf::database::gqe::bloomfilterconfig::getshufflewrite:

getShuffleWrite
---------------


.. ref-code-block:: cpp
	:class: title-code-block

	std::vector <int8_t> getShuffleWrite () const

get the sw-shuffle config for write out.



.. rubric:: Returns:

return the write out sw_shuffle cfg

.. _doxid-classxf_1_1database_1_1gqe_1_1_bloom_filter_config_1af4fadaa1dd93e4e9260d12e07bb19c88:
.. _cid-xf::database::gqe::bloomfilterconfig::bloomfilterconfig-2:

BloomFilterConfig
-----------------


.. ref-code-block:: cpp
	:class: title-code-block

	BloomFilterConfig (
	    :ref:`Table<doxid-classxf_1_1database_1_1gqe_1_1_table>` tab_in,
	    std::string filter_condition,
	    std::string input_str,
	    uint64_t bf_size,
	    :ref:`Table<doxid-classxf_1_1database_1_1gqe_1_1_table>` tab_out,
	    std::string output_str
	    )

constructor of :ref:`BloomFilterConfig <doxid-classxf_1_1database_1_1gqe_1_1_bloom_filter_config>` .

This class generates filter configuration bits by paring the .run() arguments



.. rubric:: Parameters:

.. list-table::
    :widths: 20 80

    *
        - tab_in

        - input table

    *
        - filter_condition

        - filter condition for input table

    *
        - input_str

        - column name(s) of input table to be filtered

    *
        - bf_size

        - bloom-filter size in bits

    *
        - tab_out

        - result table

    *
        - output_str

        - output column mapping

.. _doxid-classxf_1_1database_1_1gqe_1_1_bloom_filter_config_1ae050cea439e6b94099058dc2409dea28:
.. _cid-xf::database::gqe::bloomfilterconfig::getfilterconfigbits:

getFilterConfigBits
-------------------


.. ref-code-block:: cpp
	:class: title-code-block

	ap_uint <512>* getFilterConfigBits () const

get the gqeFilter kernel config



.. rubric:: Returns:

gqeFilter config bits (14 * ap_uint<512>)

.. _doxid-classxf_1_1database_1_1gqe_1_1_bloom_filter_config_1a71aa7c478b2faf28c2362865e94334c5:
.. _cid-xf::database::gqe::bloomfilterconfig::getshufflescan-2:

getShuffleScan
--------------


.. ref-code-block:: cpp
	:class: title-code-block

	std::vector <int8_t> getShuffleScan () const

get the sw-shuffle config for scan



.. rubric:: Returns:

the scan sw_shuffle cfg

