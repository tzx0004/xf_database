.. index:: pair: class; xf::database::gqe::Table
.. _doxid-classxf_1_1database_1_1gqe_1_1_table:
.. _cid-xf::database::gqe::table:

class xf::database::gqe::Table
==============================

.. toctree::
	:hidden:

.. code-block:: cpp
	:class: overview-code-block

	#include "gqe_table.hpp"


Overview
~~~~~~~~

handling column-related works (name, section, pointer, etc.)

.. _doxid-classxf_1_1database_1_1gqe_1_1_table_1ae4347e88d1a29f428fbdf88ce4c87405:
.. _cid-xf::database::gqe::table::getvalcolpointer:
.. ref-code-block:: cpp
	:class: overview-code-block


Methods
~~~~~~~

.. FunctionSection

.. _doxid-classxf_1_1database_1_1gqe_1_1_table_1a81d6c691df2f1fffd9c38c3fa8962dc6:
.. _cid-xf::database::gqe::table::table:

Table
-----


.. ref-code-block:: cpp
	:class: title-code-block

	Table (std::string _name)

construct of :ref:`Table <doxid-classxf_1_1database_1_1gqe_1_1_table>` .



.. rubric:: Parameters:

.. list-table::
    :widths: 20 80

    *
        - _name

        - name of the table.

.. _doxid-classxf_1_1database_1_1gqe_1_1_table_1aecb11abfadae78c7f64783bbbb8290a2:
.. _cid-xf::database::gqe::table::addcol:

addCol
------


addCol overload (1)
+++++++++++++++++++


.. ref-code-block:: cpp
	:class: title-code-block

	void addCol (
	    std::string _name,
	    :ref:`TypeEnum<doxid-namespacexf_1_1database_1_1gqe_1a5365f96f233b0c2f45c92dbd750345d2>` type_size,
	    void* _ptr,
	    int row_num
	    )

add one column into the :ref:`Table <doxid-classxf_1_1database_1_1gqe_1_1_table>` with user-provided buffer pointer.

usage: tab.addCol("o_orderkey", :ref:`TypeEnum::TypeInt32 <doxid-namespacexf_1_1database_1_1gqe_1a5365f96f233b0c2f45c92dbd750345d2a5aa45c269a62299c4dd75c9a494bb731>` , tab_o_col0, 10000);



.. rubric:: Parameters:

.. list-table::
    :widths: 20 80

    *
        - _name

        - column name

    *
        - type_size

        - size of the column element data type in bytes

    *
        - _ptr

        - user-provided column buffer pointer

    *
        - row_num

        - number of rows

.. _doxid-classxf_1_1database_1_1gqe_1_1_table_1a0b9945acfb0c45dfa77981df9638936c:
.. _cid-xf::database::gqe::table::addcol-2:

addCol overload (2)
+++++++++++++++++++


.. ref-code-block:: cpp
	:class: title-code-block

	void addCol (
	    std::string _name,
	    :ref:`TypeEnum<doxid-namespacexf_1_1database_1_1gqe_1a5365f96f233b0c2f45c92dbd750345d2>` type_size,
	    int row_num
	    )

allocate buffer for one column and add it into the :ref:`Table <doxid-classxf_1_1database_1_1gqe_1_1_table>` .

usage: tab.addCol("o_orderkey", :ref:`TypeEnum::TypeInt32 <doxid-namespacexf_1_1database_1_1gqe_1a5365f96f233b0c2f45c92dbd750345d2a5aa45c269a62299c4dd75c9a494bb731>` , 10000);



.. rubric:: Parameters:

.. list-table::
    :widths: 20 80

    *
        - _name

        - column name

    *
        - type_size

        - size of the column element data type in bytes

    *
        - row_num

        - number of rows

.. _doxid-classxf_1_1database_1_1gqe_1_1_table_1a9db404881985e6e33e8c5509d7202965:
.. _cid-xf::database::gqe::table::addcol-3:

addCol overload (3)
+++++++++++++++++++


.. ref-code-block:: cpp
	:class: title-code-block

	void addCol (
	    std::string _name,
	    :ref:`TypeEnum<doxid-namespacexf_1_1database_1_1gqe_1a5365f96f233b0c2f45c92dbd750345d2>` type_size,
	    std::vector <std::string> dat_list
	    )

create one column with several sections by loading rows from data file.

