// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: object_detection/protos/grid_anchor_generator.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_object_5fdetection_2fprotos_2fgrid_5fanchor_5fgenerator_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_object_5fdetection_2fprotos_2fgrid_5fanchor_5fgenerator_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_object_5fdetection_2fprotos_2fgrid_5fanchor_5fgenerator_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_object_5fdetection_2fprotos_2fgrid_5fanchor_5fgenerator_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_object_5fdetection_2fprotos_2fgrid_5fanchor_5fgenerator_2eproto;
namespace object_detection {
namespace protos {
class GridAnchorGenerator;
class GridAnchorGeneratorDefaultTypeInternal;
extern GridAnchorGeneratorDefaultTypeInternal _GridAnchorGenerator_default_instance_;
}  // namespace protos
}  // namespace object_detection
PROTOBUF_NAMESPACE_OPEN
template<> ::object_detection::protos::GridAnchorGenerator* Arena::CreateMaybeMessage<::object_detection::protos::GridAnchorGenerator>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace object_detection {
namespace protos {

// ===================================================================

class GridAnchorGenerator :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:object_detection.protos.GridAnchorGenerator) */ {
 public:
  GridAnchorGenerator();
  virtual ~GridAnchorGenerator();

  GridAnchorGenerator(const GridAnchorGenerator& from);
  GridAnchorGenerator(GridAnchorGenerator&& from) noexcept
    : GridAnchorGenerator() {
    *this = ::std::move(from);
  }

  inline GridAnchorGenerator& operator=(const GridAnchorGenerator& from) {
    CopyFrom(from);
    return *this;
  }
  inline GridAnchorGenerator& operator=(GridAnchorGenerator&& from) noexcept {
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
  static const GridAnchorGenerator& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const GridAnchorGenerator* internal_default_instance() {
    return reinterpret_cast<const GridAnchorGenerator*>(
               &_GridAnchorGenerator_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(GridAnchorGenerator& a, GridAnchorGenerator& b) {
    a.Swap(&b);
  }
  inline void Swap(GridAnchorGenerator* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline GridAnchorGenerator* New() const final {
    return CreateMaybeMessage<GridAnchorGenerator>(nullptr);
  }

  GridAnchorGenerator* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<GridAnchorGenerator>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const GridAnchorGenerator& from);
  void MergeFrom(const GridAnchorGenerator& from);
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
  void InternalSwap(GridAnchorGenerator* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "object_detection.protos.GridAnchorGenerator";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_object_5fdetection_2fprotos_2fgrid_5fanchor_5fgenerator_2eproto);
    return ::descriptor_table_object_5fdetection_2fprotos_2fgrid_5fanchor_5fgenerator_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kScalesFieldNumber = 7,
    kAspectRatiosFieldNumber = 8,
    kHeightOffsetFieldNumber = 5,
    kWidthOffsetFieldNumber = 6,
    kHeightFieldNumber = 1,
    kWidthFieldNumber = 2,
    kHeightStrideFieldNumber = 3,
    kWidthStrideFieldNumber = 4,
  };
  // repeated float scales = 7;
  int scales_size() const;
  void clear_scales();
  float scales(int index) const;
  void set_scales(int index, float value);
  void add_scales(float value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >&
      scales() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >*
      mutable_scales();

  // repeated float aspect_ratios = 8;
  int aspect_ratios_size() const;
  void clear_aspect_ratios();
  float aspect_ratios(int index) const;
  void set_aspect_ratios(int index, float value);
  void add_aspect_ratios(float value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >&
      aspect_ratios() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >*
      mutable_aspect_ratios();

  // optional int32 height_offset = 5 [default = 0];
  bool has_height_offset() const;
  void clear_height_offset();
  ::PROTOBUF_NAMESPACE_ID::int32 height_offset() const;
  void set_height_offset(::PROTOBUF_NAMESPACE_ID::int32 value);

  // optional int32 width_offset = 6 [default = 0];
  bool has_width_offset() const;
  void clear_width_offset();
  ::PROTOBUF_NAMESPACE_ID::int32 width_offset() const;
  void set_width_offset(::PROTOBUF_NAMESPACE_ID::int32 value);

  // optional int32 height = 1 [default = 256];
  bool has_height() const;
  void clear_height();
  ::PROTOBUF_NAMESPACE_ID::int32 height() const;
  void set_height(::PROTOBUF_NAMESPACE_ID::int32 value);

  // optional int32 width = 2 [default = 256];
  bool has_width() const;
  void clear_width();
  ::PROTOBUF_NAMESPACE_ID::int32 width() const;
  void set_width(::PROTOBUF_NAMESPACE_ID::int32 value);

  // optional int32 height_stride = 3 [default = 16];
  bool has_height_stride() const;
  void clear_height_stride();
  ::PROTOBUF_NAMESPACE_ID::int32 height_stride() const;
  void set_height_stride(::PROTOBUF_NAMESPACE_ID::int32 value);

  // optional int32 width_stride = 4 [default = 16];
  bool has_width_stride() const;
  void clear_width_stride();
  ::PROTOBUF_NAMESPACE_ID::int32 width_stride() const;
  void set_width_stride(::PROTOBUF_NAMESPACE_ID::int32 value);

  // @@protoc_insertion_point(class_scope:object_detection.protos.GridAnchorGenerator)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< float > scales_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< float > aspect_ratios_;
  ::PROTOBUF_NAMESPACE_ID::int32 height_offset_;
  ::PROTOBUF_NAMESPACE_ID::int32 width_offset_;
  ::PROTOBUF_NAMESPACE_ID::int32 height_;
  ::PROTOBUF_NAMESPACE_ID::int32 width_;
  ::PROTOBUF_NAMESPACE_ID::int32 height_stride_;
  ::PROTOBUF_NAMESPACE_ID::int32 width_stride_;
  friend struct ::TableStruct_object_5fdetection_2fprotos_2fgrid_5fanchor_5fgenerator_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// GridAnchorGenerator

// optional int32 height = 1 [default = 256];
inline bool GridAnchorGenerator::has_height() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void GridAnchorGenerator::clear_height() {
  height_ = 256;
  _has_bits_[0] &= ~0x00000004u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 GridAnchorGenerator::height() const {
  // @@protoc_insertion_point(field_get:object_detection.protos.GridAnchorGenerator.height)
  return height_;
}
inline void GridAnchorGenerator::set_height(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000004u;
  height_ = value;
  // @@protoc_insertion_point(field_set:object_detection.protos.GridAnchorGenerator.height)
}

// optional int32 width = 2 [default = 256];
inline bool GridAnchorGenerator::has_width() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void GridAnchorGenerator::clear_width() {
  width_ = 256;
  _has_bits_[0] &= ~0x00000008u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 GridAnchorGenerator::width() const {
  // @@protoc_insertion_point(field_get:object_detection.protos.GridAnchorGenerator.width)
  return width_;
}
inline void GridAnchorGenerator::set_width(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000008u;
  width_ = value;
  // @@protoc_insertion_point(field_set:object_detection.protos.GridAnchorGenerator.width)
}

// optional int32 height_stride = 3 [default = 16];
inline bool GridAnchorGenerator::has_height_stride() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void GridAnchorGenerator::clear_height_stride() {
  height_stride_ = 16;
  _has_bits_[0] &= ~0x00000010u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 GridAnchorGenerator::height_stride() const {
  // @@protoc_insertion_point(field_get:object_detection.protos.GridAnchorGenerator.height_stride)
  return height_stride_;
}
inline void GridAnchorGenerator::set_height_stride(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000010u;
  height_stride_ = value;
  // @@protoc_insertion_point(field_set:object_detection.protos.GridAnchorGenerator.height_stride)
}

// optional int32 width_stride = 4 [default = 16];
inline bool GridAnchorGenerator::has_width_stride() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void GridAnchorGenerator::clear_width_stride() {
  width_stride_ = 16;
  _has_bits_[0] &= ~0x00000020u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 GridAnchorGenerator::width_stride() const {
  // @@protoc_insertion_point(field_get:object_detection.protos.GridAnchorGenerator.width_stride)
  return width_stride_;
}
inline void GridAnchorGenerator::set_width_stride(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000020u;
  width_stride_ = value;
  // @@protoc_insertion_point(field_set:object_detection.protos.GridAnchorGenerator.width_stride)
}

// optional int32 height_offset = 5 [default = 0];
inline bool GridAnchorGenerator::has_height_offset() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void GridAnchorGenerator::clear_height_offset() {
  height_offset_ = 0;
  _has_bits_[0] &= ~0x00000001u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 GridAnchorGenerator::height_offset() const {
  // @@protoc_insertion_point(field_get:object_detection.protos.GridAnchorGenerator.height_offset)
  return height_offset_;
}
inline void GridAnchorGenerator::set_height_offset(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000001u;
  height_offset_ = value;
  // @@protoc_insertion_point(field_set:object_detection.protos.GridAnchorGenerator.height_offset)
}

// optional int32 width_offset = 6 [default = 0];
inline bool GridAnchorGenerator::has_width_offset() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void GridAnchorGenerator::clear_width_offset() {
  width_offset_ = 0;
  _has_bits_[0] &= ~0x00000002u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 GridAnchorGenerator::width_offset() const {
  // @@protoc_insertion_point(field_get:object_detection.protos.GridAnchorGenerator.width_offset)
  return width_offset_;
}
inline void GridAnchorGenerator::set_width_offset(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000002u;
  width_offset_ = value;
  // @@protoc_insertion_point(field_set:object_detection.protos.GridAnchorGenerator.width_offset)
}

// repeated float scales = 7;
inline int GridAnchorGenerator::scales_size() const {
  return scales_.size();
}
inline void GridAnchorGenerator::clear_scales() {
  scales_.Clear();
}
inline float GridAnchorGenerator::scales(int index) const {
  // @@protoc_insertion_point(field_get:object_detection.protos.GridAnchorGenerator.scales)
  return scales_.Get(index);
}
inline void GridAnchorGenerator::set_scales(int index, float value) {
  scales_.Set(index, value);
  // @@protoc_insertion_point(field_set:object_detection.protos.GridAnchorGenerator.scales)
}
inline void GridAnchorGenerator::add_scales(float value) {
  scales_.Add(value);
  // @@protoc_insertion_point(field_add:object_detection.protos.GridAnchorGenerator.scales)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >&
GridAnchorGenerator::scales() const {
  // @@protoc_insertion_point(field_list:object_detection.protos.GridAnchorGenerator.scales)
  return scales_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >*
GridAnchorGenerator::mutable_scales() {
  // @@protoc_insertion_point(field_mutable_list:object_detection.protos.GridAnchorGenerator.scales)
  return &scales_;
}

// repeated float aspect_ratios = 8;
inline int GridAnchorGenerator::aspect_ratios_size() const {
  return aspect_ratios_.size();
}
inline void GridAnchorGenerator::clear_aspect_ratios() {
  aspect_ratios_.Clear();
}
inline float GridAnchorGenerator::aspect_ratios(int index) const {
  // @@protoc_insertion_point(field_get:object_detection.protos.GridAnchorGenerator.aspect_ratios)
  return aspect_ratios_.Get(index);
}
inline void GridAnchorGenerator::set_aspect_ratios(int index, float value) {
  aspect_ratios_.Set(index, value);
  // @@protoc_insertion_point(field_set:object_detection.protos.GridAnchorGenerator.aspect_ratios)
}
inline void GridAnchorGenerator::add_aspect_ratios(float value) {
  aspect_ratios_.Add(value);
  // @@protoc_insertion_point(field_add:object_detection.protos.GridAnchorGenerator.aspect_ratios)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >&
GridAnchorGenerator::aspect_ratios() const {
  // @@protoc_insertion_point(field_list:object_detection.protos.GridAnchorGenerator.aspect_ratios)
  return aspect_ratios_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >*
GridAnchorGenerator::mutable_aspect_ratios() {
  // @@protoc_insertion_point(field_mutable_list:object_detection.protos.GridAnchorGenerator.aspect_ratios)
  return &aspect_ratios_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace protos
}  // namespace object_detection

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_object_5fdetection_2fprotos_2fgrid_5fanchor_5fgenerator_2eproto
