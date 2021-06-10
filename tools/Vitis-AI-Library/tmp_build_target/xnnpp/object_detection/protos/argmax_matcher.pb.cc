// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: object_detection/protos/argmax_matcher.proto

#include "object_detection/protos/argmax_matcher.pb.h"

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
class ArgMaxMatcherDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<ArgMaxMatcher> _instance;
} _ArgMaxMatcher_default_instance_;
}  // namespace protos
}  // namespace object_detection
static void InitDefaultsscc_info_ArgMaxMatcher_object_5fdetection_2fprotos_2fargmax_5fmatcher_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::object_detection::protos::_ArgMaxMatcher_default_instance_;
    new (ptr) ::object_detection::protos::ArgMaxMatcher();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::object_detection::protos::ArgMaxMatcher::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_ArgMaxMatcher_object_5fdetection_2fprotos_2fargmax_5fmatcher_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsscc_info_ArgMaxMatcher_object_5fdetection_2fprotos_2fargmax_5fmatcher_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_object_5fdetection_2fprotos_2fargmax_5fmatcher_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_object_5fdetection_2fprotos_2fargmax_5fmatcher_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_object_5fdetection_2fprotos_2fargmax_5fmatcher_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_object_5fdetection_2fprotos_2fargmax_5fmatcher_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::object_detection::protos::ArgMaxMatcher, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::object_detection::protos::ArgMaxMatcher, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::object_detection::protos::ArgMaxMatcher, matched_threshold_),
  PROTOBUF_FIELD_OFFSET(::object_detection::protos::ArgMaxMatcher, unmatched_threshold_),
  PROTOBUF_FIELD_OFFSET(::object_detection::protos::ArgMaxMatcher, ignore_thresholds_),
  PROTOBUF_FIELD_OFFSET(::object_detection::protos::ArgMaxMatcher, negatives_lower_than_unmatched_),
  PROTOBUF_FIELD_OFFSET(::object_detection::protos::ArgMaxMatcher, force_match_for_each_row_),
  PROTOBUF_FIELD_OFFSET(::object_detection::protos::ArgMaxMatcher, use_matmul_gather_),
  4,
  5,
  0,
  3,
  1,
  2,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 11, sizeof(::object_detection::protos::ArgMaxMatcher)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::object_detection::protos::_ArgMaxMatcher_default_instance_),
};

const char descriptor_table_protodef_object_5fdetection_2fprotos_2fargmax_5fmatcher_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n,object_detection/protos/argmax_matcher"
  ".proto\022\027object_detection.protos\"\354\001\n\rArgM"
  "axMatcher\022\036\n\021matched_threshold\030\001 \001(\002:\0030."
  "5\022 \n\023unmatched_threshold\030\002 \001(\002:\0030.5\022 \n\021i"
  "gnore_thresholds\030\003 \001(\010:\005false\022,\n\036negativ"
  "es_lower_than_unmatched\030\004 \001(\010:\004true\022\'\n\030f"
  "orce_match_for_each_row\030\005 \001(\010:\005false\022 \n\021"
  "use_matmul_gather\030\006 \001(\010:\005false"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_object_5fdetection_2fprotos_2fargmax_5fmatcher_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_object_5fdetection_2fprotos_2fargmax_5fmatcher_2eproto_sccs[1] = {
  &scc_info_ArgMaxMatcher_object_5fdetection_2fprotos_2fargmax_5fmatcher_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_object_5fdetection_2fprotos_2fargmax_5fmatcher_2eproto_once;
static bool descriptor_table_object_5fdetection_2fprotos_2fargmax_5fmatcher_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_object_5fdetection_2fprotos_2fargmax_5fmatcher_2eproto = {
  &descriptor_table_object_5fdetection_2fprotos_2fargmax_5fmatcher_2eproto_initialized, descriptor_table_protodef_object_5fdetection_2fprotos_2fargmax_5fmatcher_2eproto, "object_detection/protos/argmax_matcher.proto", 310,
  &descriptor_table_object_5fdetection_2fprotos_2fargmax_5fmatcher_2eproto_once, descriptor_table_object_5fdetection_2fprotos_2fargmax_5fmatcher_2eproto_sccs, descriptor_table_object_5fdetection_2fprotos_2fargmax_5fmatcher_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_object_5fdetection_2fprotos_2fargmax_5fmatcher_2eproto::offsets,
  file_level_metadata_object_5fdetection_2fprotos_2fargmax_5fmatcher_2eproto, 1, file_level_enum_descriptors_object_5fdetection_2fprotos_2fargmax_5fmatcher_2eproto, file_level_service_descriptors_object_5fdetection_2fprotos_2fargmax_5fmatcher_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_object_5fdetection_2fprotos_2fargmax_5fmatcher_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_object_5fdetection_2fprotos_2fargmax_5fmatcher_2eproto), true);
