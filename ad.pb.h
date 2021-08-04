// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ad.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_ad_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_ad_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3017000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3017003 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_ad_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_ad_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[3]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ad_2eproto;
class Ad;
struct AdDefaultTypeInternal;
extern AdDefaultTypeInternal _Ad_default_instance_;
class AdList;
struct AdListDefaultTypeInternal;
extern AdListDefaultTypeInternal _AdList_default_instance_;
class AdTargetItem;
struct AdTargetItemDefaultTypeInternal;
extern AdTargetItemDefaultTypeInternal _AdTargetItem_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::Ad* Arena::CreateMaybeMessage<::Ad>(Arena*);
template<> ::AdList* Arena::CreateMaybeMessage<::AdList>(Arena*);
template<> ::AdTargetItem* Arena::CreateMaybeMessage<::AdTargetItem>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

enum AdTargetOperator : int {
  IN = 1,
  GT = 2,
  LT = 3,
  BETWEEN = 4,
  DistanceLT = 5,
  GTE = 6,
  LTE = 7
};
bool AdTargetOperator_IsValid(int value);
constexpr AdTargetOperator AdTargetOperator_MIN = IN;
constexpr AdTargetOperator AdTargetOperator_MAX = LTE;
constexpr int AdTargetOperator_ARRAYSIZE = AdTargetOperator_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* AdTargetOperator_descriptor();
template<typename T>
inline const std::string& AdTargetOperator_Name(T enum_t_value) {
  static_assert(::std::is_same<T, AdTargetOperator>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function AdTargetOperator_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    AdTargetOperator_descriptor(), enum_t_value);
}
inline bool AdTargetOperator_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, AdTargetOperator* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<AdTargetOperator>(
    AdTargetOperator_descriptor(), name, value);
}
// ===================================================================

