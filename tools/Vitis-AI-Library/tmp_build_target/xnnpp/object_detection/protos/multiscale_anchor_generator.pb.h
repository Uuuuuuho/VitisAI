// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: object_detection/protos/multiscale_anchor_generator.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_object_5fdetection_2fprotos_2fmultiscale_5fanchor_5fgenerator_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_object_5fdetection_2fprotos_2fmultiscale_5fanchor_5fgenerator_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_object_5fdetection_2fprotos_2fmultiscale_5fanchor_5fgenerator_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_object_5fdetection_2fprotos_2fmultiscale_5fanchor_5fgenerator_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_object_5fdetection_2fprotos_2fmultiscale_5fanchor_5fgenerator_2eproto;
namespace object_detection {
namespace protos {
class MultiscaleAnchorGenerator;
class MultiscaleAnchorGeneratorDefaultTypeInternal;
extern MultiscaleAnchorGeneratorDefaultTypeInternal _MultiscaleAnchorGenerator_default_instance_;
}  // namespace protos
}  // namespace object_detection
PROTOBUF_NAMESPACE_OPEN
template<> ::object_detection::protos::MultiscaleAnchorGenerator* Arena::CreateMaybeMessage<::object_detection::protos::MultiscaleAnchorGenerator>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace object_detection {
namespace protos {

// ===================================================================

class MultiscaleAnchorGenerator :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:object_detection.protos.MultiscaleAnchorGenerator) */ {
 public:
  MultiscaleAnchorGenerator();
  virtual ~MultiscaleAnchorGenerator();

  MultiscaleAnchorGenerator(const MultiscaleAnchorGenerator& from);
  MultiscaleAnchorGenerator(MultiscaleAnchorGenerator&& from) noexcept
    : MultiscaleAnchorGenerator() {
    *this = ::std::move(from);
  }

  inline MultiscaleAnchorGenerator& operator=(const MultiscaleAnchorGenerator& from) {
    CopyFrom(from);
    return *this;
  }
  inline MultiscaleAnchorGenerator& operator=(MultiscaleAnchorGenerator&& from) noexcept {
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
  static const MultiscaleAnchorGenerator& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const MultiscaleAnchorGenerator* internal_default_instance() {
    return reinterpret_cast<const MultiscaleAnchorGenerator*>(
               &_MultiscaleAnchorGenerator_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(MultiscaleAnchorGenerator& a, MultiscaleAnchorGenerator& b) {
    a.Swap(&b);
  }
  inline void Swap(MultiscaleAnchorGenerator* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline MultiscaleAnchorGenerator* New() const final {
    return CreateMaybeMessage<MultiscaleAnchorGenerator>(nullptr);
  }

  MultiscaleAnchorGenerator* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<MultiscaleAnchorGenerator>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const MultiscaleAnchorGenerator& from);
  void MergeFrom(const MultiscaleAnchorGenerator& from);
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
  void InternalSwap(MultiscaleAnchorGenerator* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "object_detection.protos.MultiscaleAnchorGenerator";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_object_5fdetection_2fprotos_2fmultiscale_5fanchor_5fgenerator_2eproto);
    return ::descriptor_table_object_5fdetection_2fprotos_2fmultiscale_5fanchor_5fgenerator_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kAspectRatiosFieldNumber = 4,
    kNormalizeCoordinatesFieldNumber = 6,
    kMinLevelFieldNumber = 1,
    kMaxLevelFieldNumber = 2,
    kAnchorScaleFieldNumber = 3,
    kScalesPerOctaveFieldNumber = 5,
  };
  // repeated float aspect_ratios = 4;
  int aspect_ratios_size() const;
  void clear_aspect_ratios();
  float aspect_ratios(int index) const;
  void set_aspect_ratios(int index, float value);
  void add_aspect_ratios(float value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >&
      aspect_ratios() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >*
      mutable_aspect_ratios();

  // optional bool normalize_coordinates = 6 [default = true];
  bool has_normalize_coordinates() const;
  void clear_normalize_coordinates();
  bool normalize_coordinates() const;
  void set_normalize_coordinates(bool value);

  // optional int32 min_level = 1 [default = 3];
  bool has_min_level() const;
  void clear_min_level();
  ::PROTOBUF_NAMESPACE_ID::int32 min_level() const;
  void set_min_level(::PROTOBUF_NAMESPACE_ID::int32 value);

  // optional int32 max_level = 2 [default = 7];
  bool has_max_level() const;
  void clear_max_level();
  ::PROTOBUF_NAMESPACE_ID::int32 max_level() const;
  void set_max_level(::PROTOBUF_NAMESPACE_ID::int32 value);

  // optional float anchor_scale = 3 [default = 4];
  bool has_anchor_scale() const;
  void clear_anchor_scale();
  float anchor_scale() const;
  void set_anchor_scale(float value);

  // optional int32 scales_per_octave = 5 [default = 2];
  bool has_scales_per_octave() const;
  void clear_scales_per_octave();
  ::PROTOBUF_NAMESPACE_ID::int32 scales_per_octave() const;
  void set_scales_per_octave(::PROTOBUF_NAMESPACE_ID::int32 value);

  // @@protoc_insertion_point(class_scope:object_detection.protos.MultiscaleAnchorGenerator)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< float > aspect_ratios_;
  bool normalize_coordinates_;
  ::PROTOBUF_NAMESPACE_ID::int32 min_level_;
  ::PROTOBUF_NAMESPACE_ID::int32 max_level_;
  float anchor_scale_;
  ::PROTOBUF_NAMESPACE_ID::int32 scales_per_octave_;
  friend struct ::TableStruct_object_5fdetection_2fprotos_2fmultiscale_5fanchor_5fgenerator_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// MultiscaleAnchorGenerator

// optional int32 min_level = 1 [default = 3];
inline bool MultiscaleAnchorGenerator::has_min_level() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void MultiscaleAnchorGenerator::clear_min_level() {
  min_level_ = 3;
  _has_bits_[0] &= ~0x00000002u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 MultiscaleAnchorGenerator::min_level() const {
  // @@protoc_insertion_point(field_get:object_detection.protos.MultiscaleAnchorGenerator.min_level)
  return min_level_;
}
inline void MultiscaleAnchorGenerator::set_min_level(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000002u;
  min_level_ = value;
  // @@protoc_insertion_point(field_set:object_detection.protos.MultiscaleAnchorGenerator.min_level)
}

// optional int32 max_level = 2 [default = 7];
inline bool MultiscaleAnchorGenerator::has_max_level() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void MultiscaleAnchorGenerator::clear_max_level() {
  max_level_ = 7;
  _has_bits_[0] &= ~0x00000004u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 MultiscaleAnchorGenerator::max_level() const {
  // @@protoc_insertion_point(field_get:object_detection.protos.MultiscaleAnchorGenerator.max_level)
  return max_level_;
}
inline void MultiscaleAnchorGenerator::set_max_level(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000004u;
  max_level_ = value;
  // @@protoc_insertion_point(field_set:object_detection.protos.MultiscaleAnchorGenerator.max_level)
}

// optional float anchor_scale = 3 [default = 4];
inline bool MultiscaleAnchorGenerator::has_anchor_scale() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void MultiscaleAnchorGenerator::clear_anchor_scale() {
  anchor_scale_ = 4;
  _has_bits_[0] &= ~0x00000008u;
}
inline float MultiscaleAnchorGenerator::anchor_scale() const {
  // @@protoc_insertion_point(field_get:object_detection.protos.MultiscaleAnchorGenerator.anchor_scale)
  return anchor_scale_;
}
inline void MultiscaleAnchorGenerator::set_anchor_scale(float value) {
  _has_bits_[0] |= 0x00000008u;
  anchor_scale_ = value;
  // @@protoc_insertion_point(field_set:object_detection.protos.MultiscaleAnchorGenerator.anchor_scale)
}

// repeated float aspect_ratios = 4;
inline int MultiscaleAnchorGenerator::aspect_ratios_size() const {
  return aspect_ratios_.size();
}
inline void MultiscaleAnchorGenerator::clear_aspect_ratios() {
  aspect_ratios_.Clear();
}
inline float MultiscaleAnchorGenerator::aspect_ratios(int index) const {
  // @@protoc_insertion_point(field_get:object_detection.protos.MultiscaleAnchorGenerator.aspect_ratios)
  return aspect_ratios_.Get(index);
}
inline void MultiscaleAnchorGenerator::set_aspect_ratios(int index, float value) {
  aspect_ratios_.Set(index, value);
  // @@protoc_insertion_point(field_set:object_detection.protos.MultiscaleAnchorGenerator.aspect_ratios)
}
inline void MultiscaleAnchorGenerator::add_aspect_ratios(float value) {
  aspect_ratios_.Add(value);
  // @@protoc_insertion_point(field_add:object_detection.protos.MultiscaleAnchorGenerator.aspect_ratios)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >&
MultiscaleAnchorGenerator::aspect_ratios() const {
  // @@protoc_insertion_point(field_list:object_detection.protos.MultiscaleAnchorGenerator.aspect_ratios)
  return aspect_ratios_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >*
MultiscaleAnchorGenerator::mutable_aspect_ratios() {
  // @@protoc_insertion_point(field_mutable_list:object_detection.protos.MultiscaleAnchorGenerator.aspect_ratios)
  return &aspect_ratios_;
}

// optional int32 scales_per_octave = 5 [default = 2];
inline bool MultiscaleAnchorGenerator::has_scales_per_octave() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void MultiscaleAnchorGenerator::clear_scales_per_octave() {
  scales_per_octave_ = 2;
  _has_bits_[0] &= ~0x00000010u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 MultiscaleAnchorGenerator::scales_per_octave() const {
  // @@protoc_insertion_point(field_get:object_detection.protos.MultiscaleAnchorGenerator.scales_per_octave)
  return scales_per_octave_;
}
inline void MultiscaleAnchorGenerator::set_scales_per_octave(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000010u;
  scales_per_octave_ = value;
  // @@protoc_insertion_point(field_set:object_detection.protos.MultiscaleAnchorGenerator.scales_per_octave)
}

// optional bool normalize_coordinates = 6 [default = true];
inline bool MultiscaleAnchorGenerator::has_normalize_coordinates() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void MultiscaleAnchorGenerator::clear_normalize_coordinates() {
  normalize_coordinates_ = true;
  _has_bits_[0] &= ~0x00000001u;
}
inline bool MultiscaleAnchorGenerator::normalize_coordinates() const {
  // @@protoc_insertion_point(field_get:object_detection.protos.MultiscaleAnchorGenerator.normalize_coordinates)
  return normalize_coordinates_;
}
inline void MultiscaleAnchorGenerator::set_normalize_coordinates(bool value) {
  _has_bits_[0] |= 0x00000001u;
  normalize_coordinates_ = value;
  // @@protoc_insertion_point(field_set:object_detection.protos.MultiscaleAnchorGenerator.normalize_coordinates)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace protos
}  // namespace object_detection

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_object_5fdetection_2fprotos_2fmultiscale_5fanchor_5fgenerator_2eproto
