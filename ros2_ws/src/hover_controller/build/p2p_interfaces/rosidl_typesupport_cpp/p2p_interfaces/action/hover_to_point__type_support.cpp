// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from p2p_interfaces:action/HoverToPoint.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "p2p_interfaces/action/detail/hover_to_point__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace p2p_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _HoverToPoint_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _HoverToPoint_Goal_type_support_ids_t;

static const _HoverToPoint_Goal_type_support_ids_t _HoverToPoint_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _HoverToPoint_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _HoverToPoint_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _HoverToPoint_Goal_type_support_symbol_names_t _HoverToPoint_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, p2p_interfaces, action, HoverToPoint_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, p2p_interfaces, action, HoverToPoint_Goal)),
  }
};

typedef struct _HoverToPoint_Goal_type_support_data_t
{
  void * data[2];
} _HoverToPoint_Goal_type_support_data_t;

static _HoverToPoint_Goal_type_support_data_t _HoverToPoint_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _HoverToPoint_Goal_message_typesupport_map = {
  2,
  "p2p_interfaces",
  &_HoverToPoint_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_HoverToPoint_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_HoverToPoint_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t HoverToPoint_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_HoverToPoint_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace p2p_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<p2p_interfaces::action::HoverToPoint_Goal>()
{
  return &::p2p_interfaces::action::rosidl_typesupport_cpp::HoverToPoint_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, p2p_interfaces, action, HoverToPoint_Goal)() {
  return get_message_type_support_handle<p2p_interfaces::action::HoverToPoint_Goal>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "p2p_interfaces/action/detail/hover_to_point__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace p2p_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _HoverToPoint_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _HoverToPoint_Result_type_support_ids_t;

static const _HoverToPoint_Result_type_support_ids_t _HoverToPoint_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _HoverToPoint_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _HoverToPoint_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _HoverToPoint_Result_type_support_symbol_names_t _HoverToPoint_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, p2p_interfaces, action, HoverToPoint_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, p2p_interfaces, action, HoverToPoint_Result)),
  }
};

typedef struct _HoverToPoint_Result_type_support_data_t
{
  void * data[2];
} _HoverToPoint_Result_type_support_data_t;

static _HoverToPoint_Result_type_support_data_t _HoverToPoint_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _HoverToPoint_Result_message_typesupport_map = {
  2,
  "p2p_interfaces",
  &_HoverToPoint_Result_message_typesupport_ids.typesupport_identifier[0],
  &_HoverToPoint_Result_message_typesupport_symbol_names.symbol_name[0],
  &_HoverToPoint_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t HoverToPoint_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_HoverToPoint_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace p2p_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<p2p_interfaces::action::HoverToPoint_Result>()
{
  return &::p2p_interfaces::action::rosidl_typesupport_cpp::HoverToPoint_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, p2p_interfaces, action, HoverToPoint_Result)() {
  return get_message_type_support_handle<p2p_interfaces::action::HoverToPoint_Result>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "p2p_interfaces/action/detail/hover_to_point__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace p2p_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _HoverToPoint_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _HoverToPoint_Feedback_type_support_ids_t;

static const _HoverToPoint_Feedback_type_support_ids_t _HoverToPoint_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _HoverToPoint_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _HoverToPoint_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _HoverToPoint_Feedback_type_support_symbol_names_t _HoverToPoint_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, p2p_interfaces, action, HoverToPoint_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, p2p_interfaces, action, HoverToPoint_Feedback)),
  }
};

typedef struct _HoverToPoint_Feedback_type_support_data_t
{
  void * data[2];
} _HoverToPoint_Feedback_type_support_data_t;

static _HoverToPoint_Feedback_type_support_data_t _HoverToPoint_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _HoverToPoint_Feedback_message_typesupport_map = {
  2,
  "p2p_interfaces",
  &_HoverToPoint_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_HoverToPoint_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_HoverToPoint_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t HoverToPoint_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_HoverToPoint_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace p2p_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<p2p_interfaces::action::HoverToPoint_Feedback>()
{
  return &::p2p_interfaces::action::rosidl_typesupport_cpp::HoverToPoint_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, p2p_interfaces, action, HoverToPoint_Feedback)() {
  return get_message_type_support_handle<p2p_interfaces::action::HoverToPoint_Feedback>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "p2p_interfaces/action/detail/hover_to_point__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace p2p_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _HoverToPoint_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _HoverToPoint_SendGoal_Request_type_support_ids_t;

static const _HoverToPoint_SendGoal_Request_type_support_ids_t _HoverToPoint_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _HoverToPoint_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _HoverToPoint_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _HoverToPoint_SendGoal_Request_type_support_symbol_names_t _HoverToPoint_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, p2p_interfaces, action, HoverToPoint_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, p2p_interfaces, action, HoverToPoint_SendGoal_Request)),
  }
};

typedef struct _HoverToPoint_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _HoverToPoint_SendGoal_Request_type_support_data_t;

