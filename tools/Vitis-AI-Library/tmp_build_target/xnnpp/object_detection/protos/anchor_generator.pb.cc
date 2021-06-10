// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: object_detection/protos/anchor_generator.proto

#include "object_detection/protos/anchor_generator.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_object_5fdetection_2fprotos_2fflexible_5fgrid_5fanchor_5fgenerator_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_FlexibleGridAnchorGenerator_object_5fdetection_2fprotos_2fflexible_5fgrid_5fanchor_5fgenerator_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_object_5fdetection_2fprotos_2fgrid_5fanchor_5fgenerator_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_GridAnchorGenerator_object_5fdetection_2fprotos_2fgrid_5fanchor_5fgenerator_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_object_5fdetection_2fprotos_2fmultiscale_5fanchor_5fgenerator_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_MultiscaleAnchorGenerator_object_5fdetection_2fprotos_2fmultiscale_5fanchor_5fgenerator_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_object_5fdetection_2fprotos_2fssd_5fanchor_5fgenerator_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_SsdAnchorGenerator_object_5fdetection_2fprotos_2fssd_5fanchor_5fgenerator_2eproto;
namespace object_detection {
namespace protos {
class AnchorGeneratorDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<AnchorGenerator> _instance;
  const ::object_detection::protos::GridAnchorGenerator* grid_anchor_generator_;
  const ::object_detection::protos::SsdAnchorGenerator* ssd_anchor_generator_;
  const ::object_detection::protos::MultiscaleAnchorGenerator* multiscale_anchor_generator_;
  const ::object_detection::protos::FlexibleGridAnchorGenerator* flexible_grid_anchor_generator_;
} _AnchorGenerator_default_instance_;
}  // namespace protos
}  // namespace object_detection
static void InitDefaultsscc_info_AnchorGenerator_object_5fdetection_2fprotos_2fanchor_5fgenerator_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::object_detection::protos::_AnchorGenerator_default_instance_;
    new (ptr) ::object_detection::protos::AnchorGenerator();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::object_detection::protos::AnchorGenerator::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<4> scc_info_AnchorGenerator_object_5fdetection_2fprotos_2fanchor_5fgenerator_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 4, InitDefaultsscc_info_AnchorGenerator_object_5fdetection_2fprotos_2fanchor_5fgenerator_2eproto}, {
      &scc_info_GridAnchorGenerator_object_5fdetection_2fprotos_2fgrid_5fanchor_5fgenerator_2eproto.base,
      &scc_info_SsdAnchorGenerator_object_5fdetection_2fprotos_2fssd_5fanchor_5fgenerator_2eproto.base,
      &scc_info_MultiscaleAnchorGenerator_object_5fdetection_2fprotos_2fmultiscale_5fanchor_5fgenerator_2eproto.base,
      &scc_info_FlexibleGridAnchorGenerator_object_5fdetection_2fprotos_2fflexible_5fgrid_5fanchor_5fgenerator_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_object_5fdetection_2fprotos_2fanchor_5fgenerator_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_object_5fdetection_2fprotos_2fanchor_5fgenerator_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_object_5fdetection_2fprotos_2fanchor_5fgenerator_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_object_5fdetection_2fprotos_2fanchor_5fgenerator_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::object_detection::protos::AnchorGenerator, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::object_detection::protos::AnchorGenerator, _internal_metadata_),
  ~0u,  // no _extensions_
  PROTOBUF_FIELD_OFFSET(::object_detection::protos::AnchorGenerator, _oneof_case_[0]),
  ~0u,  // no _weak_field_map_
  offsetof(::object_detection::protos::AnchorGeneratorDefaultTypeInternal, grid_anchor_generator_),
  offsetof(::object_detection::protos::AnchorGeneratorDefaultTypeInternal, ssd_anchor_generator_),
  offsetof(::object_detection::protos::AnchorGeneratorDefaultTypeInternal, multiscale_anchor_generator_),
  offsetof(::object_detection::protos::AnchorGeneratorDefaultTypeInternal, flexible_grid_anchor_generator_),
  PROTOBUF_FIELD_OFFSET(::object_detection::protos::AnchorGenerator, anchor_generator_oneof_),
  ~0u,
  ~0u,
  ~0u,
  ~0u,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 10, sizeof(::object_detection::protos::AnchorGenerator)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::object_detection::protos::_AnchorGenerator_default_instance_),
};