usage: tab.addCol("o_orderkey", :ref:`TypeEnum::TypeInt32 <doxid-namespacexf_1_1database_1_1gqe_1a5365f96f233b0c2f45c92dbd750345d2a5aa45c269a62299c4dd75c9a494bb731>` , {file1.dat,file2.dat});



.. rubric:: Parameters:

.. list-table::
    :widths: 20 80

    *
        - _name

        - column name

    *
        - type_size

        - size of the column element data type in bytes

    *
        - dat_list

        - data file list

.. _doxid-classxf_1_1database_1_1gqe_1_1_table_1a4a9adadbb8136a0bf35cb9f529752e2b:
.. _cid-xf::database::gqe::table::addcol-4:

addCol overload (4)
+++++++++++++++++++


.. ref-code-block:: cpp
	:class: title-code-block

	void addCol (
	    std::string _name,
	    :ref:`TypeEnum<doxid-namespacexf_1_1database_1_1gqe_1a5365f96f233b0c2f45c92dbd750345d2>` type_size,
	    std::vector <struct :ref:`ColPtr<doxid-structxf_1_1database_1_1gqe_1_1_col_ptr>`> ptr_pairs
	    )

create one column with several sections by user-provided pointer list

usage: tab.addCol("o_orderkey", :ref:`TypeEnum::TypeInt32 <doxid-namespacexf_1_1database_1_1gqe_1a5365f96f233b0c2f45c92dbd750345d2a5aa45c269a62299c4dd75c9a494bb731>` , {{ptr1,10000},{ptr2,20000}});



.. rubric:: Parameters:

.. list-table::
    :widths: 20 80

    *
        - _name

        - column name

    *
        - type_size

        - size of the column element data type in bytes

    *
        - ptr_pairs

        - vector of (ptr,row_num) pairs

.. _doxid-classxf_1_1database_1_1gqe_1_1_table_1a6f499a32564587cdaae4713a59a8ad8c:
.. _cid-xf::database::gqe::table::genrowidwithvalidation:

genRowIDWithValidation
----------------------


genRowIDWithValidation overload (1)
+++++++++++++++++++++++++++++++++++


.. ref-code-block:: cpp
	:class: title-code-block

	void genRowIDWithValidation (
	    std::string _rowid_name,
	    std::string _valid_name,
	    bool _rowid_en,
	    bool _valid_en,
	    std::vector <char*> validationPtrVector
	    )

add validation column with user-provided validation pointer list

**Caution** This is an experimental-only API, will be deprecated in the next release.



.. rubric:: Parameters:

.. list-table::
    :widths: 20 80

    *
        - _rowid_name

        - name of row-id column

    *
        - _valid_name

        - name of validation bits column

    *
        - _rowid_en

        - enable flag of row-id

    *
        - _valid_en

        - enable flag of validation bits

    *
        - validationPtrVector

        - validation bits pointer list

.. _doxid-classxf_1_1database_1_1gqe_1_1_table_1a1e50b3dde5446b8dd64b3540a7aded98:
.. _cid-xf::database::gqe::table::genrowidwithvalidation-2:

genRowIDWithValidation overload (2)
+++++++++++++++++++++++++++++++++++


.. ref-code-block:: cpp
	:class: title-code-block

	void genRowIDWithValidation (
	    std::string _rowid_name,
	    std::string _valid_name,
	    bool _rowid_en,
	    bool _valid_en,
	    void* ptr,
	    int row_num
	    )

add validation column with user-provided pointer

**Caution** This is an experimental-only API, will be deprecated in the next release.



.. rubric:: Parameters:

.. list-table::
    :widths: 20 80

    *
        - _rowid_name

        - name of row-id column

    *
        - _valid_name

        - name of validation bits column

    *
        - _rowid_en

        - enable flag of row-id

    *
        - _valid_en

        - enable flag of validation bits

    *
        - ptr

        - validation bits column pointer

    *
        - row_num

        - number of rows

.. _doxid-classxf_1_1database_1_1gqe_1_1_table_1ab0b1e6d84f51e16875a56152ac37f6d5:
.. _cid-xf::database::gqe::table::genrowidwithvalidation-3:

genRowIDWithValidation overload (3)
+++++++++++++++++++++++++++++++++++


