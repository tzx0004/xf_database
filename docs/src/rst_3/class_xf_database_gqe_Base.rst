.. index:: pair: class; xf::database::gqe::Base
.. _doxid-classxf_1_1database_1_1gqe_1_1_base:
.. _cid-xf::database::gqe::base:

class xf::database::gqe::Base
=============================

.. toctree::
	:hidden:

.. code-block:: cpp
	:class: overview-code-block

	#include "gqe_base.hpp"


Overview
~~~~~~~~



.. ref-code-block:: cpp
	:class: overview-code-block

	class Base

	    // direct descendants

	    class :ref:`xf::database::gqe::Filter<doxid-classxf_1_1database_1_1gqe_1_1_filter>` 
	    class :ref:`xf::database::gqe::Joiner<doxid-classxf_1_1database_1_1gqe_1_1_joiner>` 


Methods
~~~~~~~

.. FunctionSection

.. _doxid-classxf_1_1database_1_1gqe_1_1_base_1a93a0464f642d79b8b63e3c7951217f77:
.. _cid-xf::database::gqe::base::setbufallocmaxnum:

SetBufAllocMaxNum
-----------------


.. ref-code-block:: cpp
	:class: title-code-block

	void SetBufAllocMaxNum (int _num)

Setting the maximum number of buffers that are allowed to allocate for each ddr.



.. rubric:: Parameters:

.. list-table::
    :widths: 20 80

    *
        - _num

        - 

    *
        - :

        - the maximum ddr buffer num

.. _doxid-classxf_1_1database_1_1gqe_1_1_base_1a4be9f2b3cd3ec2f20c155fcb915fac96:
.. _cid-xf::database::gqe::base::allochostbuf:

AllocHostBuf
------------


.. ref-code-block:: cpp
	:class: title-code-block

	char* AllocHostBuf (
	    bool _ddr_idx,
	    int64_t _size
	    )

Request one host buffer in hbuf ddr0/1, the size and starting ptr of this buf is recorded.



.. rubric:: Parameters:

.. list-table::
    :widths: 20 80

    *
        - _ddr_idx

        - 

    *
        - :

        - the device buffer DDR idx that corresponding to requested host buf

    *
        - _size

        - 

    *
        - :

        - the requested buf size

.. _doxid-classxf_1_1database_1_1gqe_1_1_base_1a86cc498cabb349b10a3b7497e43421d1:
.. _cid-xf::database::gqe::base::resethostbuf:

ResetHostBuf
------------


.. ref-code-block:: cpp
	:class: title-code-block

	void ResetHostBuf ()

Reset host Buf related record, but won't destroy host buffer.

