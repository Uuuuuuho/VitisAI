// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: object_detection/protos/grid_anchor_generator.proto

#include "object_detection/protos/grid_anchor_generator.pb.h"

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
class GridAnchorGeneratorDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<GridAnchorGenerator> _instance;
} _GridAnchorGenerator_default_instance_;
}  // namespace protos
}  // namespace object_detection
static void InitDefaultsscc_info_GridAnchorGenerator_object_5fdetection_2fprotos_2fgrid_5fanchor_5fgenerator_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::object_detection::protos::_GridAnchorGenerator_default_instance_;
    new (ptr) ::object_detection::protos::GridAnchorGenerator();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::object_detection::protos::GridAnchorGenerator::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_GridAnchorGenerator_object_5fdetection_2fprotos_2fgrid_5fanchor_5fgenerator_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsscc_info_GridAnchorGenerator_object_5fdetection_2fprotos_2fgrid_5fanchor_5fgenerator_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_object_5fdetection_2fprotos_2fgrid_5fanchor_5fgenerator_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_object_5fdetection_2fprotos_2fgrid_5fanchor_5fgenerator_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_object_5fdetection_2fprotos_2fgrid_5fanchor_5fgenerator_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_object_5fdetection_2fprotos_2fgrid_5fanchor_5fgenerator_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::object_detection::protos::GridAnchorGenerator, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::object_detection::protos::GridAnchorGenerator, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::object_detection::protos::GridAnchorGenerator, height_),
  PROTOBUF_FIELD_OFFSET(::object_detection::protos::GridAnchorGenerator, width_),
  PROTOBUF_FIELD_OFFSET(::object_detection::protos::GridAnchorGenerator, height_stride_),
  PROTOBUF_FIELD_OFFSET(::object_detection::protos::GridAnchorGenerator, width_stride_),
  PROTOBUF_FIELD_OFFSET(::object_detection::protos::GridAnchorGenerator, height_offset_),
  PROTOBUF_FIELD_OFFSET(::object_detection::protos::GridAnchorGenerator, width_offset_),
  PROTOBUF_FIELD_OFFSET(::object_detection::protos::GridAnchorGenerator, scales_),
  PROTOBUF_FIELD_OFFSET(::object_detection::protos::GridAnchorGenerator, aspect_ratios_),
  2,
  3,
  4,
  5,
  0,
  1,
  ~0u,
  ~0u,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 13, sizeof(::object_detection::protos::GridAnchorGenerator)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::object_detection::protos::_GridAnchorGenerator_default_instance_),
};

const char descriptor_table_protodef_object_5fdetection_2fprotos_2fgrid_5fanchor_5fgenerator_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n3object_detection/protos/grid_anchor_ge"
  "nerator.proto\022\027object_detection.protos\"\315"
  "\001\n\023GridAnchorGenerator\022\023\n\006height\030\001 \001(\005:\003"
  "256\022\022\n\005width\030\002 \001(\005:\003256\022\031\n\rheight_stride"
  "\030\003 \001(\005:\00216\022\030\n\014width_stride\030\004 \001(\005:\00216\022\030\n\r"
  "height_offset\030\005 \001(\005:\0010\022\027\n\014width_offset\030\006"
  " \001(\005:\0010\022\016\n\006scales\030\007 \003(\002\022\025\n\raspect_ratios"
  "\030\010 \003(\002"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_object_5fdetection_2fprotos_2fgrid_5fanchor_5fgenerator_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_object_5fdetection_2fprotos_2fgrid_5fanchor_5fgenerator_2eproto_sccs[1] = {
  &scc_info_GridAnchorGenerator_object_5fdetection_2fprotos_2fgrid_5fanchor_5fgenerator_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_object_5fdetection_2fprotos_2fgrid_5fanchor_5fgenerator_2eproto_once;
static bool descriptor_table_object_5fdetection_2fprotos_2fgrid_5fanchor_5fgenerator_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_object_5fdetection_2fprotos_2fgrid_5fanchor_5fgenerator_2eproto = {
  &descriptor_table_object_5fdetection_2fprotos_2fgrid_5fanchor_5fgenerator_2eproto_initialized, descriptor_table_protodef_object_5fdetection_2fprotos_2fgrid_5fanchor_5fgenerator_2eproto, "object_detection/protos/grid_anchor_generator.proto", 286,
  &descriptor_table_object_5fdetection_2fprotos_2fgrid_5fanchor_5fgenerator_2eproto_once, descriptor_table_object_5fdetection_2fprotos_2fgrid_5fanchor_5fgenerator_2eproto_sccs, descriptor_table_object_5fdetection_2fprotos_2fgrid_5fanchor_5fgenerator_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_object_5fdetection_2fprotos_2fgrid_5fanchor_5fgenerator_2eproto::offsets,
  file_level_metadata_object_5fdetection_2fprotos_2fgrid_5fanchor_5fgenerator_2eproto, 1, file_level_enum_descriptors_object_5fdetection_2fprotos_2fgrid_5fanchor_5fgenerator_2eproto, file_level_service_descriptors_object_5fdetection_2fprotos_2fgrid_5fanchor_5fgenerator_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_object_5fdetection_2fprotos_2fgrid_5fanchor_5fgenerator_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_object_5fdetection_2fprotos_2fgrid_5fanchor_5fgenerator_2eproto), true);
