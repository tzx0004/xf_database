.. _global-namespace:

Global Namespace
================

.. index:: pair: namespace; global

.. toctree::
	:hidden:

	namespace_xf.rst



Overview
~~~~~~~~



.. _doxid-gqe__kernel__part__v2_8hpp_1a4987f19b300f608b33d4484f8baa1320:
.. _cid-hashwh:
.. _doxid-gqe__kernel__part__v2_8hpp_1ae381cf82863a2f46779eb2e908e37dfd:
.. _cid-hashwl:
.. _doxid-gqe__kernel__part__v2_8hpp_1a479d6a66dab215ac3d461d07ba41faea:
.. _cid-pu:
.. _doxid-gqe__kernel__part__v2_8hpp_1a1e3e71f0606159034bef9c29dcbaa2d6:
.. _cid-burst_len:
.. _doxid-gqe__kernel__part__v2_8hpp_1a4a15d1655ba38beda8f20c641d99457f:
.. _cid-ch_num:
.. _doxid-gqe__kernel__part__v2_8hpp_1a516c7be7e4f01710b8f9d751c03b7a2c:
.. _cid-col_num:
.. _doxid-gqe__kernel__aggr__v2_8hpp_1ad558e6d6a68f5f97e02ee16518714b84:
.. _cid-test_buf_depth:
.. _doxid-gqe__kernel__part__v2_8hpp_1ad558e6d6a68f5f97e02ee16518714b84:
.. _cid-test_buf_depth-2:
.. _doxid-gqe__kernel__part__v2_8hpp_1a044dcca86ec2bb97c01fe14bce2f7900:
.. _cid-tpch_int_sz:
.. _doxid-gqe__kernel__part__v2_8hpp_1ab4abc4b2266800f3082eb40a2e348aa9:
.. _cid-vec_len:
.. _doxid-gqe__kernel__aggr__v2_8hpp_1a83f127b7188340c21c20ea83ecbaa10f:
.. _cid-vec_scan:
.. _doxid-gqe__kernel__part__v2_8hpp_1a83f127b7188340c21c20ea83ecbaa10f:
.. _cid-vec_scan-2:
.. ref-code-block:: cpp
	:class: overview-code-block

	// namespaces

	namespace :ref:`xf<doxid-namespacexf>`
	    namespace :ref:`xf::database<doxid-namespacexf_1_1database>`
	        namespace :ref:`xf::database::gqe<doxid-namespacexf_1_1database_1_1gqe>`
	            namespace :ref:`xf::database::gqe::utils<doxid-namespacexf_1_1database_1_1gqe_1_1utils>`

	// global variables

	const int HASHWH
	const int HASHWL
	const int PU

	// macros

	#define BURST_LEN
	#define CH_NUM
	#define COL_NUM
	#define TEST_BUF_DEPTH
	#define TEST_BUF_DEPTH
	#define TPCH_INT_SZ
	#define VEC_LEN
	#define VEC_SCAN
	#define VEC_SCAN


Global Functions
~~~~~~~~~~~~~~~~

.. FunctionSection

.. _doxid-gqe__kernel__3__in__1_8hpp_1a317576a4c9db08b83eb06a2c4c96536c:
.. _cid-gqekernel:

gqeKernel
---------


.. code-block:: cpp
	
	#include "xf_database/gqe_kernel_3_in_1.hpp"



