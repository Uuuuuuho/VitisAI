// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: object_detection/protos/multiscale_anchor_generator.proto

#include "object_detection/protos/multiscale_anchor_generator.pb.h"

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
namespace object_detection {
namespace protos {
class MultiscaleAnchorGeneratorDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<MultiscaleAnchorGenerator> _instance;
} _MultiscaleAnchorGenerator_default_instance_;
}  // namespace protos
}  // namespace object_detection
static void InitDefaultsscc_info_MultiscaleAnchorGenerator_object_5fdetection_2fprotos_2fmultiscale_5fanchor_5fgenerator_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::object_detection::protos::_MultiscaleAnchorGenerator_default_instance_;
    new (ptr) ::object_detection::protos::MultiscaleAnchorGenerator();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::object_detection::protos::MultiscaleAnchorGenerator::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_MultiscaleAnchorGenerator_object_5fdetection_2fprotos_2fmultiscale_5fanchor_5fgenerator_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsscc_info_MultiscaleAnchorGenerator_object_5fdetection_2fprotos_2fmultiscale_5fanchor_5fgenerator_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_object_5fdetection_2fprotos_2fmultiscale_5fanchor_5fgenerator_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_object_5fdetection_2fprotos_2fmultiscale_5fanchor_5fgenerator_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_object_5fdetection_2fprotos_2fmultiscale_5fanchor_5fgenerator_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_object_5fdetection_2fprotos_2fmultiscale_5fanchor_5fgenerator_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::object_detection::protos::MultiscaleAnchorGenerator, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::object_detection::protos::MultiscaleAnchorGenerator, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::object_detection::protos::MultiscaleAnchorGenerator, min_level_),
  PROTOBUF_FIELD_OFFSET(::object_detection::protos::MultiscaleAnchorGenerator, max_level_),
  PROTOBUF_FIELD_OFFSET(::object_detection::protos::MultiscaleAnchorGenerator, anchor_scale_),
  PROTOBUF_FIELD_OFFSET(::object_detection::protos::MultiscaleAnchorGenerator, aspect_ratios_),
  PROTOBUF_FIELD_OFFSET(::object_detection::protos::MultiscaleAnchorGenerator, scales_per_octave_),
  PROTOBUF_FIELD_OFFSET(::object_detection::protos::MultiscaleAnchorGenerator, normalize_coordinates_),
  1,
  2,
  3,
  ~0u,
  4,
  0,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 11, sizeof(::object_detection::protos::MultiscaleAnchorGenerator)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::object_detection::protos::_MultiscaleAnchorGenerator_default_instance_),
};

const char descriptor_table_protodef_object_5fdetection_2fprotos_2fmultiscale_5fanchor_5fgenerator_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n9object_detection/protos/multiscale_anc"
  "hor_generator.proto\022\027object_detection.pr"
  "otos\"\272\001\n\031MultiscaleAnchorGenerator\022\024\n\tmi"
  "n_level\030\001 \001(\005:\0013\022\024\n\tmax_level\030\002 \001(\005:\0017\022\027"
  "\n\014anchor_scale\030\003 \001(\002:\0014\022\025\n\raspect_ratios"
  "\030\004 \003(\002\022\034\n\021scales_per_octave\030\005 \001(\005:\0012\022#\n\025"
  "normalize_coordinates\030\006 \001(\010:\004true"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_object_5fdetection_2fprotos_2fmultiscale_5fanchor_5fgenerator_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_object_5fdetection_2fprotos_2fmultiscale_5fanchor_5fgenerator_2eproto_sccs[1] = {
  &scc_info_MultiscaleAnchorGenerator_object_5fdetection_2fprotos_2fmultiscale_5fanchor_5fgenerator_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_object_5fdetection_2fprotos_2fmultiscale_5fanchor_5fgenerator_2eproto_once;
static bool descriptor_table_object_5fdetection_2fprotos_2fmultiscale_5fanchor_5fgenerator_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_object_5fdetection_2fprotos_2fmultiscale_5fanchor_5fgenerator_2eproto = {
  &descriptor_table_object_5fdetection_2fprotos_2fmultiscale_5fanchor_5fgenerator_2eproto_initialized, descriptor_table_protodef_object_5fdetection_2fprotos_2fmultiscale_5fanchor_5fgenerator_2eproto, "object_detection/protos/multiscale_anchor_generator.proto", 273,
  &descriptor_table_object_5fdetection_2fprotos_2fmultiscale_5fanchor_5fgenerator_2eproto_once, descriptor_table_object_5fdetection_2fprotos_2fmultiscale_5fanchor_5fgenerator_2eproto_sccs, descriptor_table_object_5fdetection_2fprotos_2fmultiscale_5fanchor_5fgenerator_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_object_5fdetection_2fprotos_2fmultiscale_5fanchor_5fgenerator_2eproto::offsets,
  file_level_metadata_object_5fdetection_2fprotos_2fmultiscale_5fanchor_5fgenerator_2eproto, 1, file_level_enum_descriptors_object_5fdetection_2fprotos_2fmultiscale_5fanchor_5fgenerator_2eproto, file_level_service_descriptors_object_5fdetection_2fprotos_2fmultiscale_5fanchor_5fgenerator_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_object_5fdetection_2fprotos_2fmultiscale_5fanchor_5fgenerator_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_object_5fdetection_2fprotos_2fmultiscale_5fanchor_5fgenerator_2eproto), true);