namespace object_detection {
namespace protos {

// ===================================================================

void GridAnchorGenerator::InitAsDefaultInstance() {
}
class GridAnchorGenerator::_Internal {
 public:
  using HasBits = decltype(std::declval<GridAnchorGenerator>()._has_bits_);
  static void set_has_height(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_width(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_height_stride(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
  static void set_has_width_stride(HasBits* has_bits) {
    (*has_bits)[0] |= 32u;
  }
  static void set_has_height_offset(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_width_offset(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
};

GridAnchorGenerator::GridAnchorGenerator()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:object_detection.protos.GridAnchorGenerator)
}
GridAnchorGenerator::GridAnchorGenerator(const GridAnchorGenerator& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_),
      scales_(from.scales_),
      aspect_ratios_(from.aspect_ratios_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&height_offset_, &from.height_offset_,
    static_cast<size_t>(reinterpret_cast<char*>(&width_stride_) -
    reinterpret_cast<char*>(&height_offset_)) + sizeof(width_stride_));
  // @@protoc_insertion_point(copy_constructor:object_detection.protos.GridAnchorGenerator)
}

void GridAnchorGenerator::SharedCtor() {
  ::memset(&height_offset_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&width_offset_) -
      reinterpret_cast<char*>(&height_offset_)) + sizeof(width_offset_));
  height_ = 256;
  width_ = 256;
  height_stride_ = 16;
  width_stride_ = 16;
}

GridAnchorGenerator::~GridAnchorGenerator() {
  // @@protoc_insertion_point(destructor:object_detection.protos.GridAnchorGenerator)
  SharedDtor();
}

void GridAnchorGenerator::SharedDtor() {
}

void GridAnchorGenerator::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const GridAnchorGenerator& GridAnchorGenerator::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_GridAnchorGenerator_object_5fdetection_2fprotos_2fgrid_5fanchor_5fgenerator_2eproto.base);
  return *internal_default_instance();
}