.. ref-code-block:: cpp
	:class: title-code-block

	void gqeKernel (
	    hls::burst_maxi <ap_uint <8*:ref:`TPCH_INT_SZ<doxid-gqe__kernel__part__v2_8hpp_1a044dcca86ec2bb97c01fe14bce2f7900>`*:ref:`VEC_SCAN<doxid-gqe__kernel__part__v2_8hpp_1a83f127b7188340c21c20ea83ecbaa10f>`>> din_col0,
	    hls::burst_maxi <ap_uint <8*:ref:`TPCH_INT_SZ<doxid-gqe__kernel__part__v2_8hpp_1a044dcca86ec2bb97c01fe14bce2f7900>`*:ref:`VEC_SCAN<doxid-gqe__kernel__part__v2_8hpp_1a83f127b7188340c21c20ea83ecbaa10f>`>> din_col1,
	    hls::burst_maxi <ap_uint <8*:ref:`TPCH_INT_SZ<doxid-gqe__kernel__part__v2_8hpp_1a044dcca86ec2bb97c01fe14bce2f7900>`*:ref:`VEC_SCAN<doxid-gqe__kernel__part__v2_8hpp_1a83f127b7188340c21c20ea83ecbaa10f>`>> din_col2,
	    hls::burst_maxi <ap_uint <64>> din_val,
	    ap_uint <64>* din_krn_cfg,
	    ap_uint <64>* din_meta,
	    ap_uint <256>* dout_meta,
	    hls::burst_maxi <ap_uint <8*:ref:`TPCH_INT_SZ<doxid-gqe__kernel__part__v2_8hpp_1a044dcca86ec2bb97c01fe14bce2f7900>`*:ref:`VEC_LEN<doxid-gqe__kernel__part__v2_8hpp_1ab4abc4b2266800f3082eb40a2e348aa9>`>> dout_col0,
	    hls::burst_maxi <ap_uint <8*:ref:`TPCH_INT_SZ<doxid-gqe__kernel__part__v2_8hpp_1a044dcca86ec2bb97c01fe14bce2f7900>`*:ref:`VEC_LEN<doxid-gqe__kernel__part__v2_8hpp_1ab4abc4b2266800f3082eb40a2e348aa9>`>> dout_col1,
	    hls::burst_maxi <ap_uint <8*:ref:`TPCH_INT_SZ<doxid-gqe__kernel__part__v2_8hpp_1a044dcca86ec2bb97c01fe14bce2f7900>`*:ref:`VEC_LEN<doxid-gqe__kernel__part__v2_8hpp_1ab4abc4b2266800f3082eb40a2e348aa9>`>> dout_col2,
	    hls::burst_maxi <ap_uint <8*:ref:`TPCH_INT_SZ<doxid-gqe__kernel__part__v2_8hpp_1a044dcca86ec2bb97c01fe14bce2f7900>`*:ref:`VEC_LEN<doxid-gqe__kernel__part__v2_8hpp_1ab4abc4b2266800f3082eb40a2e348aa9>`>> dout_col3,
	    hls::burst_maxi <ap_uint <256>> htb_buf0,
	    hls::burst_maxi <ap_uint <256>> htb_buf1,
	    hls::burst_maxi <ap_uint <256>> htb_buf2,
	    hls::burst_maxi <ap_uint <256>> htb_buf3,
	    hls::burst_maxi <ap_uint <256>> htb_buf4,
	    hls::burst_maxi <ap_uint <256>> htb_buf5,
	    hls::burst_maxi <ap_uint <256>> htb_buf6,
	    hls::burst_maxi <ap_uint <256>> htb_buf7,
	    hls::burst_maxi <ap_uint <256>> stb_buf0,
	    hls::burst_maxi <ap_uint <256>> stb_buf1,
	    hls::burst_maxi <ap_uint <256>> stb_buf2,
	    hls::burst_maxi <ap_uint <256>> stb_buf3,
	    hls::burst_maxi <ap_uint <256>> stb_buf4,
	    hls::burst_maxi <ap_uint <256>> stb_buf5,
	    hls::burst_maxi <ap_uint <256>> stb_buf6,
	    hls::burst_maxi <ap_uint <256>> stb_buf7
	    )

3-in-1 GQE kernel (64-bit key version)



.. rubric:: Parameters:

.. list-table::
    :widths: 20 80

    *
        - din_col

        - input table columns

    *
        - din_val

        - validation bits column

    *
        - din_krn_cfg

        - input kernel configurations

    *
        - din_meta

        - input meta info

    *
        - dout_meta

        - output meta info

    *
        - dout_col

        - output table columns

    *
        - htb_buf

        - HBM buffers used to save build table key/payload for JOIN flow and lower space of hash-table for BF flow

    *
        - stb_buf

        - HBM buffers used to save overflowed build table key/payload for JOIN flow and higher space of hash-table for BF flow

.. _doxid-gqe__kernel__aggr__v2_8hpp_1ada14f1c5f99c310ca719be1dff660d3b:
.. _cid-gqeaggr:

gqeAggr
-------


.. code-block:: cpp
	
	#include "xf_database/gqe_kernel_aggr_v2.hpp"



.. ref-code-block:: cpp
	:class: title-code-block

	void gqeAggr (
	    ap_uint <8*:ref:`TPCH_INT_SZ<doxid-gqe__kernel__part__v2_8hpp_1a044dcca86ec2bb97c01fe14bce2f7900>`*8> buf_in0 [],
	    ap_uint <8*:ref:`TPCH_INT_SZ<doxid-gqe__kernel__part__v2_8hpp_1a044dcca86ec2bb97c01fe14bce2f7900>`*8> buf_in1 [],
	    ap_uint <8*:ref:`TPCH_INT_SZ<doxid-gqe__kernel__part__v2_8hpp_1a044dcca86ec2bb97c01fe14bce2f7900>`*8> buf_in2 [],
	    ap_uint <8*:ref:`TPCH_INT_SZ<doxid-gqe__kernel__part__v2_8hpp_1a044dcca86ec2bb97c01fe14bce2f7900>`*8> buf_in3 [],
	    ap_uint <8*:ref:`TPCH_INT_SZ<doxid-gqe__kernel__part__v2_8hpp_1a044dcca86ec2bb97c01fe14bce2f7900>`*8> buf_in4 [],
	    ap_uint <8*:ref:`TPCH_INT_SZ<doxid-gqe__kernel__part__v2_8hpp_1a044dcca86ec2bb97c01fe14bce2f7900>`*8> buf_in5 [],
	    ap_uint <8*:ref:`TPCH_INT_SZ<doxid-gqe__kernel__part__v2_8hpp_1a044dcca86ec2bb97c01fe14bce2f7900>`*8> buf_in6 [],
	    ap_uint <8*:ref:`TPCH_INT_SZ<doxid-gqe__kernel__part__v2_8hpp_1a044dcca86ec2bb97c01fe14bce2f7900>`*8> buf_in7 [],
	    ap_uint <512> buf_metain [],
	    ap_uint <512> buf_metaout [],
	    ap_uint <8*:ref:`TPCH_INT_SZ<doxid-gqe__kernel__part__v2_8hpp_1a044dcca86ec2bb97c01fe14bce2f7900>`*:ref:`VEC_LEN<doxid-gqe__kernel__part__v2_8hpp_1ab4abc4b2266800f3082eb40a2e348aa9>`> buf_out0 [],
	    ap_uint <8*:ref:`TPCH_INT_SZ<doxid-gqe__kernel__part__v2_8hpp_1a044dcca86ec2bb97c01fe14bce2f7900>`*:ref:`VEC_LEN<doxid-gqe__kernel__part__v2_8hpp_1ab4abc4b2266800f3082eb40a2e348aa9>`> buf_out1 [],
	    ap_uint <8*:ref:`TPCH_INT_SZ<doxid-gqe__kernel__part__v2_8hpp_1a044dcca86ec2bb97c01fe14bce2f7900>`*:ref:`VEC_LEN<doxid-gqe__kernel__part__v2_8hpp_1ab4abc4b2266800f3082eb40a2e348aa9>`> buf_out2 [],
	    ap_uint <8*:ref:`TPCH_INT_SZ<doxid-gqe__kernel__part__v2_8hpp_1a044dcca86ec2bb97c01fe14bce2f7900>`*:ref:`VEC_LEN<doxid-gqe__kernel__part__v2_8hpp_1ab4abc4b2266800f3082eb40a2e348aa9>`> buf_out3 [],
	    ap_uint <8*:ref:`TPCH_INT_SZ<doxid-gqe__kernel__part__v2_8hpp_1a044dcca86ec2bb97c01fe14bce2f7900>`*:ref:`VEC_LEN<doxid-gqe__kernel__part__v2_8hpp_1ab4abc4b2266800f3082eb40a2e348aa9>`> buf_out4 [],
	    ap_uint <8*:ref:`TPCH_INT_SZ<doxid-gqe__kernel__part__v2_8hpp_1a044dcca86ec2bb97c01fe14bce2f7900>`*:ref:`VEC_LEN<doxid-gqe__kernel__part__v2_8hpp_1ab4abc4b2266800f3082eb40a2e348aa9>`> buf_out5 [],
	    ap_uint <8*:ref:`TPCH_INT_SZ<doxid-gqe__kernel__part__v2_8hpp_1a044dcca86ec2bb97c01fe14bce2f7900>`*:ref:`VEC_LEN<doxid-gqe__kernel__part__v2_8hpp_1ab4abc4b2266800f3082eb40a2e348aa9>`> buf_out6 [],
	    ap_uint <8*:ref:`TPCH_INT_SZ<doxid-gqe__kernel__part__v2_8hpp_1a044dcca86ec2bb97c01fe14bce2f7900>`*:ref:`VEC_LEN<doxid-gqe__kernel__part__v2_8hpp_1ab4abc4b2266800f3082eb40a2e348aa9>`> buf_out7 [],
	    ap_uint <8*:ref:`TPCH_INT_SZ<doxid-gqe__kernel__part__v2_8hpp_1a044dcca86ec2bb97c01fe14bce2f7900>`*:ref:`VEC_LEN<doxid-gqe__kernel__part__v2_8hpp_1ab4abc4b2266800f3082eb40a2e348aa9>`> buf_out8 [],
	    ap_uint <8*:ref:`TPCH_INT_SZ<doxid-gqe__kernel__part__v2_8hpp_1a044dcca86ec2bb97c01fe14bce2f7900>`*:ref:`VEC_LEN<doxid-gqe__kernel__part__v2_8hpp_1ab4abc4b2266800f3082eb40a2e348aa9>`> buf_out9 [],
	    ap_uint <8*:ref:`TPCH_INT_SZ<doxid-gqe__kernel__part__v2_8hpp_1a044dcca86ec2bb97c01fe14bce2f7900>`*:ref:`VEC_LEN<doxid-gqe__kernel__part__v2_8hpp_1ab4abc4b2266800f3082eb40a2e348aa9>`> buf_out10 [],
	    ap_uint <8*:ref:`TPCH_INT_SZ<doxid-gqe__kernel__part__v2_8hpp_1a044dcca86ec2bb97c01fe14bce2f7900>`*:ref:`VEC_LEN<doxid-gqe__kernel__part__v2_8hpp_1ab4abc4b2266800f3082eb40a2e348aa9>`> buf_out11 [],
	    ap_uint <8*:ref:`TPCH_INT_SZ<doxid-gqe__kernel__part__v2_8hpp_1a044dcca86ec2bb97c01fe14bce2f7900>`*:ref:`VEC_LEN<doxid-gqe__kernel__part__v2_8hpp_1ab4abc4b2266800f3082eb40a2e348aa9>`> buf_out12 [],
	    ap_uint <8*:ref:`TPCH_INT_SZ<doxid-gqe__kernel__part__v2_8hpp_1a044dcca86ec2bb97c01fe14bce2f7900>`*:ref:`VEC_LEN<doxid-gqe__kernel__part__v2_8hpp_1ab4abc4b2266800f3082eb40a2e348aa9>`> buf_out13 [],
	    ap_uint <8*:ref:`TPCH_INT_SZ<doxid-gqe__kernel__part__v2_8hpp_1a044dcca86ec2bb97c01fe14bce2f7900>`*:ref:`VEC_LEN<doxid-gqe__kernel__part__v2_8hpp_1ab4abc4b2266800f3082eb40a2e348aa9>`> buf_out14 [],
	    ap_uint <8*:ref:`TPCH_INT_SZ<doxid-gqe__kernel__part__v2_8hpp_1a044dcca86ec2bb97c01fe14bce2f7900>`*:ref:`VEC_LEN<doxid-gqe__kernel__part__v2_8hpp_1ab4abc4b2266800f3082eb40a2e348aa9>`> buf_out15 [],
	    ap_uint <8*:ref:`TPCH_INT_SZ<doxid-gqe__kernel__part__v2_8hpp_1a044dcca86ec2bb97c01fe14bce2f7900>`> buf_cfg [],
	    ap_uint <8*:ref:`TPCH_INT_SZ<doxid-gqe__kernel__part__v2_8hpp_1a044dcca86ec2bb97c01fe14bce2f7900>`> buf_result_info [],
	    ap_uint <8*:ref:`TPCH_INT_SZ<doxid-gqe__kernel__part__v2_8hpp_1a044dcca86ec2bb97c01fe14bce2f7900>`*:ref:`VEC_LEN<doxid-gqe__kernel__part__v2_8hpp_1ab4abc4b2266800f3082eb40a2e348aa9>`> ping_buf0 [],
	    ap_uint <8*:ref:`TPCH_INT_SZ<doxid-gqe__kernel__part__v2_8hpp_1a044dcca86ec2bb97c01fe14bce2f7900>`*:ref:`VEC_LEN<doxid-gqe__kernel__part__v2_8hpp_1ab4abc4b2266800f3082eb40a2e348aa9>`> ping_buf1 [],
	    ap_uint <8*:ref:`TPCH_INT_SZ<doxid-gqe__kernel__part__v2_8hpp_1a044dcca86ec2bb97c01fe14bce2f7900>`*:ref:`VEC_LEN<doxid-gqe__kernel__part__v2_8hpp_1ab4abc4b2266800f3082eb40a2e348aa9>`> ping_buf2 [],
	    ap_uint <8*:ref:`TPCH_INT_SZ<doxid-gqe__kernel__part__v2_8hpp_1a044dcca86ec2bb97c01fe14bce2f7900>`*:ref:`VEC_LEN<doxid-gqe__kernel__part__v2_8hpp_1ab4abc4b2266800f3082eb40a2e348aa9>`> ping_buf3 [],
	    ap_uint <8*:ref:`TPCH_INT_SZ<doxid-gqe__kernel__part__v2_8hpp_1a044dcca86ec2bb97c01fe14bce2f7900>`*:ref:`VEC_LEN<doxid-gqe__kernel__part__v2_8hpp_1ab4abc4b2266800f3082eb40a2e348aa9>`> pong_buf0 [],
	    ap_uint <8*:ref:`TPCH_INT_SZ<doxid-gqe__kernel__part__v2_8hpp_1a044dcca86ec2bb97c01fe14bce2f7900>`*:ref:`VEC_LEN<doxid-gqe__kernel__part__v2_8hpp_1ab4abc4b2266800f3082eb40a2e348aa9>`> pong_buf1 [],
	    ap_uint <8*:ref:`TPCH_INT_SZ<doxid-gqe__kernel__part__v2_8hpp_1a044dcca86ec2bb97c01fe14bce2f7900>`*:ref:`VEC_LEN<doxid-gqe__kernel__part__v2_8hpp_1ab4abc4b2266800f3082eb40a2e348aa9>`> pong_buf2 [],
	    ap_uint <8*:ref:`TPCH_INT_SZ<doxid-gqe__kernel__part__v2_8hpp_1a044dcca86ec2bb97c01fe14bce2f7900>`*:ref:`VEC_LEN<doxid-gqe__kernel__part__v2_8hpp_1ab4abc4b2266800f3082eb40a2e348aa9>`> pong_buf3 []
	    )

