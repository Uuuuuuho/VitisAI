// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: second/protos/target.proto

#include "second/protos/target.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_second_2fprotos_2fanchors_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<3> scc_info_AnchorGeneratorCollection_second_2fprotos_2fanchors_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_second_2fprotos_2fsimilarity_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<3> scc_info_RegionSimilarityCalculator_second_2fprotos_2fsimilarity_2eproto;
namespace second {
namespace protos {
class TargetAssignerDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<TargetAssigner> _instance;
} _TargetAssigner_default_instance_;
}  // namespace protos
}  // namespace second
static void InitDefaultsscc_info_TargetAssigner_second_2fprotos_2ftarget_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::second::protos::_TargetAssigner_default_instance_;
    new (ptr) ::second::protos::TargetAssigner();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::second::protos::TargetAssigner::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<2> scc_info_TargetAssigner_second_2fprotos_2ftarget_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 2, InitDefaultsscc_info_TargetAssigner_second_2fprotos_2ftarget_2eproto}, {
      &scc_info_AnchorGeneratorCollection_second_2fprotos_2fanchors_2eproto.base,
      &scc_info_RegionSimilarityCalculator_second_2fprotos_2fsimilarity_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_second_2fprotos_2ftarget_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_second_2fprotos_2ftarget_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_second_2fprotos_2ftarget_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_second_2fprotos_2ftarget_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::second::protos::TargetAssigner, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::second::protos::TargetAssigner, anchor_generators_),
  PROTOBUF_FIELD_OFFSET(::second::protos::TargetAssigner, sample_positive_fraction_),
  PROTOBUF_FIELD_OFFSET(::second::protos::TargetAssigner, sample_size_),
  PROTOBUF_FIELD_OFFSET(::second::protos::TargetAssigner, use_rotate_iou_),
  PROTOBUF_FIELD_OFFSET(::second::protos::TargetAssigner, class_name_),
  PROTOBUF_FIELD_OFFSET(::second::protos::TargetAssigner, region_similarity_calculator_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::second::protos::TargetAssigner)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::second::protos::_TargetAssigner_default_instance_),
};

const char descriptor_table_protodef_second_2fprotos_2ftarget_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\032second/protos/target.proto\022\rsecond.pro"
  "tos\032\033second/protos/anchors.proto\032\036second"
  "/protos/similarity.proto\"\211\002\n\016TargetAssig"
  "ner\022C\n\021anchor_generators\030\001 \003(\0132(.second."
  "protos.AnchorGeneratorCollection\022 \n\030samp"
  "le_positive_fraction\030\002 \001(\002\022\023\n\013sample_siz"
  "e\030\003 \001(\r\022\026\n\016use_rotate_iou\030\004 \001(\010\022\022\n\nclass"
  "_name\030\005 \001(\t\022O\n\034region_similarity_calcula"
  "tor\030\006 \001(\0132).second.protos.RegionSimilari"
  "tyCalculatorb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_second_2fprotos_2ftarget_2eproto_deps[2] = {
  &::descriptor_table_second_2fprotos_2fanchors_2eproto,
  &::descriptor_table_second_2fprotos_2fsimilarity_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_second_2fprotos_2ftarget_2eproto_sccs[1] = {
  &scc_info_TargetAssigner_second_2fprotos_2ftarget_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_second_2fprotos_2ftarget_2eproto_once;
static bool descriptor_table_second_2fprotos_2ftarget_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_second_2fprotos_2ftarget_2eproto = {
  &descriptor_table_second_2fprotos_2ftarget_2eproto_initialized, descriptor_table_protodef_second_2fprotos_2ftarget_2eproto, "second/protos/target.proto", 380,
  &descriptor_table_second_2fprotos_2ftarget_2eproto_once, descriptor_table_second_2fprotos_2ftarget_2eproto_sccs, descriptor_table_second_2fprotos_2ftarget_2eproto_deps, 1, 2,
  schemas, file_default_instances, TableStruct_second_2fprotos_2ftarget_2eproto::offsets,
  file_level_metadata_second_2fprotos_2ftarget_2eproto, 1, file_level_enum_descriptors_second_2fprotos_2ftarget_2eproto, file_level_service_descriptors_second_2fprotos_2ftarget_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_second_2fprotos_2ftarget_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_second_2fprotos_2ftarget_2eproto), true);