const char descriptor_table_protodef_object_5fdetection_2fprotos_2fanchor_5fgenerator_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n.object_detection/protos/anchor_generat"
  "or.proto\022\027object_detection.protos\032<objec"
  "t_detection/protos/flexible_grid_anchor_"
  "generator.proto\0323object_detection/protos"
  "/grid_anchor_generator.proto\0329object_det"
  "ection/protos/multiscale_anchor_generato"
  "r.proto\0322object_detection/protos/ssd_anc"
  "hor_generator.proto\"\202\003\n\017AnchorGenerator\022"
  "M\n\025grid_anchor_generator\030\001 \001(\0132,.object_"
  "detection.protos.GridAnchorGeneratorH\000\022K"
  "\n\024ssd_anchor_generator\030\002 \001(\0132+.object_de"
  "tection.protos.SsdAnchorGeneratorH\000\022Y\n\033m"
  "ultiscale_anchor_generator\030\003 \001(\01322.objec"
  "t_detection.protos.MultiscaleAnchorGener"
  "atorH\000\022^\n\036flexible_grid_anchor_generator"
  "\030\004 \001(\01324.object_detection.protos.Flexibl"
  "eGridAnchorGeneratorH\000B\030\n\026anchor_generat"
  "or_oneof"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_object_5fdetection_2fprotos_2fanchor_5fgenerator_2eproto_deps[4] = {
  &::descriptor_table_object_5fdetection_2fprotos_2fflexible_5fgrid_5fanchor_5fgenerator_2eproto,
  &::descriptor_table_object_5fdetection_2fprotos_2fgrid_5fanchor_5fgenerator_2eproto,
  &::descriptor_table_object_5fdetection_2fprotos_2fmultiscale_5fanchor_5fgenerator_2eproto,
  &::descriptor_table_object_5fdetection_2fprotos_2fssd_5fanchor_5fgenerator_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_object_5fdetection_2fprotos_2fanchor_5fgenerator_2eproto_sccs[1] = {
  &scc_info_AnchorGenerator_object_5fdetection_2fprotos_2fanchor_5fgenerator_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_object_5fdetection_2fprotos_2fanchor_5fgenerator_2eproto_once;
static bool descriptor_table_object_5fdetection_2fprotos_2fanchor_5fgenerator_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_object_5fdetection_2fprotos_2fanchor_5fgenerator_2eproto = {
  &descriptor_table_object_5fdetection_2fprotos_2fanchor_5fgenerator_2eproto_initialized, descriptor_table_protodef_object_5fdetection_2fprotos_2fanchor_5fgenerator_2eproto, "object_detection/protos/anchor_generator.proto", 688,
  &descriptor_table_object_5fdetection_2fprotos_2fanchor_5fgenerator_2eproto_once, descriptor_table_object_5fdetection_2fprotos_2fanchor_5fgenerator_2eproto_sccs, descriptor_table_object_5fdetection_2fprotos_2fanchor_5fgenerator_2eproto_deps, 1, 4,
  schemas, file_default_instances, TableStruct_object_5fdetection_2fprotos_2fanchor_5fgenerator_2eproto::offsets,
  file_level_metadata_object_5fdetection_2fprotos_2fanchor_5fgenerator_2eproto, 1, file_level_enum_descriptors_object_5fdetection_2fprotos_2fanchor_5fgenerator_2eproto, file_level_service_descriptors_object_5fdetection_2fprotos_2fanchor_5fgenerator_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_object_5fdetection_2fprotos_2fanchor_5fgenerator_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_object_5fdetection_2fprotos_2fanchor_5fgenerator_2eproto), true);
namespace object_detection {
namespace protos {

// ===================================================================

void AnchorGenerator::InitAsDefaultInstance() {
  ::object_detection::protos::_AnchorGenerator_default_instance_.grid_anchor_generator_ = const_cast< ::object_detection::protos::GridAnchorGenerator*>(
      ::object_detection::protos::GridAnchorGenerator::internal_default_instance());
  ::object_detection::protos::_AnchorGenerator_default_instance_.ssd_anchor_generator_ = const_cast< ::object_detection::protos::SsdAnchorGenerator*>(
      ::object_detection::protos::SsdAnchorGenerator::internal_default_instance());
  ::object_detection::protos::_AnchorGenerator_default_instance_.multiscale_anchor_generator_ = const_cast< ::object_detection::protos::MultiscaleAnchorGenerator*>(
      ::object_detection::protos::MultiscaleAnchorGenerator::internal_default_instance());
  ::object_detection::protos::_AnchorGenerator_default_instance_.flexible_grid_anchor_generator_ = const_cast< ::object_detection::protos::FlexibleGridAnchorGenerator*>(
      ::object_detection::protos::FlexibleGridAnchorGenerator::internal_default_instance());
}
class AnchorGenerator::_Internal {
 public:
  using HasBits = decltype(std::declval<AnchorGenerator>()._has_bits_);
  static const ::object_detection::protos::GridAnchorGenerator& grid_anchor_generator(const AnchorGenerator* msg);
  static const ::object_detection::protos::SsdAnchorGenerator& ssd_anchor_generator(const AnchorGenerator* msg);
  static const ::object_detection::protos::MultiscaleAnchorGenerator& multiscale_anchor_generator(const AnchorGenerator* msg);
  static const ::object_detection::protos::FlexibleGridAnchorGenerator& flexible_grid_anchor_generator(const AnchorGenerator* msg);
};

const ::object_detection::protos::GridAnchorGenerator&
AnchorGenerator::_Internal::grid_anchor_generator(const AnchorGenerator* msg) {
  return *msg->anchor_generator_oneof_.grid_anchor_generator_;
}
const ::object_detection::protos::SsdAnchorGenerator&
AnchorGenerator::_Internal::ssd_anchor_generator(const AnchorGenerator* msg) {
  return *msg->anchor_generator_oneof_.ssd_anchor_generator_;
}
const ::object_detection::protos::MultiscaleAnchorGenerator&
AnchorGenerator::_Internal::multiscale_anchor_generator(const AnchorGenerator* msg) {
  return *msg->anchor_generator_oneof_.multiscale_anchor_generator_;
}
const ::object_detection::protos::FlexibleGridAnchorGenerator&
AnchorGenerator::_Internal::flexible_grid_anchor_generator(const AnchorGenerator* msg) {
  return *msg->anchor_generator_oneof_.flexible_grid_anchor_generator_;
}
void AnchorGenerator::set_allocated_grid_anchor_generator(::object_detection::protos::GridAnchorGenerator* grid_anchor_generator) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  clear_anchor_generator_oneof();
  if (grid_anchor_generator) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      grid_anchor_generator = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, grid_anchor_generator, submessage_arena);
    }
    set_has_grid_anchor_generator();
    anchor_generator_oneof_.grid_anchor_generator_ = grid_anchor_generator;
  }
  // @@protoc_insertion_point(field_set_allocated:object_detection.protos.AnchorGenerator.grid_anchor_generator)
}
void AnchorGenerator::clear_grid_anchor_generator() {
  if (has_grid_anchor_generator()) {
    delete anchor_generator_oneof_.grid_anchor_generator_;
    clear_has_anchor_generator_oneof();
  }
}
void AnchorGenerator::set_allocated_ssd_anchor_generator(::object_detection::protos::SsdAnchorGenerator* ssd_anchor_generator) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  clear_anchor_generator_oneof();
  if (ssd_anchor_generator) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      ssd_anchor_generator = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, ssd_anchor_generator, submessage_arena);
    }
    set_has_ssd_anchor_generator();
    anchor_generator_oneof_.ssd_anchor_generator_ = ssd_anchor_generator;
  }
  // @@protoc_insertion_point(field_set_allocated:object_detection.protos.AnchorGenerator.ssd_anchor_generator)
}
void AnchorGenerator::clear_ssd_anchor_generator() {
  if (has_ssd_anchor_generator()) {
    delete anchor_generator_oneof_.ssd_anchor_generator_;
    clear_has_anchor_generator_oneof();
  }
}
void AnchorGenerator::set_allocated_multiscale_anchor_generator(::object_detection::protos::MultiscaleAnchorGenerator* multiscale_anchor_generator) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  clear_anchor_generator_oneof();
  if (multiscale_anchor_generator) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      multiscale_anchor_generator = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, multiscale_anchor_generator, submessage_arena);
    }
    set_has_multiscale_anchor_generator();
    anchor_generator_oneof_.multiscale_anchor_generator_ = multiscale_anchor_generator;
  }
  // @@protoc_insertion_point(field_set_allocated:object_detection.protos.AnchorGenerator.multiscale_anchor_generator)
}
void AnchorGenerator::clear_multiscale_anchor_generator() {
  if (has_multiscale_anchor_generator()) {
    delete anchor_generator_oneof_.multiscale_anchor_generator_;
    clear_has_anchor_generator_oneof();
  }
}
void AnchorGenerator::set_allocated_flexible_grid_anchor_generator(::object_detection::protos::FlexibleGridAnchorGenerator* flexible_grid_anchor_generator) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  clear_anchor_generator_oneof();
  if (flexible_grid_anchor_generator) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      flexible_grid_anchor_generator = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, flexible_grid_anchor_generator, submessage_arena);
    }
    set_has_flexible_grid_anchor_generator();
    anchor_generator_oneof_.flexible_grid_anchor_generator_ = flexible_grid_anchor_generator;
  }
  // @@protoc_insertion_point(field_set_allocated:object_detection.protos.AnchorGenerator.flexible_grid_anchor_generator)
}
void AnchorGenerator::clear_flexible_grid_anchor_generator() {
  if (has_flexible_grid_anchor_generator()) {
    delete anchor_generator_oneof_.flexible_grid_anchor_generator_;
    clear_has_anchor_generator_oneof();
  }
}
AnchorGenerator::AnchorGenerator()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:object_detection.protos.AnchorGenerator)
}
AnchorGenerator::AnchorGenerator(const AnchorGenerator& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  clear_has_anchor_generator_oneof();
  switch (from.anchor_generator_oneof_case()) {
    case kGridAnchorGenerator: {
      mutable_grid_anchor_generator()->::object_detection::protos::GridAnchorGenerator::MergeFrom(from.grid_anchor_generator());
      break;
    }
    case kSsdAnchorGenerator: {
      mutable_ssd_anchor_generator()->::object_detection::protos::SsdAnchorGenerator::MergeFrom(from.ssd_anchor_generator());
      break;
    }
    case kMultiscaleAnchorGenerator: {
      mutable_multiscale_anchor_generator()->::object_detection::protos::MultiscaleAnchorGenerator::MergeFrom(from.multiscale_anchor_generator());
      break;
    }
    case kFlexibleGridAnchorGenerator: {
      mutable_flexible_grid_anchor_generator()->::object_detection::protos::FlexibleGridAnchorGenerator::MergeFrom(from.flexible_grid_anchor_generator());
      break;
    }
    case ANCHOR_GENERATOR_ONEOF_NOT_SET: {
      break;
    }
  }
  // @@protoc_insertion_point(copy_constructor:object_detection.protos.AnchorGenerator)
}

