.. index:: pair: class; xf::database::gqe::BloomFilter
.. _doxid-classxf_1_1database_1_1gqe_1_1_bloom_filter:
.. _cid-xf::database::gqe::bloomfilter:

class xf::database::gqe::BloomFilter
====================================

.. toctree::
	:hidden:

.. code-block:: cpp
	:class: overview-code-block

	#include "gqe_bloomfilter.hpp"


Overview
~~~~~~~~



.. ref-code-block:: cpp
	:class: overview-code-block


Methods
~~~~~~~

.. FunctionSection

.. _doxid-classxf_1_1database_1_1gqe_1_1_bloom_filter_1a287ea566e4c895ac6c3513cab7c02465:
.. _cid-xf::database::gqe::bloomfilter::bloomfilter:

BloomFilter
-----------


.. ref-code-block:: cpp
	:class: title-code-block

	BloomFilter (
	    uint64_t num_keys,
	    float fpp = 0.05f
	    )

constructor of :ref:`BloomFilter <doxid-classxf_1_1database_1_1gqe_1_1_bloom_filter>`

Calculates the size of the bloom-filter based on the number of unique keys and the equation provided in: https://en.wikipedia.org/wiki/Bloom_filter, as well as allocates buffer for the internal hash-table



.. rubric:: Parameters:

.. list-table::
    :widths: 20 80

    *
        - num_keys

        - number of unique keys to be built into the hash-table of the bloom-filter

    *
        - fpp

        - false positive probability (5% by default)

.. _doxid-classxf_1_1database_1_1gqe_1_1_bloom_filter_1a8d75546775f2906a40655869197f9793:
.. _cid-xf::database::gqe::bloomfilter::build:

build
-----


.. ref-code-block:: cpp
	:class: title-code-block

	void build (
	    :ref:`Table<doxid-classxf_1_1database_1_1gqe_1_1_table>` tab_in,
	    std::string col_names
	    )

build the hash-table with the given key column from input table,

key_names_str should be comma separated, e.g. "key0, key1"



.. rubric:: Parameters:

.. list-table::
    :widths: 20 80

    *
        - tab_in

        - input table

    *
        - key_names_str

        - key column names (comma separated) of the input table to be built into hash-table

.. _doxid-classxf_1_1database_1_1gqe_1_1_bloom_filter_1a0144360175a09504e9946b192ffdc894:
.. _cid-xf::database::gqe::bloomfilter::merge:

merge
-----


.. ref-code-block:: cpp
	:class: title-code-block

	void merge (:ref:`BloomFilter<doxid-classxf_1_1database_1_1gqe_1_1_bloom_filter>`& bf_in)

merge the input bloom-filter into the current one



.. rubric:: Parameters:

.. list-table::
    :widths: 20 80

    *
        - bf_in

        - input bloom-filter

.. _doxid-classxf_1_1database_1_1gqe_1_1_bloom_filter_1aae4edd018d95d8635b2d4ea124a5cdf8:
.. _cid-xf::database::gqe::bloomfilter::gethashtable:

getHashTable
------------


.. ref-code-block:: cpp
	:class: title-code-block

	uint64_t** getHashTable () const

get the bloom-filter hash-table



.. rubric:: Returns:

hash-table of the bloom-filter

.. _doxid-classxf_1_1database_1_1gqe_1_1_bloom_filter_1af2f614f55c0ac429bc96cac0d5b7ae64:
.. _cid-xf::database::gqe::bloomfilter::getbloomfiltersize:

getBloomFilterSize
------------------


.. ref-code-block:: cpp
	:class: title-code-block

	uint64_t getBloomFilterSize () const

get the bloom-filter size



.. rubric:: Returns:

size of the bloom-filter