static _HoverToPoint_SendGoal_Request_type_support_data_t _HoverToPoint_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _HoverToPoint_SendGoal_Request_message_typesupport_map = {
  2,
  "p2p_interfaces",
  &_HoverToPoint_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_HoverToPoint_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_HoverToPoint_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t HoverToPoint_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_HoverToPoint_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace p2p_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<p2p_interfaces::action::HoverToPoint_SendGoal_Request>()
{
  return &::p2p_interfaces::action::rosidl_typesupport_cpp::HoverToPoint_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, p2p_interfaces, action, HoverToPoint_SendGoal_Request)() {
  return get_message_type_support_handle<p2p_interfaces::action::HoverToPoint_SendGoal_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "p2p_interfaces/action/detail/hover_to_point__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace p2p_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _HoverToPoint_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _HoverToPoint_SendGoal_Response_type_support_ids_t;

static const _HoverToPoint_SendGoal_Response_type_support_ids_t _HoverToPoint_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _HoverToPoint_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _HoverToPoint_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _HoverToPoint_SendGoal_Response_type_support_symbol_names_t _HoverToPoint_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, p2p_interfaces, action, HoverToPoint_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, p2p_interfaces, action, HoverToPoint_SendGoal_Response)),
  }
};

typedef struct _HoverToPoint_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _HoverToPoint_SendGoal_Response_type_support_data_t;

static _HoverToPoint_SendGoal_Response_type_support_data_t _HoverToPoint_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _HoverToPoint_SendGoal_Response_message_typesupport_map = {
  2,
  "p2p_interfaces",
  &_HoverToPoint_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_HoverToPoint_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_HoverToPoint_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t HoverToPoint_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_HoverToPoint_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace p2p_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<p2p_interfaces::action::HoverToPoint_SendGoal_Response>()
{
  return &::p2p_interfaces::action::rosidl_typesupport_cpp::HoverToPoint_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, p2p_interfaces, action, HoverToPoint_SendGoal_Response)() {
  return get_message_type_support_handle<p2p_interfaces::action::HoverToPoint_SendGoal_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "p2p_interfaces/action/detail/hover_to_point__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace p2p_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _HoverToPoint_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _HoverToPoint_SendGoal_type_support_ids_t;

static const _HoverToPoint_SendGoal_type_support_ids_t _HoverToPoint_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _HoverToPoint_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _HoverToPoint_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _HoverToPoint_SendGoal_type_support_symbol_names_t _HoverToPoint_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, p2p_interfaces, action, HoverToPoint_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, p2p_interfaces, action, HoverToPoint_SendGoal)),
  }
};

typedef struct _HoverToPoint_SendGoal_type_support_data_t
{
  void * data[2];
} _HoverToPoint_SendGoal_type_support_data_t;

static _HoverToPoint_SendGoal_type_support_data_t _HoverToPoint_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _HoverToPoint_SendGoal_service_typesupport_map = {
  2,
  "p2p_interfaces",
  &_HoverToPoint_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_HoverToPoint_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_HoverToPoint_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t HoverToPoint_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_HoverToPoint_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace p2p_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<p2p_interfaces::action::HoverToPoint_SendGoal>()
{
  return &::p2p_interfaces::action::rosidl_typesupport_cpp::HoverToPoint_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, p2p_interfaces, action, HoverToPoint_SendGoal)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<p2p_interfaces::action::HoverToPoint_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "p2p_interfaces/action/detail/hover_to_point__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace p2p_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _HoverToPoint_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _HoverToPoint_GetResult_Request_type_support_ids_t;

static const _HoverToPoint_GetResult_Request_type_support_ids_t _HoverToPoint_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _HoverToPoint_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _HoverToPoint_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _HoverToPoint_GetResult_Request_type_support_symbol_names_t _HoverToPoint_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, p2p_interfaces, action, HoverToPoint_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, p2p_interfaces, action, HoverToPoint_GetResult_Request)),
  }
};

typedef struct _HoverToPoint_GetResult_Request_type_support_data_t
{
  void * data[2];
} _HoverToPoint_GetResult_Request_type_support_data_t;

static _HoverToPoint_GetResult_Request_type_support_data_t _HoverToPoint_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _HoverToPoint_GetResult_Request_message_typesupport_map = {
  2,
  "p2p_interfaces",
  &_HoverToPoint_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_HoverToPoint_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_HoverToPoint_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t HoverToPoint_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_HoverToPoint_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace p2p_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<p2p_interfaces::action::HoverToPoint_GetResult_Request>()
{
  return &::p2p_interfaces::action::rosidl_typesupport_cpp::HoverToPoint_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, p2p_interfaces, action, HoverToPoint_GetResult_Request)() {
  return get_message_type_support_handle<p2p_interfaces::action::HoverToPoint_GetResult_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "p2p_interfaces/action/detail/hover_to_point__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace p2p_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _HoverToPoint_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _HoverToPoint_GetResult_Response_type_support_ids_t;

static const _HoverToPoint_GetResult_Response_type_support_ids_t _HoverToPoint_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _HoverToPoint_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _HoverToPoint_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _HoverToPoint_GetResult_Response_type_support_symbol_names_t _HoverToPoint_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, p2p_interfaces, action, HoverToPoint_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, p2p_interfaces, action, HoverToPoint_GetResult_Response)),
  }
};