namespace second {
namespace protos {

// ===================================================================

void TargetAssigner::InitAsDefaultInstance() {
  ::second::protos::_TargetAssigner_default_instance_._instance.get_mutable()->region_similarity_calculator_ = const_cast< ::second::protos::RegionSimilarityCalculator*>(
      ::second::protos::RegionSimilarityCalculator::internal_default_instance());
}
class TargetAssigner::_Internal {
 public:
  static const ::second::protos::RegionSimilarityCalculator& region_similarity_calculator(const TargetAssigner* msg);
};

const ::second::protos::RegionSimilarityCalculator&
TargetAssigner::_Internal::region_similarity_calculator(const TargetAssigner* msg) {
  return *msg->region_similarity_calculator_;
}
void TargetAssigner::clear_anchor_generators() {
  anchor_generators_.Clear();
}
void TargetAssigner::clear_region_similarity_calculator() {
  if (GetArenaNoVirtual() == nullptr && region_similarity_calculator_ != nullptr) {
    delete region_similarity_calculator_;
  }
  region_similarity_calculator_ = nullptr;
}
TargetAssigner::TargetAssigner()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:second.protos.TargetAssigner)
}
TargetAssigner::TargetAssigner(const TargetAssigner& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      anchor_generators_(from.anchor_generators_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  class_name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from.class_name().empty()) {
    class_name_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.class_name_);
  }
  if (from.has_region_similarity_calculator()) {
    region_similarity_calculator_ = new ::second::protos::RegionSimilarityCalculator(*from.region_similarity_calculator_);
  } else {
    region_similarity_calculator_ = nullptr;
  }
  ::memcpy(&sample_positive_fraction_, &from.sample_positive_fraction_,
    static_cast<size_t>(reinterpret_cast<char*>(&use_rotate_iou_) -
    reinterpret_cast<char*>(&sample_positive_fraction_)) + sizeof(use_rotate_iou_));
  // @@protoc_insertion_point(copy_constructor:second.protos.TargetAssigner)
}

void TargetAssigner::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_TargetAssigner_second_2fprotos_2ftarget_2eproto.base);
  class_name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(&region_similarity_calculator_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&use_rotate_iou_) -
      reinterpret_cast<char*>(&region_similarity_calculator_)) + sizeof(use_rotate_iou_));
}

TargetAssigner::~TargetAssigner() {
  // @@protoc_insertion_point(destructor:second.protos.TargetAssigner)
  SharedDtor();
}

void TargetAssigner::SharedDtor() {
  class_name_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete region_similarity_calculator_;
}

void TargetAssigner::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const TargetAssigner& TargetAssigner::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_TargetAssigner_second_2fprotos_2ftarget_2eproto.base);
  return *internal_default_instance();
}