void AnchorGenerator::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_AnchorGenerator_object_5fdetection_2fprotos_2fanchor_5fgenerator_2eproto.base);
  clear_has_anchor_generator_oneof();
}

AnchorGenerator::~AnchorGenerator() {
  // @@protoc_insertion_point(destructor:object_detection.protos.AnchorGenerator)
  SharedDtor();
}

void AnchorGenerator::SharedDtor() {
  if (has_anchor_generator_oneof()) {
    clear_anchor_generator_oneof();
  }
}

void AnchorGenerator::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const AnchorGenerator& AnchorGenerator::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_AnchorGenerator_object_5fdetection_2fprotos_2fanchor_5fgenerator_2eproto.base);
  return *internal_default_instance();
}


void AnchorGenerator::clear_anchor_generator_oneof() {
// @@protoc_insertion_point(one_of_clear_start:object_detection.protos.AnchorGenerator)
  switch (anchor_generator_oneof_case()) {
    case kGridAnchorGenerator: {
      delete anchor_generator_oneof_.grid_anchor_generator_;
      break;
    }
    case kSsdAnchorGenerator: {
      delete anchor_generator_oneof_.ssd_anchor_generator_;
      break;
    }
    case kMultiscaleAnchorGenerator: {
      delete anchor_generator_oneof_.multiscale_anchor_generator_;
      break;
    }
    case kFlexibleGridAnchorGenerator: {
      delete anchor_generator_oneof_.flexible_grid_anchor_generator_;
      break;
    }
    case ANCHOR_GENERATOR_ONEOF_NOT_SET: {
      break;
    }
  }
  _oneof_case_[0] = ANCHOR_GENERATOR_ONEOF_NOT_SET;
}