namespace object_detection {
namespace protos {

// ===================================================================

void MultiscaleAnchorGenerator::InitAsDefaultInstance() {
}
class MultiscaleAnchorGenerator::_Internal {
 public:
  using HasBits = decltype(std::declval<MultiscaleAnchorGenerator>()._has_bits_);
  static void set_has_min_level(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_max_level(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_anchor_scale(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_scales_per_octave(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
  static void set_has_normalize_coordinates(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

MultiscaleAnchorGenerator::MultiscaleAnchorGenerator()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:object_detection.protos.MultiscaleAnchorGenerator)
}
MultiscaleAnchorGenerator::MultiscaleAnchorGenerator(const MultiscaleAnchorGenerator& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_),
      aspect_ratios_(from.aspect_ratios_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&normalize_coordinates_, &from.normalize_coordinates_,
    static_cast<size_t>(reinterpret_cast<char*>(&scales_per_octave_) -
    reinterpret_cast<char*>(&normalize_coordinates_)) + sizeof(scales_per_octave_));
  // @@protoc_insertion_point(copy_constructor:object_detection.protos.MultiscaleAnchorGenerator)
}

void MultiscaleAnchorGenerator::SharedCtor() {
  normalize_coordinates_ = true;
  min_level_ = 3;
  max_level_ = 7;
  anchor_scale_ = 4;
  scales_per_octave_ = 2;
}

MultiscaleAnchorGenerator::~MultiscaleAnchorGenerator() {
  // @@protoc_insertion_point(destructor:object_detection.protos.MultiscaleAnchorGenerator)
  SharedDtor();
}

void MultiscaleAnchorGenerator::SharedDtor() {
}

void MultiscaleAnchorGenerator::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const MultiscaleAnchorGenerator& MultiscaleAnchorGenerator::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_MultiscaleAnchorGenerator_object_5fdetection_2fprotos_2fmultiscale_5fanchor_5fgenerator_2eproto.base);
  return *internal_default_instance();
}


void MultiscaleAnchorGenerator::Clear() {
// @@protoc_insertion_point(message_clear_start:object_detection.protos.MultiscaleAnchorGenerator)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  aspect_ratios_.Clear();
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000001fu) {
    normalize_coordinates_ = true;
    min_level_ = 3;
    max_level_ = 7;
    anchor_scale_ = 4;
    scales_per_octave_ = 2;
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* MultiscaleAnchorGenerator::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // optional int32 min_level = 1 [default = 3];
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          _Internal::set_has_min_level(&has_bits);
          min_level_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional int32 max_level = 2 [default = 7];
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          _Internal::set_has_max_level(&has_bits);
          max_level_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional float anchor_scale = 3 [default = 4];
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 29)) {
          _Internal::set_has_anchor_scale(&has_bits);
          anchor_scale_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      // repeated float aspect_ratios = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 37)) {
          ptr -= 1;
          do {
            ptr += 1;
            add_aspect_ratios(::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr));
            ptr += sizeof(float);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<::PROTOBUF_NAMESPACE_ID::uint8>(ptr) == 37);
        } else if (static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedFloatParser(mutable_aspect_ratios(), ptr, ctx);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional int32 scales_per_octave = 5 [default = 2];
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 40)) {
          _Internal::set_has_scales_per_octave(&has_bits);
          scales_per_octave_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional bool normalize_coordinates = 6 [default = true];
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 48)) {
          _Internal::set_has_normalize_coordinates(&has_bits);
          normalize_coordinates_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
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
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool MultiscaleAnchorGenerator::MergePartialFromCodedStream(
    ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::PROTOBUF_NAMESPACE_ID::uint32 tag;
  // @@protoc_insertion_point(parse_start:object_detection.protos.MultiscaleAnchorGenerator)
  for (;;) {
    ::std::pair<::PROTOBUF_NAMESPACE_ID::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 min_level = 1 [default = 3];
      case 1: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (8 & 0xFF)) {
          _Internal::set_has_min_level(&_has_bits_);
          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   ::PROTOBUF_NAMESPACE_ID::int32, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_INT32>(
                 input, &min_level_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional int32 max_level = 2 [default = 7];
      case 2: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (16 & 0xFF)) {
          _Internal::set_has_max_level(&_has_bits_);
          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   ::PROTOBUF_NAMESPACE_ID::int32, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_INT32>(
                 input, &max_level_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional float anchor_scale = 3 [default = 4];
      case 3: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (29 & 0xFF)) {
          _Internal::set_has_anchor_scale(&_has_bits_);
          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   float, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &anchor_scale_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated float aspect_ratios = 4;
      case 4: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (37 & 0xFF)) {
          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadRepeatedPrimitive<
                   float, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_FLOAT>(
                 1, 37u, input, this->mutable_aspect_ratios())));
        } else if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (34 & 0xFF)) {
          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPackedPrimitiveNoInline<
                   float, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_FLOAT>(
                 input, this->mutable_aspect_ratios())));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional int32 scales_per_octave = 5 [default = 2];
      case 5: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (40 & 0xFF)) {
          _Internal::set_has_scales_per_octave(&_has_bits_);
          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   ::PROTOBUF_NAMESPACE_ID::int32, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_INT32>(
                 input, &scales_per_octave_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional bool normalize_coordinates = 6 [default = true];
      case 6: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (48 & 0xFF)) {
          _Internal::set_has_normalize_coordinates(&_has_bits_);
          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   bool, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_BOOL>(
                 input, &normalize_coordinates_)));
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
  // @@protoc_insertion_point(parse_success:object_detection.protos.MultiscaleAnchorGenerator)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:object_detection.protos.MultiscaleAnchorGenerator)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void MultiscaleAnchorGenerator::SerializeWithCachedSizes(
    ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:object_detection.protos.MultiscaleAnchorGenerator)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional int32 min_level = 1 [default = 3];
  if (cached_has_bits & 0x00000002u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32(1, this->min_level(), output);
  }

  // optional int32 max_level = 2 [default = 7];
  if (cached_has_bits & 0x00000004u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32(2, this->max_level(), output);
  }

  // optional float anchor_scale = 3 [default = 4];
  if (cached_has_bits & 0x00000008u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloat(3, this->anchor_scale(), output);
  }

  // repeated float aspect_ratios = 4;
  for (int i = 0, n = this->aspect_ratios_size(); i < n; i++) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloat(
      4, this->aspect_ratios(i), output);
  }

  // optional int32 scales_per_octave = 5 [default = 2];
  if (cached_has_bits & 0x00000010u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32(5, this->scales_per_octave(), output);
  }

  // optional bool normalize_coordinates = 6 [default = true];
  if (cached_has_bits & 0x00000001u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBool(6, this->normalize_coordinates(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:object_detection.protos.MultiscaleAnchorGenerator)
}

::PROTOBUF_NAMESPACE_ID::uint8* MultiscaleAnchorGenerator::InternalSerializeWithCachedSizesToArray(
    ::PROTOBUF_NAMESPACE_ID::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:object_detection.protos.MultiscaleAnchorGenerator)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional int32 min_level = 1 [default = 3];
  if (cached_has_bits & 0x00000002u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->min_level(), target);
  }

  // optional int32 max_level = 2 [default = 7];
  if (cached_has_bits & 0x00000004u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(2, this->max_level(), target);
  }

  // optional float anchor_scale = 3 [default = 4];
  if (cached_has_bits & 0x00000008u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(3, this->anchor_scale(), target);
  }

  // repeated float aspect_ratios = 4;
  target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
    WriteFloatToArray(4, this->aspect_ratios_, target);

  // optional int32 scales_per_octave = 5 [default = 2];
  if (cached_has_bits & 0x00000010u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(5, this->scales_per_octave(), target);
  }

  // optional bool normalize_coordinates = 6 [default = true];
  if (cached_has_bits & 0x00000001u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(6, this->normalize_coordinates(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:object_detection.protos.MultiscaleAnchorGenerator)
  return target;
}

size_t MultiscaleAnchorGenerator::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:object_detection.protos.MultiscaleAnchorGenerator)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated float aspect_ratios = 4;
  {
    unsigned int count = static_cast<unsigned int>(this->aspect_ratios_size());
    size_t data_size = 4UL * count;
    total_size += 1 *
                  ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(this->aspect_ratios_size());
    total_size += data_size;
  }

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000001fu) {
    // optional bool normalize_coordinates = 6 [default = true];
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 + 1;
    }

    // optional int32 min_level = 1 [default = 3];
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
          this->min_level());
    }

    // optional int32 max_level = 2 [default = 7];
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
          this->max_level());
    }

    // optional float anchor_scale = 3 [default = 4];
    if (cached_has_bits & 0x00000008u) {
      total_size += 1 + 4;
    }

    // optional int32 scales_per_octave = 5 [default = 2];
    if (cached_has_bits & 0x00000010u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
          this->scales_per_octave());
    }

  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void MultiscaleAnchorGenerator::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:object_detection.protos.MultiscaleAnchorGenerator)
  GOOGLE_DCHECK_NE(&from, this);
  const MultiscaleAnchorGenerator* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<MultiscaleAnchorGenerator>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:object_detection.protos.MultiscaleAnchorGenerator)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:object_detection.protos.MultiscaleAnchorGenerator)
    MergeFrom(*source);
  }
}

