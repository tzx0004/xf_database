.. index:: pair: class; xf::database::gqe::JoinConfig
.. _doxid-classxf_1_1database_1_1gqe_1_1_join_config:
.. _cid-xf::database::gqe::joinconfig:

class xf::database::gqe::JoinConfig
===================================

.. toctree::
	:hidden:

.. code-block:: cpp
	:class: overview-code-block

	#include "gqe_join_config.hpp"


Overview
~~~~~~~~



.. ref-code-block:: cpp
	:class: overview-code-block

	class JoinConfig: protected :ref:`xf::database::gqe::BaseConfig<doxid-classxf_1_1database_1_1gqe_1_1_base_config>`


Methods
~~~~~~~

.. FunctionSection

.. _doxid-classxf_1_1database_1_1gqe_1_1_join_config_1a43baed27f184e0ac61035bc56bf39988:
.. _cid-xf::database::gqe::joinconfig::joinconfig:

JoinConfig
----------


JoinConfig overload (1)
+++++++++++++++++++++++


.. ref-code-block:: cpp
	:class: title-code-block

	JoinConfig (
	    :ref:`Table<doxid-classxf_1_1database_1_1gqe_1_1_table>` a,
	    std::string filter_a,
	    :ref:`Table<doxid-classxf_1_1database_1_1gqe_1_1_table>` b,
	    std::string filter_b,
	    std::string join_str,
	    :ref:`Table<doxid-classxf_1_1database_1_1gqe_1_1_table>` c,
	    std::string output_str,
	    bool build_probe,
	    int join_Type = :ref:`INNER_JOIN<doxid-namespacexf_1_1database_1_1gqe_1a48260a37f3c58f033217c43cdfe10380a0190ab4db681e407952c182bd745834d>`
	    )

constructor of :ref:`JoinConfig <doxid-classxf_1_1database_1_1gqe_1_1_join_config>` .

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

.. _doxid-classxf_1_1database_1_1gqe_1_1_join_config_1aa95a810ded5d2e5bb1deb200f510bf24:
.. _cid-xf::database::gqe::joinconfig::joinconfig-2:

JoinConfig overload (2)
+++++++++++++++++++++++


.. ref-code-block:: cpp
	:class: title-code-block

	JoinConfig (
	    :ref:`TableSection<doxid-classxf_1_1database_1_1gqe_1_1_table_section>` a,
	    std::string filter_a,
	    :ref:`TableSection<doxid-classxf_1_1database_1_1gqe_1_1_table_section>` b,
	    std::string filter_b,
	    std::string join_str,
	    :ref:`TableSection<doxid-classxf_1_1database_1_1gqe_1_1_table_section>` c,
	    std::string output_str,
	    bool build_probe,
	    int join_Type = :ref:`INNER_JOIN<doxid-namespacexf_1_1database_1_1gqe_1a48260a37f3c58f033217c43cdfe10380a0190ab4db681e407952c182bd745834d>`
	    )

constructor of :ref:`JoinConfig <doxid-classxf_1_1database_1_1gqe_1_1_join_config>` .

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

.. _doxid-classxf_1_1database_1_1gqe_1_1_join_config_1aab716b5073b4876143becb52b16a974a:
.. _cid-xf::database::gqe::joinconfig::getjoinconfigbits:

getJoinConfigBits
-----------------


.. ref-code-block:: cpp
	:class: title-code-block

	ap_uint <512>* getJoinConfigBits () const

get the gqeJoin kernel config



.. rubric:: Returns:

join config bits

.. _doxid-classxf_1_1database_1_1gqe_1_1_join_config_1adabf1985f464db712a41dbf18eab2c3f:
.. _cid-xf::database::gqe::joinconfig::getshufflescan:

getShuffleScan
--------------


.. ref-code-block:: cpp
	:class: title-code-block

	std::vector <std::vector <int8_t>> getShuffleScan () const

get the sw-shuffle config for scan.



.. rubric:: Returns:

return the scan sw_shuffle cfg

.. _doxid-classxf_1_1database_1_1gqe_1_1_join_config_1a055f19912ce2c42a907fe4e71ae89e63:
.. _cid-xf::database::gqe::joinconfig::getshufflewrite:

getShuffleWrite
---------------


.. ref-code-block:: cpp
	:class: title-code-block

	std::vector <int8_t> getShuffleWrite () const

get the sw-shuffle config for write out.



.. rubric:: Returns:

return the write out sw_shuffle cfg