namespace object_detection {
namespace protos {

// ===================================================================

void ArgMaxMatcher::InitAsDefaultInstance() {
}
class ArgMaxMatcher::_Internal {
 public:
  using HasBits = decltype(std::declval<ArgMaxMatcher>()._has_bits_);
  static void set_has_matched_threshold(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
  static void set_has_unmatched_threshold(HasBits* has_bits) {
    (*has_bits)[0] |= 32u;
  }
  static void set_has_ignore_thresholds(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_negatives_lower_than_unmatched(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_force_match_for_each_row(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_use_matmul_gather(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
};

ArgMaxMatcher::ArgMaxMatcher()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:object_detection.protos.ArgMaxMatcher)
}
ArgMaxMatcher::ArgMaxMatcher(const ArgMaxMatcher& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&ignore_thresholds_, &from.ignore_thresholds_,
    static_cast<size_t>(reinterpret_cast<char*>(&unmatched_threshold_) -
    reinterpret_cast<char*>(&ignore_thresholds_)) + sizeof(unmatched_threshold_));
  // @@protoc_insertion_point(copy_constructor:object_detection.protos.ArgMaxMatcher)
}

void ArgMaxMatcher::SharedCtor() {
  ::memset(&ignore_thresholds_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&use_matmul_gather_) -
      reinterpret_cast<char*>(&ignore_thresholds_)) + sizeof(use_matmul_gather_));
  negatives_lower_than_unmatched_ = true;
  matched_threshold_ = 0.5f;
  unmatched_threshold_ = 0.5f;
}

ArgMaxMatcher::~ArgMaxMatcher() {
  // @@protoc_insertion_point(destructor:object_detection.protos.ArgMaxMatcher)
  SharedDtor();
}

void ArgMaxMatcher::SharedDtor() {
}

void ArgMaxMatcher::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ArgMaxMatcher& ArgMaxMatcher::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_ArgMaxMatcher_object_5fdetection_2fprotos_2fargmax_5fmatcher_2eproto.base);
  return *internal_default_instance();
}