void GridAnchorGenerator::Clear() {
// @@protoc_insertion_point(message_clear_start:object_detection.protos.GridAnchorGenerator)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  scales_.Clear();
  aspect_ratios_.Clear();
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000003fu) {
    ::memset(&height_offset_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&width_offset_) -
        reinterpret_cast<char*>(&height_offset_)) + sizeof(width_offset_));
    height_ = 256;
    width_ = 256;
    height_stride_ = 16;
    width_stride_ = 16;
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* GridAnchorGenerator::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // optional int32 height = 1 [default = 256];
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          _Internal::set_has_height(&has_bits);
          height_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional int32 width = 2 [default = 256];
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          _Internal::set_has_width(&has_bits);
          width_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional int32 height_stride = 3 [default = 16];
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          _Internal::set_has_height_stride(&has_bits);
          height_stride_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional int32 width_stride = 4 [default = 16];
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 32)) {
          _Internal::set_has_width_stride(&has_bits);
          width_stride_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional int32 height_offset = 5 [default = 0];
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 40)) {
          _Internal::set_has_height_offset(&has_bits);
          height_offset_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional int32 width_offset = 6 [default = 0];
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 48)) {
          _Internal::set_has_width_offset(&has_bits);
          width_offset_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated float scales = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 61)) {
          ptr -= 1;
          do {
            ptr += 1;
            add_scales(::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr));
            ptr += sizeof(float);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<::PROTOBUF_NAMESPACE_ID::uint8>(ptr) == 61);
        } else if (static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 58) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedFloatParser(mutable_scales(), ptr, ctx);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated float aspect_ratios = 8;
      case 8:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 69)) {
          ptr -= 1;
          do {
            ptr += 1;
            add_aspect_ratios(::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr));
            ptr += sizeof(float);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<::PROTOBUF_NAMESPACE_ID::uint8>(ptr) == 69);
        } else if (static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 66) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedFloatParser(mutable_aspect_ratios(), ptr, ctx);
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
bool GridAnchorGenerator::MergePartialFromCodedStream(
    ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::PROTOBUF_NAMESPACE_ID::uint32 tag;
  // @@protoc_insertion_point(parse_start:object_detection.protos.GridAnchorGenerator)
  for (;;) {
    ::std::pair<::PROTOBUF_NAMESPACE_ID::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 height = 1 [default = 256];
      case 1: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (8 & 0xFF)) {
          _Internal::set_has_height(&_has_bits_);
          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   ::PROTOBUF_NAMESPACE_ID::int32, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_INT32>(
                 input, &height_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional int32 width = 2 [default = 256];
      case 2: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (16 & 0xFF)) {
          _Internal::set_has_width(&_has_bits_);
          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   ::PROTOBUF_NAMESPACE_ID::int32, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_INT32>(
                 input, &width_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional int32 height_stride = 3 [default = 16];
      case 3: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (24 & 0xFF)) {
          _Internal::set_has_height_stride(&_has_bits_);
          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   ::PROTOBUF_NAMESPACE_ID::int32, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_INT32>(
                 input, &height_stride_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional int32 width_stride = 4 [default = 16];
      case 4: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (32 & 0xFF)) {
          _Internal::set_has_width_stride(&_has_bits_);
          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   ::PROTOBUF_NAMESPACE_ID::int32, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_INT32>(
                 input, &width_stride_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional int32 height_offset = 5 [default = 0];
      case 5: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (40 & 0xFF)) {
          _Internal::set_has_height_offset(&_has_bits_);
          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   ::PROTOBUF_NAMESPACE_ID::int32, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_INT32>(
                 input, &height_offset_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional int32 width_offset = 6 [default = 0];
      case 6: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (48 & 0xFF)) {
          _Internal::set_has_width_offset(&_has_bits_);
          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   ::PROTOBUF_NAMESPACE_ID::int32, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_INT32>(
                 input, &width_offset_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated float scales = 7;
      case 7: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (61 & 0xFF)) {
          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadRepeatedPrimitive<
                   float, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_FLOAT>(
                 1, 61u, input, this->mutable_scales())));
        } else if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (58 & 0xFF)) {
          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPackedPrimitiveNoInline<
                   float, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_FLOAT>(
                 input, this->mutable_scales())));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated float aspect_ratios = 8;
      case 8: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (69 & 0xFF)) {
          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadRepeatedPrimitive<
                   float, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_FLOAT>(
                 1, 69u, input, this->mutable_aspect_ratios())));
        } else if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (66 & 0xFF)) {
          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPackedPrimitiveNoInline<
                   float, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_FLOAT>(
                 input, this->mutable_aspect_ratios())));
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
  // @@protoc_insertion_point(parse_success:object_detection.protos.GridAnchorGenerator)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:object_detection.protos.GridAnchorGenerator)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void GridAnchorGenerator::SerializeWithCachedSizes(
    ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:object_detection.protos.GridAnchorGenerator)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional int32 height = 1 [default = 256];
  if (cached_has_bits & 0x00000004u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32(1, this->height(), output);
  }

  // optional int32 width = 2 [default = 256];
  if (cached_has_bits & 0x00000008u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32(2, this->width(), output);
  }

  // optional int32 height_stride = 3 [default = 16];
  if (cached_has_bits & 0x00000010u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32(3, this->height_stride(), output);
  }

  // optional int32 width_stride = 4 [default = 16];
  if (cached_has_bits & 0x00000020u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32(4, this->width_stride(), output);
  }

  // optional int32 height_offset = 5 [default = 0];
  if (cached_has_bits & 0x00000001u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32(5, this->height_offset(), output);
  }

  // optional int32 width_offset = 6 [default = 0];
  if (cached_has_bits & 0x00000002u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32(6, this->width_offset(), output);
  }

  // repeated float scales = 7;
  for (int i = 0, n = this->scales_size(); i < n; i++) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloat(
      7, this->scales(i), output);
  }

  // repeated float aspect_ratios = 8;
  for (int i = 0, n = this->aspect_ratios_size(); i < n; i++) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloat(
      8, this->aspect_ratios(i), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:object_detection.protos.GridAnchorGenerator)
}

