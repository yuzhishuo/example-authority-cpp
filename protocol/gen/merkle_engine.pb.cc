// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: merkle_engine.proto

#include "merkle_engine.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG
namespace merkle_engine {
constexpr LeafMeta::LeafMeta(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : hash_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , index_(int64_t{0})
  , id_(int64_t{0}){}
struct LeafMetaDefaultTypeInternal {
  constexpr LeafMetaDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~LeafMetaDefaultTypeInternal() {}
  union {
    LeafMeta _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT LeafMetaDefaultTypeInternal _LeafMeta_default_instance_;
}  // namespace merkle_engine
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_merkle_5fengine_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_merkle_5fengine_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_merkle_5fengine_2eproto = nullptr;

const uint32_t TableStruct_merkle_5fengine_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::merkle_engine::LeafMeta, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::merkle_engine::LeafMeta, index_),
  PROTOBUF_FIELD_OFFSET(::merkle_engine::LeafMeta, id_),
  PROTOBUF_FIELD_OFFSET(::merkle_engine::LeafMeta, hash_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::merkle_engine::LeafMeta)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::merkle_engine::_LeafMeta_default_instance_),
};

const char descriptor_table_protodef_merkle_5fengine_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\023merkle_engine.proto\022\rmerkle_engine\"3\n\010"
  "LeafMeta\022\r\n\005index\030\001 \001(\003\022\n\n\002id\030\002 \001(\003\022\014\n\004h"
  "ash\030\003 \001(\014b\006proto3"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_merkle_5fengine_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_merkle_5fengine_2eproto = {
  false, false, 97, descriptor_table_protodef_merkle_5fengine_2eproto, "merkle_engine.proto", 
  &descriptor_table_merkle_5fengine_2eproto_once, nullptr, 0, 1,
  schemas, file_default_instances, TableStruct_merkle_5fengine_2eproto::offsets,
  file_level_metadata_merkle_5fengine_2eproto, file_level_enum_descriptors_merkle_5fengine_2eproto, file_level_service_descriptors_merkle_5fengine_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_merkle_5fengine_2eproto_getter() {
  return &descriptor_table_merkle_5fengine_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_merkle_5fengine_2eproto(&descriptor_table_merkle_5fengine_2eproto);
namespace merkle_engine {

// ===================================================================

class LeafMeta::_Internal {
 public:
};

LeafMeta::LeafMeta(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:merkle_engine.LeafMeta)
}
LeafMeta::LeafMeta(const LeafMeta& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  hash_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    hash_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_hash().empty()) {
    hash_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_hash(), 
      GetArenaForAllocation());
  }
  ::memcpy(&index_, &from.index_,
    static_cast<size_t>(reinterpret_cast<char*>(&id_) -
    reinterpret_cast<char*>(&index_)) + sizeof(id_));
  // @@protoc_insertion_point(copy_constructor:merkle_engine.LeafMeta)
}

inline void LeafMeta::SharedCtor() {
hash_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  hash_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&index_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&id_) -
    reinterpret_cast<char*>(&index_)) + sizeof(id_));
}

LeafMeta::~LeafMeta() {
  // @@protoc_insertion_point(destructor:merkle_engine.LeafMeta)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void LeafMeta::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  hash_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void LeafMeta::ArenaDtor(void* object) {
  LeafMeta* _this = reinterpret_cast< LeafMeta* >(object);
  (void)_this;
}
void LeafMeta::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void LeafMeta::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void LeafMeta::Clear() {
// @@protoc_insertion_point(message_clear_start:merkle_engine.LeafMeta)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  hash_.ClearToEmpty();
  ::memset(&index_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&id_) -
      reinterpret_cast<char*>(&index_)) + sizeof(id_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* LeafMeta::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // int64 index = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          index_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int64 id = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // bytes hash = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          auto str = _internal_mutable_hash();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* LeafMeta::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:merkle_engine.LeafMeta)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // int64 index = 1;
  if (this->_internal_index() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt64ToArray(1, this->_internal_index(), target);
  }

  // int64 id = 2;
  if (this->_internal_id() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt64ToArray(2, this->_internal_id(), target);
  }

  // bytes hash = 3;
  if (!this->_internal_hash().empty()) {
    target = stream->WriteBytesMaybeAliased(
        3, this->_internal_hash(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:merkle_engine.LeafMeta)
  return target;
}

size_t LeafMeta::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:merkle_engine.LeafMeta)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bytes hash = 3;
  if (!this->_internal_hash().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_hash());
  }

  // int64 index = 1;
  if (this->_internal_index() != 0) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int64SizePlusOne(this->_internal_index());
  }

  // int64 id = 2;
  if (this->_internal_id() != 0) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int64SizePlusOne(this->_internal_id());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData LeafMeta::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    LeafMeta::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*LeafMeta::GetClassData() const { return &_class_data_; }

void LeafMeta::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<LeafMeta *>(to)->MergeFrom(
      static_cast<const LeafMeta &>(from));
}


void LeafMeta::MergeFrom(const LeafMeta& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:merkle_engine.LeafMeta)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_hash().empty()) {
    _internal_set_hash(from._internal_hash());
  }
  if (from._internal_index() != 0) {
    _internal_set_index(from._internal_index());
  }
  if (from._internal_id() != 0) {
    _internal_set_id(from._internal_id());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void LeafMeta::CopyFrom(const LeafMeta& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:merkle_engine.LeafMeta)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LeafMeta::IsInitialized() const {
  return true;
}

void LeafMeta::InternalSwap(LeafMeta* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &hash_, lhs_arena,
      &other->hash_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(LeafMeta, id_)
      + sizeof(LeafMeta::id_)
      - PROTOBUF_FIELD_OFFSET(LeafMeta, index_)>(
          reinterpret_cast<char*>(&index_),
          reinterpret_cast<char*>(&other->index_));
}

::PROTOBUF_NAMESPACE_ID::Metadata LeafMeta::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_merkle_5fengine_2eproto_getter, &descriptor_table_merkle_5fengine_2eproto_once,
      file_level_metadata_merkle_5fengine_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace merkle_engine
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::merkle_engine::LeafMeta* Arena::CreateMaybeMessage< ::merkle_engine::LeafMeta >(Arena* arena) {
  return Arena::CreateMessageInternal< ::merkle_engine::LeafMeta >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