void ArgMaxMatcher::Clear() {
// @@protoc_insertion_point(message_clear_start:object_detection.protos.ArgMaxMatcher)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&ignore_thresholds_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&use_matmul_gather_) -
      reinterpret_cast<char*>(&ignore_thresholds_)) + sizeof(use_matmul_gather_));
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000038u) {
    negatives_lower_than_unmatched_ = true;
    matched_threshold_ = 0.5f;
    unmatched_threshold_ = 0.5f;
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* ArgMaxMatcher::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // optional float matched_threshold = 1 [default = 0.5];
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 13)) {
          _Internal::set_has_matched_threshold(&has_bits);
          matched_threshold_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      // optional float unmatched_threshold = 2 [default = 0.5];
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 21)) {
          _Internal::set_has_unmatched_threshold(&has_bits);
          unmatched_threshold_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      // optional bool ignore_thresholds = 3 [default = false];
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          _Internal::set_has_ignore_thresholds(&has_bits);
          ignore_thresholds_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional bool negatives_lower_than_unmatched = 4 [default = true];
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 32)) {
          _Internal::set_has_negatives_lower_than_unmatched(&has_bits);
          negatives_lower_than_unmatched_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional bool force_match_for_each_row = 5 [default = false];
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 40)) {
          _Internal::set_has_force_match_for_each_row(&has_bits);
          force_match_for_each_row_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional bool use_matmul_gather = 6 [default = false];
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 48)) {
          _Internal::set_has_use_matmul_gather(&has_bits);
          use_matmul_gather_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
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
bool ArgMaxMatcher::MergePartialFromCodedStream(
    ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::PROTOBUF_NAMESPACE_ID::uint32 tag;
  // @@protoc_insertion_point(parse_start:object_detection.protos.ArgMaxMatcher)
  for (;;) {
    ::std::pair<::PROTOBUF_NAMESPACE_ID::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional float matched_threshold = 1 [default = 0.5];
      case 1: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (13 & 0xFF)) {
          _Internal::set_has_matched_threshold(&_has_bits_);
          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   float, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &matched_threshold_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional float unmatched_threshold = 2 [default = 0.5];
      case 2: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (21 & 0xFF)) {
          _Internal::set_has_unmatched_threshold(&_has_bits_);
          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   float, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &unmatched_threshold_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional bool ignore_thresholds = 3 [default = false];
      case 3: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (24 & 0xFF)) {
          _Internal::set_has_ignore_thresholds(&_has_bits_);
          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   bool, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_BOOL>(
                 input, &ignore_thresholds_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional bool negatives_lower_than_unmatched = 4 [default = true];
      case 4: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (32 & 0xFF)) {
          _Internal::set_has_negatives_lower_than_unmatched(&_has_bits_);
          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   bool, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_BOOL>(
                 input, &negatives_lower_than_unmatched_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional bool force_match_for_each_row = 5 [default = false];
      case 5: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (40 & 0xFF)) {
          _Internal::set_has_force_match_for_each_row(&_has_bits_);
          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   bool, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_BOOL>(
                 input, &force_match_for_each_row_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional bool use_matmul_gather = 6 [default = false];
      case 6: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (48 & 0xFF)) {
          _Internal::set_has_use_matmul_gather(&_has_bits_);
          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   bool, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_BOOL>(
                 input, &use_matmul_gather_)));
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
  // @@protoc_insertion_point(parse_success:object_detection.protos.ArgMaxMatcher)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:object_detection.protos.ArgMaxMatcher)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void ArgMaxMatcher::SerializeWithCachedSizes(
    ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:object_detection.protos.ArgMaxMatcher)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional float matched_threshold = 1 [default = 0.5];
  if (cached_has_bits & 0x00000010u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloat(1, this->matched_threshold(), output);
  }

  // optional float unmatched_threshold = 2 [default = 0.5];
  if (cached_has_bits & 0x00000020u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloat(2, this->unmatched_threshold(), output);
  }

  // optional bool ignore_thresholds = 3 [default = false];
  if (cached_has_bits & 0x00000001u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBool(3, this->ignore_thresholds(), output);
  }

  // optional bool negatives_lower_than_unmatched = 4 [default = true];
  if (cached_has_bits & 0x00000008u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBool(4, this->negatives_lower_than_unmatched(), output);
  }

  // optional bool force_match_for_each_row = 5 [default = false];
  if (cached_has_bits & 0x00000002u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBool(5, this->force_match_for_each_row(), output);
  }

  // optional bool use_matmul_gather = 6 [default = false];
  if (cached_has_bits & 0x00000004u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBool(6, this->use_matmul_gather(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:object_detection.protos.ArgMaxMatcher)
}

::PROTOBUF_NAMESPACE_ID::uint8* ArgMaxMatcher::InternalSerializeWithCachedSizesToArray(
    ::PROTOBUF_NAMESPACE_ID::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:object_detection.protos.ArgMaxMatcher)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional float matched_threshold = 1 [default = 0.5];
  if (cached_has_bits & 0x00000010u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(1, this->matched_threshold(), target);
  }

  // optional float unmatched_threshold = 2 [default = 0.5];
  if (cached_has_bits & 0x00000020u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(2, this->unmatched_threshold(), target);
  }

  // optional bool ignore_thresholds = 3 [default = false];
  if (cached_has_bits & 0x00000001u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(3, this->ignore_thresholds(), target);
  }

  // optional bool negatives_lower_than_unmatched = 4 [default = true];
  if (cached_has_bits & 0x00000008u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(4, this->negatives_lower_than_unmatched(), target);
  }

  // optional bool force_match_for_each_row = 5 [default = false];
  if (cached_has_bits & 0x00000002u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(5, this->force_match_for_each_row(), target);
  }

  // optional bool use_matmul_gather = 6 [default = false];
  if (cached_has_bits & 0x00000004u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(6, this->use_matmul_gather(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:object_detection.protos.ArgMaxMatcher)
  return target;
}

size_t ArgMaxMatcher::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:object_detection.protos.ArgMaxMatcher)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000003fu) {
    // optional bool ignore_thresholds = 3 [default = false];
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 + 1;
    }

    // optional bool force_match_for_each_row = 5 [default = false];
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 + 1;
    }

    // optional bool use_matmul_gather = 6 [default = false];
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 + 1;
    }

    // optional bool negatives_lower_than_unmatched = 4 [default = true];
    if (cached_has_bits & 0x00000008u) {
      total_size += 1 + 1;
    }

    // optional float matched_threshold = 1 [default = 0.5];
    if (cached_has_bits & 0x00000010u) {
      total_size += 1 + 4;
    }

    // optional float unmatched_threshold = 2 [default = 0.5];
    if (cached_has_bits & 0x00000020u) {
      total_size += 1 + 4;
    }

  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ArgMaxMatcher::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:object_detection.protos.ArgMaxMatcher)
  GOOGLE_DCHECK_NE(&from, this);
  const ArgMaxMatcher* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<ArgMaxMatcher>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:object_detection.protos.ArgMaxMatcher)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:object_detection.protos.ArgMaxMatcher)
    MergeFrom(*source);
  }
}

