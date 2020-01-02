// mojo/public/mojom/base/ref_counted_memory.mojom.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_MOJOM_BASE_REF_COUNTED_MEMORY_MOJOM_H_
#define MOJO_PUBLIC_MOJOM_BASE_REF_COUNTED_MEMORY_MOJOM_H_

#include <stdint.h>

#include <limits>
#include <type_traits>
#include <utility>

#include "base/callback.h"
#include "base/macros.h"
#include "base/optional.h"

#include "mojo/public/cpp/bindings/mojo_buildflags.h"
#if BUILDFLAG(MOJO_TRACE_ENABLED)
#include "base/trace_event/trace_event.h"
#endif
#include "mojo/public/cpp/bindings/clone_traits.h"
#include "mojo/public/cpp/bindings/equals_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "mojo/public/cpp/bindings/struct_traits.h"
#include "mojo/public/cpp/bindings/union_traits.h"
#include "mojo/public/mojom/base/ref_counted_memory.mojom-shared.h"
#include "mojo/public/mojom/base/ref_counted_memory.mojom-forward.h"
#include "mojo/public/mojom/base/big_buffer.mojom.h"
#include <string>
#include <vector>

#include "mojo/public/cpp/bindings/associated_interface_ptr.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr_info.h"
#include "mojo/public/cpp/bindings/associated_interface_request.h"
#include "mojo/public/cpp/bindings/interface_ptr.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"
#include "mojo/public/cpp/bindings/thread_safe_interface_ptr.h"


#include "base/component_export.h"




namespace mojo_base {
namespace mojom {








class COMPONENT_EXPORT(MOJO_BASE_MOJOM) RefCountedMemory {
 public:
  template <typename T>
  using EnableIfSame = std::enable_if_t<std::is_same<RefCountedMemory, T>::value>;
  using DataView = RefCountedMemoryDataView;
  using Data_ = internal::RefCountedMemory_Data;

  template <typename... Args>
  static RefCountedMemoryPtr New(Args&&... args) {
    return RefCountedMemoryPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static RefCountedMemoryPtr From(const U& u) {
    return mojo::TypeConverter<RefCountedMemoryPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, RefCountedMemory>::Convert(*this);
  }


  RefCountedMemory();

  explicit RefCountedMemory(
      ::mojo_base::BigBuffer data);

  ~RefCountedMemory();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = RefCountedMemoryPtr>
  RefCountedMemoryPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T, RefCountedMemory::EnableIfSame<T>* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        RefCountedMemory::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        RefCountedMemory::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::RefCountedMemory_UnserializedMessageContext<
            UserType, RefCountedMemory::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<RefCountedMemory::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return RefCountedMemory::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::RefCountedMemory_UnserializedMessageContext<
            UserType, RefCountedMemory::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<RefCountedMemory::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  ::mojo_base::BigBuffer data;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(RefCountedMemory);
};

// The comparison operators are templates, so they are only instantiated if they
// are used. Thus, the bindings generator does not need to know whether
// comparison operators are available for members.
template <typename T, RefCountedMemory::EnableIfSame<T>* = nullptr>
bool operator<(const T& lhs, const T& rhs);

template <typename T, RefCountedMemory::EnableIfSame<T>* = nullptr>
bool operator<=(const T& lhs, const T& rhs) {
  return !(rhs < lhs);
}

template <typename T, RefCountedMemory::EnableIfSame<T>* = nullptr>
bool operator>(const T& lhs, const T& rhs) {
  return rhs < lhs;
}

template <typename T, RefCountedMemory::EnableIfSame<T>* = nullptr>
bool operator>=(const T& lhs, const T& rhs) {
  return !(lhs < rhs);
}

template <typename StructPtrType>
RefCountedMemoryPtr RefCountedMemory::Clone() const {
  return New(
      mojo::Clone(data)
  );
}

template <typename T, RefCountedMemory::EnableIfSame<T>*>
bool RefCountedMemory::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->data, other_struct.data))
    return false;
  return true;
}

template <typename T, RefCountedMemory::EnableIfSame<T>*>
bool operator<(const T& lhs, const T& rhs) {
  if (lhs.data < rhs.data)
    return true;
  if (rhs.data < lhs.data)
    return false;
  return false;
}


}  // namespace mojom
}  // namespace mojo_base

namespace mojo {


template <>
struct COMPONENT_EXPORT(MOJO_BASE_MOJOM) StructTraits<::mojo_base::mojom::RefCountedMemory::DataView,
                                         ::mojo_base::mojom::RefCountedMemoryPtr> {
  static bool IsNull(const ::mojo_base::mojom::RefCountedMemoryPtr& input) { return !input; }
  static void SetToNull(::mojo_base::mojom::RefCountedMemoryPtr* output) { output->reset(); }

  static  decltype(::mojo_base::mojom::RefCountedMemory::data)& data(
       ::mojo_base::mojom::RefCountedMemoryPtr& input) {
    return input->data;
  }

  static bool Read(::mojo_base::mojom::RefCountedMemory::DataView input, ::mojo_base::mojom::RefCountedMemoryPtr* output);
};

}  // namespace mojo

#endif  // MOJO_PUBLIC_MOJOM_BASE_REF_COUNTED_MEMORY_MOJOM_H_