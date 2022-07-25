.. index:: pair: namespace; utils
.. _doxid-namespacexf_1_1database_1_1gqe_1_1utils:
.. _cid-xf::database::gqe::utils:

namespace utils
===============

.. toctree::
	:hidden:

	class_xf_database_gqe_utils_MM.rst
	class_xf_database_gqe_utils_Timer.rst



.. ref-code-block:: cpp
	:class: overview-code-block

	// classes

	class :ref:`MM<doxid-classxf_1_1database_1_1gqe_1_1utils_1_1_m_m>` 
	class :ref:`Timer<doxid-classxf_1_1database_1_1gqe_1_1utils_1_1_timer>` 





.. FunctionSection

.. _doxid-namespacexf_1_1database_1_1gqe_1_1utils_1aebf09407dd591de290ea294efa31f297:
.. _cid-xf::database::gqe::utils::aligned_alloc:

aligned_alloc
-------------


.. code-block:: cpp
	
	#include "xf_database/gqe_utils.hpp"



.. ref-code-block:: cpp
	:class: title-code-block

	template <typename T>
	T* aligned_alloc (std::size_t num)

Stand-alone aligned memory allocator.

