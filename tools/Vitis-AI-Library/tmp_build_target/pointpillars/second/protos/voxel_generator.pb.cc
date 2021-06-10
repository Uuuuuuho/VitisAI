// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: second/protos/voxel_generator.proto

#include "second/protos/voxel_generator.pb.h"

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
namespace second {
namespace protos {
class VoxelGeneratorDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<VoxelGenerator> _instance;
} _VoxelGenerator_default_instance_;
}  // namespace protos
}  // namespace second
static void InitDefaultsscc_info_VoxelGenerator_second_2fprotos_2fvoxel_5fgenerator_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::second::protos::_VoxelGenerator_default_instance_;
    new (ptr) ::second::protos::VoxelGenerator();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::second::protos::VoxelGenerator::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_VoxelGenerator_second_2fprotos_2fvoxel_5fgenerator_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsscc_info_VoxelGenerator_second_2fprotos_2fvoxel_5fgenerator_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_second_2fprotos_2fvoxel_5fgenerator_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_second_2fprotos_2fvoxel_5fgenerator_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_second_2fprotos_2fvoxel_5fgenerator_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_second_2fprotos_2fvoxel_5fgenerator_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::second::protos::VoxelGenerator, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::second::protos::VoxelGenerator, voxel_size_),
  PROTOBUF_FIELD_OFFSET(::second::protos::VoxelGenerator, point_cloud_range_),
  PROTOBUF_FIELD_OFFSET(::second::protos::VoxelGenerator, max_number_of_points_per_voxel_),
  PROTOBUF_FIELD_OFFSET(::second::protos::VoxelGenerator, submanifold_group_),
  PROTOBUF_FIELD_OFFSET(::second::protos::VoxelGenerator, submanifold_size_),
  PROTOBUF_FIELD_OFFSET(::second::protos::VoxelGenerator, submanifold_max_points_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::second::protos::VoxelGenerator)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::second::protos::_VoxelGenerator_default_instance_),
};

const char descriptor_table_protodef_second_2fprotos_2fvoxel_5fgenerator_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n#second/protos/voxel_generator.proto\022\rs"
  "econd.protos\"\274\001\n\016VoxelGenerator\022\022\n\nvoxel"
  "_size\030\001 \003(\002\022\031\n\021point_cloud_range\030\002 \003(\002\022&"
  "\n\036max_number_of_points_per_voxel\030\003 \001(\r\022\031"
  "\n\021submanifold_group\030\004 \001(\010\022\030\n\020submanifold"
  "_size\030\005 \003(\r\022\036\n\026submanifold_max_points\030\006 "
  "\001(\rb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_second_2fprotos_2fvoxel_5fgenerator_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_second_2fprotos_2fvoxel_5fgenerator_2eproto_sccs[1] = {
  &scc_info_VoxelGenerator_second_2fprotos_2fvoxel_5fgenerator_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_second_2fprotos_2fvoxel_5fgenerator_2eproto_once;
static bool descriptor_table_second_2fprotos_2fvoxel_5fgenerator_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_second_2fprotos_2fvoxel_5fgenerator_2eproto = {
  &descriptor_table_second_2fprotos_2fvoxel_5fgenerator_2eproto_initialized, descriptor_table_protodef_second_2fprotos_2fvoxel_5fgenerator_2eproto, "second/protos/voxel_generator.proto", 251,
  &descriptor_table_second_2fprotos_2fvoxel_5fgenerator_2eproto_once, descriptor_table_second_2fprotos_2fvoxel_5fgenerator_2eproto_sccs, descriptor_table_second_2fprotos_2fvoxel_5fgenerator_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_second_2fprotos_2fvoxel_5fgenerator_2eproto::offsets,
  file_level_metadata_second_2fprotos_2fvoxel_5fgenerator_2eproto, 1, file_level_enum_descriptors_second_2fprotos_2fvoxel_5fgenerator_2eproto, file_level_service_descriptors_second_2fprotos_2fvoxel_5fgenerator_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_second_2fprotos_2fvoxel_5fgenerator_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_second_2fprotos_2fvoxel_5fgenerator_2eproto), true);
