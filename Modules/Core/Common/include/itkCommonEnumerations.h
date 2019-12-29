/*=========================================================================
 *
 *  Copyright Insight Software Consortium
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *         http://www.apache.org/licenses/LICENSE-2.0.txt
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 *
 *=========================================================================*/

// Place common enumerations to be used throughout the toolkit here
#ifndef itkCommonEnumerations_h
#define itkCommonEnumerations_h

#include "itkIntTypes.h"

namespace itk
{
// Used in IO
/**\class IOPixelEnum
 * \ingroup ITKCommon
 * Enums used to manipulate the point/cell pixel type. The pixel type provides
 * context for automatic data conversions (for instance, RGB to
 * SCALAR, VECTOR to SCALAR). */
enum class IOPixelEnum : uint8_t
{
  UNKNOWNPIXELTYPE,
  SCALAR,
  RGB,
  RGBA,
  OFFSET,
  VECTOR,
  POINT,
  COVARIANTVECTOR,
  SYMMETRICSECONDRANKTENSOR,
  DIFFUSIONTENSOR3D,
  COMPLEX,
  FIXEDARRAY,
  ARRAY,
  MATRIX,
  VARIABLELENGTHVECTOR,
  VARIABLESIZEMATRIX
};

/**\class IOComponentEnum
 * \ingroup ITKCommon
 * Enums used to manipulate the component type. The component type
 * refers to the actual storage class associated with either a
 * SCALAR pixel type or elements of a compound pixel. */
enum class IOComponentEnum : uint8_t
{
  UNKNOWNCOMPONENTTYPE,
  UCHAR,
  CHAR,
  USHORT,
  SHORT,
  UINT,
  INT,
  ULONG,
  LONG,
  LONGLONG,
  ULONGLONG,
  FLOAT,
  DOUBLE,
  LDOUBLE
};

/**\class FileEnum
 * \ingroup ITKCommon
 * Enums used to specify write style: whether binary or ASCII. Some
 * subclasses use this, some ignore it. */
enum class FileEnum : uint8_t
{
  ASCII = 0,
  BINARY = 1,
  Binary = 1, // Spelling difference between IOMeshBase and IOImageBase
  TYPENOTAPPLICABLE = 2,
  TypeNotApplicable = 2 // Spelling difference between IOMeshBase and IOImageBase
};

/**\class ByteOrderEnum
 * \ingroup ITKCommon
 * Enums used to specify byte order; whether Big Endian or Little Endian.
 * Some subclasses use this, some ignore it. */
enum class ByteOrderEnum : uint8_t
{
  BigEndian,
  LittleEndian,
  OrderNotApplicable
};


/**\class CellGeometryEnum
 * \ingroup ITKCommon
 * Enums used to specify cell type */
enum class CellGeometryEnum : uint8_t
{
  VERTEX_CELL = 0,
  LINE_CELL = 1,
  TRIANGLE_CELL = 2,
  QUADRILATERAL_CELL = 3,
  POLYGON_CELL = 4,
  TETRAHEDRON_CELL = 5,
  HEXAHEDRON_CELL = 6,
  QUADRATIC_EDGE_CELL = 7,
  QUADRATIC_TRIANGLE_CELL = 8,
  LAST_ITK_CELL = 9,
  MAX_ITK_CELLS = 255
};

#if 0 // Temporary in case they are needed

#  if !defined(ITK_LEGACY_REMOVE)
/**Exposes enums values for backwards compatibility*/
static constexpr IOPixelEnum UNKNOWNPIXELTYPE = IOPixelEnum::UNKNOWNPIXELTYPE;
static constexpr IOPixelEnum SCALAR = IOPixelEnum::SCALAR;
static constexpr IOPixelEnum RGB = IOPixelEnum::RGB;
static constexpr IOPixelEnum RGBA = IOPixelEnum::RGBA;
static constexpr IOPixelEnum OFFSET = IOPixelEnum::OFFSET;
static constexpr IOPixelEnum VECTOR = IOPixelEnum::VECTOR;
static constexpr IOPixelEnum POINT = IOPixelEnum::POINT;
static constexpr IOPixelEnum COVARIANTVECTOR = IOPixelEnum::COVARIANTVECTOR;
static constexpr IOPixelEnum SYMMETRICSECONDRANKTENSOR = IOPixelEnum::SYMMETRICSECONDRANKTENSOR;
static constexpr IOPixelEnum DIFFUSIONTENSOR3D = IOPixelEnum::DIFFUSIONTENSOR3D;
static constexpr IOPixelEnum COMPLEX = IOPixelEnum::COMPLEX;
static constexpr IOPixelEnum FIXEDARRAY = IOPixelEnum::FIXEDARRAY;
static constexpr IOPixelEnum ARRAY = IOPixelEnum::ARRAY;
static constexpr IOPixelEnum MATRIX = IOPixelEnum::MATRIX;
static constexpr IOPixelEnum VARIABLELENGTHVECTOR = IOPixelEnum::VARIABLELENGTHVECTOR;
static constexpr IOPixelEnum VARIABLESIZEMATRIX = IOPixelEnum::VARIABLESIZEMATRIX;
#  endif

#  if !defined(ITK_LEGACY_REMOVE)
/**Exposes enums values for backwards compatibility*/
static constexpr IOComponentEnum UNKNOWNCOMPONENTTYPE = IOComponentEnum::UNKNOWNCOMPONENTTYPE;
static constexpr IOComponentEnum UCHAR = IOComponentEnum::UCHAR;
static constexpr IOComponentEnum CHAR = IOComponentEnum::CHAR;
static constexpr IOComponentEnum USHORT = IOComponentEnum::USHORT;
static constexpr IOComponentEnum SHORT = IOComponentEnum::SHORT;
static constexpr IOComponentEnum UINT = IOComponentEnum::UINT;
static constexpr IOComponentEnum INT = IOComponentEnum::INT;
static constexpr IOComponentEnum ULONG = IOComponentEnum::ULONG;
static constexpr IOComponentEnum LONG = IOComponentEnum::LONG;
static constexpr IOComponentEnum ULONGLONG = IOComponentEnum::ULONGLONG;
static constexpr IOComponentEnum LONGLONG = IOComponentEnum::LONGLONG;
static constexpr IOComponentEnum FLOAT = IOComponentEnum::FLOAT;
static constexpr IOComponentEnum DOUBLE = IOComponentEnum::DOUBLE;
static constexpr IOComponentEnum LDOUBLE = IOComponentEnum::LDOUBLE;
#  endif

#  if !defined(ITK_LEGACY_REMOVE)
/**Exposes enums values for backwards compatibility*/
static constexpr FileEnum ASCII = FileEnum::ASCII;
static constexpr FileEnum BINARY = FileEnum::BINARY;
static constexpr FileEnum Binary = FileEnum::Binary;
static constexpr FileEnum TYPENOTAPPLICABLE = FileEnum::TYPENOTAPPLICABLE;
static constexpr FileEnum TypeNotApplicable = FileEnum::TypeNotApplicable;
#  endif

#  if !defined(ITK_LEGACY_REMOVE)
/**Exposes enums values for backwards compatibility*/
static constexpr ByteOrderEnum BigEndian = ByteOrderEnum::BigEndian;
static constexpr ByteOrderEnum LittleEndian = ByteOrderEnum::LittleEndian;
static constexpr ByteOrderEnum OrderNotApplicable = ByteOrderEnum::OrderNotApplicable;
#  endif


#  if !defined(ITK_LEGACY_REMOVE)
/**Exposes enums values for backwards compatibility*/
static constexpr CellGeometryEnum VERTEX_CELL = CellGeometryEnum::VERTEX_CELL;
static constexpr CellGeometryEnum LINE_CELL = CellGeometryEnum::LINE_CELL;
static constexpr CellGeometryEnum TRIANGLE_CELL = CellGeometryEnum::TRIANGLE_CELL;
static constexpr CellGeometryEnum QUADRILATERAL_CELL = CellGeometryEnum::QUADRILATERAL_CELL;
static constexpr CellGeometryEnum POLYGON_CELL = CellGeometryEnum::POLYGON_CELL;
static constexpr CellGeometryEnum TETRAHEDRON_CELL = CellGeometryEnum::TETRAHEDRON_CELL;
static constexpr CellGeometryEnum HEXAHEDRON_CELL = CellGeometryEnum::HEXAHEDRON_CELL;
static constexpr CellGeometryEnum QUADRATIC_EDGE_CELL = CellGeometryEnum::QUADRATIC_EDGE_CELL;
static constexpr CellGeometryEnum QUADRATIC_TRIANGLE_CELL = CellGeometryEnum::QUADRATIC_TRIANGLE_CELL;
static constexpr CellGeometryEnum LAST_ITK_CELL = CellGeometryEnum::LAST_ITK_CELL;
static constexpr CellGeometryEnum MAX_ITK_CELLS = CellGeometryEnum::MAX_ITK_CELLS;
#  endif
#endif

} // namespace itk

#endif // itkCommonEnumerations_h