void TargetAssigner::Clear() {
// @@protoc_insertion_point(message_clear_start:second.protos.TargetAssigner)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  anchor_generators_.Clear();
  class_name_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (GetArenaNoVirtual() == nullptr && region_similarity_calculator_ != nullptr) {
    delete region_similarity_calculator_;
  }
  region_similarity_calculator_ = nullptr;
  ::memset(&sample_positive_fraction_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&use_rotate_iou_) -
      reinterpret_cast<char*>(&sample_positive_fraction_)) + sizeof(use_rotate_iou_));
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* TargetAssigner::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // repeated .second.protos.AnchorGeneratorCollection anchor_generators = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(add_anchor_generators(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<::PROTOBUF_NAMESPACE_ID::uint8>(ptr) == 10);
        } else goto handle_unusual;
        continue;
      // float sample_positive_fraction = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 21)) {
          sample_positive_fraction_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      // uint32 sample_size = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          sample_size_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bool use_rotate_iou = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 32)) {
          use_rotate_iou_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string class_name = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 42)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParserUTF8(mutable_class_name(), ptr, ctx, "second.protos.TargetAssigner.class_name");
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .second.protos.RegionSimilarityCalculator region_similarity_calculator = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 50)) {
          ptr = ctx->ParseMessage(mutable_region_similarity_calculator(), ptr);
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
bool TargetAssigner::MergePartialFromCodedStream(
    ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::PROTOBUF_NAMESPACE_ID::uint32 tag;
  // @@protoc_insertion_point(parse_start:second.protos.TargetAssigner)
  for (;;) {
    ::std::pair<::PROTOBUF_NAMESPACE_ID::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .second.protos.AnchorGeneratorCollection anchor_generators = 1;
      case 1: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (10 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadMessage(
                input, add_anchor_generators()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // float sample_positive_fraction = 2;
      case 2: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (21 & 0xFF)) {

          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   float, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &sample_positive_fraction_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 sample_size = 3;
      case 3: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (24 & 0xFF)) {

          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   ::PROTOBUF_NAMESPACE_ID::uint32, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_UINT32>(
                 input, &sample_size_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool use_rotate_iou = 4;
      case 4: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (32 & 0xFF)) {

          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   bool, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_BOOL>(
                 input, &use_rotate_iou_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string class_name = 5;
      case 5: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (42 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadString(
                input, this->mutable_class_name()));
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
            this->class_name().data(), static_cast<int>(this->class_name().length()),
            ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::PARSE,
            "second.protos.TargetAssigner.class_name"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .second.protos.RegionSimilarityCalculator region_similarity_calculator = 6;
      case 6: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (50 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadMessage(
               input, mutable_region_similarity_calculator()));
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
  // @@protoc_insertion_point(parse_success:second.protos.TargetAssigner)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:second.protos.TargetAssigner)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void TargetAssigner::SerializeWithCachedSizes(
    ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:second.protos.TargetAssigner)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .second.protos.AnchorGeneratorCollection anchor_generators = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->anchor_generators_size()); i < n; i++) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteMessageMaybeToArray(
      1,
      this->anchor_generators(static_cast<int>(i)),
      output);
  }

  // float sample_positive_fraction = 2;
  if (!(this->sample_positive_fraction() <= 0 && this->sample_positive_fraction() >= 0)) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloat(2, this->sample_positive_fraction(), output);
  }

  // uint32 sample_size = 3;
  if (this->sample_size() != 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32(3, this->sample_size(), output);
  }

  // bool use_rotate_iou = 4;
  if (this->use_rotate_iou() != 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBool(4, this->use_rotate_iou(), output);
  }

  // string class_name = 5;
  if (this->class_name().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->class_name().data(), static_cast<int>(this->class_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "second.protos.TargetAssigner.class_name");
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteStringMaybeAliased(
      5, this->class_name(), output);
  }

  // .second.protos.RegionSimilarityCalculator region_similarity_calculator = 6;
  if (this->has_region_similarity_calculator()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteMessageMaybeToArray(
      6, _Internal::region_similarity_calculator(this), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:second.protos.TargetAssigner)
}

::PROTOBUF_NAMESPACE_ID::uint8* TargetAssigner::InternalSerializeWithCachedSizesToArray(
    ::PROTOBUF_NAMESPACE_ID::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:second.protos.TargetAssigner)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .second.protos.AnchorGeneratorCollection anchor_generators = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->anchor_generators_size()); i < n; i++) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->anchor_generators(static_cast<int>(i)), target);
  }

  // float sample_positive_fraction = 2;
  if (!(this->sample_positive_fraction() <= 0 && this->sample_positive_fraction() >= 0)) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(2, this->sample_positive_fraction(), target);
  }

  // uint32 sample_size = 3;
  if (this->sample_size() != 0) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(3, this->sample_size(), target);
  }

  // bool use_rotate_iou = 4;
  if (this->use_rotate_iou() != 0) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(4, this->use_rotate_iou(), target);
  }

  // string class_name = 5;
  if (this->class_name().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->class_name().data(), static_cast<int>(this->class_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "second.protos.TargetAssigner.class_name");
    target =
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteStringToArray(
        5, this->class_name(), target);
  }

  // .second.protos.RegionSimilarityCalculator region_similarity_calculator = 6;
  if (this->has_region_similarity_calculator()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessageToArray(
        6, _Internal::region_similarity_calculator(this), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:second.protos.TargetAssigner)
  return target;
}