class AdTargetItem final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AdTargetItem) */ {
 public:
  inline AdTargetItem() : AdTargetItem(nullptr) {}
  ~AdTargetItem() override;
  explicit constexpr AdTargetItem(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  AdTargetItem(const AdTargetItem& from);
  AdTargetItem(AdTargetItem&& from) noexcept
    : AdTargetItem() {
    *this = ::std::move(from);
  }

  inline AdTargetItem& operator=(const AdTargetItem& from) {
    CopyFrom(from);
    return *this;
  }
  inline AdTargetItem& operator=(AdTargetItem&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const AdTargetItem& default_instance() {
    return *internal_default_instance();
  }
  static inline const AdTargetItem* internal_default_instance() {
    return reinterpret_cast<const AdTargetItem*>(
               &_AdTargetItem_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(AdTargetItem& a, AdTargetItem& b) {
    a.Swap(&b);
  }
  inline void Swap(AdTargetItem* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(AdTargetItem* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline AdTargetItem* New() const final {
    return new AdTargetItem();
  }

  AdTargetItem* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<AdTargetItem>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const AdTargetItem& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const AdTargetItem& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message*to, const ::PROTOBUF_NAMESPACE_ID::Message&from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(AdTargetItem* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AdTargetItem";
  }
  protected:
  explicit AdTargetItem(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kValueFieldNumber = 2,
    kFieldNameFieldNumber = 1,
    kReverseFieldNumber = 3,
    kOpFieldNumber = 4,
  };
  // repeated int64 value = 2;
  int value_size() const;
  private:
  int _internal_value_size() const;
  public:
  void clear_value();
  private:
  ::PROTOBUF_NAMESPACE_ID::int64 _internal_value(int index) const;
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int64 >&
      _internal_value() const;
  void _internal_add_value(::PROTOBUF_NAMESPACE_ID::int64 value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int64 >*
      _internal_mutable_value();
  public:
  ::PROTOBUF_NAMESPACE_ID::int64 value(int index) const;
  void set_value(int index, ::PROTOBUF_NAMESPACE_ID::int64 value);
  void add_value(::PROTOBUF_NAMESPACE_ID::int64 value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int64 >&
      value() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int64 >*
      mutable_value();

  // required string field_name = 1;
  bool has_field_name() const;
  private:
  bool _internal_has_field_name() const;
  public:
  void clear_field_name();
  const std::string& field_name() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_field_name(ArgT0&& arg0, ArgT... args);
  std::string* mutable_field_name();
  PROTOBUF_MUST_USE_RESULT std::string* release_field_name();
  void set_allocated_field_name(std::string* field_name);
  private:
  const std::string& _internal_field_name() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_field_name(const std::string& value);
  std::string* _internal_mutable_field_name();
  public:

  // required bool reverse = 3;
  bool has_reverse() const;
  private:
  bool _internal_has_reverse() const;
  public:
  void clear_reverse();
  bool reverse() const;
  void set_reverse(bool value);
  private:
  bool _internal_reverse() const;
  void _internal_set_reverse(bool value);
  public:

  // required .AdTargetOperator op = 4;
  bool has_op() const;
  private:
  bool _internal_has_op() const;
  public:
  void clear_op();
  ::AdTargetOperator op() const;
  void set_op(::AdTargetOperator value);
  private:
  ::AdTargetOperator _internal_op() const;
  void _internal_set_op(::AdTargetOperator value);
  public:

  // @@protoc_insertion_point(class_scope:AdTargetItem)
 private:
  class _Internal;

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int64 > value_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr field_name_;
  bool reverse_;
  int op_;
  friend struct ::TableStruct_ad_2eproto;
};
// -------------------------------------------------------------------

class Ad final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Ad) */ {
 public:
  inline Ad() : Ad(nullptr) {}
  ~Ad() override;
  explicit constexpr Ad(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Ad(const Ad& from);
  Ad(Ad&& from) noexcept
    : Ad() {
    *this = ::std::move(from);
  }

  inline Ad& operator=(const Ad& from) {
    CopyFrom(from);
    return *this;
  }
  inline Ad& operator=(Ad&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Ad& default_instance() {
    return *internal_default_instance();
  }
  static inline const Ad* internal_default_instance() {
    return reinterpret_cast<const Ad*>(
               &_Ad_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(Ad& a, Ad& b) {
    a.Swap(&b);
  }
  inline void Swap(Ad* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Ad* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Ad* New() const final {
    return new Ad();
  }

  Ad* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Ad>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Ad& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const Ad& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message*to, const ::PROTOBUF_NAMESPACE_ID::Message&from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Ad* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Ad";
  }
  protected:
  explicit Ad(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kTargetItemFieldNumber = 2,
    kAidFieldNumber = 1,
  };
  // repeated .AdTargetItem target_item = 2;
  int target_item_size() const;
  private:
  int _internal_target_item_size() const;
  public:
  void clear_target_item();
  ::AdTargetItem* mutable_target_item(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AdTargetItem >*
      mutable_target_item();
  private:
  const ::AdTargetItem& _internal_target_item(int index) const;
  ::AdTargetItem* _internal_add_target_item();
  public:
  const ::AdTargetItem& target_item(int index) const;
  ::AdTargetItem* add_target_item();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AdTargetItem >&
      target_item() const;

  // required int64 aid = 1;
  bool has_aid() const;
  private:
  bool _internal_has_aid() const;
  public:
  void clear_aid();
  ::PROTOBUF_NAMESPACE_ID::int64 aid() const;
  void set_aid(::PROTOBUF_NAMESPACE_ID::int64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int64 _internal_aid() const;
  void _internal_set_aid(::PROTOBUF_NAMESPACE_ID::int64 value);
  public:

  // @@protoc_insertion_point(class_scope:Ad)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AdTargetItem > target_item_;
  ::PROTOBUF_NAMESPACE_ID::int64 aid_;
  friend struct ::TableStruct_ad_2eproto;
};
// -------------------------------------------------------------------

class AdList final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AdList) */ {
 public:
  inline AdList() : AdList(nullptr) {}
  ~AdList() override;
  explicit constexpr AdList(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  AdList(const AdList& from);
  AdList(AdList&& from) noexcept
    : AdList() {
    *this = ::std::move(from);
  }

  inline AdList& operator=(const AdList& from) {
    CopyFrom(from);
    return *this;
  }
  inline AdList& operator=(AdList&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const AdList& default_instance() {
    return *internal_default_instance();
  }
  static inline const AdList* internal_default_instance() {
    return reinterpret_cast<const AdList*>(
               &_AdList_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(AdList& a, AdList& b) {
    a.Swap(&b);
  }
  inline void Swap(AdList* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(AdList* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline AdList* New() const final {
    return new AdList();
  }

  AdList* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<AdList>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const AdList& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const AdList& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message*to, const ::PROTOBUF_NAMESPACE_ID::Message&from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(AdList* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AdList";
  }
  protected:
  explicit AdList(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kAdFieldNumber = 1,
  };
  // repeated .Ad ad = 1;
  int ad_size() const;
  private:
  int _internal_ad_size() const;
  public:
  void clear_ad();
  ::Ad* mutable_ad(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Ad >*
      mutable_ad();
  private:
  const ::Ad& _internal_ad(int index) const;
  ::Ad* _internal_add_ad();
  public:
  const ::Ad& ad(int index) const;
  ::Ad* add_ad();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Ad >&
      ad() const;

  // @@protoc_insertion_point(class_scope:AdList)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Ad > ad_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_ad_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// AdTargetItem

// required string field_name = 1;
inline bool AdTargetItem::_internal_has_field_name() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool AdTargetItem::has_field_name() const {
  return _internal_has_field_name();
}
inline void AdTargetItem::clear_field_name() {
  field_name_.ClearToEmpty();
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& AdTargetItem::field_name() const {
  // @@protoc_insertion_point(field_get:AdTargetItem.field_name)
  return _internal_field_name();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void AdTargetItem::set_field_name(ArgT0&& arg0, ArgT... args) {
 _has_bits_[0] |= 0x00000001u;
 field_name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:AdTargetItem.field_name)
}
inline std::string* AdTargetItem::mutable_field_name() {
  std::string* _s = _internal_mutable_field_name();
  // @@protoc_insertion_point(field_mutable:AdTargetItem.field_name)
  return _s;
}
inline const std::string& AdTargetItem::_internal_field_name() const {
  return field_name_.Get();
}
inline void AdTargetItem::_internal_set_field_name(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  field_name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* AdTargetItem::_internal_mutable_field_name() {
  _has_bits_[0] |= 0x00000001u;
  return field_name_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* AdTargetItem::release_field_name() {
  // @@protoc_insertion_point(field_release:AdTargetItem.field_name)
  if (!_internal_has_field_name()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return field_name_.ReleaseNonDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void AdTargetItem::set_allocated_field_name(std::string* field_name) {
  if (field_name != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  field_name_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), field_name,
      GetArenaForAllocation());
  // @@protoc_insertion_point(field_set_allocated:AdTargetItem.field_name)
}

// repeated int64 value = 2;
inline int AdTargetItem::_internal_value_size() const {
  return value_.size();
}
inline int AdTargetItem::value_size() const {
  return _internal_value_size();
}
inline void AdTargetItem::clear_value() {
  value_.Clear();
}
inline ::PROTOBUF_NAMESPACE_ID::int64 AdTargetItem::_internal_value(int index) const {
  return value_.Get(index);
}
inline ::PROTOBUF_NAMESPACE_ID::int64 AdTargetItem::value(int index) const {
  // @@protoc_insertion_point(field_get:AdTargetItem.value)
  return _internal_value(index);
}
inline void AdTargetItem::set_value(int index, ::PROTOBUF_NAMESPACE_ID::int64 value) {
  value_.Set(index, value);
  // @@protoc_insertion_point(field_set:AdTargetItem.value)
}
inline void AdTargetItem::_internal_add_value(::PROTOBUF_NAMESPACE_ID::int64 value) {
  value_.Add(value);
}
inline void AdTargetItem::add_value(::PROTOBUF_NAMESPACE_ID::int64 value) {
  _internal_add_value(value);
  // @@protoc_insertion_point(field_add:AdTargetItem.value)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int64 >&
AdTargetItem::_internal_value() const {
  return value_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int64 >&
AdTargetItem::value() const {
  // @@protoc_insertion_point(field_list:AdTargetItem.value)
  return _internal_value();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int64 >*
AdTargetItem::_internal_mutable_value() {
  return &value_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int64 >*
AdTargetItem::mutable_value() {
  // @@protoc_insertion_point(field_mutable_list:AdTargetItem.value)
  return _internal_mutable_value();
}

// required bool reverse = 3;
inline bool AdTargetItem::_internal_has_reverse() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool AdTargetItem::has_reverse() const {
  return _internal_has_reverse();
}
inline void AdTargetItem::clear_reverse() {
  reverse_ = false;
  _has_bits_[0] &= ~0x00000002u;
}
inline bool AdTargetItem::_internal_reverse() const {
  return reverse_;
}
inline bool AdTargetItem::reverse() const {
  // @@protoc_insertion_point(field_get:AdTargetItem.reverse)
  return _internal_reverse();
}
inline void AdTargetItem::_internal_set_reverse(bool value) {
  _has_bits_[0] |= 0x00000002u;
  reverse_ = value;
}
inline void AdTargetItem::set_reverse(bool value) {
  _internal_set_reverse(value);
  // @@protoc_insertion_point(field_set:AdTargetItem.reverse)
}

// required .AdTargetOperator op = 4;
inline bool AdTargetItem::_internal_has_op() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool AdTargetItem::has_op() const {
  return _internal_has_op();
}
inline void AdTargetItem::clear_op() {
  op_ = 1;
  _has_bits_[0] &= ~0x00000004u;
}
inline ::AdTargetOperator AdTargetItem::_internal_op() const {
  return static_cast< ::AdTargetOperator >(op_);
}
inline ::AdTargetOperator AdTargetItem::op() const {
  // @@protoc_insertion_point(field_get:AdTargetItem.op)
  return _internal_op();
}
inline void AdTargetItem::_internal_set_op(::AdTargetOperator value) {
  assert(::AdTargetOperator_IsValid(value));
  _has_bits_[0] |= 0x00000004u;
  op_ = value;
}
inline void AdTargetItem::set_op(::AdTargetOperator value) {
  _internal_set_op(value);
  // @@protoc_insertion_point(field_set:AdTargetItem.op)
}

// -------------------------------------------------------------------

// Ad

// required int64 aid = 1;
inline bool Ad::_internal_has_aid() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool Ad::has_aid() const {
  return _internal_has_aid();
}
inline void Ad::clear_aid() {
  aid_ = int64_t{0};
  _has_bits_[0] &= ~0x00000001u;
}
inline ::PROTOBUF_NAMESPACE_ID::int64 Ad::_internal_aid() const {
  return aid_;
}
inline ::PROTOBUF_NAMESPACE_ID::int64 Ad::aid() const {
  // @@protoc_insertion_point(field_get:Ad.aid)
  return _internal_aid();
}
inline void Ad::_internal_set_aid(::PROTOBUF_NAMESPACE_ID::int64 value) {
  _has_bits_[0] |= 0x00000001u;
  aid_ = value;
}
inline void Ad::set_aid(::PROTOBUF_NAMESPACE_ID::int64 value) {
  _internal_set_aid(value);
  // @@protoc_insertion_point(field_set:Ad.aid)
}

// repeated .AdTargetItem target_item = 2;
inline int Ad::_internal_target_item_size() const {
  return target_item_.size();
}
inline int Ad::target_item_size() const {
  return _internal_target_item_size();
}
inline void Ad::clear_target_item() {
  target_item_.Clear();
}
inline ::AdTargetItem* Ad::mutable_target_item(int index) {
  // @@protoc_insertion_point(field_mutable:Ad.target_item)
  return target_item_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AdTargetItem >*
Ad::mutable_target_item() {
  // @@protoc_insertion_point(field_mutable_list:Ad.target_item)
  return &target_item_;
}
inline const ::AdTargetItem& Ad::_internal_target_item(int index) const {
  return target_item_.Get(index);
}
inline const ::AdTargetItem& Ad::target_item(int index) const {
  // @@protoc_insertion_point(field_get:Ad.target_item)
  return _internal_target_item(index);
}
inline ::AdTargetItem* Ad::_internal_add_target_item() {
  return target_item_.Add();
}
inline ::AdTargetItem* Ad::add_target_item() {
  ::AdTargetItem* _add = _internal_add_target_item();
  // @@protoc_insertion_point(field_add:Ad.target_item)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AdTargetItem >&
Ad::target_item() const {
  // @@protoc_insertion_point(field_list:Ad.target_item)
  return target_item_;
}

// -------------------------------------------------------------------

// AdList

// repeated .Ad ad = 1;
inline int AdList::_internal_ad_size() const {
  return ad_.size();
}
inline int AdList::ad_size() const {
  return _internal_ad_size();
}
inline void AdList::clear_ad() {
  ad_.Clear();
}
inline ::Ad* AdList::mutable_ad(int index) {
  // @@protoc_insertion_point(field_mutable:AdList.ad)
  return ad_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Ad >*
AdList::mutable_ad() {
  // @@protoc_insertion_point(field_mutable_list:AdList.ad)
  return &ad_;
}
inline const ::Ad& AdList::_internal_ad(int index) const {
  return ad_.Get(index);
}
inline const ::Ad& AdList::ad(int index) const {
  // @@protoc_insertion_point(field_get:AdList.ad)
  return _internal_ad(index);
}
inline ::Ad* AdList::_internal_add_ad() {
  return ad_.Add();
}
inline ::Ad* AdList::add_ad() {
  ::Ad* _add = _internal_add_ad();
  // @@protoc_insertion_point(field_add:AdList.ad)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Ad >&
AdList::ad() const {
  // @@protoc_insertion_point(field_list:AdList.ad)
  return ad_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::AdTargetOperator> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::AdTargetOperator>() {
  return ::AdTargetOperator_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_ad_2eproto
