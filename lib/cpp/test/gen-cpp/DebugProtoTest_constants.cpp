/**
 * Autogenerated by Thrift Compiler (1.0.0-dev)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "DebugProtoTest_constants.h"

namespace thrift { namespace test { namespace debug {

const DebugProtoTestConstants g_DebugProtoTest_constants;

DebugProtoTestConstants::DebugProtoTestConstants() {
  COMPACT_TEST.a_byte = 127;
  COMPACT_TEST.__isset.a_byte = true;
  COMPACT_TEST.a_i16 = 32000;
  COMPACT_TEST.__isset.a_i16 = true;
  COMPACT_TEST.a_i32 = 1000000000;
  COMPACT_TEST.__isset.a_i32 = true;
  COMPACT_TEST.a_i64 = 1099511627775LL;
  COMPACT_TEST.__isset.a_i64 = true;
  COMPACT_TEST.a_double = 5.6789;
  COMPACT_TEST.__isset.a_double = true;
  COMPACT_TEST.a_string = "my string";
  COMPACT_TEST.__isset.a_string = true;
  COMPACT_TEST.true_field = true;
  COMPACT_TEST.__isset.true_field = true;
  COMPACT_TEST.false_field = false;
  COMPACT_TEST.__isset.false_field = true;
  Empty tmp577;

  COMPACT_TEST.empty_struct_field = tmp577;
  COMPACT_TEST.__isset.empty_struct_field = true;
  std::vector<int8_t>  tmp578;
  tmp578.push_back(-127);
  tmp578.push_back(-1);
  tmp578.push_back(0);
  tmp578.push_back(1);
  tmp578.push_back(127);

  COMPACT_TEST.byte_list = tmp578;
  COMPACT_TEST.__isset.byte_list = true;
  std::vector<int16_t>  tmp579;
  tmp579.push_back(-1);
  tmp579.push_back(0);
  tmp579.push_back(1);
  tmp579.push_back(32767);

  COMPACT_TEST.i16_list = tmp579;
  COMPACT_TEST.__isset.i16_list = true;
  std::vector<int32_t>  tmp580;
  tmp580.push_back(-1);
  tmp580.push_back(0);
  tmp580.push_back(255);
  tmp580.push_back(65535);
  tmp580.push_back(16777215);
  tmp580.push_back(2147483647);

  COMPACT_TEST.i32_list = tmp580;
  COMPACT_TEST.__isset.i32_list = true;
  std::vector<int64_t>  tmp581;
  tmp581.push_back(-1LL);
  tmp581.push_back(0LL);
  tmp581.push_back(255LL);
  tmp581.push_back(65535LL);
  tmp581.push_back(16777215LL);
  tmp581.push_back(4294967295LL);
  tmp581.push_back(1099511627775LL);
  tmp581.push_back(281474976710655LL);
  tmp581.push_back(72057594037927935LL);
  tmp581.push_back(9223372036854775807LL);

  COMPACT_TEST.i64_list = tmp581;
  COMPACT_TEST.__isset.i64_list = true;
  std::vector<double>  tmp582;
  tmp582.push_back(0.1);
  tmp582.push_back(0.2);
  tmp582.push_back(0.3);

  COMPACT_TEST.double_list = tmp582;
  COMPACT_TEST.__isset.double_list = true;
  std::vector<std::string>  tmp583;
  tmp583.push_back("first");
  tmp583.push_back("second");
  tmp583.push_back("third");

  COMPACT_TEST.string_list = tmp583;
  COMPACT_TEST.__isset.string_list = true;
  std::vector<bool>  tmp584;
  tmp584.push_back(true);
  tmp584.push_back(true);
  tmp584.push_back(true);
  tmp584.push_back(false);
  tmp584.push_back(false);
  tmp584.push_back(false);

  COMPACT_TEST.boolean_list = tmp584;
  COMPACT_TEST.__isset.boolean_list = true;
  std::vector<Empty>  tmp585;
  Empty tmp586;

  tmp585.push_back(tmp586);
  Empty tmp587;

  tmp585.push_back(tmp587);

  COMPACT_TEST.struct_list = tmp585;
  COMPACT_TEST.__isset.struct_list = true;
  std::set<int8_t>  tmp588;
  tmp588.insert(-127);
  tmp588.insert(-1);
  tmp588.insert(0);
  tmp588.insert(1);
  tmp588.insert(127);

  COMPACT_TEST.byte_set = tmp588;
  COMPACT_TEST.__isset.byte_set = true;
  std::set<int16_t>  tmp589;
  tmp589.insert(-1);
  tmp589.insert(0);
  tmp589.insert(1);
  tmp589.insert(32767);

  COMPACT_TEST.i16_set = tmp589;
  COMPACT_TEST.__isset.i16_set = true;
  std::set<int32_t>  tmp590;
  tmp590.insert(1);
  tmp590.insert(2);
  tmp590.insert(3);

  COMPACT_TEST.i32_set = tmp590;
  COMPACT_TEST.__isset.i32_set = true;
  std::set<int64_t>  tmp591;
  tmp591.insert(-1LL);
  tmp591.insert(0LL);
  tmp591.insert(255LL);
  tmp591.insert(65535LL);
  tmp591.insert(16777215LL);
  tmp591.insert(4294967295LL);
  tmp591.insert(1099511627775LL);
  tmp591.insert(281474976710655LL);
  tmp591.insert(72057594037927935LL);
  tmp591.insert(9223372036854775807LL);

  COMPACT_TEST.i64_set = tmp591;
  COMPACT_TEST.__isset.i64_set = true;
  std::set<double>  tmp592;
  tmp592.insert(0.1);
  tmp592.insert(0.2);
  tmp592.insert(0.3);

  COMPACT_TEST.double_set = tmp592;
  COMPACT_TEST.__isset.double_set = true;
  std::set<std::string>  tmp593;
  tmp593.insert("first");
  tmp593.insert("second");
  tmp593.insert("third");

  COMPACT_TEST.string_set = tmp593;
  COMPACT_TEST.__isset.string_set = true;
  std::set<bool>  tmp594;
  tmp594.insert(true);
  tmp594.insert(false);

  COMPACT_TEST.boolean_set = tmp594;
  COMPACT_TEST.__isset.boolean_set = true;
  std::set<Empty>  tmp595;
  Empty tmp596;

  tmp595.insert(tmp596);

  COMPACT_TEST.struct_set = tmp595;
  COMPACT_TEST.__isset.struct_set = true;
  std::map<int8_t, int8_t>  tmp597;
  tmp597.insert(std::make_pair(1, 2));

  COMPACT_TEST.byte_byte_map = tmp597;
  COMPACT_TEST.__isset.byte_byte_map = true;
  std::map<int16_t, int8_t>  tmp598;
  tmp598.insert(std::make_pair(1, 1));
  tmp598.insert(std::make_pair(-1, 1));
  tmp598.insert(std::make_pair(32767, 1));

  COMPACT_TEST.i16_byte_map = tmp598;
  COMPACT_TEST.__isset.i16_byte_map = true;
  std::map<int32_t, int8_t>  tmp599;
  tmp599.insert(std::make_pair(1, 1));
  tmp599.insert(std::make_pair(-1, 1));
  tmp599.insert(std::make_pair(2147483647, 1));

  COMPACT_TEST.i32_byte_map = tmp599;
  COMPACT_TEST.__isset.i32_byte_map = true;
  std::map<int64_t, int8_t>  tmp600;
  tmp600.insert(std::make_pair(0LL, 1));
  tmp600.insert(std::make_pair(1LL, 1));
  tmp600.insert(std::make_pair(-1LL, 1));
  tmp600.insert(std::make_pair(9223372036854775807LL, 1));

  COMPACT_TEST.i64_byte_map = tmp600;
  COMPACT_TEST.__isset.i64_byte_map = true;
  std::map<double, int8_t>  tmp601;
  tmp601.insert(std::make_pair(-1.1, 1));
  tmp601.insert(std::make_pair(1.1, 1));

  COMPACT_TEST.double_byte_map = tmp601;
  COMPACT_TEST.__isset.double_byte_map = true;
  std::map<std::string, int8_t>  tmp602;
  tmp602.insert(std::make_pair("first", 1));
  tmp602.insert(std::make_pair("second", 2));
  tmp602.insert(std::make_pair("third", 3));
  tmp602.insert(std::make_pair("", 0));

  COMPACT_TEST.string_byte_map = tmp602;
  COMPACT_TEST.__isset.string_byte_map = true;
  std::map<bool, int8_t>  tmp603;
  tmp603.insert(std::make_pair(true, 1));
  tmp603.insert(std::make_pair(false, 0));

  COMPACT_TEST.boolean_byte_map = tmp603;
  COMPACT_TEST.__isset.boolean_byte_map = true;
  std::map<int8_t, int16_t>  tmp604;
  tmp604.insert(std::make_pair(1, 1));
  tmp604.insert(std::make_pair(2, -1));
  tmp604.insert(std::make_pair(3, 32767));

  COMPACT_TEST.byte_i16_map = tmp604;
  COMPACT_TEST.__isset.byte_i16_map = true;
  std::map<int8_t, int32_t>  tmp605;
  tmp605.insert(std::make_pair(1, 1));
  tmp605.insert(std::make_pair(2, -1));
  tmp605.insert(std::make_pair(3, 2147483647));

  COMPACT_TEST.byte_i32_map = tmp605;
  COMPACT_TEST.__isset.byte_i32_map = true;
  std::map<int8_t, int64_t>  tmp606;
  tmp606.insert(std::make_pair(1, 1LL));
  tmp606.insert(std::make_pair(2, -1LL));
  tmp606.insert(std::make_pair(3, 9223372036854775807LL));

  COMPACT_TEST.byte_i64_map = tmp606;
  COMPACT_TEST.__isset.byte_i64_map = true;
  std::map<int8_t, double>  tmp607;
  tmp607.insert(std::make_pair(1, 0.1));
  tmp607.insert(std::make_pair(2, -0.1));
  tmp607.insert(std::make_pair(3, 1e+06));

  COMPACT_TEST.byte_double_map = tmp607;
  COMPACT_TEST.__isset.byte_double_map = true;
  std::map<int8_t, std::string>  tmp608;
  tmp608.insert(std::make_pair(1, ""));
  tmp608.insert(std::make_pair(2, "blah"));
  tmp608.insert(std::make_pair(3, "loooooooooooooong string"));

  COMPACT_TEST.byte_string_map = tmp608;
  COMPACT_TEST.__isset.byte_string_map = true;
  std::map<int8_t, bool>  tmp609;
  tmp609.insert(std::make_pair(1, true));
  tmp609.insert(std::make_pair(2, false));

  COMPACT_TEST.byte_boolean_map = tmp609;
  COMPACT_TEST.__isset.byte_boolean_map = true;
  std::map<std::vector<int8_t> , int8_t>  tmp610;
  std::vector<int8_t>  tmp611;
  tmp611.push_back(1);
  tmp611.push_back(2);
  tmp611.push_back(3);

  tmp610.insert(std::make_pair(tmp611, 1));
  std::vector<int8_t>  tmp612;
  tmp612.push_back(0);
  tmp612.push_back(1);

  tmp610.insert(std::make_pair(tmp612, 2));
  std::vector<int8_t>  tmp613;

  tmp610.insert(std::make_pair(tmp613, 0));

  COMPACT_TEST.list_byte_map = tmp610;
  COMPACT_TEST.__isset.list_byte_map = true;
  std::map<std::set<int8_t> , int8_t>  tmp614;
  std::set<int8_t>  tmp615;
  tmp615.insert(1);
  tmp615.insert(2);
  tmp615.insert(3);

  tmp614.insert(std::make_pair(tmp615, 1));
  std::set<int8_t>  tmp616;
  tmp616.insert(0);
  tmp616.insert(1);

  tmp614.insert(std::make_pair(tmp616, 2));
  std::set<int8_t>  tmp617;

  tmp614.insert(std::make_pair(tmp617, 0));

  COMPACT_TEST.set_byte_map = tmp614;
  COMPACT_TEST.__isset.set_byte_map = true;
  std::map<std::map<int8_t, int8_t> , int8_t>  tmp618;
  std::map<int8_t, int8_t>  tmp619;
  tmp619.insert(std::make_pair(1, 1));

  tmp618.insert(std::make_pair(tmp619, 1));
  std::map<int8_t, int8_t>  tmp620;
  tmp620.insert(std::make_pair(2, 2));

  tmp618.insert(std::make_pair(tmp620, 2));
  std::map<int8_t, int8_t>  tmp621;

  tmp618.insert(std::make_pair(tmp621, 0));

  COMPACT_TEST.map_byte_map = tmp618;
  COMPACT_TEST.__isset.map_byte_map = true;
  std::map<int8_t, std::map<int8_t, int8_t> >  tmp622;
  std::map<int8_t, int8_t>  tmp623;

  tmp622.insert(std::make_pair(0, tmp623));
  std::map<int8_t, int8_t>  tmp624;
  tmp624.insert(std::make_pair(1, 1));

  tmp622.insert(std::make_pair(1, tmp624));
  std::map<int8_t, int8_t>  tmp625;
  tmp625.insert(std::make_pair(1, 1));
  tmp625.insert(std::make_pair(2, 2));

  tmp622.insert(std::make_pair(2, tmp625));

  COMPACT_TEST.byte_map_map = tmp622;
  COMPACT_TEST.__isset.byte_map_map = true;
  std::map<int8_t, std::set<int8_t> >  tmp626;
  std::set<int8_t>  tmp627;

  tmp626.insert(std::make_pair(0, tmp627));
  std::set<int8_t>  tmp628;
  tmp628.insert(1);

  tmp626.insert(std::make_pair(1, tmp628));
  std::set<int8_t>  tmp629;
  tmp629.insert(1);
  tmp629.insert(2);

  tmp626.insert(std::make_pair(2, tmp629));

  COMPACT_TEST.byte_set_map = tmp626;
  COMPACT_TEST.__isset.byte_set_map = true;
  std::map<int8_t, std::vector<int8_t> >  tmp630;
  std::vector<int8_t>  tmp631;

  tmp630.insert(std::make_pair(0, tmp631));
  std::vector<int8_t>  tmp632;
  tmp632.push_back(1);

  tmp630.insert(std::make_pair(1, tmp632));
  std::vector<int8_t>  tmp633;
  tmp633.push_back(1);
  tmp633.push_back(2);

  tmp630.insert(std::make_pair(2, tmp633));

  COMPACT_TEST.byte_list_map = tmp630;
  COMPACT_TEST.__isset.byte_list_map = true;

  MYCONST = 2;

  MY_SOME_ENUM = (SomeEnum::type)1;

  MY_SOME_ENUM_1 = (SomeEnum::type)1;

  MY_ENUM_MAP.insert(std::make_pair((SomeEnum::type)1, (SomeEnum::type)2));

  StructWithSomeEnum tmp634;
  tmp634.blah = (SomeEnum::type)2;
  tmp634.__isset.blah = true;

  EXTRA_CRAZY_MAP.insert(std::make_pair((SomeEnum::type)1, tmp634));

}

}}} // namespace

