// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_package:action/FleetManagement.idl
// generated code does not contain a copyright notice

#ifndef MY_PACKAGE__ACTION__DETAIL__FLEET_MANAGEMENT__TRAITS_HPP_
#define MY_PACKAGE__ACTION__DETAIL__FLEET_MANAGEMENT__TRAITS_HPP_

#include "my_package/action/detail/fleet_management__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<my_package::action::FleetManagement_Goal>()
{
  return "my_package::action::FleetManagement_Goal";
}

template<>
inline const char * name<my_package::action::FleetManagement_Goal>()
{
  return "my_package/action/FleetManagement_Goal";
}

template<>
struct has_fixed_size<my_package::action::FleetManagement_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<my_package::action::FleetManagement_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<my_package::action::FleetManagement_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<my_package::action::FleetManagement_Result>()
{
  return "my_package::action::FleetManagement_Result";
}

template<>
inline const char * name<my_package::action::FleetManagement_Result>()
{
  return "my_package/action/FleetManagement_Result";
}

template<>
struct has_fixed_size<my_package::action::FleetManagement_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<my_package::action::FleetManagement_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<my_package::action::FleetManagement_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<my_package::action::FleetManagement_Feedback>()
{
  return "my_package::action::FleetManagement_Feedback";
}

template<>
inline const char * name<my_package::action::FleetManagement_Feedback>()
{
  return "my_package/action/FleetManagement_Feedback";
}

template<>
struct has_fixed_size<my_package::action::FleetManagement_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<my_package::action::FleetManagement_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<my_package::action::FleetManagement_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "my_package/action/detail/fleet_management__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<my_package::action::FleetManagement_SendGoal_Request>()
{
  return "my_package::action::FleetManagement_SendGoal_Request";
}

template<>
inline const char * name<my_package::action::FleetManagement_SendGoal_Request>()
{
  return "my_package/action/FleetManagement_SendGoal_Request";
}

template<>
struct has_fixed_size<my_package::action::FleetManagement_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<my_package::action::FleetManagement_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<my_package::action::FleetManagement_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<my_package::action::FleetManagement_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<my_package::action::FleetManagement_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<my_package::action::FleetManagement_SendGoal_Response>()
{
  return "my_package::action::FleetManagement_SendGoal_Response";
}

template<>
inline const char * name<my_package::action::FleetManagement_SendGoal_Response>()
{
  return "my_package/action/FleetManagement_SendGoal_Response";
}

template<>
struct has_fixed_size<my_package::action::FleetManagement_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<my_package::action::FleetManagement_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<my_package::action::FleetManagement_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<my_package::action::FleetManagement_SendGoal>()
{
  return "my_package::action::FleetManagement_SendGoal";
}

template<>
inline const char * name<my_package::action::FleetManagement_SendGoal>()
{
  return "my_package/action/FleetManagement_SendGoal";
}

template<>
struct has_fixed_size<my_package::action::FleetManagement_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<my_package::action::FleetManagement_SendGoal_Request>::value &&
    has_fixed_size<my_package::action::FleetManagement_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<my_package::action::FleetManagement_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<my_package::action::FleetManagement_SendGoal_Request>::value &&
    has_bounded_size<my_package::action::FleetManagement_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<my_package::action::FleetManagement_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<my_package::action::FleetManagement_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<my_package::action::FleetManagement_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<my_package::action::FleetManagement_GetResult_Request>()
{
  return "my_package::action::FleetManagement_GetResult_Request";
}

template<>
inline const char * name<my_package::action::FleetManagement_GetResult_Request>()
{
  return "my_package/action/FleetManagement_GetResult_Request";
}

template<>
struct has_fixed_size<my_package::action::FleetManagement_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<my_package::action::FleetManagement_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<my_package::action::FleetManagement_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "my_package/action/detail/fleet_management__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<my_package::action::FleetManagement_GetResult_Response>()
{
  return "my_package::action::FleetManagement_GetResult_Response";
}

template<>
inline const char * name<my_package::action::FleetManagement_GetResult_Response>()
{
  return "my_package/action/FleetManagement_GetResult_Response";
}

template<>
struct has_fixed_size<my_package::action::FleetManagement_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<my_package::action::FleetManagement_Result>::value> {};

template<>
struct has_bounded_size<my_package::action::FleetManagement_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<my_package::action::FleetManagement_Result>::value> {};

template<>
struct is_message<my_package::action::FleetManagement_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<my_package::action::FleetManagement_GetResult>()
{
  return "my_package::action::FleetManagement_GetResult";
}

template<>
inline const char * name<my_package::action::FleetManagement_GetResult>()
{
  return "my_package/action/FleetManagement_GetResult";
}

template<>
struct has_fixed_size<my_package::action::FleetManagement_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<my_package::action::FleetManagement_GetResult_Request>::value &&
    has_fixed_size<my_package::action::FleetManagement_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<my_package::action::FleetManagement_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<my_package::action::FleetManagement_GetResult_Request>::value &&
    has_bounded_size<my_package::action::FleetManagement_GetResult_Response>::value
  >
{
};

template<>
struct is_service<my_package::action::FleetManagement_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<my_package::action::FleetManagement_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<my_package::action::FleetManagement_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "my_package/action/detail/fleet_management__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<my_package::action::FleetManagement_FeedbackMessage>()
{
  return "my_package::action::FleetManagement_FeedbackMessage";
}

template<>
inline const char * name<my_package::action::FleetManagement_FeedbackMessage>()
{
  return "my_package/action/FleetManagement_FeedbackMessage";
}

template<>
struct has_fixed_size<my_package::action::FleetManagement_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<my_package::action::FleetManagement_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<my_package::action::FleetManagement_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<my_package::action::FleetManagement_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<my_package::action::FleetManagement_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<my_package::action::FleetManagement>
  : std::true_type
{
};

template<>
struct is_action_goal<my_package::action::FleetManagement_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<my_package::action::FleetManagement_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<my_package::action::FleetManagement_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // MY_PACKAGE__ACTION__DETAIL__FLEET_MANAGEMENT__TRAITS_HPP_