GQE Aggr Kernel.

For detailed document, see :ref:`gqe_kernel_design`.



.. rubric:: Parameters:

.. list-table::
    :widths: 20 80

    *
        - buf_in0

        - input table buffer.

    *
        - buf_in1

        - input table buffer.

    *
        - buf_in2

        - input table buffer.

    *
        - buf_in3

        - input table buffer.

    *
        - buf_in4

        - input table buffer.

    *
        - buf_in5

        - input table buffer.

    *
        - buf_in6

        - input table buffer.

    *
        - buf_in7

        - input table buffer.

    *
        - nrow

        - input row number.

    *
        - buf_out

        - output table buffer.

    *
        - buf_cfg

        - input configuration buffer.

    *
        - buf_result_info

        - output information buffer.

    *
        - ping_buf0

        - gqeAggr's temporal buffer for storing overflow.

    *
        - ping_buf1

        - gqeAggr's temporal buffer for storing overflow.

    *
        - ping_buf2

        - gqeAggr's temporal buffer for storing overflow.

    *
        - ping_buf3

        - gqeAggr's temporal buffer for storing overflow.

    *
        - pong_buf0

        - gqeAggr's temporal buffer for storing overflow.

    *
        - pong_buf1

        - gqeAggr's temporal buffer for storing overflow.

    *
        - pong_buf2

        - gqeAggr's temporal buffer for storing overflow.

    *
        - pong_buf3

        - gqeAggr's temporal buffer for storing overflow.