namespace second {
namespace protos {

// ===================================================================

void VoxelGenerator::InitAsDefaultInstance() {
}
class VoxelGenerator::_Internal {
 public:
};

VoxelGenerator::VoxelGenerator()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:second.protos.VoxelGenerator)
}
VoxelGenerator::VoxelGenerator(const VoxelGenerator& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      voxel_size_(from.voxel_size_),
      point_cloud_range_(from.point_cloud_range_),
      submanifold_size_(from.submanifold_size_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&max_number_of_points_per_voxel_, &from.max_number_of_points_per_voxel_,
    static_cast<size_t>(reinterpret_cast<char*>(&submanifold_max_points_) -
    reinterpret_cast<char*>(&max_number_of_points_per_voxel_)) + sizeof(submanifold_max_points_));
  // @@protoc_insertion_point(copy_constructor:second.protos.VoxelGenerator)
}

void VoxelGenerator::SharedCtor() {
  ::memset(&max_number_of_points_per_voxel_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&submanifold_max_points_) -
      reinterpret_cast<char*>(&max_number_of_points_per_voxel_)) + sizeof(submanifold_max_points_));
}

VoxelGenerator::~VoxelGenerator() {
  // @@protoc_insertion_point(destructor:second.protos.VoxelGenerator)
  SharedDtor();
}

void VoxelGenerator::SharedDtor() {
}

void VoxelGenerator::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const VoxelGenerator& VoxelGenerator::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_VoxelGenerator_second_2fprotos_2fvoxel_5fgenerator_2eproto.base);
  return *internal_default_instance();
}


