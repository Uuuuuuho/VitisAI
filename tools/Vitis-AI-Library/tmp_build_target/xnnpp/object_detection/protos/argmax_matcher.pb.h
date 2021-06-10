// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: object_detection/protos/argmax_matcher.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_object_5fdetection_2fprotos_2fargmax_5fmatcher_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_object_5fdetection_2fprotos_2fargmax_5fmatcher_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3009000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3009002 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_object_5fdetection_2fprotos_2fargmax_5fmatcher_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_object_5fdetection_2fprotos_2fargmax_5fmatcher_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_object_5fdetection_2fprotos_2fargmax_5fmatcher_2eproto;
namespace object_detection {
namespace protos {
class ArgMaxMatcher;
class ArgMaxMatcherDefaultTypeInternal;
extern ArgMaxMatcherDefaultTypeInternal _ArgMaxMatcher_default_instance_;
}  // namespace protos
}  // namespace object_detection
PROTOBUF_NAMESPACE_OPEN
template<> ::object_detection::protos::ArgMaxMatcher* Arena::CreateMaybeMessage<::object_detection::protos::ArgMaxMatcher>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace object_detection {
namespace protos {

// ===================================================================

class ArgMaxMatcher :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:object_detection.protos.ArgMaxMatcher) */ {
 public:
  ArgMaxMatcher();
  virtual ~ArgMaxMatcher();

  ArgMaxMatcher(const ArgMaxMatcher& from);
  ArgMaxMatcher(ArgMaxMatcher&& from) noexcept
    : ArgMaxMatcher() {
    *this = ::std::move(from);
  }

  inline ArgMaxMatcher& operator=(const ArgMaxMatcher& from) {
    CopyFrom(from);
    return *this;
  }
  inline ArgMaxMatcher& operator=(ArgMaxMatcher&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
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
  static const ArgMaxMatcher& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ArgMaxMatcher* internal_default_instance() {
    return reinterpret_cast<const ArgMaxMatcher*>(
               &_ArgMaxMatcher_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ArgMaxMatcher& a, ArgMaxMatcher& b) {
    a.Swap(&b);
  }
  inline void Swap(ArgMaxMatcher* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline ArgMaxMatcher* New() const final {
    return CreateMaybeMessage<ArgMaxMatcher>(nullptr);
  }

  ArgMaxMatcher* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ArgMaxMatcher>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const ArgMaxMatcher& from);
  void MergeFrom(const ArgMaxMatcher& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  #else
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(ArgMaxMatcher* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "object_detection.protos.ArgMaxMatcher";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_object_5fdetection_2fprotos_2fargmax_5fmatcher_2eproto);
    return ::descriptor_table_object_5fdetection_2fprotos_2fargmax_5fmatcher_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kIgnoreThresholdsFieldNumber = 3,
    kForceMatchForEachRowFieldNumber = 5,
    kUseMatmulGatherFieldNumber = 6,
    kNegativesLowerThanUnmatchedFieldNumber = 4,
    kMatchedThresholdFieldNumber = 1,
    kUnmatchedThresholdFieldNumber = 2,
  };
  // optional bool ignore_thresholds = 3 [default = false];
  bool has_ignore_thresholds() const;
  void clear_ignore_thresholds();
  bool ignore_thresholds() const;
  void set_ignore_thresholds(bool value);

  // optional bool force_match_for_each_row = 5 [default = false];
  bool has_force_match_for_each_row() const;
  void clear_force_match_for_each_row();
  bool force_match_for_each_row() const;
  void set_force_match_for_each_row(bool value);

  // optional bool use_matmul_gather = 6 [default = false];
  bool has_use_matmul_gather() const;
  void clear_use_matmul_gather();
  bool use_matmul_gather() const;
  void set_use_matmul_gather(bool value);

  // optional bool negatives_lower_than_unmatched = 4 [default = true];
  bool has_negatives_lower_than_unmatched() const;
  void clear_negatives_lower_than_unmatched();
  bool negatives_lower_than_unmatched() const;
  void set_negatives_lower_than_unmatched(bool value);

  // optional float matched_threshold = 1 [default = 0.5];
  bool has_matched_threshold() const;
  void clear_matched_threshold();
  float matched_threshold() const;
  void set_matched_threshold(float value);

  // optional float unmatched_threshold = 2 [default = 0.5];
  bool has_unmatched_threshold() const;
  void clear_unmatched_threshold();
  float unmatched_threshold() const;
  void set_unmatched_threshold(float value);

  // @@protoc_insertion_point(class_scope:object_detection.protos.ArgMaxMatcher)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  bool ignore_thresholds_;
  bool force_match_for_each_row_;
  bool use_matmul_gather_;
  bool negatives_lower_than_unmatched_;
  float matched_threshold_;
  float unmatched_threshold_;
  friend struct ::TableStruct_object_5fdetection_2fprotos_2fargmax_5fmatcher_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ArgMaxMatcher

// optional float matched_threshold = 1 [default = 0.5];
inline bool ArgMaxMatcher::has_matched_threshold() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void ArgMaxMatcher::clear_matched_threshold() {
  matched_threshold_ = 0.5f;
  _has_bits_[0] &= ~0x00000010u;
}
inline float ArgMaxMatcher::matched_threshold() const {
  // @@protoc_insertion_point(field_get:object_detection.protos.ArgMaxMatcher.matched_threshold)
  return matched_threshold_;
}
inline void ArgMaxMatcher::set_matched_threshold(float value) {
  _has_bits_[0] |= 0x00000010u;
  matched_threshold_ = value;
  // @@protoc_insertion_point(field_set:object_detection.protos.ArgMaxMatcher.matched_threshold)
}

// optional float unmatched_threshold = 2 [default = 0.5];
inline bool ArgMaxMatcher::has_unmatched_threshold() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void ArgMaxMatcher::clear_unmatched_threshold() {
  unmatched_threshold_ = 0.5f;
  _has_bits_[0] &= ~0x00000020u;
}
inline float ArgMaxMatcher::unmatched_threshold() const {
  // @@protoc_insertion_point(field_get:object_detection.protos.ArgMaxMatcher.unmatched_threshold)
  return unmatched_threshold_;
}
inline void ArgMaxMatcher::set_unmatched_threshold(float value) {
  _has_bits_[0] |= 0x00000020u;
  unmatched_threshold_ = value;
  // @@protoc_insertion_point(field_set:object_detection.protos.ArgMaxMatcher.unmatched_threshold)
}

// optional bool ignore_thresholds = 3 [default = false];
inline bool ArgMaxMatcher::has_ignore_thresholds() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ArgMaxMatcher::clear_ignore_thresholds() {
  ignore_thresholds_ = false;
  _has_bits_[0] &= ~0x00000001u;
}
inline bool ArgMaxMatcher::ignore_thresholds() const {
  // @@protoc_insertion_point(field_get:object_detection.protos.ArgMaxMatcher.ignore_thresholds)
  return ignore_thresholds_;
}
inline void ArgMaxMatcher::set_ignore_thresholds(bool value) {
  _has_bits_[0] |= 0x00000001u;
  ignore_thresholds_ = value;
  // @@protoc_insertion_point(field_set:object_detection.protos.ArgMaxMatcher.ignore_thresholds)
}

// optional bool negatives_lower_than_unmatched = 4 [default = true];
inline bool ArgMaxMatcher::has_negatives_lower_than_unmatched() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void ArgMaxMatcher::clear_negatives_lower_than_unmatched() {
  negatives_lower_than_unmatched_ = true;
  _has_bits_[0] &= ~0x00000008u;
}
inline bool ArgMaxMatcher::negatives_lower_than_unmatched() const {
  // @@protoc_insertion_point(field_get:object_detection.protos.ArgMaxMatcher.negatives_lower_than_unmatched)
  return negatives_lower_than_unmatched_;
}
inline void ArgMaxMatcher::set_negatives_lower_than_unmatched(bool value) {
  _has_bits_[0] |= 0x00000008u;
  negatives_lower_than_unmatched_ = value;
  // @@protoc_insertion_point(field_set:object_detection.protos.ArgMaxMatcher.negatives_lower_than_unmatched)
}

// optional bool force_match_for_each_row = 5 [default = false];
inline bool ArgMaxMatcher::has_force_match_for_each_row() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ArgMaxMatcher::clear_force_match_for_each_row() {
  force_match_for_each_row_ = false;
  _has_bits_[0] &= ~0x00000002u;
}
inline bool ArgMaxMatcher::force_match_for_each_row() const {
  // @@protoc_insertion_point(field_get:object_detection.protos.ArgMaxMatcher.force_match_for_each_row)
  return force_match_for_each_row_;
}
inline void ArgMaxMatcher::set_force_match_for_each_row(bool value) {
  _has_bits_[0] |= 0x00000002u;
  force_match_for_each_row_ = value;
  // @@protoc_insertion_point(field_set:object_detection.protos.ArgMaxMatcher.force_match_for_each_row)
}

// optional bool use_matmul_gather = 6 [default = false];
inline bool ArgMaxMatcher::has_use_matmul_gather() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void ArgMaxMatcher::clear_use_matmul_gather() {
  use_matmul_gather_ = false;
  _has_bits_[0] &= ~0x00000004u;
}
inline bool ArgMaxMatcher::use_matmul_gather() const {
  // @@protoc_insertion_point(field_get:object_detection.protos.ArgMaxMatcher.use_matmul_gather)
  return use_matmul_gather_;
}
inline void ArgMaxMatcher::set_use_matmul_gather(bool value) {
  _has_bits_[0] |= 0x00000004u;
  use_matmul_gather_ = value;
  // @@protoc_insertion_point(field_set:object_detection.protos.ArgMaxMatcher.use_matmul_gather)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace protos
}  // namespace object_detection

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_object_5fdetection_2fprotos_2fargmax_5fmatcher_2eproto
