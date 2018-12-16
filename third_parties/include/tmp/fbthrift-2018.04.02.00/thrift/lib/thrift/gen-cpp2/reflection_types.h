/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/GeneratedHeaderHelper.h>
#include <thrift/lib/cpp2/Thrift.h>
#include <thrift/lib/cpp2/protocol/Protocol.h>

#include <unordered_map>

// BEGIN declare_enums
namespace apache { namespace thrift { namespace reflection {

enum class Type {
  TYPE_VOID = 0,
  TYPE_STRING = 1,
  TYPE_BOOL = 2,
  TYPE_BYTE = 3,
  TYPE_I16 = 4,
  TYPE_I32 = 5,
  TYPE_I64 = 6,
  TYPE_DOUBLE = 7,
  TYPE_ENUM = 8,
  TYPE_LIST = 9,
  TYPE_SET = 10,
  TYPE_MAP = 11,
  TYPE_STRUCT = 12,
  TYPE_SERVICE = 13,
  TYPE_PROGRAM = 14,
  TYPE_FLOAT = 15
};

using _Type_EnumMapFactory = apache::thrift::detail::TEnumMapFactory<Type, Type>;
extern const _Type_EnumMapFactory::ValuesToNamesMapType _Type_VALUES_TO_NAMES;
extern const _Type_EnumMapFactory::NamesToValuesMapType _Type_NAMES_TO_VALUES;



}}} // apache::thrift::reflection
namespace std {


template<> struct hash<typename  ::apache::thrift::reflection::Type> : public apache::thrift::detail::enum_hash<typename  ::apache::thrift::reflection::Type> {};
template<> struct equal_to<typename  ::apache::thrift::reflection::Type> : public apache::thrift::detail::enum_equal_to<typename  ::apache::thrift::reflection::Type> {};


} // std

namespace apache { namespace thrift {


template <> struct TEnumDataStorage< ::apache::thrift::reflection::Type>;
template <> const std::size_t TEnumTraits< ::apache::thrift::reflection::Type>::size;
template <> const folly::Range<const  ::apache::thrift::reflection::Type*> TEnumTraits< ::apache::thrift::reflection::Type>::values;
template <> const folly::Range<const folly::StringPiece*> TEnumTraits< ::apache::thrift::reflection::Type>::names;
template <> const char* TEnumTraits< ::apache::thrift::reflection::Type>::findName( ::apache::thrift::reflection::Type value);
template <> bool TEnumTraits< ::apache::thrift::reflection::Type>::findValue(const char* name,  ::apache::thrift::reflection::Type* outValue);

template <> inline constexpr  ::apache::thrift::reflection::Type TEnumTraits< ::apache::thrift::reflection::Type>::min() {
  return  ::apache::thrift::reflection::Type::TYPE_VOID;
}

template <> inline constexpr  ::apache::thrift::reflection::Type TEnumTraits< ::apache::thrift::reflection::Type>::max() {
  return  ::apache::thrift::reflection::Type::TYPE_FLOAT;
}


}} // apache::thrift


// END declare_enums
// BEGIN struct_indirection

// END struct_indirection
// BEGIN forward_declare
namespace apache { namespace thrift { namespace reflection {
class StructField;
class DataType;
class Schema;
}}} // apache::thrift::reflection
// END forward_declare
// BEGIN typedefs

// END typedefs
// BEGIN hash_and_equal_to
// END hash_and_equal_to
namespace apache { namespace thrift { namespace reflection {
class StructField final : private apache::thrift::detail::st::ComparisonOperators<StructField> {
 public:

  StructField();