void VoxelGenerator::Clear() {
// @@protoc_insertion_point(message_clear_start:second.protos.VoxelGenerator)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  voxel_size_.Clear();
  point_cloud_range_.Clear();
  submanifold_size_.Clear();
  ::memset(&max_number_of_points_per_voxel_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&submanifold_max_points_) -
      reinterpret_cast<char*>(&max_number_of_points_per_voxel_)) + sizeof(submanifold_max_points_));
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* VoxelGenerator::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // repeated float voxel_size = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedFloatParser(mutable_voxel_size(), ptr, ctx);
          CHK_(ptr);
        } else if (static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 13) {
          add_voxel_size(::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr));
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      // repeated float point_cloud_range = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedFloatParser(mutable_point_cloud_range(), ptr, ctx);
          CHK_(ptr);
        } else if (static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 21) {
          add_point_cloud_range(::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr));
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      // uint32 max_number_of_points_per_voxel = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          max_number_of_points_per_voxel_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bool submanifold_group = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 32)) {
          submanifold_group_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated uint32 submanifold_size = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 42)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedUInt32Parser(mutable_submanifold_size(), ptr, ctx);
          CHK_(ptr);
        } else if (static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 40) {
          add_submanifold_size(::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // uint32 submanifold_max_points = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 48)) {
          submanifold_max_points_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
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
bool VoxelGenerator::MergePartialFromCodedStream(
    ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::PROTOBUF_NAMESPACE_ID::uint32 tag;
  // @@protoc_insertion_point(parse_start:second.protos.VoxelGenerator)
  for (;;) {
    ::std::pair<::PROTOBUF_NAMESPACE_ID::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated float voxel_size = 1;
      case 1: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (10 & 0xFF)) {
          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPackedPrimitive<
                   float, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_FLOAT>(
                 input, this->mutable_voxel_size())));
        } else if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (13 & 0xFF)) {
          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   float, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_FLOAT>(
                 1, 10u, input, this->mutable_voxel_size())));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated float point_cloud_range = 2;
      case 2: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (18 & 0xFF)) {
          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPackedPrimitive<
                   float, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_FLOAT>(
                 input, this->mutable_point_cloud_range())));
        } else if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (21 & 0xFF)) {
          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   float, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_FLOAT>(
                 1, 18u, input, this->mutable_point_cloud_range())));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 max_number_of_points_per_voxel = 3;
      case 3: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (24 & 0xFF)) {

          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   ::PROTOBUF_NAMESPACE_ID::uint32, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_UINT32>(
                 input, &max_number_of_points_per_voxel_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool submanifold_group = 4;
      case 4: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (32 & 0xFF)) {

          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   bool, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_BOOL>(
                 input, &submanifold_group_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated uint32 submanifold_size = 5;
      case 5: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (42 & 0xFF)) {
          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPackedPrimitive<
                   ::PROTOBUF_NAMESPACE_ID::uint32, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_UINT32>(
                 input, this->mutable_submanifold_size())));
        } else if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (40 & 0xFF)) {
          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   ::PROTOBUF_NAMESPACE_ID::uint32, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_UINT32>(
                 1, 42u, input, this->mutable_submanifold_size())));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 submanifold_max_points = 6;
      case 6: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (48 & 0xFF)) {

          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   ::PROTOBUF_NAMESPACE_ID::uint32, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_UINT32>(
                 input, &submanifold_max_points_)));
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
  // @@protoc_insertion_point(parse_success:second.protos.VoxelGenerator)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:second.protos.VoxelGenerator)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void VoxelGenerator::SerializeWithCachedSizes(
    ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:second.protos.VoxelGenerator)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated float voxel_size = 1;
  if (this->voxel_size_size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteTag(1, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(_voxel_size_cached_byte_size_.load(
        std::memory_order_relaxed));
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatArray(
      this->voxel_size().data(), this->voxel_size_size(), output);
  }

  // repeated float point_cloud_range = 2;
  if (this->point_cloud_range_size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteTag(2, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(_point_cloud_range_cached_byte_size_.load(
        std::memory_order_relaxed));
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatArray(
      this->point_cloud_range().data(), this->point_cloud_range_size(), output);
  }

  // uint32 max_number_of_points_per_voxel = 3;
  if (this->max_number_of_points_per_voxel() != 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32(3, this->max_number_of_points_per_voxel(), output);
  }

  // bool submanifold_group = 4;
  if (this->submanifold_group() != 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBool(4, this->submanifold_group(), output);
  }

  // repeated uint32 submanifold_size = 5;
  if (this->submanifold_size_size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteTag(5, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(_submanifold_size_cached_byte_size_.load(
        std::memory_order_relaxed));
  }
  for (int i = 0, n = this->submanifold_size_size(); i < n; i++) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32NoTag(
      this->submanifold_size(i), output);
  }

  // uint32 submanifold_max_points = 6;
  if (this->submanifold_max_points() != 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32(6, this->submanifold_max_points(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:second.protos.VoxelGenerator)
}

::PROTOBUF_NAMESPACE_ID::uint8* VoxelGenerator::InternalSerializeWithCachedSizesToArray(
    ::PROTOBUF_NAMESPACE_ID::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:second.protos.VoxelGenerator)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated float voxel_size = 1;
  if (this->voxel_size_size() > 0) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteTagToArray(
      1,
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream::WriteVarint32ToArray(
        _voxel_size_cached_byte_size_.load(std::memory_order_relaxed),
         target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      WriteFloatNoTagToArray(this->voxel_size_, target);
  }

  // repeated float point_cloud_range = 2;
  if (this->point_cloud_range_size() > 0) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteTagToArray(
      2,
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream::WriteVarint32ToArray(
        _point_cloud_range_cached_byte_size_.load(std::memory_order_relaxed),
         target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      WriteFloatNoTagToArray(this->point_cloud_range_, target);
  }

  // uint32 max_number_of_points_per_voxel = 3;
  if (this->max_number_of_points_per_voxel() != 0) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(3, this->max_number_of_points_per_voxel(), target);
  }

  // bool submanifold_group = 4;
  if (this->submanifold_group() != 0) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(4, this->submanifold_group(), target);
  }

  // repeated uint32 submanifold_size = 5;
  if (this->submanifold_size_size() > 0) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteTagToArray(
      5,
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream::WriteVarint32ToArray(
        _submanifold_size_cached_byte_size_.load(std::memory_order_relaxed),
         target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      WriteUInt32NoTagToArray(this->submanifold_size_, target);
  }

  // uint32 submanifold_max_points = 6;
  if (this->submanifold_max_points() != 0) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(6, this->submanifold_max_points(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:second.protos.VoxelGenerator)
  return target;
}

size_t VoxelGenerator::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:second.protos.VoxelGenerator)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated float voxel_size = 1;
  {
    unsigned int count = static_cast<unsigned int>(this->voxel_size_size());
    size_t data_size = 4UL * count;
    if (data_size > 0) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
            static_cast<::PROTOBUF_NAMESPACE_ID::int32>(data_size));
    }
    int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(data_size);
    _voxel_size_cached_byte_size_.store(cached_size,
                                    std::memory_order_relaxed);
    total_size += data_size;
  }

  // repeated float point_cloud_range = 2;
  {
    unsigned int count = static_cast<unsigned int>(this->point_cloud_range_size());
    size_t data_size = 4UL * count;
    if (data_size > 0) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
            static_cast<::PROTOBUF_NAMESPACE_ID::int32>(data_size));
    }
    int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(data_size);
    _point_cloud_range_cached_byte_size_.store(cached_size,
                                    std::memory_order_relaxed);
    total_size += data_size;
  }

  // repeated uint32 submanifold_size = 5;
  {
    size_t data_size = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      UInt32Size(this->submanifold_size_);
    if (data_size > 0) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
            static_cast<::PROTOBUF_NAMESPACE_ID::int32>(data_size));
    }
    int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(data_size);
    _submanifold_size_cached_byte_size_.store(cached_size,
                                    std::memory_order_relaxed);
    total_size += data_size;
  }

  // uint32 max_number_of_points_per_voxel = 3;
  if (this->max_number_of_points_per_voxel() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->max_number_of_points_per_voxel());
  }

  // bool submanifold_group = 4;
  if (this->submanifold_group() != 0) {
    total_size += 1 + 1;
  }

  // uint32 submanifold_max_points = 6;
  if (this->submanifold_max_points() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->submanifold_max_points());
  }

  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void VoxelGenerator::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:second.protos.VoxelGenerator)
  GOOGLE_DCHECK_NE(&from, this);
  const VoxelGenerator* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<VoxelGenerator>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:second.protos.VoxelGenerator)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:second.protos.VoxelGenerator)
    MergeFrom(*source);
  }
}

