.. index:: pair: class; xf::database::gqe::utils::Timer
.. _doxid-classxf_1_1database_1_1gqe_1_1utils_1_1_timer:
.. _cid-xf::database::gqe::utils::timer:

class xf::database::gqe::utils::Timer
=====================================

.. toctree::
	:hidden:

.. code-block:: cpp
	:class: overview-code-block

	#include "gqe_utils.hpp"


Overview
~~~~~~~~



.. ref-code-block:: cpp
	:class: overview-code-block


Methods
~~~~~~~

.. FunctionSection

.. _doxid-classxf_1_1database_1_1gqe_1_1utils_1_1_timer_1a583de59e52a9903b52ca1c4775ee65f7:
.. _cid-xf::database::gqe::utils::timer::add:

add
---


.. ref-code-block:: cpp
	:class: title-code-block

	:ref:`Timer<doxid-classxf_1_1database_1_1gqe_1_1utils_1_1_timer>`& add ()

add another point.

.. _doxid-classxf_1_1database_1_1gqe_1_1utils_1_1_timer_1ad03ad4aa8e4204973265e691346ca9b8:
.. _cid-xf::database::gqe::utils::timer::getmillisec:

getMilliSec
-----------


getMilliSec overload (1)
++++++++++++++++++++++++


.. ref-code-block:: cpp
	:class: title-code-block

	float getMilliSec () const

return the difference between last two point.

.. _doxid-classxf_1_1database_1_1gqe_1_1utils_1_1_timer_1a6e0c8defcb77b0a77de9dbe099ad7420:
.. _cid-xf::database::gqe::utils::timer::getmillisec-2:

getMilliSec overload (2)
++++++++++++++++++++++++


.. ref-code-block:: cpp
	:class: title-code-block

	float getMilliSec (
	    int start,
	    int end
	    ) const

return between selected points.

