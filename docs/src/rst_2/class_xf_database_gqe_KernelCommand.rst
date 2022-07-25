.. index:: pair: class; xf::database::gqe::KernelCommand
.. _doxid-classxf_1_1database_1_1gqe_1_1_kernel_command:
.. _cid-xf::database::gqe::kernelcommand:

class xf::database::gqe::KernelCommand
======================================

.. toctree::
	:hidden:

.. code-block:: cpp
	:class: overview-code-block

	#include "xf_database/kernel_command.hpp"


Overview
~~~~~~~~

Class for generating configuration bits of ``gqePart`` , ``gqeJoin`` and ``gqeFilter`` kernels.

.. _doxid-classxf_1_1database_1_1gqe_1_1_kernel_command_1afe90d3967f4c0bca9867bcd1e600b578:
.. _cid-xf::database::gqe::kernelcommand::~kernelcommand:
.. ref-code-block:: cpp
	:class: overview-code-block


Methods
~~~~~~~

.. FunctionSection

.. _doxid-classxf_1_1database_1_1gqe_1_1_kernel_command_1a259ec0c12ce818c3f5c8179c594c4e51:
.. _cid-xf::database::gqe::kernelcommand::kernelcommand:

KernelCommand
-------------


.. ref-code-block:: cpp
	:class: title-code-block

	KernelCommand ()

constructor of :ref:`KernelCommand <doxid-classxf_1_1database_1_1gqe_1_1_kernel_command>` class. The kernel command used buffer is allocated on host. Some default settings are provided.

.. _doxid-classxf_1_1database_1_1gqe_1_1_kernel_command_1a78cceb78f811e61e5492f1716b79fcf3:
.. _cid-xf::database::gqe::kernelcommand::setbypasson:

setBypassOn
-----------


.. ref-code-block:: cpp
	:class: title-code-block

	void setBypassOn (bool trigger)

set bypass on.



.. rubric:: Parameters:

.. list-table::
    :widths: 20 80

    *
        - trigger

        - 0 for off, 1 for on.

.. _doxid-classxf_1_1database_1_1gqe_1_1_kernel_command_1a3f5bd8012cd61c5c30c5b938e4c9bc2c:
.. _cid-xf::database::gqe::kernelcommand::setjoinon:

setJoinOn
---------


.. ref-code-block:: cpp
	:class: title-code-block

	void setJoinOn (bool trigger)

set join on.



.. rubric:: Parameters:

.. list-table::
    :widths: 20 80

    *
        - trigger

        - 0 for off, 1 for on.

.. _doxid-classxf_1_1database_1_1gqe_1_1_kernel_command_1a7461087b4137c9f9bcf079810aa8afc9:
.. _cid-xf::database::gqe::kernelcommand::setjointype:

setJoinType
-----------


.. ref-code-block:: cpp
	:class: title-code-block

	void setJoinType (int join_type)

set join type.



.. rubric:: Parameters:

.. list-table::
    :widths: 20 80

    *
        - join_type

        - hash join type, 0 for INNER, 1 for SEMI, 2 for ANTI.

.. _doxid-classxf_1_1database_1_1gqe_1_1_kernel_command_1a8a9d1dc2af7323748bc834cff1c728cf:
.. _cid-xf::database::gqe::kernelcommand::setjoinappendmode:

setJoinAppendMode
-----------------


.. ref-code-block:: cpp
	:class: title-code-block

	void setJoinAppendMode (int ap_mode)

set join append mode.



.. rubric:: Parameters:

.. list-table::
    :widths: 20 80

    *
        - ap_mode

        - append mode.

.. _doxid-classxf_1_1database_1_1gqe_1_1_kernel_command_1a5e0c4dd42a64c2da48d4888997ade4a2:
.. _cid-xf::database::gqe::kernelcommand::setbloomfilteron:

setBloomfilterOn
----------------


.. ref-code-block:: cpp
	:class: title-code-block

	void setBloomfilterOn (bool trigger)

set bloom-filter on.



.. rubric:: Parameters:

.. list-table::
    :widths: 20 80

    *
        - bf_size

        - size of bloom-filter in bits, we need 35 bits to represent a range between 1 to 16 Gbits.

.. _doxid-classxf_1_1database_1_1gqe_1_1_kernel_command_1aeddc018fd50e7f637ad14adbcc46913b:
.. _cid-xf::database::gqe::kernelcommand::setbloomfiltersize:

setBloomfilterSize
------------------


.. ref-code-block:: cpp
	:class: title-code-block

	void setBloomfilterSize (ap_uint <36> bf_size)

set bloom-filter size.



.. rubric:: Parameters:

.. list-table::
    :widths: 20 80

    *
        - bf_size

        - size of bloom-filter in bits, we need 35 bits to represent a range between 1 to 16 Gbits.

.. _doxid-classxf_1_1database_1_1gqe_1_1_kernel_command_1aaa4a1808351449f63bcda142e4182eb4:
.. _cid-xf::database::gqe::kernelcommand::setparton:

setPartOn
---------


.. ref-code-block:: cpp
	:class: title-code-block

	void setPartOn (int trigger)

set partition on.



.. rubric:: Parameters:

.. list-table::
    :widths: 20 80

    *
        - trigger

        - 0 for off, 1 for on.

.. _doxid-classxf_1_1database_1_1gqe_1_1_kernel_command_1ac6a852d0d012ed83be33d964ec58c923:
.. _cid-xf::database::gqe::kernelcommand::setlogpart:

setLogPart
----------


.. ref-code-block:: cpp
	:class: title-code-block

	void setLogPart (int log_part)

set log of partition number.



.. rubric:: Parameters:

.. list-table::
    :widths: 20 80

    *
        - log_part

        - log of partition number.

