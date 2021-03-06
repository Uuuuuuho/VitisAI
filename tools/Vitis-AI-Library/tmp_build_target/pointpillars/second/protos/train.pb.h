// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: second/protos/train.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_second_2fprotos_2ftrain_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_second_2fprotos_2ftrain_2eproto

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
#include "second/protos/optimizer.pb.h"
#include "second/protos/preprocess.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_second_2fprotos_2ftrain_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_second_2fprotos_2ftrain_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[4]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_second_2fprotos_2ftrain_2eproto;
namespace second {
namespace protos {
class L1Regularizer;
class L1RegularizerDefaultTypeInternal;
extern L1RegularizerDefaultTypeInternal _L1Regularizer_default_instance_;
class L2Regularizer;
class L2RegularizerDefaultTypeInternal;
extern L2RegularizerDefaultTypeInternal _L2Regularizer_default_instance_;
class Regularizer;
class RegularizerDefaultTypeInternal;
extern RegularizerDefaultTypeInternal _Regularizer_default_instance_;
class TrainConfig;
class TrainConfigDefaultTypeInternal;
extern TrainConfigDefaultTypeInternal _TrainConfig_default_instance_;
}  // namespace protos
}  // namespace second
PROTOBUF_NAMESPACE_OPEN
template<> ::second::protos::L1Regularizer* Arena::CreateMaybeMessage<::second::protos::L1Regularizer>(Arena*);
template<> ::second::protos::L2Regularizer* Arena::CreateMaybeMessage<::second::protos::L2Regularizer>(Arena*);
template<> ::second::protos::Regularizer* Arena::CreateMaybeMessage<::second::protos::Regularizer>(Arena*);
template<> ::second::protos::TrainConfig* Arena::CreateMaybeMessage<::second::protos::TrainConfig>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace second {
namespace protos {

// ===================================================================

class Regularizer :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:second.protos.Regularizer) */ {
 public:
  Regularizer();
  virtual ~Regularizer();

  Regularizer(const Regularizer& from);
  Regularizer(Regularizer&& from) noexcept
    : Regularizer() {
    *this = ::std::move(from);
  }

  inline Regularizer& operator=(const Regularizer& from) {
    CopyFrom(from);
    return *this;
  }
  inline Regularizer& operator=(Regularizer&& from) noexcept {
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
  static const Regularizer& default_instance();

  enum RegularizerOneofCase {
    kL1Regularizer = 1,
    kL2Regularizer = 2,
    REGULARIZER_ONEOF_NOT_SET = 0,
  };

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Regularizer* internal_default_instance() {
    return reinterpret_cast<const Regularizer*>(
               &_Regularizer_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Regularizer& a, Regularizer& b) {
    a.Swap(&b);
  }
  inline void Swap(Regularizer* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Regularizer* New() const final {
    return CreateMaybeMessage<Regularizer>(nullptr);
  }

  Regularizer* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Regularizer>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Regularizer& from);
  void MergeFrom(const Regularizer& from);
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
  void InternalSwap(Regularizer* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "second.protos.Regularizer";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_second_2fprotos_2ftrain_2eproto);
    return ::descriptor_table_second_2fprotos_2ftrain_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kL1RegularizerFieldNumber = 1,
    kL2RegularizerFieldNumber = 2,
  };
  // .second.protos.L1Regularizer l1_regularizer = 1;
  bool has_l1_regularizer() const;
  void clear_l1_regularizer();
  const ::second::protos::L1Regularizer& l1_regularizer() const;
  ::second::protos::L1Regularizer* release_l1_regularizer();
  ::second::protos::L1Regularizer* mutable_l1_regularizer();
  void set_allocated_l1_regularizer(::second::protos::L1Regularizer* l1_regularizer);

  // .second.protos.L2Regularizer l2_regularizer = 2;
  bool has_l2_regularizer() const;
  void clear_l2_regularizer();
  const ::second::protos::L2Regularizer& l2_regularizer() const;
  ::second::protos::L2Regularizer* release_l2_regularizer();
  ::second::protos::L2Regularizer* mutable_l2_regularizer();
  void set_allocated_l2_regularizer(::second::protos::L2Regularizer* l2_regularizer);

  void clear_regularizer_oneof();
  RegularizerOneofCase regularizer_oneof_case() const;
  // @@protoc_insertion_point(class_scope:second.protos.Regularizer)
 private:
  class _Internal;
  void set_has_l1_regularizer();
  void set_has_l2_regularizer();

  inline bool has_regularizer_oneof() const;
  inline void clear_has_regularizer_oneof();

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  union RegularizerOneofUnion {
    RegularizerOneofUnion() {}
    ::second::protos::L1Regularizer* l1_regularizer_;
    ::second::protos::L2Regularizer* l2_regularizer_;
  } regularizer_oneof_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::uint32 _oneof_case_[1];

  friend struct ::TableStruct_second_2fprotos_2ftrain_2eproto;
};
// -------------------------------------------------------------------

class L1Regularizer :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:second.protos.L1Regularizer) */ {
 public:
  L1Regularizer();
  virtual ~L1Regularizer();

  L1Regularizer(const L1Regularizer& from);
  L1Regularizer(L1Regularizer&& from) noexcept
    : L1Regularizer() {
    *this = ::std::move(from);
  }

  inline L1Regularizer& operator=(const L1Regularizer& from) {
    CopyFrom(from);
    return *this;
  }
  inline L1Regularizer& operator=(L1Regularizer&& from) noexcept {
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
  static const L1Regularizer& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const L1Regularizer* internal_default_instance() {
    return reinterpret_cast<const L1Regularizer*>(
               &_L1Regularizer_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(L1Regularizer& a, L1Regularizer& b) {
    a.Swap(&b);
  }
  inline void Swap(L1Regularizer* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline L1Regularizer* New() const final {
    return CreateMaybeMessage<L1Regularizer>(nullptr);
  }

  L1Regularizer* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<L1Regularizer>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const L1Regularizer& from);
  void MergeFrom(const L1Regularizer& from);
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
  void InternalSwap(L1Regularizer* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "second.protos.L1Regularizer";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_second_2fprotos_2ftrain_2eproto);
    return ::descriptor_table_second_2fprotos_2ftrain_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kWeightFieldNumber = 1,
  };
  // float weight = 1;
  void clear_weight();
  float weight() const;
  void set_weight(float value);

  // @@protoc_insertion_point(class_scope:second.protos.L1Regularizer)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  float weight_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_second_2fprotos_2ftrain_2eproto;
};
// -------------------------------------------------------------------

class L2Regularizer :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:second.protos.L2Regularizer) */ {
 public:
  L2Regularizer();
  virtual ~L2Regularizer();

  L2Regularizer(const L2Regularizer& from);
  L2Regularizer(L2Regularizer&& from) noexcept
    : L2Regularizer() {
    *this = ::std::move(from);
  }

  inline L2Regularizer& operator=(const L2Regularizer& from) {
    CopyFrom(from);
    return *this;
  }
  inline L2Regularizer& operator=(L2Regularizer&& from) noexcept {
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
  static const L2Regularizer& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const L2Regularizer* internal_default_instance() {
    return reinterpret_cast<const L2Regularizer*>(
               &_L2Regularizer_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(L2Regularizer& a, L2Regularizer& b) {
    a.Swap(&b);
  }
  inline void Swap(L2Regularizer* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline L2Regularizer* New() const final {
    return CreateMaybeMessage<L2Regularizer>(nullptr);
  }

  L2Regularizer* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<L2Regularizer>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const L2Regularizer& from);
  void MergeFrom(const L2Regularizer& from);
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
  void InternalSwap(L2Regularizer* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "second.protos.L2Regularizer";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_second_2fprotos_2ftrain_2eproto);
    return ::descriptor_table_second_2fprotos_2ftrain_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kWeightFieldNumber = 1,
  };
  // float weight = 1;
  void clear_weight();
  float weight() const;
  void set_weight(float value);

  // @@protoc_insertion_point(class_scope:second.protos.L2Regularizer)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  float weight_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_second_2fprotos_2ftrain_2eproto;
};
// -------------------------------------------------------------------

class TrainConfig :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:second.protos.TrainConfig) */ {
 public:
  TrainConfig();
  virtual ~TrainConfig();

  TrainConfig(const TrainConfig& from);
  TrainConfig(TrainConfig&& from) noexcept
    : TrainConfig() {
    *this = ::std::move(from);
  }

  inline TrainConfig& operator=(const TrainConfig& from) {
    CopyFrom(from);
    return *this;
  }
  inline TrainConfig& operator=(TrainConfig&& from) noexcept {
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
  static const TrainConfig& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const TrainConfig* internal_default_instance() {
    return reinterpret_cast<const TrainConfig*>(
               &_TrainConfig_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    3;

  friend void swap(TrainConfig& a, TrainConfig& b) {
    a.Swap(&b);
  }
  inline void Swap(TrainConfig* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline TrainConfig* New() const final {
    return CreateMaybeMessage<TrainConfig>(nullptr);
  }

  TrainConfig* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<TrainConfig>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const TrainConfig& from);
  void MergeFrom(const TrainConfig& from);
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
  void InternalSwap(TrainConfig* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "second.protos.TrainConfig";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_second_2fprotos_2ftrain_2eproto);
    return ::descriptor_table_second_2fprotos_2ftrain_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kOptimizerFieldNumber = 1,
    kInterOpParallelismThreadsFieldNumber = 3,
    kIntraOpParallelismThreadsFieldNumber = 4,
    kStepsFieldNumber = 5,
    kStepsPerEvalFieldNumber = 6,
    kSaveCheckpointsSecsFieldNumber = 7,
    kSaveSummaryStepsFieldNumber = 8,
    kLossScaleFactorFieldNumber = 10,
    kEnableMixedPrecisionFieldNumber = 9,
    kClearMetricsEveryEpochFieldNumber = 11,
  };
  // .second.protos.Optimizer optimizer = 1;
  bool has_optimizer() const;
  void clear_optimizer();
  const ::second::protos::Optimizer& optimizer() const;
  ::second::protos::Optimizer* release_optimizer();
  ::second::protos::Optimizer* mutable_optimizer();
  void set_allocated_optimizer(::second::protos::Optimizer* optimizer);

  // uint32 inter_op_parallelism_threads = 3;
  void clear_inter_op_parallelism_threads();
  ::PROTOBUF_NAMESPACE_ID::uint32 inter_op_parallelism_threads() const;
  void set_inter_op_parallelism_threads(::PROTOBUF_NAMESPACE_ID::uint32 value);

  // uint32 intra_op_parallelism_threads = 4;
  void clear_intra_op_parallelism_threads();
  ::PROTOBUF_NAMESPACE_ID::uint32 intra_op_parallelism_threads() const;
  void set_intra_op_parallelism_threads(::PROTOBUF_NAMESPACE_ID::uint32 value);

  // uint32 steps = 5;
  void clear_steps();
  ::PROTOBUF_NAMESPACE_ID::uint32 steps() const;
  void set_steps(::PROTOBUF_NAMESPACE_ID::uint32 value);

  // uint32 steps_per_eval = 6;
  void clear_steps_per_eval();
  ::PROTOBUF_NAMESPACE_ID::uint32 steps_per_eval() const;
  void set_steps_per_eval(::PROTOBUF_NAMESPACE_ID::uint32 value);

  // uint32 save_checkpoints_secs = 7;
  void clear_save_checkpoints_secs();
  ::PROTOBUF_NAMESPACE_ID::uint32 save_checkpoints_secs() const;
  void set_save_checkpoints_secs(::PROTOBUF_NAMESPACE_ID::uint32 value);

  // uint32 save_summary_steps = 8;
  void clear_save_summary_steps();
  ::PROTOBUF_NAMESPACE_ID::uint32 save_summary_steps() const;
  void set_save_summary_steps(::PROTOBUF_NAMESPACE_ID::uint32 value);

  // float loss_scale_factor = 10;
  void clear_loss_scale_factor();
  float loss_scale_factor() const;
  void set_loss_scale_factor(float value);

  // bool enable_mixed_precision = 9;
  void clear_enable_mixed_precision();
  bool enable_mixed_precision() const;
  void set_enable_mixed_precision(bool value);

  // bool clear_metrics_every_epoch = 11;
  void clear_clear_metrics_every_epoch();
  bool clear_metrics_every_epoch() const;
  void set_clear_metrics_every_epoch(bool value);

  // @@protoc_insertion_point(class_scope:second.protos.TrainConfig)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::second::protos::Optimizer* optimizer_;
  ::PROTOBUF_NAMESPACE_ID::uint32 inter_op_parallelism_threads_;
  ::PROTOBUF_NAMESPACE_ID::uint32 intra_op_parallelism_threads_;
  ::PROTOBUF_NAMESPACE_ID::uint32 steps_;
  ::PROTOBUF_NAMESPACE_ID::uint32 steps_per_eval_;
  ::PROTOBUF_NAMESPACE_ID::uint32 save_checkpoints_secs_;
  ::PROTOBUF_NAMESPACE_ID::uint32 save_summary_steps_;
  float loss_scale_factor_;
  bool enable_mixed_precision_;
  bool clear_metrics_every_epoch_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_second_2fprotos_2ftrain_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Regularizer

// .second.protos.L1Regularizer l1_regularizer = 1;
inline bool Regularizer::has_l1_regularizer() const {
  return regularizer_oneof_case() == kL1Regularizer;
}
inline void Regularizer::set_has_l1_regularizer() {
  _oneof_case_[0] = kL1Regularizer;
}
inline void Regularizer::clear_l1_regularizer() {
  if (has_l1_regularizer()) {
    delete regularizer_oneof_.l1_regularizer_;
    clear_has_regularizer_oneof();
  }
}
inline ::second::protos::L1Regularizer* Regularizer::release_l1_regularizer() {
  // @@protoc_insertion_point(field_release:second.protos.Regularizer.l1_regularizer)
  if (has_l1_regularizer()) {
    clear_has_regularizer_oneof();
      ::second::protos::L1Regularizer* temp = regularizer_oneof_.l1_regularizer_;
    regularizer_oneof_.l1_regularizer_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline const ::second::protos::L1Regularizer& Regularizer::l1_regularizer() const {
  // @@protoc_insertion_point(field_get:second.protos.Regularizer.l1_regularizer)
  return has_l1_regularizer()
      ? *regularizer_oneof_.l1_regularizer_
      : *reinterpret_cast< ::second::protos::L1Regularizer*>(&::second::protos::_L1Regularizer_default_instance_);
}
inline ::second::protos::L1Regularizer* Regularizer::mutable_l1_regularizer() {
  if (!has_l1_regularizer()) {
    clear_regularizer_oneof();
    set_has_l1_regularizer();
    regularizer_oneof_.l1_regularizer_ = CreateMaybeMessage< ::second::protos::L1Regularizer >(
        GetArenaNoVirtual());
  }
  // @@protoc_insertion_point(field_mutable:second.protos.Regularizer.l1_regularizer)
  return regularizer_oneof_.l1_regularizer_;
}

// .second.protos.L2Regularizer l2_regularizer = 2;
inline bool Regularizer::has_l2_regularizer() const {
  return regularizer_oneof_case() == kL2Regularizer;
}
inline void Regularizer::set_has_l2_regularizer() {
  _oneof_case_[0] = kL2Regularizer;
}
inline void Regularizer::clear_l2_regularizer() {
  if (has_l2_regularizer()) {
    delete regularizer_oneof_.l2_regularizer_;
    clear_has_regularizer_oneof();
  }
}
inline ::second::protos::L2Regularizer* Regularizer::release_l2_regularizer() {
  // @@protoc_insertion_point(field_release:second.protos.Regularizer.l2_regularizer)
  if (has_l2_regularizer()) {
    clear_has_regularizer_oneof();
      ::second::protos::L2Regularizer* temp = regularizer_oneof_.l2_regularizer_;
    regularizer_oneof_.l2_regularizer_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline const ::second::protos::L2Regularizer& Regularizer::l2_regularizer() const {
  // @@protoc_insertion_point(field_get:second.protos.Regularizer.l2_regularizer)
  return has_l2_regularizer()
      ? *regularizer_oneof_.l2_regularizer_
      : *reinterpret_cast< ::second::protos::L2Regularizer*>(&::second::protos::_L2Regularizer_default_instance_);
}
inline ::second::protos::L2Regularizer* Regularizer::mutable_l2_regularizer() {
  if (!has_l2_regularizer()) {
    clear_regularizer_oneof();
    set_has_l2_regularizer();
    regularizer_oneof_.l2_regularizer_ = CreateMaybeMessage< ::second::protos::L2Regularizer >(
        GetArenaNoVirtual());
  }
  // @@protoc_insertion_point(field_mutable:second.protos.Regularizer.l2_regularizer)
  return regularizer_oneof_.l2_regularizer_;
}

inline bool Regularizer::has_regularizer_oneof() const {
  return regularizer_oneof_case() != REGULARIZER_ONEOF_NOT_SET;
}
inline void Regularizer::clear_has_regularizer_oneof() {
  _oneof_case_[0] = REGULARIZER_ONEOF_NOT_SET;
}
inline Regularizer::RegularizerOneofCase Regularizer::regularizer_oneof_case() const {
  return Regularizer::RegularizerOneofCase(_oneof_case_[0]);
}
// -------------------------------------------------------------------

// L1Regularizer

// float weight = 1;
inline void L1Regularizer::clear_weight() {
  weight_ = 0;
}
inline float L1Regularizer::weight() const {
  // @@protoc_insertion_point(field_get:second.protos.L1Regularizer.weight)
  return weight_;
}
inline void L1Regularizer::set_weight(float value) {
  
  weight_ = value;
  // @@protoc_insertion_point(field_set:second.protos.L1Regularizer.weight)
}

// -------------------------------------------------------------------

// L2Regularizer

// float weight = 1;
inline void L2Regularizer::clear_weight() {
  weight_ = 0;
}
inline float L2Regularizer::weight() const {
  // @@protoc_insertion_point(field_get:second.protos.L2Regularizer.weight)
  return weight_;
}
inline void L2Regularizer::set_weight(float value) {
  
  weight_ = value;
  // @@protoc_insertion_point(field_set:second.protos.L2Regularizer.weight)
}

// -------------------------------------------------------------------

// TrainConfig

// .second.protos.Optimizer optimizer = 1;
inline bool TrainConfig::has_optimizer() const {
  return this != internal_default_instance() && optimizer_ != nullptr;
}
inline const ::second::protos::Optimizer& TrainConfig::optimizer() const {
  const ::second::protos::Optimizer* p = optimizer_;
  // @@protoc_insertion_point(field_get:second.protos.TrainConfig.optimizer)
  return p != nullptr ? *p : *reinterpret_cast<const ::second::protos::Optimizer*>(
      &::second::protos::_Optimizer_default_instance_);
}
inline ::second::protos::Optimizer* TrainConfig::release_optimizer() {
  // @@protoc_insertion_point(field_release:second.protos.TrainConfig.optimizer)
  
  ::second::protos::Optimizer* temp = optimizer_;
  optimizer_ = nullptr;
  return temp;
}
inline ::second::protos::Optimizer* TrainConfig::mutable_optimizer() {
  
  if (optimizer_ == nullptr) {
    auto* p = CreateMaybeMessage<::second::protos::Optimizer>(GetArenaNoVirtual());
    optimizer_ = p;
  }
  // @@protoc_insertion_point(field_mutable:second.protos.TrainConfig.optimizer)
  return optimizer_;
}
inline void TrainConfig::set_allocated_optimizer(::second::protos::Optimizer* optimizer) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(optimizer_);
  }
  if (optimizer) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      optimizer = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, optimizer, submessage_arena);
    }
    
  } else {
    
  }
  optimizer_ = optimizer;
  // @@protoc_insertion_point(field_set_allocated:second.protos.TrainConfig.optimizer)
}

// uint32 inter_op_parallelism_threads = 3;
inline void TrainConfig::clear_inter_op_parallelism_threads() {
  inter_op_parallelism_threads_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 TrainConfig::inter_op_parallelism_threads() const {
  // @@protoc_insertion_point(field_get:second.protos.TrainConfig.inter_op_parallelism_threads)
  return inter_op_parallelism_threads_;
}
inline void TrainConfig::set_inter_op_parallelism_threads(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  inter_op_parallelism_threads_ = value;
  // @@protoc_insertion_point(field_set:second.protos.TrainConfig.inter_op_parallelism_threads)
}

// uint32 intra_op_parallelism_threads = 4;
inline void TrainConfig::clear_intra_op_parallelism_threads() {
  intra_op_parallelism_threads_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 TrainConfig::intra_op_parallelism_threads() const {
  // @@protoc_insertion_point(field_get:second.protos.TrainConfig.intra_op_parallelism_threads)
  return intra_op_parallelism_threads_;
}
inline void TrainConfig::set_intra_op_parallelism_threads(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  intra_op_parallelism_threads_ = value;
  // @@protoc_insertion_point(field_set:second.protos.TrainConfig.intra_op_parallelism_threads)
}

// uint32 steps = 5;
inline void TrainConfig::clear_steps() {
  steps_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 TrainConfig::steps() const {
  // @@protoc_insertion_point(field_get:second.protos.TrainConfig.steps)
  return steps_;
}
inline void TrainConfig::set_steps(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  steps_ = value;
  // @@protoc_insertion_point(field_set:second.protos.TrainConfig.steps)
}

// uint32 steps_per_eval = 6;
inline void TrainConfig::clear_steps_per_eval() {
  steps_per_eval_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 TrainConfig::steps_per_eval() const {
  // @@protoc_insertion_point(field_get:second.protos.TrainConfig.steps_per_eval)
  return steps_per_eval_;
}
inline void TrainConfig::set_steps_per_eval(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  steps_per_eval_ = value;
  // @@protoc_insertion_point(field_set:second.protos.TrainConfig.steps_per_eval)
}

// uint32 save_checkpoints_secs = 7;
inline void TrainConfig::clear_save_checkpoints_secs() {
  save_checkpoints_secs_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 TrainConfig::save_checkpoints_secs() const {
  // @@protoc_insertion_point(field_get:second.protos.TrainConfig.save_checkpoints_secs)
  return save_checkpoints_secs_;
}
inline void TrainConfig::set_save_checkpoints_secs(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  save_checkpoints_secs_ = value;
  // @@protoc_insertion_point(field_set:second.protos.TrainConfig.save_checkpoints_secs)
}

// uint32 save_summary_steps = 8;
inline void TrainConfig::clear_save_summary_steps() {
  save_summary_steps_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 TrainConfig::save_summary_steps() const {
  // @@protoc_insertion_point(field_get:second.protos.TrainConfig.save_summary_steps)
  return save_summary_steps_;
}
inline void TrainConfig::set_save_summary_steps(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  save_summary_steps_ = value;
  // @@protoc_insertion_point(field_set:second.protos.TrainConfig.save_summary_steps)
}

// bool enable_mixed_precision = 9;
inline void TrainConfig::clear_enable_mixed_precision() {
  enable_mixed_precision_ = false;
}
inline bool TrainConfig::enable_mixed_precision() const {
  // @@protoc_insertion_point(field_get:second.protos.TrainConfig.enable_mixed_precision)
  return enable_mixed_precision_;
}
inline void TrainConfig::set_enable_mixed_precision(bool value) {
  
  enable_mixed_precision_ = value;
  // @@protoc_insertion_point(field_set:second.protos.TrainConfig.enable_mixed_precision)
}

// float loss_scale_factor = 10;
inline void TrainConfig::clear_loss_scale_factor() {
  loss_scale_factor_ = 0;
}
inline float TrainConfig::loss_scale_factor() const {
  // @@protoc_insertion_point(field_get:second.protos.TrainConfig.loss_scale_factor)
  return loss_scale_factor_;
}
inline void TrainConfig::set_loss_scale_factor(float value) {
  
  loss_scale_factor_ = value;
  // @@protoc_insertion_point(field_set:second.protos.TrainConfig.loss_scale_factor)
}

// bool clear_metrics_every_epoch = 11;
inline void TrainConfig::clear_clear_metrics_every_epoch() {
  clear_metrics_every_epoch_ = false;
}
inline bool TrainConfig::clear_metrics_every_epoch() const {
  // @@protoc_insertion_point(field_get:second.protos.TrainConfig.clear_metrics_every_epoch)
  return clear_metrics_every_epoch_;
}
inline void TrainConfig::set_clear_metrics_every_epoch(bool value) {
  
  clear_metrics_every_epoch_ = value;
  // @@protoc_insertion_point(field_set:second.protos.TrainConfig.clear_metrics_every_epoch)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace protos
}  // namespace second

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_second_2fprotos_2ftrain_2eproto