typedef struct _HoverToPoint_GetResult_Response_type_support_data_t
{
  void * data[2];
} _HoverToPoint_GetResult_Response_type_support_data_t;

static _HoverToPoint_GetResult_Response_type_support_data_t _HoverToPoint_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _HoverToPoint_GetResult_Response_message_typesupport_map = {
  2,
  "p2p_interfaces",
  &_HoverToPoint_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_HoverToPoint_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_HoverToPoint_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t HoverToPoint_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_HoverToPoint_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace p2p_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<p2p_interfaces::action::HoverToPoint_GetResult_Response>()
{
  return &::p2p_interfaces::action::rosidl_typesupport_cpp::HoverToPoint_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, p2p_interfaces, action, HoverToPoint_GetResult_Response)() {
  return get_message_type_support_handle<p2p_interfaces::action::HoverToPoint_GetResult_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "p2p_interfaces/action/detail/hover_to_point__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace p2p_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _HoverToPoint_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _HoverToPoint_GetResult_type_support_ids_t;

static const _HoverToPoint_GetResult_type_support_ids_t _HoverToPoint_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _HoverToPoint_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _HoverToPoint_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _HoverToPoint_GetResult_type_support_symbol_names_t _HoverToPoint_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, p2p_interfaces, action, HoverToPoint_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, p2p_interfaces, action, HoverToPoint_GetResult)),
  }
};

typedef struct _HoverToPoint_GetResult_type_support_data_t
{
  void * data[2];
} _HoverToPoint_GetResult_type_support_data_t;

static _HoverToPoint_GetResult_type_support_data_t _HoverToPoint_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _HoverToPoint_GetResult_service_typesupport_map = {
  2,
  "p2p_interfaces",
  &_HoverToPoint_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_HoverToPoint_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_HoverToPoint_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t HoverToPoint_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_HoverToPoint_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace p2p_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<p2p_interfaces::action::HoverToPoint_GetResult>()
{
  return &::p2p_interfaces::action::rosidl_typesupport_cpp::HoverToPoint_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, p2p_interfaces, action, HoverToPoint_GetResult)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<p2p_interfaces::action::HoverToPoint_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "p2p_interfaces/action/detail/hover_to_point__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace p2p_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _HoverToPoint_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _HoverToPoint_FeedbackMessage_type_support_ids_t;

static const _HoverToPoint_FeedbackMessage_type_support_ids_t _HoverToPoint_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _HoverToPoint_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _HoverToPoint_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _HoverToPoint_FeedbackMessage_type_support_symbol_names_t _HoverToPoint_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, p2p_interfaces, action, HoverToPoint_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, p2p_interfaces, action, HoverToPoint_FeedbackMessage)),
  }
};

typedef struct _HoverToPoint_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _HoverToPoint_FeedbackMessage_type_support_data_t;

static _HoverToPoint_FeedbackMessage_type_support_data_t _HoverToPoint_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _HoverToPoint_FeedbackMessage_message_typesupport_map = {
  2,
  "p2p_interfaces",
  &_HoverToPoint_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_HoverToPoint_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_HoverToPoint_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t HoverToPoint_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_HoverToPoint_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace p2p_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<p2p_interfaces::action::HoverToPoint_FeedbackMessage>()
{
  return &::p2p_interfaces::action::rosidl_typesupport_cpp::HoverToPoint_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, p2p_interfaces, action, HoverToPoint_FeedbackMessage)() {
  return get_message_type_support_handle<p2p_interfaces::action::HoverToPoint_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "p2p_interfaces/action/detail/hover_to_point__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace p2p_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t HoverToPoint_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace p2p_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<p2p_interfaces::action::HoverToPoint>()
{
  using ::p2p_interfaces::action::rosidl_typesupport_cpp::HoverToPoint_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  HoverToPoint_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::p2p_interfaces::action::HoverToPoint::Impl::SendGoalService>();
  HoverToPoint_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::p2p_interfaces::action::HoverToPoint::Impl::GetResultService>();
  HoverToPoint_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::p2p_interfaces::action::HoverToPoint::Impl::CancelGoalService>();
  HoverToPoint_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::p2p_interfaces::action::HoverToPoint::Impl::FeedbackMessage>();
  HoverToPoint_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::p2p_interfaces::action::HoverToPoint::Impl::GoalStatusMessage>();
  return &HoverToPoint_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(rosidl_typesupport_cpp, p2p_interfaces, action, HoverToPoint)() {
  return ::rosidl_typesupport_cpp::get_action_type_support_handle<p2p_interfaces::action::HoverToPoint>();
}

#ifdef __cplusplus
}
#endif