void MultiscaleAnchorGenerator::MergeFrom(const MultiscaleAnchorGenerator& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:object_detection.protos.MultiscaleAnchorGenerator)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  aspect_ratios_.MergeFrom(from.aspect_ratios_);
  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x0000001fu) {
    if (cached_has_bits & 0x00000001u) {
      normalize_coordinates_ = from.normalize_coordinates_;
    }
    if (cached_has_bits & 0x00000002u) {
      min_level_ = from.min_level_;
    }
    if (cached_has_bits & 0x00000004u) {
      max_level_ = from.max_level_;
    }
    if (cached_has_bits & 0x00000008u) {
      anchor_scale_ = from.anchor_scale_;
    }
    if (cached_has_bits & 0x00000010u) {
      scales_per_octave_ = from.scales_per_octave_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void MultiscaleAnchorGenerator::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:object_detection.protos.MultiscaleAnchorGenerator)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MultiscaleAnchorGenerator::CopyFrom(const MultiscaleAnchorGenerator& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:object_detection.protos.MultiscaleAnchorGenerator)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MultiscaleAnchorGenerator::IsInitialized() const {
  return true;
}

void MultiscaleAnchorGenerator::InternalSwap(MultiscaleAnchorGenerator* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  aspect_ratios_.InternalSwap(&other->aspect_ratios_);
  swap(normalize_coordinates_, other->normalize_coordinates_);
  swap(min_level_, other->min_level_);
  swap(max_level_, other->max_level_);
  swap(anchor_scale_, other->anchor_scale_);
  swap(scales_per_octave_, other->scales_per_octave_);
}

::PROTOBUF_NAMESPACE_ID::Metadata MultiscaleAnchorGenerator::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace protos
}  // namespace object_detection
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::object_detection::protos::MultiscaleAnchorGenerator* Arena::CreateMaybeMessage< ::object_detection::protos::MultiscaleAnchorGenerator >(Arena* arena) {
  return Arena::CreateInternal< ::object_detection::protos::MultiscaleAnchorGenerator >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>