size_t TargetAssigner::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:second.protos.TargetAssigner)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .second.protos.AnchorGeneratorCollection anchor_generators = 1;
  {
    unsigned int count = static_cast<unsigned int>(this->anchor_generators_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          this->anchor_generators(static_cast<int>(i)));
    }
  }

  // string class_name = 5;
  if (this->class_name().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->class_name());
  }

  // .second.protos.RegionSimilarityCalculator region_similarity_calculator = 6;
  if (this->has_region_similarity_calculator()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *region_similarity_calculator_);
  }

  // float sample_positive_fraction = 2;
  if (!(this->sample_positive_fraction() <= 0 && this->sample_positive_fraction() >= 0)) {
    total_size += 1 + 4;
  }

  // uint32 sample_size = 3;
  if (this->sample_size() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->sample_size());
  }

  // bool use_rotate_iou = 4;
  if (this->use_rotate_iou() != 0) {
    total_size += 1 + 1;
  }

  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void TargetAssigner::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:second.protos.TargetAssigner)
  GOOGLE_DCHECK_NE(&from, this);
  const TargetAssigner* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<TargetAssigner>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:second.protos.TargetAssigner)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:second.protos.TargetAssigner)
    MergeFrom(*source);
  }
}

void TargetAssigner::MergeFrom(const TargetAssigner& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:second.protos.TargetAssigner)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  anchor_generators_.MergeFrom(from.anchor_generators_);
  if (from.class_name().size() > 0) {

    class_name_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.class_name_);
  }
  if (from.has_region_similarity_calculator()) {
    mutable_region_similarity_calculator()->::second::protos::RegionSimilarityCalculator::MergeFrom(from.region_similarity_calculator());
  }
  if (!(from.sample_positive_fraction() <= 0 && from.sample_positive_fraction() >= 0)) {
    set_sample_positive_fraction(from.sample_positive_fraction());
  }
  if (from.sample_size() != 0) {
    set_sample_size(from.sample_size());
  }
  if (from.use_rotate_iou() != 0) {
    set_use_rotate_iou(from.use_rotate_iou());
  }
}

void TargetAssigner::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:second.protos.TargetAssigner)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void TargetAssigner::CopyFrom(const TargetAssigner& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:second.protos.TargetAssigner)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TargetAssigner::IsInitialized() const {
  return true;
}

void TargetAssigner::InternalSwap(TargetAssigner* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  CastToBase(&anchor_generators_)->InternalSwap(CastToBase(&other->anchor_generators_));
  class_name_.Swap(&other->class_name_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(region_similarity_calculator_, other->region_similarity_calculator_);
  swap(sample_positive_fraction_, other->sample_positive_fraction_);
  swap(sample_size_, other->sample_size_);
  swap(use_rotate_iou_, other->use_rotate_iou_);
}

::PROTOBUF_NAMESPACE_ID::Metadata TargetAssigner::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace protos
}  // namespace second
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::second::protos::TargetAssigner* Arena::CreateMaybeMessage< ::second::protos::TargetAssigner >(Arena* arena) {
  return Arena::CreateInternal< ::second::protos::TargetAssigner >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
