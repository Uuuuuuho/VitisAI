// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: second/protos/pipeline.proto

#include "second/protos/pipeline.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
extern PROTOBUF_INTERNAL_EXPORT_second_2fprotos_2fmodel_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_DetectionModel_second_2fprotos_2fmodel_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_second_2fprotos_2finput_5freader_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<3> scc_info_InputReader_second_2fprotos_2finput_5freader_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_second_2fprotos_2ftrain_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_TrainConfig_second_2fprotos_2ftrain_2eproto;
namespace second {
namespace protos {
class TrainEvalPipelineConfigDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<TrainEvalPipelineConfig> _instance;
} _TrainEvalPipelineConfig_default_instance_;
}  // namespace protos
}  // namespace second
static void InitDefaultsscc_info_TrainEvalPipelineConfig_second_2fprotos_2fpipeline_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::second::protos::_TrainEvalPipelineConfig_default_instance_;
    new (ptr) ::second::protos::TrainEvalPipelineConfig();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::second::protos::TrainEvalPipelineConfig::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<3> scc_info_TrainEvalPipelineConfig_second_2fprotos_2fpipeline_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 3, InitDefaultsscc_info_TrainEvalPipelineConfig_second_2fprotos_2fpipeline_2eproto}, {
      &scc_info_DetectionModel_second_2fprotos_2fmodel_2eproto.base,
      &scc_info_InputReader_second_2fprotos_2finput_5freader_2eproto.base,
      &scc_info_TrainConfig_second_2fprotos_2ftrain_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_second_2fprotos_2fpipeline_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_second_2fprotos_2fpipeline_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_second_2fprotos_2fpipeline_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_second_2fprotos_2fpipeline_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::second::protos::TrainEvalPipelineConfig, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::second::protos::TrainEvalPipelineConfig, model_),
  PROTOBUF_FIELD_OFFSET(::second::protos::TrainEvalPipelineConfig, train_input_reader_),
  PROTOBUF_FIELD_OFFSET(::second::protos::TrainEvalPipelineConfig, train_config_),
  PROTOBUF_FIELD_OFFSET(::second::protos::TrainEvalPipelineConfig, eval_input_reader_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::second::protos::TrainEvalPipelineConfig)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::second::protos::_TrainEvalPipelineConfig_default_instance_),
};

const char descriptor_table_protodef_second_2fprotos_2fpipeline_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\034second/protos/pipeline.proto\022\rsecond.p"
  "rotos\032 second/protos/input_reader.proto\032"
  "\031second/protos/model.proto\032\031second/proto"
  "s/train.proto\"\350\001\n\027TrainEvalPipelineConfi"
  "g\022,\n\005model\030\001 \001(\0132\035.second.protos.Detecti"
  "onModel\0226\n\022train_input_reader\030\002 \001(\0132\032.se"
  "cond.protos.InputReader\0220\n\014train_config\030"
  "\003 \001(\0132\032.second.protos.TrainConfig\0225\n\021eva"
  "l_input_reader\030\004 \001(\0132\032.second.protos.Inp"
  "utReaderb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_second_2fprotos_2fpipeline_2eproto_deps[3] = {
  &::descriptor_table_second_2fprotos_2finput_5freader_2eproto,
  &::descriptor_table_second_2fprotos_2fmodel_2eproto,
  &::descriptor_table_second_2fprotos_2ftrain_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_second_2fprotos_2fpipeline_2eproto_sccs[1] = {
  &scc_info_TrainEvalPipelineConfig_second_2fprotos_2fpipeline_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_second_2fprotos_2fpipeline_2eproto_once;
static bool descriptor_table_second_2fprotos_2fpipeline_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_second_2fprotos_2fpipeline_2eproto = {
  &descriptor_table_second_2fprotos_2fpipeline_2eproto_initialized, descriptor_table_protodef_second_2fprotos_2fpipeline_2eproto, "second/protos/pipeline.proto", 376,
  &descriptor_table_second_2fprotos_2fpipeline_2eproto_once, descriptor_table_second_2fprotos_2fpipeline_2eproto_sccs, descriptor_table_second_2fprotos_2fpipeline_2eproto_deps, 1, 3,
  schemas, file_default_instances, TableStruct_second_2fprotos_2fpipeline_2eproto::offsets,
  file_level_metadata_second_2fprotos_2fpipeline_2eproto, 1, file_level_enum_descriptors_second_2fprotos_2fpipeline_2eproto, file_level_service_descriptors_second_2fprotos_2fpipeline_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_second_2fprotos_2fpipeline_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_second_2fprotos_2fpipeline_2eproto), true);
