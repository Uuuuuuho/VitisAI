// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: second/protos/pipeline.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_second_2fprotos_2fpipeline_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_second_2fprotos_2fpipeline_2eproto

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
#include "second/protos/input_reader.pb.h"
#include "second/protos/model.pb.h"
#include "second/protos/train.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_second_2fprotos_2fpipeline_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_second_2fprotos_2fpipeline_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_second_2fprotos_2fpipeline_2eproto;
namespace second {
namespace protos {
class TrainEvalPipelineConfig;
class TrainEvalPipelineConfigDefaultTypeInternal;
extern TrainEvalPipelineConfigDefaultTypeInternal _TrainEvalPipelineConfig_default_instance_;
}  // namespace protos
}  // namespace second
PROTOBUF_NAMESPACE_OPEN
template<> ::second::protos::TrainEvalPipelineConfig* Arena::CreateMaybeMessage<::second::protos::TrainEvalPipelineConfig>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace second {
namespace protos {

// ===================================================================

class TrainEvalPipelineConfig :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:second.protos.TrainEvalPipelineConfig) */ {
 public:
  TrainEvalPipelineConfig();
  virtual ~TrainEvalPipelineConfig();

  TrainEvalPipelineConfig(const TrainEvalPipelineConfig& from);
  TrainEvalPipelineConfig(TrainEvalPipelineConfig&& from) noexcept
    : TrainEvalPipelineConfig() {
    *this = ::std::move(from);
  }

  inline TrainEvalPipelineConfig& operator=(const TrainEvalPipelineConfig& from) {
    CopyFrom(from);
    return *this;
  }
  inline TrainEvalPipelineConfig& operator=(TrainEvalPipelineConfig&& from) noexcept {
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
  static const TrainEvalPipelineConfig& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const TrainEvalPipelineConfig* internal_default_instance() {
    return reinterpret_cast<const TrainEvalPipelineConfig*>(
               &_TrainEvalPipelineConfig_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(TrainEvalPipelineConfig& a, TrainEvalPipelineConfig& b) {
    a.Swap(&b);
  }
  inline void Swap(TrainEvalPipelineConfig* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline TrainEvalPipelineConfig* New() const final {
    return CreateMaybeMessage<TrainEvalPipelineConfig>(nullptr);
  }

  TrainEvalPipelineConfig* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<TrainEvalPipelineConfig>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const TrainEvalPipelineConfig& from);
  void MergeFrom(const TrainEvalPipelineConfig& from);
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
  void InternalSwap(TrainEvalPipelineConfig* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "second.protos.TrainEvalPipelineConfig";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_second_2fprotos_2fpipeline_2eproto);
    return ::descriptor_table_second_2fprotos_2fpipeline_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kModelFieldNumber = 1,
    kTrainInputReaderFieldNumber = 2,
    kTrainConfigFieldNumber = 3,
    kEvalInputReaderFieldNumber = 4,
  };
  // .second.protos.DetectionModel model = 1;
  bool has_model() const;
  void clear_model();
  const ::second::protos::DetectionModel& model() const;
  ::second::protos::DetectionModel* release_model();
  ::second::protos::DetectionModel* mutable_model();
  void set_allocated_model(::second::protos::DetectionModel* model);

  // .second.protos.InputReader train_input_reader = 2;
  bool has_train_input_reader() const;
  void clear_train_input_reader();
  const ::second::protos::InputReader& train_input_reader() const;
  ::second::protos::InputReader* release_train_input_reader();
  ::second::protos::InputReader* mutable_train_input_reader();
  void set_allocated_train_input_reader(::second::protos::InputReader* train_input_reader);

  // .second.protos.TrainConfig train_config = 3;
  bool has_train_config() const;
  void clear_train_config();
  const ::second::protos::TrainConfig& train_config() const;
  ::second::protos::TrainConfig* release_train_config();
  ::second::protos::TrainConfig* mutable_train_config();
  void set_allocated_train_config(::second::protos::TrainConfig* train_config);

  // .second.protos.InputReader eval_input_reader = 4;
  bool has_eval_input_reader() const;
  void clear_eval_input_reader();
  const ::second::protos::InputReader& eval_input_reader() const;
  ::second::protos::InputReader* release_eval_input_reader();
  ::second::protos::InputReader* mutable_eval_input_reader();
  void set_allocated_eval_input_reader(::second::protos::InputReader* eval_input_reader);

  // @@protoc_insertion_point(class_scope:second.protos.TrainEvalPipelineConfig)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::second::protos::DetectionModel* model_;
  ::second::protos::InputReader* train_input_reader_;
  ::second::protos::TrainConfig* train_config_;
  ::second::protos::InputReader* eval_input_reader_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_second_2fprotos_2fpipeline_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// TrainEvalPipelineConfig

// .second.protos.DetectionModel model = 1;
inline bool TrainEvalPipelineConfig::has_model() const {
  return this != internal_default_instance() && model_ != nullptr;
}
inline const ::second::protos::DetectionModel& TrainEvalPipelineConfig::model() const {
  const ::second::protos::DetectionModel* p = model_;
  // @@protoc_insertion_point(field_get:second.protos.TrainEvalPipelineConfig.model)
  return p != nullptr ? *p : *reinterpret_cast<const ::second::protos::DetectionModel*>(
      &::second::protos::_DetectionModel_default_instance_);
}
inline ::second::protos::DetectionModel* TrainEvalPipelineConfig::release_model() {
  // @@protoc_insertion_point(field_release:second.protos.TrainEvalPipelineConfig.model)
  
  ::second::protos::DetectionModel* temp = model_;
  model_ = nullptr;
  return temp;
}
inline ::second::protos::DetectionModel* TrainEvalPipelineConfig::mutable_model() {
  
  if (model_ == nullptr) {
    auto* p = CreateMaybeMessage<::second::protos::DetectionModel>(GetArenaNoVirtual());
    model_ = p;
  }
  // @@protoc_insertion_point(field_mutable:second.protos.TrainEvalPipelineConfig.model)
  return model_;
}
inline void TrainEvalPipelineConfig::set_allocated_model(::second::protos::DetectionModel* model) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(model_);
  }
  if (model) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      model = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, model, submessage_arena);
    }
    
  } else {
    
  }
  model_ = model;
  // @@protoc_insertion_point(field_set_allocated:second.protos.TrainEvalPipelineConfig.model)
}

