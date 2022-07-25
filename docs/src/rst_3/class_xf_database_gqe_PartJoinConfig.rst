.. index:: pair: class; xf::database::gqe::PartJoinConfig
.. _doxid-classxf_1_1database_1_1gqe_1_1_part_join_config:
.. _cid-xf::database::gqe::partjoinconfig:

class xf::database::gqe::PartJoinConfig
=======================================

.. toctree::
	:hidden:

.. code-block:: cpp
	:class: overview-code-block

	#include "gqe_partjoin_config.hpp"


Overview
~~~~~~~~



.. ref-code-block:: cpp
	:class: overview-code-block

	class PartJoinConfig: protected :ref:`xf::database::gqe::BaseConfig<doxid-classxf_1_1database_1_1gqe_1_1_base_config>`


Methods
~~~~~~~

.. FunctionSection

.. _doxid-classxf_1_1database_1_1gqe_1_1_part_join_config_1a7372ce40062266df8d81d1bbcf2333c5:
.. _cid-xf::database::gqe::partjoinconfig::shufflewritepart:

shuffleWritePart
----------------


shuffleWritePart overload (1)
+++++++++++++++++++++++++++++


.. ref-code-block:: cpp
	:class: title-code-block

	std::vector <int8_t> shuffleWritePart (
	    :ref:`Table<doxid-classxf_1_1database_1_1gqe_1_1_table>`& tab_,
	    std::vector <int8_t> sw_shuffle_scan_part
	    )

setup the sw-shuffle for write out in partition kernel

.. _doxid-classxf_1_1database_1_1gqe_1_1_part_join_config_1a44227e39523c6f92c46f2ecdc71e2df0:
.. _cid-xf::database::gqe::partjoinconfig::shufflewritepart-2:

shuffleWritePart overload (2)
+++++++++++++++++++++++++++++


.. ref-code-block:: cpp
	:class: title-code-block

	std::vector <int8_t> shuffleWritePart (
	    :ref:`TableSection<doxid-classxf_1_1database_1_1gqe_1_1_table_section>`& tab_,
	    std::vector <int8_t> sw_shuffle_scan_part
	    )

setup the sw-shuffle for write out in partition kernel

.. _doxid-classxf_1_1database_1_1gqe_1_1_part_join_config_1ae173cc1cb812e250be4528086f026d83:
.. _cid-xf::database::gqe::partjoinconfig::partjoinconfig:

PartJoinConfig
--------------


PartJoinConfig overload (1)
+++++++++++++++++++++++++++


.. ref-code-block:: cpp
	:class: title-code-block

	PartJoinConfig (
	    :ref:`Table<doxid-classxf_1_1database_1_1gqe_1_1_table>` a,
	    std::string filter_a,
	    :ref:`Table<doxid-classxf_1_1database_1_1gqe_1_1_table>` b,
	    std::string filter_b,
	    std::string join_str,
	    :ref:`Table<doxid-classxf_1_1database_1_1gqe_1_1_table>` c,
	    std::string output_str,
	    int join_Type = :ref:`INNER_JOIN<doxid-namespacexf_1_1database_1_1gqe_1a48260a37f3c58f033217c43cdfe10380a0190ab4db681e407952c182bd745834d>`
	    )

constructor of :ref:`PartJoinConfig <doxid-classxf_1_1database_1_1gqe_1_1_part_join_config>` .

The class generates join configure bits by parsing the join .run() arguments,



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
        - join_str

        - join condition(s)

    *
        - evals

        - eval expressions list

    *
        - evals_const

        - eval expression constant list

    *
        - c

        - result table

    *
        - output_str

        - output column mapping

    *
        - join_type

        - INNER_JOIN(default) | SEMI_JOIN | ANTI_JOIN.

    *
        - part_tag

        - if use partition kernel

.. _doxid-classxf_1_1database_1_1gqe_1_1_part_join_config_1a26aec65e754967610d94d6a406f85104:
.. _cid-xf::database::gqe::partjoinconfig::partjoinconfig-2:

PartJoinConfig overload (2)
+++++++++++++++++++++++++++