.. _doxid-gqe__kernel__part__v2_8hpp_1af7017a456513937bbf6cbe02478b2bd6:
.. _cid-gqepart:

gqePart
-------


.. code-block:: cpp
	
	#include "xf_database/gqe_kernel_part_v2.hpp"



.. ref-code-block:: cpp
	:class: title-code-block

	void gqePart (
	    const int k_depth,
	    const int col_index,
	    const int bit_num,
	    ap_uint <8*4*16> buf_A1 [],
	    ap_uint <8*4*16> buf_A2 [],
	    ap_uint <8*4*16> buf_A3 [],
	    ap_uint <8*4*16> buf_A4 [],
	    ap_uint <8*4*16> buf_A5 [],
	    ap_uint <8*4*16> buf_A6 [],
	    ap_uint <8*4*16> buf_A7 [],
	    ap_uint <8*4*16> buf_A8 [],
	    ap_uint <512> tin_meta [],
	    ap_uint <512> tout_meta [],
	    ap_uint <8*4*16> buf_B1 [],
	    ap_uint <8*4*16> buf_B2 [],
	    ap_uint <8*4*16> buf_B3 [],
	    ap_uint <8*4*16> buf_B4 [],
	    ap_uint <8*4*16> buf_B5 [],
	    ap_uint <8*4*16> buf_B6 [],
	    ap_uint <8*4*16> buf_B7 [],
	    ap_uint <8*4*16> buf_B8 [],
	    ap_uint <8*4*16> buf_D []
	    )

GQE partition kernel.



.. rubric:: Parameters:

.. list-table::
    :widths: 20 80

    *
        - k_depth

        - depth of each hash bucket in URAM

    *
        - col_index

        - index of input column

    *
        - bit_num

        - number of defined partition, log2(number of partition)

    *
        - tin_meta

        - input meta info

    *
        - tout_meta

        - output meta info

    *
        - buf_A

        - input table buffer

    *
        - buf_B

        - output table buffer

    *
        - buf_D

        - configuration buffer