// .second.protos.InputReader train_input_reader = 2;
inline bool TrainEvalPipelineConfig::has_train_input_reader() const {
  return this != internal_default_instance() && train_input_reader_ != nullptr;
}
inline const ::second::protos::InputReader& TrainEvalPipelineConfig::train_input_reader() const {
  const ::second::protos::InputReader* p = train_input_reader_;
  // @@protoc_insertion_point(field_get:second.protos.TrainEvalPipelineConfig.train_input_reader)
  return p != nullptr ? *p : *reinterpret_cast<const ::second::protos::InputReader*>(
      &::second::protos::_InputReader_default_instance_);
}
inline ::second::protos::InputReader* TrainEvalPipelineConfig::release_train_input_reader() {
  // @@protoc_insertion_point(field_release:second.protos.TrainEvalPipelineConfig.train_input_reader)
  
  ::second::protos::InputReader* temp = train_input_reader_;
  train_input_reader_ = nullptr;
  return temp;
}
inline ::second::protos::InputReader* TrainEvalPipelineConfig::mutable_train_input_reader() {
  
  if (train_input_reader_ == nullptr) {
    auto* p = CreateMaybeMessage<::second::protos::InputReader>(GetArenaNoVirtual());
    train_input_reader_ = p;
  }
  // @@protoc_insertion_point(field_mutable:second.protos.TrainEvalPipelineConfig.train_input_reader)
  return train_input_reader_;
}
inline void TrainEvalPipelineConfig::set_allocated_train_input_reader(::second::protos::InputReader* train_input_reader) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(train_input_reader_);
  }
  if (train_input_reader) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      train_input_reader = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, train_input_reader, submessage_arena);
    }
    
  } else {
    
  }
  train_input_reader_ = train_input_reader;
  // @@protoc_insertion_point(field_set_allocated:second.protos.TrainEvalPipelineConfig.train_input_reader)
}

