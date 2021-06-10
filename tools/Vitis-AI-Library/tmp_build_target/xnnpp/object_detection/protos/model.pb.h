// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: object_detection/protos/model.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_object_5fdetection_2fprotos_2fmodel_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_object_5fdetection_2fprotos_2fmodel_2eproto

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
#include "object_detection/protos/faster_rcnn.pb.h"
#include "object_detection/protos/ssd.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_object_5fdetection_2fprotos_2fmodel_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_object_5fdetection_2fprotos_2fmodel_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_object_5fdetection_2fprotos_2fmodel_2eproto;
namespace object_detection {
namespace protos {
class DetectionModel;
class DetectionModelDefaultTypeInternal;
extern DetectionModelDefaultTypeInternal _DetectionModel_default_instance_;
}  // namespace protos
}  // namespace object_detection
PROTOBUF_NAMESPACE_OPEN
template<> ::object_detection::protos::DetectionModel* Arena::CreateMaybeMessage<::object_detection::protos::DetectionModel>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace object_detection {
namespace protos {

// ===================================================================

class DetectionModel :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:object_detection.protos.DetectionModel) */ {
 public:
  DetectionModel();
  virtual ~DetectionModel();

  DetectionModel(const DetectionModel& from);
  DetectionModel(DetectionModel&& from) noexcept
    : DetectionModel() {
    *this = ::std::move(from);
  }

  inline DetectionModel& operator=(const DetectionModel& from) {
    CopyFrom(from);
    return *this;
  }
  inline DetectionModel& operator=(DetectionModel&& from) noexcept {
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
  static const DetectionModel& default_instance();

  enum ModelCase {
    kFasterRcnn = 1,
    kSsd = 2,
    MODEL_NOT_SET = 0,
  };

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const DetectionModel* internal_default_instance() {
    return reinterpret_cast<const DetectionModel*>(
               &_DetectionModel_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(DetectionModel& a, DetectionModel& b) {
    a.Swap(&b);
  }
  inline void Swap(DetectionModel* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline DetectionModel* New() const final {
    return CreateMaybeMessage<DetectionModel>(nullptr);
  }

  DetectionModel* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<DetectionModel>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const DetectionModel& from);
  void MergeFrom(const DetectionModel& from);
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
  void InternalSwap(DetectionModel* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "object_detection.protos.DetectionModel";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_object_5fdetection_2fprotos_2fmodel_2eproto);
    return ::descriptor_table_object_5fdetection_2fprotos_2fmodel_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kFasterRcnnFieldNumber = 1,
    kSsdFieldNumber = 2,
  };
  // optional .object_detection.protos.FasterRcnn faster_rcnn = 1;
  bool has_faster_rcnn() const;
  void clear_faster_rcnn();
  const ::object_detection::protos::FasterRcnn& faster_rcnn() const;
  ::object_detection::protos::FasterRcnn* release_faster_rcnn();
  ::object_detection::protos::FasterRcnn* mutable_faster_rcnn();
  void set_allocated_faster_rcnn(::object_detection::protos::FasterRcnn* faster_rcnn);

  // optional .object_detection.protos.Ssd ssd = 2;
  bool has_ssd() const;
  void clear_ssd();
  const ::object_detection::protos::Ssd& ssd() const;
  ::object_detection::protos::Ssd* release_ssd();
  ::object_detection::protos::Ssd* mutable_ssd();
  void set_allocated_ssd(::object_detection::protos::Ssd* ssd);

  void clear_model();
  ModelCase model_case() const;
  // @@protoc_insertion_point(class_scope:object_detection.protos.DetectionModel)
 private:
  class _Internal;
  void set_has_faster_rcnn();
  void set_has_ssd();

  inline bool has_model() const;
  inline void clear_has_model();

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  union ModelUnion {
    ModelUnion() {}
    ::object_detection::protos::FasterRcnn* faster_rcnn_;
    ::object_detection::protos::Ssd* ssd_;
  } model_;
  ::PROTOBUF_NAMESPACE_ID::uint32 _oneof_case_[1];

  friend struct ::TableStruct_object_5fdetection_2fprotos_2fmodel_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// DetectionModel

// optional .object_detection.protos.FasterRcnn faster_rcnn = 1;
inline bool DetectionModel::has_faster_rcnn() const {
  return model_case() == kFasterRcnn;
}
inline void DetectionModel::set_has_faster_rcnn() {
  _oneof_case_[0] = kFasterRcnn;
}
inline ::object_detection::protos::FasterRcnn* DetectionModel::release_faster_rcnn() {
  // @@protoc_insertion_point(field_release:object_detection.protos.DetectionModel.faster_rcnn)
  if (has_faster_rcnn()) {
    clear_has_model();
      ::object_detection::protos::FasterRcnn* temp = model_.faster_rcnn_;
    model_.faster_rcnn_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline const ::object_detection::protos::FasterRcnn& DetectionModel::faster_rcnn() const {
  // @@protoc_insertion_point(field_get:object_detection.protos.DetectionModel.faster_rcnn)
  return has_faster_rcnn()
      ? *model_.faster_rcnn_
      : *reinterpret_cast< ::object_detection::protos::FasterRcnn*>(&::object_detection::protos::_FasterRcnn_default_instance_);
}
inline ::object_detection::protos::FasterRcnn* DetectionModel::mutable_faster_rcnn() {
  if (!has_faster_rcnn()) {
    clear_model();
    set_has_faster_rcnn();
    model_.faster_rcnn_ = CreateMaybeMessage< ::object_detection::protos::FasterRcnn >(
        GetArenaNoVirtual());
  }
  // @@protoc_insertion_point(field_mutable:object_detection.protos.DetectionModel.faster_rcnn)
  return model_.faster_rcnn_;
}

// optional .object_detection.protos.Ssd ssd = 2;
inline bool DetectionModel::has_ssd() const {
  return model_case() == kSsd;
}
inline void DetectionModel::set_has_ssd() {
  _oneof_case_[0] = kSsd;
}
inline ::object_detection::protos::Ssd* DetectionModel::release_ssd() {
  // @@protoc_insertion_point(field_release:object_detection.protos.DetectionModel.ssd)
  if (has_ssd()) {
    clear_has_model();
      ::object_detection::protos::Ssd* temp = model_.ssd_;
    model_.ssd_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline const ::object_detection::protos::Ssd& DetectionModel::ssd() const {
  // @@protoc_insertion_point(field_get:object_detection.protos.DetectionModel.ssd)
  return has_ssd()
      ? *model_.ssd_
      : *reinterpret_cast< ::object_detection::protos::Ssd*>(&::object_detection::protos::_Ssd_default_instance_);
}
inline ::object_detection::protos::Ssd* DetectionModel::mutable_ssd() {
  if (!has_ssd()) {
    clear_model();
    set_has_ssd();
    model_.ssd_ = CreateMaybeMessage< ::object_detection::protos::Ssd >(
        GetArenaNoVirtual());
  }
  // @@protoc_insertion_point(field_mutable:object_detection.protos.DetectionModel.ssd)
  return model_.ssd_;
}

inline bool DetectionModel::has_model() const {
  return model_case() != MODEL_NOT_SET;
}
inline void DetectionModel::clear_has_model() {
  _oneof_case_[0] = MODEL_NOT_SET;
}
inline DetectionModel::ModelCase DetectionModel::model_case() const {
  return DetectionModel::ModelCase(_oneof_case_[0]);
}
#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace protos
}  // namespace object_detection

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_object_5fdetection_2fprotos_2fmodel_2eproto
