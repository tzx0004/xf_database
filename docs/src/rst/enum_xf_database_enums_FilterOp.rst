.. index:: pair: enum; xf::database::enums::FilterOp
.. _doxid-namespacexf_1_1database_1_1enums_1a43b0dc0663705fcf057fdf103d264912:
.. _cid-xf::database::enums::filterop:

enum xf::database::enums::FilterOp
==================================



Overview
~~~~~~~~

Comparison operator of filter. :ref:`More...<details-doxid-namespacexf_1_1database_1_1enums_1a43b0dc0663705fcf057fdf103d264912>`

.. ref-code-block:: cpp
	:class: overview-code-block

	// enum values

	:ref:`FOP_DC<doxid-namespacexf_1_1database_1_1enums_1a43b0dc0663705fcf057fdf103d264912a9b4b30f3aee421b2cebb13b434092df4>` = 0
	:ref:`FOP_EQ<doxid-namespacexf_1_1database_1_1enums_1a43b0dc0663705fcf057fdf103d264912ac0bb29ea3d37158ffbe15ec9660c0636>` 
	:ref:`FOP_NE<doxid-namespacexf_1_1database_1_1enums_1a43b0dc0663705fcf057fdf103d264912a3f01755704d15bfef1cf0249a83d100a>` 
	:ref:`FOP_GT<doxid-namespacexf_1_1database_1_1enums_1a43b0dc0663705fcf057fdf103d264912a9c5474e07e0f2cce127e8d2d96108dbe>` 
	:ref:`FOP_LT<doxid-namespacexf_1_1database_1_1enums_1a43b0dc0663705fcf057fdf103d264912acfcad52659c948f5ee736d88aeaf7970>` 
	:ref:`FOP_GE<doxid-namespacexf_1_1database_1_1enums_1a43b0dc0663705fcf057fdf103d264912a1c71b9051c722c5b29eca753b631d85a>` 
	:ref:`FOP_LE<doxid-namespacexf_1_1database_1_1enums_1a43b0dc0663705fcf057fdf103d264912afeb9fb082139e86906f57c60eca11d32>` 
	:ref:`FOP_GTU<doxid-namespacexf_1_1database_1_1enums_1a43b0dc0663705fcf057fdf103d264912af54cd72efd2bd371987020157dcaaf5a>` 
	:ref:`FOP_LTU<doxid-namespacexf_1_1database_1_1enums_1a43b0dc0663705fcf057fdf103d264912a4d2330cf3412db5f50a98dc1269e0765>` 
	:ref:`FOP_GEU<doxid-namespacexf_1_1database_1_1enums_1a43b0dc0663705fcf057fdf103d264912a5c1cf989e34b971b21f6d72360c9e4d8>` 
	:ref:`FOP_LEU<doxid-namespacexf_1_1database_1_1enums_1a43b0dc0663705fcf057fdf103d264912a5e3f14881970cceacc2236ea70ed7028>` 

.. _details-doxid-namespacexf_1_1database_1_1enums_1a43b0dc0663705fcf057fdf103d264912:

Detailed Documentation
~~~~~~~~~~~~~~~~~~~~~~

Comparison operator of filter.

Enum Values
-----------

.. _doxid-namespacexf_1_1database_1_1enums_1a43b0dc0663705fcf057fdf103d264912a9b4b30f3aee421b2cebb13b434092df4:
.. _cid-xf::database::enums::filterop::fop_dc:
.. ref-code-block:: cpp
	:class: title-code-block

	FOP_DC

don't care, always true.

.. _doxid-namespacexf_1_1database_1_1enums_1a43b0dc0663705fcf057fdf103d264912ac0bb29ea3d37158ffbe15ec9660c0636:
.. _cid-xf::database::enums::filterop::fop_eq:
.. ref-code-block:: cpp
	:class: title-code-block

	FOP_EQ

equal

.. _doxid-namespacexf_1_1database_1_1enums_1a43b0dc0663705fcf057fdf103d264912a3f01755704d15bfef1cf0249a83d100a:
.. _cid-xf::database::enums::filterop::fop_ne:
.. ref-code-block:: cpp
	:class: title-code-block

	FOP_NE

not equal

.. _doxid-namespacexf_1_1database_1_1enums_1a43b0dc0663705fcf057fdf103d264912a9c5474e07e0f2cce127e8d2d96108dbe:
.. _cid-xf::database::enums::filterop::fop_gt:
.. ref-code-block:: cpp
	:class: title-code-block

	FOP_GT

greater than, signed.

.. _doxid-namespacexf_1_1database_1_1enums_1a43b0dc0663705fcf057fdf103d264912acfcad52659c948f5ee736d88aeaf7970:
.. _cid-xf::database::enums::filterop::fop_lt:
.. ref-code-block:: cpp
	:class: title-code-block

	FOP_LT

less than, signed.

.. _doxid-namespacexf_1_1database_1_1enums_1a43b0dc0663705fcf057fdf103d264912a1c71b9051c722c5b29eca753b631d85a:
.. _cid-xf::database::enums::filterop::fop_ge:
.. ref-code-block:: cpp
	:class: title-code-block

	FOP_GE

greater than or equal, signed.

.. _doxid-namespacexf_1_1database_1_1enums_1a43b0dc0663705fcf057fdf103d264912afeb9fb082139e86906f57c60eca11d32:
.. _cid-xf::database::enums::filterop::fop_le:
.. ref-code-block:: cpp
	:class: title-code-block

	FOP_LE

less than or equal, signed.

.. _doxid-namespacexf_1_1database_1_1enums_1a43b0dc0663705fcf057fdf103d264912af54cd72efd2bd371987020157dcaaf5a:
.. _cid-xf::database::enums::filterop::fop_gtu:
.. ref-code-block:: cpp
	:class: title-code-block

	FOP_GTU

greater than, unsigned.

.. _doxid-namespacexf_1_1database_1_1enums_1a43b0dc0663705fcf057fdf103d264912a4d2330cf3412db5f50a98dc1269e0765:
.. _cid-xf::database::enums::filterop::fop_ltu:
.. ref-code-block:: cpp
	:class: title-code-block

	FOP_LTU

less than, unsigned.

.. _doxid-namespacexf_1_1database_1_1enums_1a43b0dc0663705fcf057fdf103d264912a5c1cf989e34b971b21f6d72360c9e4d8:
.. _cid-xf::database::enums::filterop::fop_geu:
.. ref-code-block:: cpp
	:class: title-code-block

	FOP_GEU

greater than or equal, unsigned.

.. _doxid-namespacexf_1_1database_1_1enums_1a43b0dc0663705fcf057fdf103d264912a5e3f14881970cceacc2236ea70ed7028:
.. _cid-xf::database::enums::filterop::fop_leu:
.. ref-code-block:: cpp
	:class: title-code-block

	FOP_LEU

less than or equal, unsigned.