.. ref-code-block:: cpp
	:class: title-code-block

	PartJoinConfig (
	    :ref:`TableSection<doxid-classxf_1_1database_1_1gqe_1_1_table_section>` a,
	    std::string filter_a,
	    :ref:`TableSection<doxid-classxf_1_1database_1_1gqe_1_1_table_section>` b,
	    std::string filter_b,
	    std::string join_str,
	    :ref:`TableSection<doxid-classxf_1_1database_1_1gqe_1_1_table_section>` c,
	    std::string output_str,
	    int join_Type = :ref:`INNER_JOIN<doxid-namespacexf_1_1database_1_1gqe_1a48260a37f3c58f033217c43cdfe10380a0190ab4db681e407952c182bd745834d>`
	    )

constructor of :ref:`PartJoinConfig <doxid-classxf_1_1database_1_1gqe_1_1_part_join_config>` .

The class generates join configure bits by parsing the join .run() arguments,



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
        - join_str

        - join condition(s)

    *
        - evals

        - eval expressions list

    *
        - evals_const

        - eval expression constant list

    *
        - c

        - result table

    *
        - output_str

        - output column mapping

    *
        - join_type

        - INNER_JOIN(default) | SEMI_JOIN | ANTI_JOIN.

    *
        - part_tag

        - if use partition kernel

.. _doxid-classxf_1_1database_1_1gqe_1_1_part_join_config_1afff0f0c1974bd145819db5fe3d31c77e:
.. _cid-xf::database::gqe::partjoinconfig::getjoinconfigbits:

getJoinConfigBits
-----------------


.. ref-code-block:: cpp
	:class: title-code-block

	ap_uint <512>* getJoinConfigBits () const

get the gqeJoin kernel config



.. rubric:: Returns:

join config bits

.. _doxid-classxf_1_1database_1_1gqe_1_1_part_join_config_1a4e213e3a4191c943ab63aba62a921922:
.. _cid-xf::database::gqe::partjoinconfig::getpartconfigbits:

getPartConfigBits
-----------------


.. ref-code-block:: cpp
	:class: title-code-block

	ap_uint <512>* getPartConfigBits () const

get the gqePart kernel config



.. rubric:: Returns:

join config bits

.. _doxid-classxf_1_1database_1_1gqe_1_1_part_join_config_1a050ef23ef4c58a7634901f23aaae4d5a:
.. _cid-xf::database::gqe::partjoinconfig::getshufflescanhj:

getShuffleScanHJ
----------------


.. ref-code-block:: cpp
	:class: title-code-block

	std::vector <std::vector <int8_t>> getShuffleScanHJ () const

get the sw-shuffle config of scan in L3 join kernel



.. rubric:: Returns:

return the scan sw_shuffle cfg

.. _doxid-classxf_1_1database_1_1gqe_1_1_part_join_config_1a2b9ecb5033fbc55bf04c54534a8dd800:
.. _cid-xf::database::gqe::partjoinconfig::getshufflewritehj:

getShuffleWriteHJ
-----------------


.. ref-code-block:: cpp
	:class: title-code-block

	std::vector <int8_t> getShuffleWriteHJ () const

get the sw-shuffle config of write in L3 join kernel



.. rubric:: Returns:

return the write sw_shuffle cfg

.. _doxid-classxf_1_1database_1_1gqe_1_1_part_join_config_1af19a8f33c078d025e62c43d0bc88d1a3:
.. _cid-xf::database::gqe::partjoinconfig::getshufflescanpart:

getShuffleScanPart
------------------


.. ref-code-block:: cpp
	:class: title-code-block

	std::vector <std::vector <int8_t>> getShuffleScanPart () const

get the sw-shuffle config of scan in L3 part kernel



.. rubric:: Returns:

return the scan sw_shuffle cfg

.. _doxid-classxf_1_1database_1_1gqe_1_1_part_join_config_1afd2b57f3f18524200ddb98c21f26f0bb:
.. _cid-xf::database::gqe::partjoinconfig::getshufflewritepart:

getShuffleWritePart
-------------------


.. ref-code-block:: cpp
	:class: title-code-block

	std::vector <std::vector <int8_t>> getShuffleWritePart () const

get the sw-shuffle config of write in L3 part kernel



.. rubric:: Returns:

return the write sw_shuffle cfg