  // FragileConstructor for use in initialization lists only.
  StructField(apache::thrift::FragileConstructor, bool isRequired__arg, int64_t type__arg, std::string name__arg, std::unordered_map<std::string, std::string> annotations__arg, int16_t order__arg);
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  StructField(::apache::thrift::detail::argument_wrapper<1, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    StructField(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    isRequired = arg.move();
    __isset.isRequired = true;
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  StructField(::apache::thrift::detail::argument_wrapper<2, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    StructField(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    type = arg.move();
    __isset.type = true;
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  StructField(::apache::thrift::detail::argument_wrapper<3, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    StructField(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    name = arg.move();
    __isset.name = true;
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  StructField(::apache::thrift::detail::argument_wrapper<4, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    StructField(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    annotations = arg.move();
    __isset.annotations = true;
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  StructField(::apache::thrift::detail::argument_wrapper<5, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    StructField(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    order = arg.move();
    __isset.order = true;
  }

  StructField(StructField&&) = default;

  StructField(const StructField&) = default;

  StructField& operator=(StructField&&) = default;

  StructField& operator=(const StructField&) = default;
  void __clear();

  ~StructField();

  bool isRequired;
  int64_t type;
  std::string name;
  std::unordered_map<std::string, std::string> annotations;
  int16_t order;

  struct __isset {
    bool isRequired;
    bool type;
    bool name;
    bool annotations;
    bool order;
  } __isset = {};
  bool operator==(const StructField& rhs) const;
  bool operator < (const StructField& rhs) const;

  bool get_isRequired() const {
    return isRequired;
  }

  bool& set_isRequired(bool isRequired_) {
    isRequired = isRequired_;
    __isset.isRequired = true;
    return isRequired;
  }

  int64_t get_type() const {
    return type;
  }

  int64_t& set_type(int64_t type_) {
    type = type_;
    __isset.type = true;
    return type;
  }

  const std::string& get_name() const& {
    return name;
  }

  std::string get_name() && {
    return std::move(name);
  }

  template <typename T_StructField_name_struct_setter = std::string>
  std::string& set_name(T_StructField_name_struct_setter&& name_) {
    name = std::forward<T_StructField_name_struct_setter>(name_);
    __isset.name = true;
    return name;
  }
  const std::unordered_map<std::string, std::string>* get_annotations() const&;
  std::unordered_map<std::string, std::string>* get_annotations() &;
  std::unordered_map<std::string, std::string>* get_annotations() && = delete;

  template <typename T_StructField_annotations_struct_setter = std::unordered_map<std::string, std::string>>
  std::unordered_map<std::string, std::string>& set_annotations(T_StructField_annotations_struct_setter&& annotations_) {
    annotations = std::forward<T_StructField_annotations_struct_setter>(annotations_);
    __isset.annotations = true;
    return annotations;
  }

  int16_t get_order() const {
    return order;
  }

  int16_t& set_order(int16_t order_) {
    order = order_;
    __isset.order = true;
    return order;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  static void translateFieldName(FOLLY_MAYBE_UNUSED folly::StringPiece _fname, FOLLY_MAYBE_UNUSED int16_t& fid, FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype);

  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops< StructField >;
};

void swap(StructField& a, StructField& b);
extern template void StructField::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t StructField::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t StructField::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t StructField::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template void StructField::readNoXfer<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t StructField::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t StructField::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t StructField::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

template <class Protocol_>
uint32_t StructField::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCurrentPosition().getCurrentPosition();
  readNoXfer(iprot);
  return iprot->getCurrentPosition().getCurrentPosition() - _xferStart;
}

}}} // apache::thrift::reflection
namespace apache { namespace thrift {

template <> inline void Cpp2Ops< ::apache::thrift::reflection::StructField>::clear( ::apache::thrift::reflection::StructField* obj) {
  return obj->__clear();
}

template <> inline constexpr apache::thrift::protocol::TType Cpp2Ops< ::apache::thrift::reflection::StructField>::thriftType() {
  return apache::thrift::protocol::T_STRUCT;
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::apache::thrift::reflection::StructField>::write(Protocol* proto,  ::apache::thrift::reflection::StructField const* obj) {
  return obj->write(proto);
}

template <> template <class Protocol> void Cpp2Ops< ::apache::thrift::reflection::StructField>::read(Protocol* proto,  ::apache::thrift::reflection::StructField* obj) {
  return obj->readNoXfer(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::apache::thrift::reflection::StructField>::serializedSize(Protocol const* proto,  ::apache::thrift::reflection::StructField const* obj) {
  return obj->serializedSize(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::apache::thrift::reflection::StructField>::serializedSizeZC(Protocol const* proto,  ::apache::thrift::reflection::StructField const* obj) {
  return obj->serializedSizeZC(proto);
}

}} // apache::thrift
namespace apache { namespace thrift { namespace reflection {
class DataType final : private apache::thrift::detail::st::ComparisonOperators<DataType> {
 public:

  DataType();

  // FragileConstructor for use in initialization lists only.
  DataType(apache::thrift::FragileConstructor, std::string name__arg, std::unordered_map<int16_t,  ::apache::thrift::reflection::StructField> fields__arg, int64_t mapKeyType__arg, int64_t valueType__arg, std::unordered_map<std::string, int32_t> enumValues__arg);
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  DataType(::apache::thrift::detail::argument_wrapper<1, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    DataType(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    name = arg.move();
    __isset.name = true;
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  DataType(::apache::thrift::detail::argument_wrapper<2, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    DataType(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    fields = arg.move();
    __isset.fields = true;
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  DataType(::apache::thrift::detail::argument_wrapper<3, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    DataType(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    mapKeyType = arg.move();
    __isset.mapKeyType = true;
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  DataType(::apache::thrift::detail::argument_wrapper<4, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    DataType(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    valueType = arg.move();
    __isset.valueType = true;
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  DataType(::apache::thrift::detail::argument_wrapper<5, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    DataType(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    enumValues = arg.move();
    __isset.enumValues = true;
  }

  DataType(DataType&&) = default;

  DataType(const DataType&) = default;

  DataType& operator=(DataType&&) = default;

  DataType& operator=(const DataType&) = default;
  void __clear();

  ~DataType();

  std::string name;
  std::unordered_map<int16_t,  ::apache::thrift::reflection::StructField> fields;
  int64_t mapKeyType;
  int64_t valueType;
  std::unordered_map<std::string, int32_t> enumValues;

  struct __isset {
    bool name;
    bool fields;
    bool mapKeyType;
    bool valueType;
    bool enumValues;
  } __isset = {};
  bool operator==(const DataType& rhs) const;
  bool operator < (const DataType& rhs) const;

  const std::string& get_name() const& {
    return name;
  }

  std::string get_name() && {
    return std::move(name);
  }

  template <typename T_DataType_name_struct_setter = std::string>
  std::string& set_name(T_DataType_name_struct_setter&& name_) {
    name = std::forward<T_DataType_name_struct_setter>(name_);
    __isset.name = true;
    return name;
  }
  const std::unordered_map<int16_t,  ::apache::thrift::reflection::StructField>* get_fields() const&;
  std::unordered_map<int16_t,  ::apache::thrift::reflection::StructField>* get_fields() &;
  std::unordered_map<int16_t,  ::apache::thrift::reflection::StructField>* get_fields() && = delete;

  template <typename T_DataType_fields_struct_setter = std::unordered_map<int16_t,  ::apache::thrift::reflection::StructField>>
  std::unordered_map<int16_t,  ::apache::thrift::reflection::StructField>& set_fields(T_DataType_fields_struct_setter&& fields_) {
    fields = std::forward<T_DataType_fields_struct_setter>(fields_);
    __isset.fields = true;
    return fields;
  }

  const int64_t* get_mapKeyType() const& {
    return __isset.mapKeyType ? std::addressof(mapKeyType) : nullptr;
  }

  int64_t* get_mapKeyType() & {
    return __isset.mapKeyType ? std::addressof(mapKeyType) : nullptr;
  }
  int64_t* get_mapKeyType() && = delete;

  int64_t& set_mapKeyType(int64_t mapKeyType_) {
    mapKeyType = mapKeyType_;
    __isset.mapKeyType = true;
    return mapKeyType;
  }

  const int64_t* get_valueType() const& {
    return __isset.valueType ? std::addressof(valueType) : nullptr;
  }

  int64_t* get_valueType() & {
    return __isset.valueType ? std::addressof(valueType) : nullptr;
  }
  int64_t* get_valueType() && = delete;

  int64_t& set_valueType(int64_t valueType_) {
    valueType = valueType_;
    __isset.valueType = true;
    return valueType;
  }
  const std::unordered_map<std::string, int32_t>* get_enumValues() const&;
  std::unordered_map<std::string, int32_t>* get_enumValues() &;
  std::unordered_map<std::string, int32_t>* get_enumValues() && = delete;

  template <typename T_DataType_enumValues_struct_setter = std::unordered_map<std::string, int32_t>>
  std::unordered_map<std::string, int32_t>& set_enumValues(T_DataType_enumValues_struct_setter&& enumValues_) {
    enumValues = std::forward<T_DataType_enumValues_struct_setter>(enumValues_);
    __isset.enumValues = true;
    return enumValues;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  static void translateFieldName(FOLLY_MAYBE_UNUSED folly::StringPiece _fname, FOLLY_MAYBE_UNUSED int16_t& fid, FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype);

  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops< DataType >;
};

void swap(DataType& a, DataType& b);
extern template void DataType::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t DataType::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t DataType::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t DataType::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template void DataType::readNoXfer<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t DataType::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t DataType::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t DataType::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

template <class Protocol_>
uint32_t DataType::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCurrentPosition().getCurrentPosition();
  readNoXfer(iprot);
  return iprot->getCurrentPosition().getCurrentPosition() - _xferStart;
}

}}} // apache::thrift::reflection
namespace apache { namespace thrift {

template <> inline void Cpp2Ops< ::apache::thrift::reflection::DataType>::clear( ::apache::thrift::reflection::DataType* obj) {
  return obj->__clear();
}

template <> inline constexpr apache::thrift::protocol::TType Cpp2Ops< ::apache::thrift::reflection::DataType>::thriftType() {
  return apache::thrift::protocol::T_STRUCT;
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::apache::thrift::reflection::DataType>::write(Protocol* proto,  ::apache::thrift::reflection::DataType const* obj) {
  return obj->write(proto);
}

template <> template <class Protocol> void Cpp2Ops< ::apache::thrift::reflection::DataType>::read(Protocol* proto,  ::apache::thrift::reflection::DataType* obj) {
  return obj->readNoXfer(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::apache::thrift::reflection::DataType>::serializedSize(Protocol const* proto,  ::apache::thrift::reflection::DataType const* obj) {
  return obj->serializedSize(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::apache::thrift::reflection::DataType>::serializedSizeZC(Protocol const* proto,  ::apache::thrift::reflection::DataType const* obj) {
  return obj->serializedSizeZC(proto);
}

}} // apache::thrift
namespace apache { namespace thrift { namespace reflection {
class Schema final : private apache::thrift::detail::st::ComparisonOperators<Schema> {
 public:

  Schema() {}
  // FragileConstructor for use in initialization lists only.
  Schema(apache::thrift::FragileConstructor, std::unordered_map<int64_t,  ::apache::thrift::reflection::DataType> dataTypes__arg, std::unordered_map<std::string, int64_t> names__arg);
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  Schema(::apache::thrift::detail::argument_wrapper<1, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    Schema(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    dataTypes = arg.move();
    __isset.dataTypes = true;
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  Schema(::apache::thrift::detail::argument_wrapper<2, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    Schema(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    names = arg.move();
    __isset.names = true;
  }

  Schema(Schema&&) = default;

  Schema(const Schema&) = default;

  Schema& operator=(Schema&&) = default;

  Schema& operator=(const Schema&) = default;
  void __clear();
  std::unordered_map<int64_t,  ::apache::thrift::reflection::DataType> dataTypes;
  std::unordered_map<std::string, int64_t> names;

  struct __isset {
    bool dataTypes;
    bool names;
  } __isset = {};
  bool operator==(const Schema& rhs) const;
  bool operator < (const Schema& rhs) const;
  const std::unordered_map<int64_t,  ::apache::thrift::reflection::DataType>& get_dataTypes() const&;
  std::unordered_map<int64_t,  ::apache::thrift::reflection::DataType> get_dataTypes() &&;

  template <typename T_Schema_dataTypes_struct_setter = std::unordered_map<int64_t,  ::apache::thrift::reflection::DataType>>
  std::unordered_map<int64_t,  ::apache::thrift::reflection::DataType>& set_dataTypes(T_Schema_dataTypes_struct_setter&& dataTypes_) {
    dataTypes = std::forward<T_Schema_dataTypes_struct_setter>(dataTypes_);
    __isset.dataTypes = true;
    return dataTypes;
  }
  const std::unordered_map<std::string, int64_t>& get_names() const&;
  std::unordered_map<std::string, int64_t> get_names() &&;

  template <typename T_Schema_names_struct_setter = std::unordered_map<std::string, int64_t>>
  std::unordered_map<std::string, int64_t>& set_names(T_Schema_names_struct_setter&& names_) {
    names = std::forward<T_Schema_names_struct_setter>(names_);
    __isset.names = true;
    return names;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  static void translateFieldName(FOLLY_MAYBE_UNUSED folly::StringPiece _fname, FOLLY_MAYBE_UNUSED int16_t& fid, FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype);

  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops< Schema >;
};

void swap(Schema& a, Schema& b);
extern template void Schema::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t Schema::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t Schema::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t Schema::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template void Schema::readNoXfer<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t Schema::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t Schema::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t Schema::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

template <class Protocol_>
uint32_t Schema::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCurrentPosition().getCurrentPosition();
  readNoXfer(iprot);
  return iprot->getCurrentPosition().getCurrentPosition() - _xferStart;
}

}}} // apache::thrift::reflection
namespace apache { namespace thrift {

template <> inline void Cpp2Ops< ::apache::thrift::reflection::Schema>::clear( ::apache::thrift::reflection::Schema* obj) {
  return obj->__clear();
}

template <> inline constexpr apache::thrift::protocol::TType Cpp2Ops< ::apache::thrift::reflection::Schema>::thriftType() {
  return apache::thrift::protocol::T_STRUCT;
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::apache::thrift::reflection::Schema>::write(Protocol* proto,  ::apache::thrift::reflection::Schema const* obj) {
  return obj->write(proto);
}

template <> template <class Protocol> void Cpp2Ops< ::apache::thrift::reflection::Schema>::read(Protocol* proto,  ::apache::thrift::reflection::Schema* obj) {
  return obj->readNoXfer(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::apache::thrift::reflection::Schema>::serializedSize(Protocol const* proto,  ::apache::thrift::reflection::Schema const* obj) {
  return obj->serializedSize(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::apache::thrift::reflection::Schema>::serializedSizeZC(Protocol const* proto,  ::apache::thrift::reflection::Schema const* obj) {
  return obj->serializedSizeZC(proto);
}

}} // apache::thrift