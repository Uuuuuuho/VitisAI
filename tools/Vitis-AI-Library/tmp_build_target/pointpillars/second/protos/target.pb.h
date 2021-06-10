// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: second/protos/target.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_second_2fprotos_2ftarget_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_second_2fprotos_2ftarget_2eproto

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
#include "second/protos/anchors.pb.h"
#include "second/protos/similarity.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_second_2fprotos_2ftarget_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_second_2fprotos_2ftarget_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_second_2fprotos_2ftarget_2eproto;
namespace second {
namespace protos {
class TargetAssigner;
class TargetAssignerDefaultTypeInternal;
extern TargetAssignerDefaultTypeInternal _TargetAssigner_default_instance_;
}  // namespace protos
}  // namespace second
PROTOBUF_NAMESPACE_OPEN
template<> ::second::protos::TargetAssigner* Arena::CreateMaybeMessage<::second::protos::TargetAssigner>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace second {
namespace protos {

// ===================================================================

class TargetAssigner :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:second.protos.TargetAssigner) */ {
 public:
  TargetAssigner();
  virtual ~TargetAssigner();

  TargetAssigner(const TargetAssigner& from);
  TargetAssigner(TargetAssigner&& from) noexcept
    : TargetAssigner() {
    *this = ::std::move(from);
  }

  inline TargetAssigner& operator=(const TargetAssigner& from) {
    CopyFrom(from);
    return *this;
  }
  inline TargetAssigner& operator=(TargetAssigner&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
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
  static const TargetAssigner& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const TargetAssigner* internal_default_instance() {
    return reinterpret_cast<const TargetAssigner*>(
               &_TargetAssigner_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(TargetAssigner& a, TargetAssigner& b) {
    a.Swap(&b);
  }
  inline void Swap(TargetAssigner* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline TargetAssigner* New() const final {
    return CreateMaybeMessage<TargetAssigner>(nullptr);
  }

  TargetAssigner* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<TargetAssigner>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const TargetAssigner& from);
  void MergeFrom(const TargetAssigner& from);
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
  void InternalSwap(TargetAssigner* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "second.protos.TargetAssigner";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_second_2fprotos_2ftarget_2eproto);
    return ::descriptor_table_second_2fprotos_2ftarget_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kAnchorGeneratorsFieldNumber = 1,
    kClassNameFieldNumber = 5,
    kRegionSimilarityCalculatorFieldNumber = 6,
    kSamplePositiveFractionFieldNumber = 2,
    kSampleSizeFieldNumber = 3,
    kUseRotateIouFieldNumber = 4,
  };
  // repeated .second.protos.AnchorGeneratorCollection anchor_generators = 1;
  int anchor_generators_size() const;
  void clear_anchor_generators();
  ::second::protos::AnchorGeneratorCollection* mutable_anchor_generators(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::second::protos::AnchorGeneratorCollection >*
      mutable_anchor_generators();
  const ::second::protos::AnchorGeneratorCollection& anchor_generators(int index) const;
  ::second::protos::AnchorGeneratorCollection* add_anchor_generators();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::second::protos::AnchorGeneratorCollection >&
      anchor_generators() const;

  // string class_name = 5;
  void clear_class_name();
  const std::string& class_name() const;
  void set_class_name(const std::string& value);
  void set_class_name(std::string&& value);
  void set_class_name(const char* value);
  void set_class_name(const char* value, size_t size);
  std::string* mutable_class_name();
  std::string* release_class_name();
  void set_allocated_class_name(std::string* class_name);

  // .second.protos.RegionSimilarityCalculator region_similarity_calculator = 6;
  bool has_region_similarity_calculator() const;
  void clear_region_similarity_calculator();
  const ::second::protos::RegionSimilarityCalculator& region_similarity_calculator() const;
  ::second::protos::RegionSimilarityCalculator* release_region_similarity_calculator();
  ::second::protos::RegionSimilarityCalculator* mutable_region_similarity_calculator();
  void set_allocated_region_similarity_calculator(::second::protos::RegionSimilarityCalculator* region_similarity_calculator);

  // float sample_positive_fraction = 2;
  void clear_sample_positive_fraction();
  float sample_positive_fraction() const;
  void set_sample_positive_fraction(float value);

  // uint32 sample_size = 3;
  void clear_sample_size();
  ::PROTOBUF_NAMESPACE_ID::uint32 sample_size() const;
  void set_sample_size(::PROTOBUF_NAMESPACE_ID::uint32 value);

  // bool use_rotate_iou = 4;
  void clear_use_rotate_iou();
  bool use_rotate_iou() const;
  void set_use_rotate_iou(bool value);

  // @@protoc_insertion_point(class_scope:second.protos.TargetAssigner)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::second::protos::AnchorGeneratorCollection > anchor_generators_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr class_name_;
  ::second::protos::RegionSimilarityCalculator* region_similarity_calculator_;
  float sample_positive_fraction_;
  ::PROTOBUF_NAMESPACE_ID::uint32 sample_size_;
  bool use_rotate_iou_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_second_2fprotos_2ftarget_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// TargetAssigner

// repeated .second.protos.AnchorGeneratorCollection anchor_generators = 1;
inline int TargetAssigner::anchor_generators_size() const {
  return anchor_generators_.size();
}
inline ::second::protos::AnchorGeneratorCollection* TargetAssigner::mutable_anchor_generators(int index) {
  // @@protoc_insertion_point(field_mutable:second.protos.TargetAssigner.anchor_generators)
  return anchor_generators_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::second::protos::AnchorGeneratorCollection >*
TargetAssigner::mutable_anchor_generators() {
  // @@protoc_insertion_point(field_mutable_list:second.protos.TargetAssigner.anchor_generators)
  return &anchor_generators_;
}
inline const ::second::protos::AnchorGeneratorCollection& TargetAssigner::anchor_generators(int index) const {
  // @@protoc_insertion_point(field_get:second.protos.TargetAssigner.anchor_generators)
  return anchor_generators_.Get(index);
}
inline ::second::protos::AnchorGeneratorCollection* TargetAssigner::add_anchor_generators() {
  // @@protoc_insertion_point(field_add:second.protos.TargetAssigner.anchor_generators)
  return anchor_generators_.Add();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::second::protos::AnchorGeneratorCollection >&
TargetAssigner::anchor_generators() const {
  // @@protoc_insertion_point(field_list:second.protos.TargetAssigner.anchor_generators)
  return anchor_generators_;
}

// float sample_positive_fraction = 2;
inline void TargetAssigner::clear_sample_positive_fraction() {
  sample_positive_fraction_ = 0;
}
inline float TargetAssigner::sample_positive_fraction() const {
  // @@protoc_insertion_point(field_get:second.protos.TargetAssigner.sample_positive_fraction)
  return sample_positive_fraction_;
}
inline void TargetAssigner::set_sample_positive_fraction(float value) {
  
  sample_positive_fraction_ = value;
  // @@protoc_insertion_point(field_set:second.protos.TargetAssigner.sample_positive_fraction)
}

// uint32 sample_size = 3;
inline void TargetAssigner::clear_sample_size() {
  sample_size_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 TargetAssigner::sample_size() const {
  // @@protoc_insertion_point(field_get:second.protos.TargetAssigner.sample_size)
  return sample_size_;
}
inline void TargetAssigner::set_sample_size(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  sample_size_ = value;
  // @@protoc_insertion_point(field_set:second.protos.TargetAssigner.sample_size)
}

// bool use_rotate_iou = 4;
inline void TargetAssigner::clear_use_rotate_iou() {
  use_rotate_iou_ = false;
}
inline bool TargetAssigner::use_rotate_iou() const {
  // @@protoc_insertion_point(field_get:second.protos.TargetAssigner.use_rotate_iou)
  return use_rotate_iou_;
}
inline void TargetAssigner::set_use_rotate_iou(bool value) {
  
  use_rotate_iou_ = value;
  // @@protoc_insertion_point(field_set:second.protos.TargetAssigner.use_rotate_iou)
}

// string class_name = 5;
inline void TargetAssigner::clear_class_name() {
  class_name_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& TargetAssigner::class_name() const {
  // @@protoc_insertion_point(field_get:second.protos.TargetAssigner.class_name)
  return class_name_.GetNoArena();
}
inline void TargetAssigner::set_class_name(const std::string& value) {
  
  class_name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:second.protos.TargetAssigner.class_name)
}
inline void TargetAssigner::set_class_name(std::string&& value) {
  
  class_name_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:second.protos.TargetAssigner.class_name)
}
inline void TargetAssigner::set_class_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  class_name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:second.protos.TargetAssigner.class_name)
}
inline void TargetAssigner::set_class_name(const char* value, size_t size) {
  
  class_name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:second.protos.TargetAssigner.class_name)
}
inline std::string* TargetAssigner::mutable_class_name() {
  
  // @@protoc_insertion_point(field_mutable:second.protos.TargetAssigner.class_name)
  return class_name_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* TargetAssigner::release_class_name() {
  // @@protoc_insertion_point(field_release:second.protos.TargetAssigner.class_name)
  
  return class_name_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void TargetAssigner::set_allocated_class_name(std::string* class_name) {
  if (class_name != nullptr) {
    
  } else {
    
  }
  class_name_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), class_name);
  // @@protoc_insertion_point(field_set_allocated:second.protos.TargetAssigner.class_name)
}

// .second.protos.RegionSimilarityCalculator region_similarity_calculator = 6;
inline bool TargetAssigner::has_region_similarity_calculator() const {
  return this != internal_default_instance() && region_similarity_calculator_ != nullptr;
}
inline const ::second::protos::RegionSimilarityCalculator& TargetAssigner::region_similarity_calculator() const {
  const ::second::protos::RegionSimilarityCalculator* p = region_similarity_calculator_;
  // @@protoc_insertion_point(field_get:second.protos.TargetAssigner.region_similarity_calculator)
  return p != nullptr ? *p : *reinterpret_cast<const ::second::protos::RegionSimilarityCalculator*>(
      &::second::protos::_RegionSimilarityCalculator_default_instance_);
}
inline ::second::protos::RegionSimilarityCalculator* TargetAssigner::release_region_similarity_calculator() {
  // @@protoc_insertion_point(field_release:second.protos.TargetAssigner.region_similarity_calculator)
  
  ::second::protos::RegionSimilarityCalculator* temp = region_similarity_calculator_;
  region_similarity_calculator_ = nullptr;
  return temp;
}
inline ::second::protos::RegionSimilarityCalculator* TargetAssigner::mutable_region_similarity_calculator() {
  
  if (region_similarity_calculator_ == nullptr) {
    auto* p = CreateMaybeMessage<::second::protos::RegionSimilarityCalculator>(GetArenaNoVirtual());
    region_similarity_calculator_ = p;
  }
  // @@protoc_insertion_point(field_mutable:second.protos.TargetAssigner.region_similarity_calculator)
  return region_similarity_calculator_;
}
inline void TargetAssigner::set_allocated_region_similarity_calculator(::second::protos::RegionSimilarityCalculator* region_similarity_calculator) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(region_similarity_calculator_);
  }
  if (region_similarity_calculator) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      region_similarity_calculator = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, region_similarity_calculator, submessage_arena);
    }
    
  } else {
    
  }
  region_similarity_calculator_ = region_similarity_calculator;
  // @@protoc_insertion_point(field_set_allocated:second.protos.TargetAssigner.region_similarity_calculator)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace protos
}  // namespace second

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_second_2fprotos_2ftarget_2eproto
