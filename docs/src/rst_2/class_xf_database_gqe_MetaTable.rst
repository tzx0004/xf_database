.. index:: pair: class; xf::database::gqe::MetaTable
.. _doxid-classxf_1_1database_1_1gqe_1_1_meta_table:
.. _cid-xf::database::gqe::metatable:

class xf::database::gqe::MetaTable
==================================

.. toctree::
	:hidden:

	struct_xf_database_gqe_MetaTable_vector.rst

.. code-block:: cpp
	:class: overview-code-block

	#include "meta_table.hpp"


Overview
~~~~~~~~

the :ref:`MetaTable <doxid-classxf_1_1database_1_1gqe_1_1_meta_table>` class the overall layout is as follows:

.. _doxid-classxf_1_1database_1_1gqe_1_1_meta_table_1a778fc5bc588b46a52257f64e90582d8b:
.. _cid-xf::database::gqe::metatable::metatable:
.. _doxid-classxf_1_1database_1_1gqe_1_1_meta_table_1a7e2584fee650c71091158b80ee35170c:
.. _cid-xf::database::gqe::metatable::~metatable:
.. ref-code-block:: cpp
	:class: overview-code-block

	// structs

	struct :ref:`vector<doxid-structxf_1_1database_1_1gqe_1_1_meta_table_1_1vector>` 


Methods
~~~~~~~

.. FunctionSection

.. _doxid-classxf_1_1database_1_1gqe_1_1_meta_table_1a25e2b295344fa7c1642223d3a4a74f8b:
.. _cid-xf::database::gqe::metatable::meta:

meta
----


.. ref-code-block:: cpp
	:class: title-code-block

	ap_uint <512>* meta ()

convert meta struct data to ap_uint, which can be transferred to kernel

.. _doxid-classxf_1_1database_1_1gqe_1_1_meta_table_1a7f1714197b3a69ecdd49527f4c8a42eb:
.. _cid-xf::database::gqe::metatable::setsecid:

setSecID
--------


.. ref-code-block:: cpp
	:class: title-code-block

	void setSecID (int32_t _id)

set the sec id in meta

.. _doxid-classxf_1_1database_1_1gqe_1_1_meta_table_1a471178c0968ed8f07fdb70ec6573ca08:
.. _cid-xf::database::gqe::metatable::setcolnum:

setColNum
---------


.. ref-code-block:: cpp
	:class: title-code-block

	void setColNum (int8_t num)

set the col num of input table

.. _doxid-classxf_1_1database_1_1gqe_1_1_meta_table_1a3dd6479be721cc81e0f980605a47233c:
.. _cid-xf::database::gqe::metatable::setpartition:

setPartition
------------


.. ref-code-block:: cpp
	:class: title-code-block

	void setPartition (
	    int num,
	    int size
	    )

set partition num and size, only vaild for gqePart

.. _doxid-classxf_1_1database_1_1gqe_1_1_meta_table_1a4740d15a39f61cd1fe82783a84c9cd47:
.. _cid-xf::database::gqe::metatable::setcol:

setCol
------


.. ref-code-block:: cpp
	:class: title-code-block

	void setCol (
	    int col_id,
	    int buf_id,
	    int64_t len
	    )

set the buf id and row num of each col

.. _doxid-classxf_1_1database_1_1gqe_1_1_meta_table_1a992e733781bf9385f4c4af4c3f9ce215:
.. _cid-xf::database::gqe::metatable::getcollen:

getColLen
---------


.. ref-code-block:: cpp
	:class: title-code-block

	int64_t getColLen ()

get the row num of results

.. _doxid-classxf_1_1database_1_1gqe_1_1_meta_table_1aba4120d6108461f6db3e264485b90be4:
.. _cid-xf::database::gqe::metatable::getpartlen:

getPartLen
----------


.. ref-code-block:: cpp
	:class: title-code-block

	int32_t* getPartLen ()

get the row num of each partition

.. _doxid-classxf_1_1database_1_1gqe_1_1_meta_table_1a6a45410cf424e920062e577d3d27d90f:
.. _cid-xf::database::gqe::metatable::reload:

reload
------


.. ref-code-block:: cpp
	:class: title-code-block

	void reload ()

convert kernel mbuf back to meta struct, refresh all data

