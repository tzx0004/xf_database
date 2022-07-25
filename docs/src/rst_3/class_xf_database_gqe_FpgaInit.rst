.. index:: pair: class; xf::database::gqe::FpgaInit
.. _doxid-classxf_1_1database_1_1gqe_1_1_fpga_init:
.. _cid-xf::database::gqe::fpgainit:

class xf::database::gqe::FpgaInit
=================================

.. toctree::
	:hidden:

.. code-block:: cpp
	:class: overview-code-block

	#include "gqe_init.hpp"




.. _doxid-classxf_1_1database_1_1gqe_1_1_fpga_init_1a30e5c2f830f2ccffe10cd6f36c1e1237:
.. _cid-xf::database::gqe::fpgainit::dev_id:
.. _doxid-classxf_1_1database_1_1gqe_1_1_fpga_init_1acccca6e7f5b6c5092a96fd284122a0c8:
.. _cid-xf::database::gqe::fpgainit::mext_ddr0:
.. _doxid-classxf_1_1database_1_1gqe_1_1_fpga_init_1a5d0ebf5415b624b7601dc10f8819b75a:
.. _cid-xf::database::gqe::fpgainit::mext_ddr1:
.. _doxid-classxf_1_1database_1_1gqe_1_1_fpga_init_1afd1e518461f7d339170eadd9fd58317b:
.. _cid-xf::database::gqe::fpgainit::mext_hbm:
.. _doxid-classxf_1_1database_1_1gqe_1_1_fpga_init_1adb01daad245f9dbaa4edbfaf04d65328:
.. _cid-xf::database::gqe::fpgainit::ctx:
.. _doxid-classxf_1_1database_1_1gqe_1_1_fpga_init_1a87471a2a53882a0c9ea69b0ffab2015b:
.. _cid-xf::database::gqe::fpgainit::cq:
.. _doxid-classxf_1_1database_1_1gqe_1_1_fpga_init_1ae22c1830eb0a5bab0f6fcd74b243c364:
.. _cid-xf::database::gqe::fpgainit::prg:
.. _doxid-classxf_1_1database_1_1gqe_1_1_fpga_init_1af43ca27ac7cfa419a92c430e1c57d489:
.. _cid-xf::database::gqe::fpgainit::err:
.. _doxid-classxf_1_1database_1_1gqe_1_1_fpga_init_1aea09d2fc08b8bb953b1bf5d26d23babb:
.. _cid-xf::database::gqe::fpgainit::xclbin_path:
.. _doxid-classxf_1_1database_1_1gqe_1_1_fpga_init_1abde0bc7e8d3486e4fe2f456e34959e2d:
.. _cid-xf::database::gqe::fpgainit::hbuf_ddr0:
.. _doxid-classxf_1_1database_1_1gqe_1_1_fpga_init_1a8bd0429e6d49960e2638f97c6fe22bff:
.. _cid-xf::database::gqe::fpgainit::hbuf_ddr1:
.. _doxid-classxf_1_1database_1_1gqe_1_1_fpga_init_1a3046cf4d44c8f5c10fa0e3c184ff61c1:
.. _cid-xf::database::gqe::fpgainit::hbuf_hbm:
.. _doxid-classxf_1_1database_1_1gqe_1_1_fpga_init_1ab749d012ac1c44c600c3d7a1cb2b96c2:
.. _cid-xf::database::gqe::fpgainit::dbuf_ddr0:
.. _doxid-classxf_1_1database_1_1gqe_1_1_fpga_init_1a9b04ec1647cab7de5c4bc5071c74a8c9:
.. _cid-xf::database::gqe::fpgainit::dbuf_ddr1:
.. _doxid-classxf_1_1database_1_1gqe_1_1_fpga_init_1ae59a6e6f8e3900434cb74d258f3d980e:
.. _cid-xf::database::gqe::fpgainit::dbuf_hbm:
.. _doxid-classxf_1_1database_1_1gqe_1_1_fpga_init_1a711b7207fced1d2e3dc57e757bc95e18:
.. _cid-xf::database::gqe::fpgainit::fpgainit:
.. _doxid-classxf_1_1database_1_1gqe_1_1_fpga_init_1aab6e25fc8c09cd413387a0cc2461b050:
.. _cid-xf::database::gqe::fpgainit::~fpgainit:
.. _doxid-classxf_1_1database_1_1gqe_1_1_fpga_init_1af693b75da36d76c67f24c903dcd185c1:
.. _cid-xf::database::gqe::fpgainit::createhostbufs:
.. _doxid-classxf_1_1database_1_1gqe_1_1_fpga_init_1a21221fc725d15cd9910674ebd0bb451b:
.. _cid-xf::database::gqe::fpgainit::createdevbufs:
.. ref-code-block:: cpp
	:class: overview-code-block

	// fields

	cl_device_id dev_id
	cl_mem_ext_ptr_t mext_ddr0
	cl_mem_ext_ptr_t mext_ddr1
	cl_mem_ext_ptr_t mext_hbm[2 *PU_NM]
	cl_context ctx
	cl_command_queue cq
	cl_program prg
	cl_int err
	std::string xclbin_path
	char* hbuf_ddr0
	char* hbuf_ddr1
	char* hbuf_hbm[PU_NM]
	cl_mem dbuf_ddr0
	cl_mem dbuf_ddr1
	cl_mem dbuf_hbm[2 *PU_NM]