.. ref-code-block:: cpp
	:class: title-code-block

	void genRowIDWithValidation (
	    std::string _rowid_name,
	    std::string _valid_name,
	    bool _rowid_en,
	    bool _valid_en,
	    std::vector <std::string> dat_list
	    )

add validation column with user-provided data file list

**Caution** This is an experimental-only API, will be deprecated in the next release.



.. rubric:: Parameters:

.. list-table::
    :widths: 20 80

    *
        - _rowid_name

        - name of row-id column

    *
        - _valid_name

        - name of validation bits column

    *
        - _rowid_en

        - enable flag of row-id

    *
        - _valid_en

        - enable flag of validation bits

    *
        - dat_list

        - data file list

.. _doxid-classxf_1_1database_1_1gqe_1_1_table_1a8f9b4677129d43cb5ba95f862ee64cf2:
.. _cid-xf::database::gqe::table::setrownum:

setRowNum
---------


.. ref-code-block:: cpp
	:class: title-code-block

	void setRowNum (int _num)

set number of rows for the entire table.



.. rubric:: Parameters:

.. list-table::
    :widths: 20 80

    *
        - _num

        - number of rows of the entire table

.. _doxid-classxf_1_1database_1_1gqe_1_1_table_1aa32514f934ebc3b4f613af056bd002b8:
.. _cid-xf::database::gqe::table::getrownum:

getRowNum
---------


.. ref-code-block:: cpp
	:class: title-code-block

	size_t getRowNum () const

get number of rows of the entire table.



.. rubric:: Returns:

number of rows of the entire table

.. _doxid-classxf_1_1database_1_1gqe_1_1_table_1a4d4a0a361ea159232842e98999259211:
.. _cid-xf::database::gqe::table::getsecrownum:

getSecRowNum
------------


.. ref-code-block:: cpp
	:class: title-code-block

	size_t getSecRowNum (int sid) const

get number of rows for the specified section.



.. rubric:: Parameters:

.. list-table::
    :widths: 20 80

    *
        - sid

        - section ID



.. rubric:: Returns:

number of rows of the specified section

.. _doxid-classxf_1_1database_1_1gqe_1_1_table_1a79fc3e057ecac0dbea0209d69624d55f:
.. _cid-xf::database::gqe::table::getcolnum:

getColNum
---------


.. ref-code-block:: cpp
	:class: title-code-block

	size_t getColNum () const

get number of columns.



.. rubric:: Returns:

number of columns of the table.

.. _doxid-classxf_1_1database_1_1gqe_1_1_table_1a6533bf39db7d2af4c290e1014e66b9f9:
.. _cid-xf::database::gqe::table::getsecnum:

getSecNum
---------


.. ref-code-block:: cpp
	:class: title-code-block

	size_t getSecNum () const

get number of sections.



.. rubric:: Returns:

number of sections of the table.

.. _doxid-classxf_1_1database_1_1gqe_1_1_table_1a4901fb461c1bd875f142f5d56327515d:
.. _cid-xf::database::gqe::table::checksecnum:

checkSecNum
-----------


.. ref-code-block:: cpp
	:class: title-code-block

	void checkSecNum (int sec_l)

divide the columns evenly if section number is greater than 0.



.. rubric:: Parameters:

.. list-table::
    :widths: 20 80

    *
        - sec_l

        - number of sections, if 0, do nothing since everything is done by addCol with json input.

.. _doxid-classxf_1_1database_1_1gqe_1_1_table_1a70b045ce2b4ba3e7f53ac47470385a76:
.. _cid-xf::database::gqe::table::getcoltypesize:

getColTypeSize
--------------


.. ref-code-block:: cpp
	:class: title-code-block

	size_t getColTypeSize (int cid) const

get column data type size.



.. rubric:: Parameters:

.. list-table::
    :widths: 20 80

    *
        - cid

        - column ID



.. rubric:: Returns:

date type size of input column id.

.. _doxid-classxf_1_1database_1_1gqe_1_1_table_1ad70e677cc8a60cf824765dd0d42ac68c:
.. _cid-xf::database::gqe::table::getcolpointer:

getColPointer
-------------


.. ref-code-block:: cpp
	:class: title-code-block

	char* getColPointer (
	    int i,
	    int _slice_num,
	    int j = 0
	    ) const

get buffer pointer.

when getColPointer(2,4,1), it means the 2nd column was divied into 4 sections, return the pointer of the 2nd section



.. rubric:: Parameters:

.. list-table::
    :widths: 20 80

    *
        - i

        - column id

    *
        - _slice_num

        - divide column i into _slice_num parts

    *
        - j

        - get the j'th part pointer after dividing



.. rubric:: Returns:

column buffer pointer

.. _doxid-classxf_1_1database_1_1gqe_1_1_table_1a1e33e138857d20a75f5007c9ec5068ea:
.. _cid-xf::database::gqe::table::getvalcolpointer-2:

getValColPointer
----------------


getValColPointer overload (1)
+++++++++++++++++++++++++++++


.. ref-code-block:: cpp
	:class: title-code-block

	char* getValColPointer (
	    int _slice_num,
	    int j
	    ) const

get the validation buffer pointer



.. rubric:: Parameters:

.. list-table::
    :widths: 20 80

    *
        - _slice_num

        - number of sections of the validation column

    *
        - j

        - the index of the section



.. rubric:: Returns:

the pointer of the specified section

.. _doxid-classxf_1_1database_1_1gqe_1_1_table_1a7b6bab1d0032edbb8074a1510d5702ec:
.. _cid-xf::database::gqe::table::getcolpointer-2:

getColPointer
-------------


.. ref-code-block:: cpp
	:class: title-code-block

	char* getColPointer (int i) const

get column pointer.



.. rubric:: Parameters:

.. list-table::
    :widths: 20 80

    *
        - i

        - column id



.. rubric:: Returns:

column pointer

.. _doxid-classxf_1_1database_1_1gqe_1_1_table_1ad55e40d9135a66cced048a33bc4559e9:
.. _cid-xf::database::gqe::table::setcolnames:

setColNames
-----------


.. ref-code-block:: cpp
	:class: title-code-block

	void setColNames (std::vector <std::string> col_names)

set col_names



.. rubric:: Parameters:

.. list-table::
    :widths: 20 80

    *
        - col_name

        - column name list

.. _doxid-classxf_1_1database_1_1gqe_1_1_table_1a1bb1d127d2e93dc016a77f62da29f0fc:
.. _cid-xf::database::gqe::table::getcolnames:

getColNames
-----------


.. ref-code-block:: cpp
	:class: title-code-block

	std::vector <std::string> getColNames ()

get col_names



.. rubric:: Returns:

list of column names

.. _doxid-classxf_1_1database_1_1gqe_1_1_table_1a6ad3edf9c50f65bbc989b98e85456202:
.. _cid-xf::database::gqe::table::getrowidcolname:

getRowIDColName
---------------


.. ref-code-block:: cpp
	:class: title-code-block

	std::string getRowIDColName ()

get the name of the row-id column

.. _doxid-classxf_1_1database_1_1gqe_1_1_table_1a57cbf6ccdace23e60f3f860ea09e5a03:
.. _cid-xf::database::gqe::table::getvalidcolname:

getValidColName
---------------


.. ref-code-block:: cpp
	:class: title-code-block

	std::string getValidColName ()

get the name of the validation bits column

.. _doxid-classxf_1_1database_1_1gqe_1_1_table_1ae492806de81934fc180a119b887e0978:
.. _cid-xf::database::gqe::table::getrowidenableflag:

getRowIDEnableFlag
------------------


.. ref-code-block:: cpp
	:class: title-code-block

	bool getRowIDEnableFlag ()

get row-id enable flag

.. _doxid-classxf_1_1database_1_1gqe_1_1_table_1a08da60d1eb594df2793402dbe0a77aa9:
.. _cid-xf::database::gqe::table::getvalidenableflag:

getValidEnableFlag
------------------


.. ref-code-block:: cpp
	:class: title-code-block

	bool getValidEnableFlag ()

get validation bits enable flag

.. _doxid-classxf_1_1database_1_1gqe_1_1_table_1a28a340c8c4bc9d14d7f42d5086696095:
.. _cid-xf::database::gqe::table::~table:

~Table
------


.. ref-code-block:: cpp
	:class: title-code-block

	~Table ()

deconstructor of :ref:`Table <doxid-classxf_1_1database_1_1gqe_1_1_table>` .

.. _doxid-classxf_1_1database_1_1gqe_1_1_table_1a23fb976531c02f4815ea368f39e1dd93:
.. _cid-xf::database::gqe::table::info:

info
----


.. ref-code-block:: cpp
	:class: title-code-block

	void info ()

print information of the table