void ArgMaxMatcher::MergeFrom(const ArgMaxMatcher& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:object_detection.protos.ArgMaxMatcher)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x0000003fu) {
    if (cached_has_bits & 0x00000001u) {
      ignore_thresholds_ = from.ignore_thresholds_;
    }
    if (cached_has_bits & 0x00000002u) {
      force_match_for_each_row_ = from.force_match_for_each_row_;
    }
    if (cached_has_bits & 0x00000004u) {
      use_matmul_gather_ = from.use_matmul_gather_;
    }
    if (cached_has_bits & 0x00000008u) {
      negatives_lower_than_unmatched_ = from.negatives_lower_than_unmatched_;
    }
    if (cached_has_bits & 0x00000010u) {
      matched_threshold_ = from.matched_threshold_;
    }
    if (cached_has_bits & 0x00000020u) {
      unmatched_threshold_ = from.unmatched_threshold_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void ArgMaxMatcher::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:object_detection.protos.ArgMaxMatcher)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ArgMaxMatcher::CopyFrom(const ArgMaxMatcher& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:object_detection.protos.ArgMaxMatcher)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ArgMaxMatcher::IsInitialized() const {
  return true;
}

void ArgMaxMatcher::InternalSwap(ArgMaxMatcher* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  swap(ignore_thresholds_, other->ignore_thresholds_);
  swap(force_match_for_each_row_, other->force_match_for_each_row_);
  swap(use_matmul_gather_, other->use_matmul_gather_);
  swap(negatives_lower_than_unmatched_, other->negatives_lower_than_unmatched_);
  swap(matched_threshold_, other->matched_threshold_);
  swap(unmatched_threshold_, other->unmatched_threshold_);
}

::PROTOBUF_NAMESPACE_ID::Metadata ArgMaxMatcher::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace protos
}  // namespace object_detection
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::object_detection::protos::ArgMaxMatcher* Arena::CreateMaybeMessage< ::object_detection::protos::ArgMaxMatcher >(Arena* arena) {
  return Arena::CreateInternal< ::object_detection::protos::ArgMaxMatcher >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