void AnchorGenerator::Clear() {
// @@protoc_insertion_point(message_clear_start:object_detection.protos.AnchorGenerator)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  clear_anchor_generator_oneof();
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* AnchorGenerator::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // optional .object_detection.protos.GridAnchorGenerator grid_anchor_generator = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ctx->ParseMessage(mutable_grid_anchor_generator(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional .object_detection.protos.SsdAnchorGenerator ssd_anchor_generator = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr = ctx->ParseMessage(mutable_ssd_anchor_generator(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional .object_detection.protos.MultiscaleAnchorGenerator multiscale_anchor_generator = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          ptr = ctx->ParseMessage(mutable_multiscale_anchor_generator(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional .object_detection.protos.FlexibleGridAnchorGenerator flexible_grid_anchor_generator = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          ptr = ctx->ParseMessage(mutable_flexible_grid_anchor_generator(), ptr);
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
bool AnchorGenerator::MergePartialFromCodedStream(
    ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::PROTOBUF_NAMESPACE_ID::uint32 tag;
  // @@protoc_insertion_point(parse_start:object_detection.protos.AnchorGenerator)
  for (;;) {
    ::std::pair<::PROTOBUF_NAMESPACE_ID::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .object_detection.protos.GridAnchorGenerator grid_anchor_generator = 1;
      case 1: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (10 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadMessage(
               input, mutable_grid_anchor_generator()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional .object_detection.protos.SsdAnchorGenerator ssd_anchor_generator = 2;
      case 2: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (18 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadMessage(
               input, mutable_ssd_anchor_generator()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional .object_detection.protos.MultiscaleAnchorGenerator multiscale_anchor_generator = 3;
      case 3: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (26 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadMessage(
               input, mutable_multiscale_anchor_generator()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional .object_detection.protos.FlexibleGridAnchorGenerator flexible_grid_anchor_generator = 4;
      case 4: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (34 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadMessage(
               input, mutable_flexible_grid_anchor_generator()));
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
  // @@protoc_insertion_point(parse_success:object_detection.protos.AnchorGenerator)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:object_detection.protos.AnchorGenerator)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void AnchorGenerator::SerializeWithCachedSizes(
    ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:object_detection.protos.AnchorGenerator)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  switch (anchor_generator_oneof_case()) {
    case kGridAnchorGenerator:
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteMessageMaybeToArray(
        1, _Internal::grid_anchor_generator(this), output);
      break;
    case kSsdAnchorGenerator:
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteMessageMaybeToArray(
        2, _Internal::ssd_anchor_generator(this), output);
      break;
    case kMultiscaleAnchorGenerator:
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteMessageMaybeToArray(
        3, _Internal::multiscale_anchor_generator(this), output);
      break;
    case kFlexibleGridAnchorGenerator:
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteMessageMaybeToArray(
        4, _Internal::flexible_grid_anchor_generator(this), output);
      break;
    default: ;
  }
  if (_internal_metadata_.have_unknown_fields()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:object_detection.protos.AnchorGenerator)
}

::PROTOBUF_NAMESPACE_ID::uint8* AnchorGenerator::InternalSerializeWithCachedSizesToArray(
    ::PROTOBUF_NAMESPACE_ID::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:object_detection.protos.AnchorGenerator)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  switch (anchor_generator_oneof_case()) {
    case kGridAnchorGenerator:
      target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessageToArray(
          1, _Internal::grid_anchor_generator(this), target);
      break;
    case kSsdAnchorGenerator:
      target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessageToArray(
          2, _Internal::ssd_anchor_generator(this), target);
      break;
    case kMultiscaleAnchorGenerator:
      target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessageToArray(
          3, _Internal::multiscale_anchor_generator(this), target);
      break;
    case kFlexibleGridAnchorGenerator:
      target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessageToArray(
          4, _Internal::flexible_grid_anchor_generator(this), target);
      break;
    default: ;
  }
  if (_internal_metadata_.have_unknown_fields()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:object_detection.protos.AnchorGenerator)
  return target;
}

size_t AnchorGenerator::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:object_detection.protos.AnchorGenerator)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  switch (anchor_generator_oneof_case()) {
    // optional .object_detection.protos.GridAnchorGenerator grid_anchor_generator = 1;
    case kGridAnchorGenerator: {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *anchor_generator_oneof_.grid_anchor_generator_);
      break;
    }
    // optional .object_detection.protos.SsdAnchorGenerator ssd_anchor_generator = 2;
    case kSsdAnchorGenerator: {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *anchor_generator_oneof_.ssd_anchor_generator_);
      break;
    }
    // optional .object_detection.protos.MultiscaleAnchorGenerator multiscale_anchor_generator = 3;
    case kMultiscaleAnchorGenerator: {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *anchor_generator_oneof_.multiscale_anchor_generator_);
      break;
    }
    // optional .object_detection.protos.FlexibleGridAnchorGenerator flexible_grid_anchor_generator = 4;
    case kFlexibleGridAnchorGenerator: {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *anchor_generator_oneof_.flexible_grid_anchor_generator_);
      break;
    }
    case ANCHOR_GENERATOR_ONEOF_NOT_SET: {
      break;
    }
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void AnchorGenerator::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:object_detection.protos.AnchorGenerator)
  GOOGLE_DCHECK_NE(&from, this);
  const AnchorGenerator* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<AnchorGenerator>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:object_detection.protos.AnchorGenerator)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:object_detection.protos.AnchorGenerator)
    MergeFrom(*source);
  }
}