.. _doxid-classxf_1_1database_1_1gqe_1_1_kernel_command_1aa76471f30aa595507c0772c54df3d16a:
.. _cid-xf::database::gqe::kernelcommand::setaggron:

setAggrOn
---------


.. ref-code-block:: cpp
	:class: title-code-block

	void setAggrOn (bool trigger = true)

set aggregate on.



.. rubric:: Parameters:

.. list-table::
    :widths: 20 80

    *
        - trigger

        - false for off, true for on.

.. _doxid-classxf_1_1database_1_1gqe_1_1_kernel_command_1a849ec791f588e0af574f5627e744f351:
.. _cid-xf::database::gqe::kernelcommand::setdualkeyon:

setDualKeyOn
------------


.. ref-code-block:: cpp
	:class: title-code-block

	void setDualKeyOn (bool trigger = true)

set dual key on.



.. rubric:: Parameters:

.. list-table::
    :widths: 20 80

    *
        - trigger

        - false for using 1 column as key, true for using two.

.. _doxid-classxf_1_1database_1_1gqe_1_1_kernel_command_1aac2d33846f667ab618c949494f8f6647:
.. _cid-xf::database::gqe::kernelcommand::setjoinbuildprobe:

setJoinBuildProbe
-----------------


.. ref-code-block:: cpp
	:class: title-code-block

	void setJoinBuildProbe (bool flag)

set join build probe flag.



.. rubric:: Parameters:

.. list-table::
    :widths: 20 80

    *
        - flag

        - 0 for build, 1 for probe.

.. _doxid-classxf_1_1database_1_1gqe_1_1_kernel_command_1ab2f20994d2b604c63a54d1934d258066:
.. _cid-xf::database::gqe::kernelcommand::setbloomfilterbuildprobe:

setBloomfilterBuildProbe
------------------------


.. ref-code-block:: cpp
	:class: title-code-block

	void setBloomfilterBuildProbe (bool flag)

set bloom filter build probe flag.



.. rubric:: Parameters:

.. list-table::
    :widths: 20 80

    *
        - flag

        - 0 for build, 1 for probe.

.. _doxid-classxf_1_1database_1_1gqe_1_1_kernel_command_1ac308230e200df9e70ed4f062be1651d6:
.. _cid-xf::database::gqe::kernelcommand::setscancolenable:

setScanColEnable
----------------


.. ref-code-block:: cpp
	:class: title-code-block

	void setScanColEnable (
	    int table_id,
	    std::vector <int8_t> index
	    )

enables input columns for gqeKernel.



.. rubric:: Parameters:

.. list-table::
    :widths: 20 80

    *
        - table_id

        - 0 for left table, 1 for right table.

    *
        - index

        - valid input column ids.

.. _doxid-classxf_1_1database_1_1gqe_1_1_kernel_command_1a9b5468d3362353f33d57d10e74521b1c:
.. _cid-xf::database::gqe::kernelcommand::setwritecolenable:

setWriteColEnable
-----------------


.. ref-code-block:: cpp
	:class: title-code-block

	void setWriteColEnable (
	    int krn_type,
	    int table_id,
	    std::vector <int8_t> index
	    )

enables output columns for gqeKernel.



.. rubric:: Parameters:

.. list-table::
    :widths: 20 80

    *
        - krn_type

        - 0 for gqeJoin, 1 for gqePart, 2 for gqeFilter

    *
        - table_id

        - 0 for left table, 1 for right table

    *
        - index

        - output column ids

.. _doxid-classxf_1_1database_1_1gqe_1_1_kernel_command_1a25c901161b95d4244f08e6cd75e4d4b1:
.. _cid-xf::database::gqe::kernelcommand::setrowidvalidenable:

setRowIDValidEnable
-------------------


.. ref-code-block:: cpp
	:class: title-code-block

	void setRowIDValidEnable (
	    int table_id,
	    bool gen_rowID_en,
	    bool valid_en
	    )

set gen_rowIDEnable and validEnable flag.



.. rubric:: Parameters:

.. list-table::
    :widths: 20 80

    *
        - table_id

        - 0 for left table, 1 for right table.

    *
        - gen_rowID_en

        - enable flag for using GQE to generate row IDs internally. 1 for enable, 0 for disable.

    *
        - valid_en

        - enable flag for getting valid bits from off-chip memory or enabing every row internally. 1 for valid bits from off-chip memory, 0 for enabling every row.

.. _doxid-classxf_1_1database_1_1gqe_1_1_kernel_command_1afee28b0f033b08cbafb81c0d9d2e6529:
.. _cid-xf::database::gqe::kernelcommand::setfilter:

setFilter
---------


.. ref-code-block:: cpp
	:class: title-code-block

	void setFilter (
	    int table_id,
	    std::string filter_string
	    )

set Filter string.

The string uses ``a`` , ``b`` , ``c`` , ``d`` to refer to first to the fourth column, and supports comparison and logical operator like C++. Parentheses can be used to group logic, but notice that the underlying hardware module does not support comparing one column with multiple constant boundaries in OR relationship. Integral constants will be extracted from expression.

For example, an expression could be ``(a < 10 && b < 20) || (c >= d)`` .



.. rubric:: Parameters:

.. list-table::
    :widths: 20 80

    *
        - table_id

        - 0 for left table, 1 for right table

    *
        - filter_string

        - filter expression string

.. _doxid-classxf_1_1database_1_1gqe_1_1_kernel_command_1abbffdecca0f1bd6161fa2a782152b0b1:
.. _cid-xf::database::gqe::kernelcommand::getconfigbits:

getConfigBits
-------------


.. ref-code-block:: cpp
	:class: title-code-block

	ap_uint <512>* getConfigBits () const

return config bit array.