namespace second {
namespace protos {

// ===================================================================

void TrainEvalPipelineConfig::InitAsDefaultInstance() {
  ::second::protos::_TrainEvalPipelineConfig_default_instance_._instance.get_mutable()->model_ = const_cast< ::second::protos::DetectionModel*>(
      ::second::protos::DetectionModel::internal_default_instance());
  ::second::protos::_TrainEvalPipelineConfig_default_instance_._instance.get_mutable()->train_input_reader_ = const_cast< ::second::protos::InputReader*>(
      ::second::protos::InputReader::internal_default_instance());
  ::second::protos::_TrainEvalPipelineConfig_default_instance_._instance.get_mutable()->train_config_ = const_cast< ::second::protos::TrainConfig*>(
      ::second::protos::TrainConfig::internal_default_instance());
  ::second::protos::_TrainEvalPipelineConfig_default_instance_._instance.get_mutable()->eval_input_reader_ = const_cast< ::second::protos::InputReader*>(
      ::second::protos::InputReader::internal_default_instance());
}
class TrainEvalPipelineConfig::_Internal {
 public:
  static const ::second::protos::DetectionModel& model(const TrainEvalPipelineConfig* msg);
  static const ::second::protos::InputReader& train_input_reader(const TrainEvalPipelineConfig* msg);
  static const ::second::protos::TrainConfig& train_config(const TrainEvalPipelineConfig* msg);
  static const ::second::protos::InputReader& eval_input_reader(const TrainEvalPipelineConfig* msg);
};

const ::second::protos::DetectionModel&
TrainEvalPipelineConfig::_Internal::model(const TrainEvalPipelineConfig* msg) {
  return *msg->model_;
}
const ::second::protos::InputReader&
TrainEvalPipelineConfig::_Internal::train_input_reader(const TrainEvalPipelineConfig* msg) {
  return *msg->train_input_reader_;
}
const ::second::protos::TrainConfig&
TrainEvalPipelineConfig::_Internal::train_config(const TrainEvalPipelineConfig* msg) {
  return *msg->train_config_;
}
const ::second::protos::InputReader&
TrainEvalPipelineConfig::_Internal::eval_input_reader(const TrainEvalPipelineConfig* msg) {
  return *msg->eval_input_reader_;
}
void TrainEvalPipelineConfig::clear_model() {
  if (GetArenaNoVirtual() == nullptr && model_ != nullptr) {
    delete model_;
  }
  model_ = nullptr;
}
void TrainEvalPipelineConfig::clear_train_input_reader() {
  if (GetArenaNoVirtual() == nullptr && train_input_reader_ != nullptr) {
    delete train_input_reader_;
  }
  train_input_reader_ = nullptr;
}
void TrainEvalPipelineConfig::clear_train_config() {
  if (GetArenaNoVirtual() == nullptr && train_config_ != nullptr) {
    delete train_config_;
  }
  train_config_ = nullptr;
}
void TrainEvalPipelineConfig::clear_eval_input_reader() {
  if (GetArenaNoVirtual() == nullptr && eval_input_reader_ != nullptr) {
    delete eval_input_reader_;
  }
  eval_input_reader_ = nullptr;
}
TrainEvalPipelineConfig::TrainEvalPipelineConfig()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:second.protos.TrainEvalPipelineConfig)
}
TrainEvalPipelineConfig::TrainEvalPipelineConfig(const TrainEvalPipelineConfig& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_model()) {
    model_ = new ::second::protos::DetectionModel(*from.model_);
  } else {
    model_ = nullptr;
  }
  if (from.has_train_input_reader()) {
    train_input_reader_ = new ::second::protos::InputReader(*from.train_input_reader_);
  } else {
    train_input_reader_ = nullptr;
  }
  if (from.has_train_config()) {
    train_config_ = new ::second::protos::TrainConfig(*from.train_config_);
  } else {
    train_config_ = nullptr;
  }
  if (from.has_eval_input_reader()) {
    eval_input_reader_ = new ::second::protos::InputReader(*from.eval_input_reader_);
  } else {
    eval_input_reader_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:second.protos.TrainEvalPipelineConfig)
}