void AnchorGenerator::MergeFrom(const AnchorGenerator& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:object_detection.protos.AnchorGenerator)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  switch (from.anchor_generator_oneof_case()) {
    case kGridAnchorGenerator: {
      mutable_grid_anchor_generator()->::object_detection::protos::GridAnchorGenerator::MergeFrom(from.grid_anchor_generator());
      break;
    }
    case kSsdAnchorGenerator: {
      mutable_ssd_anchor_generator()->::object_detection::protos::SsdAnchorGenerator::MergeFrom(from.ssd_anchor_generator());
      break;
    }
    case kMultiscaleAnchorGenerator: {
      mutable_multiscale_anchor_generator()->::object_detection::protos::MultiscaleAnchorGenerator::MergeFrom(from.multiscale_anchor_generator());
      break;
    }
    case kFlexibleGridAnchorGenerator: {
      mutable_flexible_grid_anchor_generator()->::object_detection::protos::FlexibleGridAnchorGenerator::MergeFrom(from.flexible_grid_anchor_generator());
      break;
    }
    case ANCHOR_GENERATOR_ONEOF_NOT_SET: {
      break;
    }
  }
}

void AnchorGenerator::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:object_detection.protos.AnchorGenerator)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void AnchorGenerator::CopyFrom(const AnchorGenerator& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:object_detection.protos.AnchorGenerator)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AnchorGenerator::IsInitialized() const {
  return true;
}

void AnchorGenerator::InternalSwap(AnchorGenerator* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  swap(anchor_generator_oneof_, other->anchor_generator_oneof_);
  swap(_oneof_case_[0], other->_oneof_case_[0]);
}

::PROTOBUF_NAMESPACE_ID::Metadata AnchorGenerator::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace protos
}  // namespace object_detection
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::object_detection::protos::AnchorGenerator* Arena::CreateMaybeMessage< ::object_detection::protos::AnchorGenerator >(Arena* arena) {
  return Arena::CreateInternal< ::object_detection::protos::AnchorGenerator >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>