// .second.protos.TrainConfig train_config = 3;
inline bool TrainEvalPipelineConfig::has_train_config() const {
  return this != internal_default_instance() && train_config_ != nullptr;
}
inline const ::second::protos::TrainConfig& TrainEvalPipelineConfig::train_config() const {
  const ::second::protos::TrainConfig* p = train_config_;
  // @@protoc_insertion_point(field_get:second.protos.TrainEvalPipelineConfig.train_config)
  return p != nullptr ? *p : *reinterpret_cast<const ::second::protos::TrainConfig*>(
      &::second::protos::_TrainConfig_default_instance_);
}
inline ::second::protos::TrainConfig* TrainEvalPipelineConfig::release_train_config() {
  // @@protoc_insertion_point(field_release:second.protos.TrainEvalPipelineConfig.train_config)
  
  ::second::protos::TrainConfig* temp = train_config_;
  train_config_ = nullptr;
  return temp;
}
inline ::second::protos::TrainConfig* TrainEvalPipelineConfig::mutable_train_config() {
  
  if (train_config_ == nullptr) {
    auto* p = CreateMaybeMessage<::second::protos::TrainConfig>(GetArenaNoVirtual());
    train_config_ = p;
  }
  // @@protoc_insertion_point(field_mutable:second.protos.TrainEvalPipelineConfig.train_config)
  return train_config_;
}
inline void TrainEvalPipelineConfig::set_allocated_train_config(::second::protos::TrainConfig* train_config) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(train_config_);
  }
  if (train_config) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      train_config = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, train_config, submessage_arena);
    }
    
  } else {
    
  }
  train_config_ = train_config;
  // @@protoc_insertion_point(field_set_allocated:second.protos.TrainEvalPipelineConfig.train_config)
}

// .second.protos.InputReader eval_input_reader = 4;
inline bool TrainEvalPipelineConfig::has_eval_input_reader() const {
  return this != internal_default_instance() && eval_input_reader_ != nullptr;
}
inline const ::second::protos::InputReader& TrainEvalPipelineConfig::eval_input_reader() const {
  const ::second::protos::InputReader* p = eval_input_reader_;
  // @@protoc_insertion_point(field_get:second.protos.TrainEvalPipelineConfig.eval_input_reader)
  return p != nullptr ? *p : *reinterpret_cast<const ::second::protos::InputReader*>(
      &::second::protos::_InputReader_default_instance_);
}
inline ::second::protos::InputReader* TrainEvalPipelineConfig::release_eval_input_reader() {
  // @@protoc_insertion_point(field_release:second.protos.TrainEvalPipelineConfig.eval_input_reader)
  
  ::second::protos::InputReader* temp = eval_input_reader_;
  eval_input_reader_ = nullptr;
  return temp;
}
inline ::second::protos::InputReader* TrainEvalPipelineConfig::mutable_eval_input_reader() {
  
  if (eval_input_reader_ == nullptr) {
    auto* p = CreateMaybeMessage<::second::protos::InputReader>(GetArenaNoVirtual());
    eval_input_reader_ = p;
  }
  // @@protoc_insertion_point(field_mutable:second.protos.TrainEvalPipelineConfig.eval_input_reader)
  return eval_input_reader_;
}
inline void TrainEvalPipelineConfig::set_allocated_eval_input_reader(::second::protos::InputReader* eval_input_reader) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(eval_input_reader_);
  }
  if (eval_input_reader) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      eval_input_reader = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, eval_input_reader, submessage_arena);
    }
    
  } else {
    
  }
  eval_input_reader_ = eval_input_reader;
  // @@protoc_insertion_point(field_set_allocated:second.protos.TrainEvalPipelineConfig.eval_input_reader)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace protos
}  // namespace second

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_second_2fprotos_2fpipeline_2eproto