void TrainEvalPipelineConfig::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_TrainEvalPipelineConfig_second_2fprotos_2fpipeline_2eproto.base);
  ::memset(&model_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&eval_input_reader_) -
      reinterpret_cast<char*>(&model_)) + sizeof(eval_input_reader_));
}

TrainEvalPipelineConfig::~TrainEvalPipelineConfig() {
  // @@protoc_insertion_point(destructor:second.protos.TrainEvalPipelineConfig)
  SharedDtor();
}

void TrainEvalPipelineConfig::SharedDtor() {
  if (this != internal_default_instance()) delete model_;
  if (this != internal_default_instance()) delete train_input_reader_;
  if (this != internal_default_instance()) delete train_config_;
  if (this != internal_default_instance()) delete eval_input_reader_;
}

void TrainEvalPipelineConfig::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const TrainEvalPipelineConfig& TrainEvalPipelineConfig::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_TrainEvalPipelineConfig_second_2fprotos_2fpipeline_2eproto.base);
  return *internal_default_instance();
}


void TrainEvalPipelineConfig::Clear() {
// @@protoc_insertion_point(message_clear_start:second.protos.TrainEvalPipelineConfig)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaNoVirtual() == nullptr && model_ != nullptr) {
    delete model_;
  }
  model_ = nullptr;
  if (GetArenaNoVirtual() == nullptr && train_input_reader_ != nullptr) {
    delete train_input_reader_;
  }
  train_input_reader_ = nullptr;
  if (GetArenaNoVirtual() == nullptr && train_config_ != nullptr) {
    delete train_config_;
  }
  train_config_ = nullptr;
  if (GetArenaNoVirtual() == nullptr && eval_input_reader_ != nullptr) {
    delete eval_input_reader_;
  }
  eval_input_reader_ = nullptr;
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* TrainEvalPipelineConfig::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // .second.protos.DetectionModel model = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ctx->ParseMessage(mutable_model(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .second.protos.InputReader train_input_reader = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr = ctx->ParseMessage(mutable_train_input_reader(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .second.protos.TrainConfig train_config = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          ptr = ctx->ParseMessage(mutable_train_config(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .second.protos.InputReader eval_input_reader = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          ptr = ctx->ParseMessage(mutable_eval_input_reader(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool TrainEvalPipelineConfig::MergePartialFromCodedStream(
    ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::PROTOBUF_NAMESPACE_ID::uint32 tag;
  // @@protoc_insertion_point(parse_start:second.protos.TrainEvalPipelineConfig)
  for (;;) {
    ::std::pair<::PROTOBUF_NAMESPACE_ID::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .second.protos.DetectionModel model = 1;
      case 1: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (10 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadMessage(
               input, mutable_model()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .second.protos.InputReader train_input_reader = 2;
      case 2: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (18 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadMessage(
               input, mutable_train_input_reader()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .second.protos.TrainConfig train_config = 3;
      case 3: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (26 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadMessage(
               input, mutable_train_config()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .second.protos.InputReader eval_input_reader = 4;
      case 4: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (34 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadMessage(
               input, mutable_eval_input_reader()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:second.protos.TrainEvalPipelineConfig)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:second.protos.TrainEvalPipelineConfig)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void TrainEvalPipelineConfig::SerializeWithCachedSizes(
    ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:second.protos.TrainEvalPipelineConfig)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .second.protos.DetectionModel model = 1;
  if (this->has_model()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, _Internal::model(this), output);
  }

  // .second.protos.InputReader train_input_reader = 2;
  if (this->has_train_input_reader()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, _Internal::train_input_reader(this), output);
  }

  // .second.protos.TrainConfig train_config = 3;
  if (this->has_train_config()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, _Internal::train_config(this), output);
  }

  // .second.protos.InputReader eval_input_reader = 4;
  if (this->has_eval_input_reader()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, _Internal::eval_input_reader(this), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:second.protos.TrainEvalPipelineConfig)
}

::PROTOBUF_NAMESPACE_ID::uint8* TrainEvalPipelineConfig::InternalSerializeWithCachedSizesToArray(
    ::PROTOBUF_NAMESPACE_ID::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:second.protos.TrainEvalPipelineConfig)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .second.protos.DetectionModel model = 1;
  if (this->has_model()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, _Internal::model(this), target);
  }

  // .second.protos.InputReader train_input_reader = 2;
  if (this->has_train_input_reader()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessageToArray(
        2, _Internal::train_input_reader(this), target);
  }

  // .second.protos.TrainConfig train_config = 3;
  if (this->has_train_config()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessageToArray(
        3, _Internal::train_config(this), target);
  }

  // .second.protos.InputReader eval_input_reader = 4;
  if (this->has_eval_input_reader()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessageToArray(
        4, _Internal::eval_input_reader(this), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:second.protos.TrainEvalPipelineConfig)
  return target;
}

size_t TrainEvalPipelineConfig::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:second.protos.TrainEvalPipelineConfig)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .second.protos.DetectionModel model = 1;
  if (this->has_model()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *model_);
  }

  // .second.protos.InputReader train_input_reader = 2;
  if (this->has_train_input_reader()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *train_input_reader_);
  }

  // .second.protos.TrainConfig train_config = 3;
  if (this->has_train_config()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *train_config_);
  }

  // .second.protos.InputReader eval_input_reader = 4;
  if (this->has_eval_input_reader()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *eval_input_reader_);
  }

  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void TrainEvalPipelineConfig::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:second.protos.TrainEvalPipelineConfig)
  GOOGLE_DCHECK_NE(&from, this);
  const TrainEvalPipelineConfig* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<TrainEvalPipelineConfig>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:second.protos.TrainEvalPipelineConfig)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:second.protos.TrainEvalPipelineConfig)
    MergeFrom(*source);
  }
}

