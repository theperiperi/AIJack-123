// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: data.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_data_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_data_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3012000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3012004 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_data_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_data_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_data_2eproto;
namespace storage {
class Tuple;
class TupleDefaultTypeInternal;
extern TupleDefaultTypeInternal _Tuple_default_instance_;
class TupleData;
class TupleDataDefaultTypeInternal;
extern TupleDataDefaultTypeInternal _TupleData_default_instance_;
}  // namespace storage
PROTOBUF_NAMESPACE_OPEN
template<> ::storage::Tuple* Arena::CreateMaybeMessage<::storage::Tuple>(Arena*);
template<> ::storage::TupleData* Arena::CreateMaybeMessage<::storage::TupleData>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace storage {

enum TupleData_Type : int {
  TupleData_Type_INT = 0,
  TupleData_Type_STRING = 1,
  TupleData_Type_FLOAT = 2,
  TupleData_Type_TupleData_Type_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  TupleData_Type_TupleData_Type_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool TupleData_Type_IsValid(int value);
constexpr TupleData_Type TupleData_Type_Type_MIN = TupleData_Type_INT;
constexpr TupleData_Type TupleData_Type_Type_MAX = TupleData_Type_FLOAT;
constexpr int TupleData_Type_Type_ARRAYSIZE = TupleData_Type_Type_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* TupleData_Type_descriptor();
template<typename T>
inline const std::string& TupleData_Type_Name(T enum_t_value) {
  static_assert(::std::is_same<T, TupleData_Type>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function TupleData_Type_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    TupleData_Type_descriptor(), enum_t_value);
}
inline bool TupleData_Type_Parse(
    const std::string& name, TupleData_Type* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<TupleData_Type>(
    TupleData_Type_descriptor(), name, value);
}
// ===================================================================

class TupleData PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:storage.TupleData) */ {
 public:
  inline TupleData() : TupleData(nullptr) {};
  virtual ~TupleData();

  TupleData(const TupleData& from);
  TupleData(TupleData&& from) noexcept
    : TupleData() {
    *this = ::std::move(from);
  }

  inline TupleData& operator=(const TupleData& from) {
    CopyFrom(from);
    return *this;
  }
  inline TupleData& operator=(TupleData&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const TupleData& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const TupleData* internal_default_instance() {
    return reinterpret_cast<const TupleData*>(
               &_TupleData_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(TupleData& a, TupleData& b) {
    a.Swap(&b);
  }
  inline void Swap(TupleData* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(TupleData* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline TupleData* New() const final {
    return CreateMaybeMessage<TupleData>(nullptr);
  }

  TupleData* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<TupleData>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const TupleData& from);
  void MergeFrom(const TupleData& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(TupleData* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "storage.TupleData";
  }
  protected:
  explicit TupleData(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_data_2eproto);
    return ::descriptor_table_data_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  typedef TupleData_Type Type;
  static constexpr Type INT =
    TupleData_Type_INT;
  static constexpr Type STRING =
    TupleData_Type_STRING;
  static constexpr Type FLOAT =
    TupleData_Type_FLOAT;
  static inline bool Type_IsValid(int value) {
    return TupleData_Type_IsValid(value);
  }
  static constexpr Type Type_MIN =
    TupleData_Type_Type_MIN;
  static constexpr Type Type_MAX =
    TupleData_Type_Type_MAX;
  static constexpr int Type_ARRAYSIZE =
    TupleData_Type_Type_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  Type_descriptor() {
    return TupleData_Type_descriptor();
  }
  template<typename T>
  static inline const std::string& Type_Name(T enum_t_value) {
    static_assert(::std::is_same<T, Type>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function Type_Name.");
    return TupleData_Type_Name(enum_t_value);
  }
  static inline bool Type_Parse(const std::string& name,
      Type* value) {
    return TupleData_Type_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kTosFieldNumber = 5,
    kTypeFieldNumber = 3,
    kToiFieldNumber = 4,
    kTofFieldNumber = 6,
  };
  // string tos = 5;
  void clear_tos();
  const std::string& tos() const;
  void set_tos(const std::string& value);
  void set_tos(std::string&& value);
  void set_tos(const char* value);
  void set_tos(const char* value, size_t size);
  std::string* mutable_tos();
  std::string* release_tos();
  void set_allocated_tos(std::string* tos);
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  std::string* unsafe_arena_release_tos();
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_tos(
      std::string* tos);
  private:
  const std::string& _internal_tos() const;
  void _internal_set_tos(const std::string& value);
  std::string* _internal_mutable_tos();
  public:

  // .storage.TupleData.Type type = 3;
  void clear_type();
  ::storage::TupleData_Type type() const;
  void set_type(::storage::TupleData_Type value);
  private:
  ::storage::TupleData_Type _internal_type() const;
  void _internal_set_type(::storage::TupleData_Type value);
  public:

  // int32 toi = 4;
  void clear_toi();
  ::PROTOBUF_NAMESPACE_ID::int32 toi() const;
  void set_toi(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_toi() const;
  void _internal_set_toi(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // float tof = 6;
  void clear_tof();
  float tof() const;
  void set_tof(float value);
  private:
  float _internal_tof() const;
  void _internal_set_tof(float value);
  public:

  // @@protoc_insertion_point(class_scope:storage.TupleData)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr tos_;
  int type_;
  ::PROTOBUF_NAMESPACE_ID::int32 toi_;
  float tof_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_data_2eproto;
};
// -------------------------------------------------------------------

class Tuple PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:storage.Tuple) */ {
 public:
  inline Tuple() : Tuple(nullptr) {};
  virtual ~Tuple();

  Tuple(const Tuple& from);
  Tuple(Tuple&& from) noexcept
    : Tuple() {
    *this = ::std::move(from);
  }

  inline Tuple& operator=(const Tuple& from) {
    CopyFrom(from);
    return *this;
  }
  inline Tuple& operator=(Tuple&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Tuple& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Tuple* internal_default_instance() {
    return reinterpret_cast<const Tuple*>(
               &_Tuple_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(Tuple& a, Tuple& b) {
    a.Swap(&b);
  }
  inline void Swap(Tuple* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Tuple* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Tuple* New() const final {
    return CreateMaybeMessage<Tuple>(nullptr);
  }

  Tuple* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Tuple>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Tuple& from);
  void MergeFrom(const Tuple& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Tuple* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "storage.Tuple";
  }
  protected:
  explicit Tuple(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_data_2eproto);
    return ::descriptor_table_data_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kDataFieldNumber = 3,
    kMinTxIdFieldNumber = 1,
    kMaxTxIdFieldNumber = 2,
  };
  // repeated .storage.TupleData data = 3;
  int data_size() const;
  private:
  int _internal_data_size() const;
  public:
  void clear_data();
  ::storage::TupleData* mutable_data(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::storage::TupleData >*
      mutable_data();
  private:
  const ::storage::TupleData& _internal_data(int index) const;
  ::storage::TupleData* _internal_add_data();
  public:
  const ::storage::TupleData& data(int index) const;
  ::storage::TupleData* add_data();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::storage::TupleData >&
      data() const;

  // uint64 minTxId = 1;
  void clear_mintxid();
  ::PROTOBUF_NAMESPACE_ID::uint64 mintxid() const;
  void set_mintxid(::PROTOBUF_NAMESPACE_ID::uint64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint64 _internal_mintxid() const;
  void _internal_set_mintxid(::PROTOBUF_NAMESPACE_ID::uint64 value);
  public:

  // uint64 maxTxId = 2;
  void clear_maxtxid();
  ::PROTOBUF_NAMESPACE_ID::uint64 maxtxid() const;
  void set_maxtxid(::PROTOBUF_NAMESPACE_ID::uint64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint64 _internal_maxtxid() const;
  void _internal_set_maxtxid(::PROTOBUF_NAMESPACE_ID::uint64 value);
  public:

  // @@protoc_insertion_point(class_scope:storage.Tuple)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::storage::TupleData > data_;
  ::PROTOBUF_NAMESPACE_ID::uint64 mintxid_;
  ::PROTOBUF_NAMESPACE_ID::uint64 maxtxid_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_data_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// TupleData

// .storage.TupleData.Type type = 3;
inline void TupleData::clear_type() {
  type_ = 0;
}
inline ::storage::TupleData_Type TupleData::_internal_type() const {
  return static_cast< ::storage::TupleData_Type >(type_);
}
inline ::storage::TupleData_Type TupleData::type() const {
  // @@protoc_insertion_point(field_get:storage.TupleData.type)
  return _internal_type();
}
inline void TupleData::_internal_set_type(::storage::TupleData_Type value) {
  
  type_ = value;
}
inline void TupleData::set_type(::storage::TupleData_Type value) {
  _internal_set_type(value);
  // @@protoc_insertion_point(field_set:storage.TupleData.type)
}

// int32 toi = 4;
inline void TupleData::clear_toi() {
  toi_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 TupleData::_internal_toi() const {
  return toi_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 TupleData::toi() const {
  // @@protoc_insertion_point(field_get:storage.TupleData.toi)
  return _internal_toi();
}
inline void TupleData::_internal_set_toi(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  toi_ = value;
}
inline void TupleData::set_toi(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_toi(value);
  // @@protoc_insertion_point(field_set:storage.TupleData.toi)
}

// string tos = 5;
inline void TupleData::clear_tos() {
  tos_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& TupleData::tos() const {
  // @@protoc_insertion_point(field_get:storage.TupleData.tos)
  return _internal_tos();
}
inline void TupleData::set_tos(const std::string& value) {
  _internal_set_tos(value);
  // @@protoc_insertion_point(field_set:storage.TupleData.tos)
}
inline std::string* TupleData::mutable_tos() {
  // @@protoc_insertion_point(field_mutable:storage.TupleData.tos)
  return _internal_mutable_tos();
}
inline const std::string& TupleData::_internal_tos() const {
  return tos_.Get();
}
inline void TupleData::_internal_set_tos(const std::string& value) {
  
  tos_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void TupleData::set_tos(std::string&& value) {
  
  tos_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:storage.TupleData.tos)
}
inline void TupleData::set_tos(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  tos_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:storage.TupleData.tos)
}
inline void TupleData::set_tos(const char* value,
    size_t size) {
  
  tos_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:storage.TupleData.tos)
}
inline std::string* TupleData::_internal_mutable_tos() {
  
  return tos_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* TupleData::release_tos() {
  // @@protoc_insertion_point(field_release:storage.TupleData.tos)
  return tos_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void TupleData::set_allocated_tos(std::string* tos) {
  if (tos != nullptr) {
    
  } else {
    
  }
  tos_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), tos,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:storage.TupleData.tos)
}
inline std::string* TupleData::unsafe_arena_release_tos() {
  // @@protoc_insertion_point(field_unsafe_arena_release:storage.TupleData.tos)
  GOOGLE_DCHECK(GetArena() != nullptr);
  
  return tos_.UnsafeArenaRelease(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
}
inline void TupleData::unsafe_arena_set_allocated_tos(
    std::string* tos) {
  GOOGLE_DCHECK(GetArena() != nullptr);
  if (tos != nullptr) {
    
  } else {
    
  }
  tos_.UnsafeArenaSetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      tos, GetArena());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:storage.TupleData.tos)
}

// float tof = 6;
inline void TupleData::clear_tof() {
  tof_ = 0;
}
inline float TupleData::_internal_tof() const {
  return tof_;
}
inline float TupleData::tof() const {
  // @@protoc_insertion_point(field_get:storage.TupleData.tof)
  return _internal_tof();
}
inline void TupleData::_internal_set_tof(float value) {
  
  tof_ = value;
}
inline void TupleData::set_tof(float value) {
  _internal_set_tof(value);
  // @@protoc_insertion_point(field_set:storage.TupleData.tof)
}

// -------------------------------------------------------------------

// Tuple

// uint64 minTxId = 1;
inline void Tuple::clear_mintxid() {
  mintxid_ = PROTOBUF_ULONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 Tuple::_internal_mintxid() const {
  return mintxid_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 Tuple::mintxid() const {
  // @@protoc_insertion_point(field_get:storage.Tuple.minTxId)
  return _internal_mintxid();
}
inline void Tuple::_internal_set_mintxid(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  
  mintxid_ = value;
}
inline void Tuple::set_mintxid(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  _internal_set_mintxid(value);
  // @@protoc_insertion_point(field_set:storage.Tuple.minTxId)
}

// uint64 maxTxId = 2;
inline void Tuple::clear_maxtxid() {
  maxtxid_ = PROTOBUF_ULONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 Tuple::_internal_maxtxid() const {
  return maxtxid_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 Tuple::maxtxid() const {
  // @@protoc_insertion_point(field_get:storage.Tuple.maxTxId)
  return _internal_maxtxid();
}
inline void Tuple::_internal_set_maxtxid(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  
  maxtxid_ = value;
}
inline void Tuple::set_maxtxid(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  _internal_set_maxtxid(value);
  // @@protoc_insertion_point(field_set:storage.Tuple.maxTxId)
}

// repeated .storage.TupleData data = 3;
inline int Tuple::_internal_data_size() const {
  return data_.size();
}
inline int Tuple::data_size() const {
  return _internal_data_size();
}
inline void Tuple::clear_data() {
  data_.Clear();
}
inline ::storage::TupleData* Tuple::mutable_data(int index) {
  // @@protoc_insertion_point(field_mutable:storage.Tuple.data)
  return data_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::storage::TupleData >*
Tuple::mutable_data() {
  // @@protoc_insertion_point(field_mutable_list:storage.Tuple.data)
  return &data_;
}
inline const ::storage::TupleData& Tuple::_internal_data(int index) const {
  return data_.Get(index);
}
inline const ::storage::TupleData& Tuple::data(int index) const {
  // @@protoc_insertion_point(field_get:storage.Tuple.data)
  return _internal_data(index);
}
inline ::storage::TupleData* Tuple::_internal_add_data() {
  return data_.Add();
}
inline ::storage::TupleData* Tuple::add_data() {
  // @@protoc_insertion_point(field_add:storage.Tuple.data)
  return _internal_add_data();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::storage::TupleData >&
Tuple::data() const {
  // @@protoc_insertion_point(field_list:storage.Tuple.data)
  return data_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace storage

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::storage::TupleData_Type> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::storage::TupleData_Type>() {
  return ::storage::TupleData_Type_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_data_2eproto