void VoxelGenerator::MergeFrom(const VoxelGenerator& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:second.protos.VoxelGenerator)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  voxel_size_.MergeFrom(from.voxel_size_);
  point_cloud_range_.MergeFrom(from.point_cloud_range_);
  submanifold_size_.MergeFrom(from.submanifold_size_);
  if (from.max_number_of_points_per_voxel() != 0) {
    set_max_number_of_points_per_voxel(from.max_number_of_points_per_voxel());
  }
  if (from.submanifold_group() != 0) {
    set_submanifold_group(from.submanifold_group());
  }
  if (from.submanifold_max_points() != 0) {
    set_submanifold_max_points(from.submanifold_max_points());
  }
}

void VoxelGenerator::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:second.protos.VoxelGenerator)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void VoxelGenerator::CopyFrom(const VoxelGenerator& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:second.protos.VoxelGenerator)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool VoxelGenerator::IsInitialized() const {
  return true;
}

void VoxelGenerator::InternalSwap(VoxelGenerator* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  voxel_size_.InternalSwap(&other->voxel_size_);
  point_cloud_range_.InternalSwap(&other->point_cloud_range_);
  submanifold_size_.InternalSwap(&other->submanifold_size_);
  swap(max_number_of_points_per_voxel_, other->max_number_of_points_per_voxel_);
  swap(submanifold_group_, other->submanifold_group_);
  swap(submanifold_max_points_, other->submanifold_max_points_);
}

::PROTOBUF_NAMESPACE_ID::Metadata VoxelGenerator::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace protos
}  // namespace second
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::second::protos::VoxelGenerator* Arena::CreateMaybeMessage< ::second::protos::VoxelGenerator >(Arena* arena) {
  return Arena::CreateInternal< ::second::protos::VoxelGenerator >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