::PROTOBUF_NAMESPACE_ID::uint8* GridAnchorGenerator::InternalSerializeWithCachedSizesToArray(
    ::PROTOBUF_NAMESPACE_ID::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:object_detection.protos.GridAnchorGenerator)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional int32 height = 1 [default = 256];
  if (cached_has_bits & 0x00000004u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->height(), target);
  }

  // optional int32 width = 2 [default = 256];
  if (cached_has_bits & 0x00000008u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(2, this->width(), target);
  }

  // optional int32 height_stride = 3 [default = 16];
  if (cached_has_bits & 0x00000010u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(3, this->height_stride(), target);
  }

  // optional int32 width_stride = 4 [default = 16];
  if (cached_has_bits & 0x00000020u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(4, this->width_stride(), target);
  }

  // optional int32 height_offset = 5 [default = 0];
  if (cached_has_bits & 0x00000001u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(5, this->height_offset(), target);
  }

  // optional int32 width_offset = 6 [default = 0];
  if (cached_has_bits & 0x00000002u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(6, this->width_offset(), target);
  }

  // repeated float scales = 7;
  target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
    WriteFloatToArray(7, this->scales_, target);

  // repeated float aspect_ratios = 8;
  target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
    WriteFloatToArray(8, this->aspect_ratios_, target);

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:object_detection.protos.GridAnchorGenerator)
  return target;
}

size_t GridAnchorGenerator::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:object_detection.protos.GridAnchorGenerator)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated float scales = 7;
  {
    unsigned int count = static_cast<unsigned int>(this->scales_size());
    size_t data_size = 4UL * count;
    total_size += 1 *
                  ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(this->scales_size());
    total_size += data_size;
  }

  // repeated float aspect_ratios = 8;
  {
    unsigned int count = static_cast<unsigned int>(this->aspect_ratios_size());
    size_t data_size = 4UL * count;
    total_size += 1 *
                  ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(this->aspect_ratios_size());
    total_size += data_size;
  }

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000003fu) {
    // optional int32 height_offset = 5 [default = 0];
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
          this->height_offset());
    }

    // optional int32 width_offset = 6 [default = 0];
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
          this->width_offset());
    }

    // optional int32 height = 1 [default = 256];
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
          this->height());
    }

    // optional int32 width = 2 [default = 256];
    if (cached_has_bits & 0x00000008u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
          this->width());
    }

    // optional int32 height_stride = 3 [default = 16];
    if (cached_has_bits & 0x00000010u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
          this->height_stride());
    }

    // optional int32 width_stride = 4 [default = 16];
    if (cached_has_bits & 0x00000020u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
          this->width_stride());
    }

  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void GridAnchorGenerator::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:object_detection.protos.GridAnchorGenerator)
  GOOGLE_DCHECK_NE(&from, this);
  const GridAnchorGenerator* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<GridAnchorGenerator>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:object_detection.protos.GridAnchorGenerator)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:object_detection.protos.GridAnchorGenerator)
    MergeFrom(*source);
  }
}

void GridAnchorGenerator::MergeFrom(const GridAnchorGenerator& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:object_detection.protos.GridAnchorGenerator)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  scales_.MergeFrom(from.scales_);
  aspect_ratios_.MergeFrom(from.aspect_ratios_);
  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x0000003fu) {
    if (cached_has_bits & 0x00000001u) {
      height_offset_ = from.height_offset_;
    }
    if (cached_has_bits & 0x00000002u) {
      width_offset_ = from.width_offset_;
    }
    if (cached_has_bits & 0x00000004u) {
      height_ = from.height_;
    }
    if (cached_has_bits & 0x00000008u) {
      width_ = from.width_;
    }
    if (cached_has_bits & 0x00000010u) {
      height_stride_ = from.height_stride_;
    }
    if (cached_has_bits & 0x00000020u) {
      width_stride_ = from.width_stride_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void GridAnchorGenerator::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:object_detection.protos.GridAnchorGenerator)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void GridAnchorGenerator::CopyFrom(const GridAnchorGenerator& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:object_detection.protos.GridAnchorGenerator)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GridAnchorGenerator::IsInitialized() const {
  return true;
}

void GridAnchorGenerator::InternalSwap(GridAnchorGenerator* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  scales_.InternalSwap(&other->scales_);
  aspect_ratios_.InternalSwap(&other->aspect_ratios_);
  swap(height_offset_, other->height_offset_);
  swap(width_offset_, other->width_offset_);
  swap(height_, other->height_);
  swap(width_, other->width_);
  swap(height_stride_, other->height_stride_);
  swap(width_stride_, other->width_stride_);
}

::PROTOBUF_NAMESPACE_ID::Metadata GridAnchorGenerator::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace protos
}  // namespace object_detection
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::object_detection::protos::GridAnchorGenerator* Arena::CreateMaybeMessage< ::object_detection::protos::GridAnchorGenerator >(Arena* arena) {
  return Arena::CreateInternal< ::object_detection::protos::GridAnchorGenerator >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