void TrainEvalPipelineConfig::MergeFrom(const TrainEvalPipelineConfig& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:second.protos.TrainEvalPipelineConfig)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_model()) {
    mutable_model()->::second::protos::DetectionModel::MergeFrom(from.model());
  }
  if (from.has_train_input_reader()) {
    mutable_train_input_reader()->::second::protos::InputReader::MergeFrom(from.train_input_reader());
  }
  if (from.has_train_config()) {
    mutable_train_config()->::second::protos::TrainConfig::MergeFrom(from.train_config());
  }
  if (from.has_eval_input_reader()) {
    mutable_eval_input_reader()->::second::protos::InputReader::MergeFrom(from.eval_input_reader());
  }
}

void TrainEvalPipelineConfig::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:second.protos.TrainEvalPipelineConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void TrainEvalPipelineConfig::CopyFrom(const TrainEvalPipelineConfig& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:second.protos.TrainEvalPipelineConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TrainEvalPipelineConfig::IsInitialized() const {
  return true;
}

void TrainEvalPipelineConfig::InternalSwap(TrainEvalPipelineConfig* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(model_, other->model_);
  swap(train_input_reader_, other->train_input_reader_);
  swap(train_config_, other->train_config_);
  swap(eval_input_reader_, other->eval_input_reader_);
}

::PROTOBUF_NAMESPACE_ID::Metadata TrainEvalPipelineConfig::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace protos
}  // namespace second
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::second::protos::TrainEvalPipelineConfig* Arena::CreateMaybeMessage< ::second::protos::TrainEvalPipelineConfig >(Arena* arena) {
  return Arena::CreateInternal< ::second::protos::TrainEvalPipelineConfig >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
