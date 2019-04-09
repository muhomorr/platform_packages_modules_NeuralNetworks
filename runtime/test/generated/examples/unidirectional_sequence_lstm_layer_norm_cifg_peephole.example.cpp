// clang-format off
// Generated file (from: unidirectional_sequence_lstm_layer_norm_cifg_peephole.mod.py). Do not edit
std::vector<MixedTypedExample>& get_examples() {
static std::vector<MixedTypedExample> examples = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {3, 2, 5}}, {1, {0, 0}}, {2, {4, 5}}, {3, {4, 5}}, {4, {4, 5}}, {5, {0, 0}}, {6, {4, 3}}, {7, {4, 3}}, {8, {4, 3}}, {9, {0}}, {10, {4}}, {11, {4}}, {12, {0}}, {13, {4}}, {14, {4}}, {15, {4}}, {16, {3, 4}}, {17, {0}}, {18, {2, 3}}, {19, {2, 4}}, {20, {0}}, {21, {4}}, {22, {4}}, {23, {4}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {0.7f, 0.8f, 0.1f, 0.2f, 0.3f, 0.3f, 0.2f, 0.9f, 0.8f, 0.1f, 0.8f, 0.1f, 0.2f, 0.4f, 0.5f, 0.1f, 0.5f, 0.2f, 0.4f, 0.2f, 0.2f, 0.7f, 0.7f, 0.1f, 0.7f, 0.6f, 0.9f, 0.2f, 0.5f, 0.7f}}, {1, {}}, {2, {-0.6f, -0.1f, 0.3f, 0.2f, 0.9f, -0.5f, -0.2f, -0.4f, 0.3f, -0.8f, -0.4f, 0.3f, -0.5f, -0.4f, -0.6f, 0.3f, -0.4f, -0.6f, -0.5f, -0.5f}}, {3, {-0.4f, -0.3f, -0.2f, -0.1f, -0.5f, 0.5f, -0.2f, -0.3f, -0.2f, -0.6f, 0.6f, -0.1f, -0.4f, -0.3f, -0.7f, 0.7f, -0.9f, -0.5f, 0.8f, 0.6f}}, {4, {-0.8f, -0.4f, -0.2f, -0.9f, -0.1f, -0.7f, 0.3f, -0.3f, -0.8f, -0.2f, 0.6f, -0.2f, 0.4f, -0.7f, -0.3f, -0.5f, 0.1f, 0.5f, -0.6f, -0.4f}}, {5, {}}, {6, {-0.5f, -0.3f, -0.5f, -0.2f, 0.6f, 0.4f, 0.9f, 0.3f, -0.1f, 0.2f, 0.5f, 0.2f}}, {7, {-0.3f, 0.2f, 0.1f, -0.3f, 0.8f, -0.08f, -0.2f, 0.3f, 0.8f, -0.6f, -0.1f, 0.2f}}, {8, {0.3f, -0.1f, 0.1f, -0.2f, -0.5f, -0.7f, -0.2f, -0.6f, -0.1f, -0.4f, -0.7f, -0.2f}}, {9, {}}, {10, {-0.02f, -0.15f, -0.25f, -0.03f}}, {11, {0.1f, -0.1f, -0.5f, 0.05f}}, {12, {}}, {13, {0.1f, -0.3f, -0.2f, 0.1f}}, {14, {-0.05f, 0.72f, 0.25f, 0.08f}}, {15, {0.05f, -0.01f, 0.2f, 0.1f}}, {16, {-0.1f, 0.2f, 0.01f, -0.2f, 0.1f, 0.5f, 0.3f, 0.08f, 0.07f, 0.2f, -0.4f, 0.2f}}, {17, {}}, {18, {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f}}, {19, {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f}}, {20, {}}, {21, {0.2f, 0.2f, 0.4f, 0.3f}}, {22, {0.7f, 0.2f, 0.3f, 0.8f}}, {23, {0.6f, 0.2f, 0.2f, 0.5f}}},
  // int -> INT32 map
  .int32Operands = {},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
  // int -> QUANT16_ASYMM map
  .quant16AsymmOperands = {},
  // int -> QUANT8_SYMM map
  .quant8SymmOperands = {},
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {3, 2, 3}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {0.02129706f, 0.140816242f, 0.0112733059f, -0.0226350538f, 0.0916948169f, 0.0769175813f, 0.0132302344f, 0.152308047f, 0.0346313119f, -0.0269966982f, 0.149707705f, 0.094149217f, -0.0123688057f, 0.165790111f, 0.0893077999f, -0.0103429332f, 0.173016444f, 0.0720508844f}}},
  // int -> INT32 map
  .int32Operands = {},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
  // int -> QUANT16_ASYMM map
  .quant16AsymmOperands = {},
  // int -> QUANT8_SYMM map
  .quant8SymmOperands = {},
}
},
}, // End of an example
};
return examples;
};

std::vector<MixedTypedExample>& get_examples_relaxed() {
static std::vector<MixedTypedExample> examples_relaxed = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {3, 2, 5}}, {1, {0, 0}}, {2, {4, 5}}, {3, {4, 5}}, {4, {4, 5}}, {5, {0, 0}}, {6, {4, 3}}, {7, {4, 3}}, {8, {4, 3}}, {9, {0}}, {10, {4}}, {11, {4}}, {12, {0}}, {13, {4}}, {14, {4}}, {15, {4}}, {16, {3, 4}}, {17, {0}}, {18, {2, 3}}, {19, {2, 4}}, {20, {0}}, {21, {4}}, {22, {4}}, {23, {4}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {0.7f, 0.8f, 0.1f, 0.2f, 0.3f, 0.3f, 0.2f, 0.9f, 0.8f, 0.1f, 0.8f, 0.1f, 0.2f, 0.4f, 0.5f, 0.1f, 0.5f, 0.2f, 0.4f, 0.2f, 0.2f, 0.7f, 0.7f, 0.1f, 0.7f, 0.6f, 0.9f, 0.2f, 0.5f, 0.7f}}, {1, {}}, {2, {-0.6f, -0.1f, 0.3f, 0.2f, 0.9f, -0.5f, -0.2f, -0.4f, 0.3f, -0.8f, -0.4f, 0.3f, -0.5f, -0.4f, -0.6f, 0.3f, -0.4f, -0.6f, -0.5f, -0.5f}}, {3, {-0.4f, -0.3f, -0.2f, -0.1f, -0.5f, 0.5f, -0.2f, -0.3f, -0.2f, -0.6f, 0.6f, -0.1f, -0.4f, -0.3f, -0.7f, 0.7f, -0.9f, -0.5f, 0.8f, 0.6f}}, {4, {-0.8f, -0.4f, -0.2f, -0.9f, -0.1f, -0.7f, 0.3f, -0.3f, -0.8f, -0.2f, 0.6f, -0.2f, 0.4f, -0.7f, -0.3f, -0.5f, 0.1f, 0.5f, -0.6f, -0.4f}}, {5, {}}, {6, {-0.5f, -0.3f, -0.5f, -0.2f, 0.6f, 0.4f, 0.9f, 0.3f, -0.1f, 0.2f, 0.5f, 0.2f}}, {7, {-0.3f, 0.2f, 0.1f, -0.3f, 0.8f, -0.08f, -0.2f, 0.3f, 0.8f, -0.6f, -0.1f, 0.2f}}, {8, {0.3f, -0.1f, 0.1f, -0.2f, -0.5f, -0.7f, -0.2f, -0.6f, -0.1f, -0.4f, -0.7f, -0.2f}}, {9, {}}, {10, {-0.02f, -0.15f, -0.25f, -0.03f}}, {11, {0.1f, -0.1f, -0.5f, 0.05f}}, {12, {}}, {13, {0.1f, -0.3f, -0.2f, 0.1f}}, {14, {-0.05f, 0.72f, 0.25f, 0.08f}}, {15, {0.05f, -0.01f, 0.2f, 0.1f}}, {16, {-0.1f, 0.2f, 0.01f, -0.2f, 0.1f, 0.5f, 0.3f, 0.08f, 0.07f, 0.2f, -0.4f, 0.2f}}, {17, {}}, {18, {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f}}, {19, {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f}}, {20, {}}, {21, {0.2f, 0.2f, 0.4f, 0.3f}}, {22, {0.7f, 0.2f, 0.3f, 0.8f}}, {23, {0.6f, 0.2f, 0.2f, 0.5f}}},
  // int -> INT32 map
  .int32Operands = {},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
  // int -> QUANT16_ASYMM map
  .quant16AsymmOperands = {},
  // int -> QUANT8_SYMM map
  .quant8SymmOperands = {},
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {3, 2, 3}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {0.02129706f, 0.140816242f, 0.0112733059f, -0.0226350538f, 0.0916948169f, 0.0769175813f, 0.0132302344f, 0.152308047f, 0.0346313119f, -0.0269966982f, 0.149707705f, 0.094149217f, -0.0123688057f, 0.165790111f, 0.0893077999f, -0.0103429332f, 0.173016444f, 0.0720508844f}}},
  // int -> INT32 map
  .int32Operands = {},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
  // int -> QUANT16_ASYMM map
  .quant16AsymmOperands = {},
  // int -> QUANT8_SYMM map
  .quant8SymmOperands = {},
}
},
}, // End of an example
};
return examples_relaxed;
};

std::vector<MixedTypedExample>& get_examples_float16() {
static std::vector<MixedTypedExample> examples_float16 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {3, 2, 5}}, {1, {0, 0}}, {2, {4, 5}}, {3, {4, 5}}, {4, {4, 5}}, {5, {0, 0}}, {6, {4, 3}}, {7, {4, 3}}, {8, {4, 3}}, {9, {0}}, {10, {4}}, {11, {4}}, {12, {0}}, {13, {4}}, {14, {4}}, {15, {4}}, {16, {3, 4}}, {17, {0}}, {18, {2, 3}}, {19, {2, 4}}, {20, {0}}, {21, {4}}, {22, {4}}, {23, {4}}},
  // int -> FLOAT32 map
  .float32Operands = {},
  // int -> INT32 map
  .int32Operands = {},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {{0, {0.699999988079071f, 0.800000011920929f, 0.10000000149011612f, 0.20000000298023224f, 0.30000001192092896f, 0.30000001192092896f, 0.20000000298023224f, 0.8999999761581421f, 0.800000011920929f, 0.10000000149011612f, 0.800000011920929f, 0.10000000149011612f, 0.20000000298023224f, 0.4000000059604645f, 0.5f, 0.10000000149011612f, 0.5f, 0.20000000298023224f, 0.4000000059604645f, 0.20000000298023224f, 0.20000000298023224f, 0.699999988079071f, 0.699999988079071f, 0.10000000149011612f, 0.699999988079071f, 0.6000000238418579f, 0.8999999761581421f, 0.20000000298023224f, 0.5f, 0.699999988079071f}}, {1, {}}, {2, {-0.6000000238418579f, -0.10000000149011612f, 0.30000001192092896f, 0.20000000298023224f, 0.8999999761581421f, -0.5f, -0.20000000298023224f, -0.4000000059604645f, 0.30000001192092896f, -0.800000011920929f, -0.4000000059604645f, 0.30000001192092896f, -0.5f, -0.4000000059604645f, -0.6000000238418579f, 0.30000001192092896f, -0.4000000059604645f, -0.6000000238418579f, -0.5f, -0.5f}}, {3, {-0.4000000059604645f, -0.30000001192092896f, -0.20000000298023224f, -0.10000000149011612f, -0.5f, 0.5f, -0.20000000298023224f, -0.30000001192092896f, -0.20000000298023224f, -0.6000000238418579f, 0.6000000238418579f, -0.10000000149011612f, -0.4000000059604645f, -0.30000001192092896f, -0.699999988079071f, 0.699999988079071f, -0.8999999761581421f, -0.5f, 0.800000011920929f, 0.6000000238418579f}}, {4, {-0.800000011920929f, -0.4000000059604645f, -0.20000000298023224f, -0.8999999761581421f, -0.10000000149011612f, -0.699999988079071f, 0.30000001192092896f, -0.30000001192092896f, -0.800000011920929f, -0.20000000298023224f, 0.6000000238418579f, -0.20000000298023224f, 0.4000000059604645f, -0.699999988079071f, -0.30000001192092896f, -0.5f, 0.10000000149011612f, 0.5f, -0.6000000238418579f, -0.4000000059604645f}}, {5, {}}, {6, {-0.5f, -0.30000001192092896f, -0.5f, -0.20000000298023224f, 0.6000000238418579f, 0.4000000059604645f, 0.8999999761581421f, 0.30000001192092896f, -0.10000000149011612f, 0.20000000298023224f, 0.5f, 0.20000000298023224f}}, {7, {-0.30000001192092896f, 0.20000000298023224f, 0.10000000149011612f, -0.30000001192092896f, 0.800000011920929f, -0.07999999821186066f, -0.20000000298023224f, 0.30000001192092896f, 0.800000011920929f, -0.6000000238418579f, -0.10000000149011612f, 0.20000000298023224f}}, {8, {0.30000001192092896f, -0.10000000149011612f, 0.10000000149011612f, -0.20000000298023224f, -0.5f, -0.699999988079071f, -0.20000000298023224f, -0.6000000238418579f, -0.10000000149011612f, -0.4000000059604645f, -0.699999988079071f, -0.20000000298023224f}}, {9, {}}, {10, {-0.019999999552965164f, -0.15000000596046448f, -0.25f, -0.029999999329447746f}}, {11, {0.10000000149011612f, -0.10000000149011612f, -0.5f, 0.05000000074505806f}}, {12, {}}, {13, {0.10000000149011612f, -0.30000001192092896f, -0.20000000298023224f, 0.10000000149011612f}}, {14, {-0.05000000074505806f, 0.7200000286102295f, 0.25f, 0.07999999821186066f}}, {15, {0.05000000074505806f, -0.009999999776482582f, 0.20000000298023224f, 0.10000000149011612f}}, {16, {-0.10000000149011612f, 0.20000000298023224f, 0.009999999776482582f, -0.20000000298023224f, 0.10000000149011612f, 0.5f, 0.30000001192092896f, 0.07999999821186066f, 0.07000000029802322f, 0.20000000298023224f, -0.4000000059604645f, 0.20000000298023224f}}, {17, {}}, {18, {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f}}, {19, {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f}}, {20, {}}, {21, {0.20000000298023224f, 0.20000000298023224f, 0.4000000059604645f, 0.30000001192092896f}}, {22, {0.699999988079071f, 0.20000000298023224f, 0.30000001192092896f, 0.800000011920929f}}, {23, {0.6000000238418579f, 0.20000000298023224f, 0.20000000298023224f, 0.5f}}},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
  // int -> QUANT16_ASYMM map
  .quant16AsymmOperands = {},
  // int -> QUANT8_SYMM map
  .quant8SymmOperands = {},
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {3, 2, 3}}},
  // int -> FLOAT32 map
  .float32Operands = {},
  // int -> INT32 map
  .int32Operands = {},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {{0, {0.021297059953212738f, 0.14081624150276184f, 0.011273305863142014f, -0.02263505384325981f, 0.09169481694698334f, 0.07691758126020432f, 0.013230234384536743f, 0.15230804681777954f, 0.034631311893463135f, -0.02699669823050499f, 0.14970770478248596f, 0.09414921700954437f, -0.012368805706501007f, 0.1657901108264923f, 0.08930779993534088f, -0.010342933237552643f, 0.17301644384860992f, 0.07205088436603546f}}},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
  // int -> QUANT16_ASYMM map
  .quant16AsymmOperands = {},
  // int -> QUANT8_SYMM map
  .quant8SymmOperands = {},
}
},
}, // End of an example
};
return examples_float16;
};

std::vector<MixedTypedExample>& get_examples_dynamic_output_shape() {
static std::vector<MixedTypedExample> examples_dynamic_output_shape = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {3, 2, 5}}, {1, {0, 0}}, {2, {4, 5}}, {3, {4, 5}}, {4, {4, 5}}, {5, {0, 0}}, {6, {4, 3}}, {7, {4, 3}}, {8, {4, 3}}, {9, {0}}, {10, {4}}, {11, {4}}, {12, {0}}, {13, {4}}, {14, {4}}, {15, {4}}, {16, {3, 4}}, {17, {0}}, {18, {2, 3}}, {19, {2, 4}}, {20, {0}}, {21, {4}}, {22, {4}}, {23, {4}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {0.7f, 0.8f, 0.1f, 0.2f, 0.3f, 0.3f, 0.2f, 0.9f, 0.8f, 0.1f, 0.8f, 0.1f, 0.2f, 0.4f, 0.5f, 0.1f, 0.5f, 0.2f, 0.4f, 0.2f, 0.2f, 0.7f, 0.7f, 0.1f, 0.7f, 0.6f, 0.9f, 0.2f, 0.5f, 0.7f}}, {1, {}}, {2, {-0.6f, -0.1f, 0.3f, 0.2f, 0.9f, -0.5f, -0.2f, -0.4f, 0.3f, -0.8f, -0.4f, 0.3f, -0.5f, -0.4f, -0.6f, 0.3f, -0.4f, -0.6f, -0.5f, -0.5f}}, {3, {-0.4f, -0.3f, -0.2f, -0.1f, -0.5f, 0.5f, -0.2f, -0.3f, -0.2f, -0.6f, 0.6f, -0.1f, -0.4f, -0.3f, -0.7f, 0.7f, -0.9f, -0.5f, 0.8f, 0.6f}}, {4, {-0.8f, -0.4f, -0.2f, -0.9f, -0.1f, -0.7f, 0.3f, -0.3f, -0.8f, -0.2f, 0.6f, -0.2f, 0.4f, -0.7f, -0.3f, -0.5f, 0.1f, 0.5f, -0.6f, -0.4f}}, {5, {}}, {6, {-0.5f, -0.3f, -0.5f, -0.2f, 0.6f, 0.4f, 0.9f, 0.3f, -0.1f, 0.2f, 0.5f, 0.2f}}, {7, {-0.3f, 0.2f, 0.1f, -0.3f, 0.8f, -0.08f, -0.2f, 0.3f, 0.8f, -0.6f, -0.1f, 0.2f}}, {8, {0.3f, -0.1f, 0.1f, -0.2f, -0.5f, -0.7f, -0.2f, -0.6f, -0.1f, -0.4f, -0.7f, -0.2f}}, {9, {}}, {10, {-0.02f, -0.15f, -0.25f, -0.03f}}, {11, {0.1f, -0.1f, -0.5f, 0.05f}}, {12, {}}, {13, {0.1f, -0.3f, -0.2f, 0.1f}}, {14, {-0.05f, 0.72f, 0.25f, 0.08f}}, {15, {0.05f, -0.01f, 0.2f, 0.1f}}, {16, {-0.1f, 0.2f, 0.01f, -0.2f, 0.1f, 0.5f, 0.3f, 0.08f, 0.07f, 0.2f, -0.4f, 0.2f}}, {17, {}}, {18, {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f}}, {19, {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f}}, {20, {}}, {21, {0.2f, 0.2f, 0.4f, 0.3f}}, {22, {0.7f, 0.2f, 0.3f, 0.8f}}, {23, {0.6f, 0.2f, 0.2f, 0.5f}}},
  // int -> INT32 map
  .int32Operands = {},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
  // int -> QUANT16_ASYMM map
  .quant16AsymmOperands = {},
  // int -> QUANT8_SYMM map
  .quant8SymmOperands = {},
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {3, 2, 3}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {0.02129706f, 0.140816242f, 0.0112733059f, -0.0226350538f, 0.0916948169f, 0.0769175813f, 0.0132302344f, 0.152308047f, 0.0346313119f, -0.0269966982f, 0.149707705f, 0.094149217f, -0.0123688057f, 0.165790111f, 0.0893077999f, -0.0103429332f, 0.173016444f, 0.0720508844f}}},
  // int -> INT32 map
  .int32Operands = {},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
  // int -> QUANT16_ASYMM map
  .quant16AsymmOperands = {},
  // int -> QUANT8_SYMM map
  .quant8SymmOperands = {},
}
},
}, // End of an example
};
return examples_dynamic_output_shape;
};

std::vector<MixedTypedExample>& get_examples_dynamic_output_shape_relaxed() {
static std::vector<MixedTypedExample> examples_dynamic_output_shape_relaxed = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {3, 2, 5}}, {1, {0, 0}}, {2, {4, 5}}, {3, {4, 5}}, {4, {4, 5}}, {5, {0, 0}}, {6, {4, 3}}, {7, {4, 3}}, {8, {4, 3}}, {9, {0}}, {10, {4}}, {11, {4}}, {12, {0}}, {13, {4}}, {14, {4}}, {15, {4}}, {16, {3, 4}}, {17, {0}}, {18, {2, 3}}, {19, {2, 4}}, {20, {0}}, {21, {4}}, {22, {4}}, {23, {4}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {0.7f, 0.8f, 0.1f, 0.2f, 0.3f, 0.3f, 0.2f, 0.9f, 0.8f, 0.1f, 0.8f, 0.1f, 0.2f, 0.4f, 0.5f, 0.1f, 0.5f, 0.2f, 0.4f, 0.2f, 0.2f, 0.7f, 0.7f, 0.1f, 0.7f, 0.6f, 0.9f, 0.2f, 0.5f, 0.7f}}, {1, {}}, {2, {-0.6f, -0.1f, 0.3f, 0.2f, 0.9f, -0.5f, -0.2f, -0.4f, 0.3f, -0.8f, -0.4f, 0.3f, -0.5f, -0.4f, -0.6f, 0.3f, -0.4f, -0.6f, -0.5f, -0.5f}}, {3, {-0.4f, -0.3f, -0.2f, -0.1f, -0.5f, 0.5f, -0.2f, -0.3f, -0.2f, -0.6f, 0.6f, -0.1f, -0.4f, -0.3f, -0.7f, 0.7f, -0.9f, -0.5f, 0.8f, 0.6f}}, {4, {-0.8f, -0.4f, -0.2f, -0.9f, -0.1f, -0.7f, 0.3f, -0.3f, -0.8f, -0.2f, 0.6f, -0.2f, 0.4f, -0.7f, -0.3f, -0.5f, 0.1f, 0.5f, -0.6f, -0.4f}}, {5, {}}, {6, {-0.5f, -0.3f, -0.5f, -0.2f, 0.6f, 0.4f, 0.9f, 0.3f, -0.1f, 0.2f, 0.5f, 0.2f}}, {7, {-0.3f, 0.2f, 0.1f, -0.3f, 0.8f, -0.08f, -0.2f, 0.3f, 0.8f, -0.6f, -0.1f, 0.2f}}, {8, {0.3f, -0.1f, 0.1f, -0.2f, -0.5f, -0.7f, -0.2f, -0.6f, -0.1f, -0.4f, -0.7f, -0.2f}}, {9, {}}, {10, {-0.02f, -0.15f, -0.25f, -0.03f}}, {11, {0.1f, -0.1f, -0.5f, 0.05f}}, {12, {}}, {13, {0.1f, -0.3f, -0.2f, 0.1f}}, {14, {-0.05f, 0.72f, 0.25f, 0.08f}}, {15, {0.05f, -0.01f, 0.2f, 0.1f}}, {16, {-0.1f, 0.2f, 0.01f, -0.2f, 0.1f, 0.5f, 0.3f, 0.08f, 0.07f, 0.2f, -0.4f, 0.2f}}, {17, {}}, {18, {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f}}, {19, {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f}}, {20, {}}, {21, {0.2f, 0.2f, 0.4f, 0.3f}}, {22, {0.7f, 0.2f, 0.3f, 0.8f}}, {23, {0.6f, 0.2f, 0.2f, 0.5f}}},
  // int -> INT32 map
  .int32Operands = {},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
  // int -> QUANT16_ASYMM map
  .quant16AsymmOperands = {},
  // int -> QUANT8_SYMM map
  .quant8SymmOperands = {},
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {3, 2, 3}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {0.02129706f, 0.140816242f, 0.0112733059f, -0.0226350538f, 0.0916948169f, 0.0769175813f, 0.0132302344f, 0.152308047f, 0.0346313119f, -0.0269966982f, 0.149707705f, 0.094149217f, -0.0123688057f, 0.165790111f, 0.0893077999f, -0.0103429332f, 0.173016444f, 0.0720508844f}}},
  // int -> INT32 map
  .int32Operands = {},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
  // int -> QUANT16_ASYMM map
  .quant16AsymmOperands = {},
  // int -> QUANT8_SYMM map
  .quant8SymmOperands = {},
}
},
}, // End of an example
};
return examples_dynamic_output_shape_relaxed;
};

std::vector<MixedTypedExample>& get_examples_dynamic_output_shape_float16() {
static std::vector<MixedTypedExample> examples_dynamic_output_shape_float16 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {3, 2, 5}}, {1, {0, 0}}, {2, {4, 5}}, {3, {4, 5}}, {4, {4, 5}}, {5, {0, 0}}, {6, {4, 3}}, {7, {4, 3}}, {8, {4, 3}}, {9, {0}}, {10, {4}}, {11, {4}}, {12, {0}}, {13, {4}}, {14, {4}}, {15, {4}}, {16, {3, 4}}, {17, {0}}, {18, {2, 3}}, {19, {2, 4}}, {20, {0}}, {21, {4}}, {22, {4}}, {23, {4}}},
  // int -> FLOAT32 map
  .float32Operands = {},
  // int -> INT32 map
  .int32Operands = {},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {{0, {0.699999988079071f, 0.800000011920929f, 0.10000000149011612f, 0.20000000298023224f, 0.30000001192092896f, 0.30000001192092896f, 0.20000000298023224f, 0.8999999761581421f, 0.800000011920929f, 0.10000000149011612f, 0.800000011920929f, 0.10000000149011612f, 0.20000000298023224f, 0.4000000059604645f, 0.5f, 0.10000000149011612f, 0.5f, 0.20000000298023224f, 0.4000000059604645f, 0.20000000298023224f, 0.20000000298023224f, 0.699999988079071f, 0.699999988079071f, 0.10000000149011612f, 0.699999988079071f, 0.6000000238418579f, 0.8999999761581421f, 0.20000000298023224f, 0.5f, 0.699999988079071f}}, {1, {}}, {2, {-0.6000000238418579f, -0.10000000149011612f, 0.30000001192092896f, 0.20000000298023224f, 0.8999999761581421f, -0.5f, -0.20000000298023224f, -0.4000000059604645f, 0.30000001192092896f, -0.800000011920929f, -0.4000000059604645f, 0.30000001192092896f, -0.5f, -0.4000000059604645f, -0.6000000238418579f, 0.30000001192092896f, -0.4000000059604645f, -0.6000000238418579f, -0.5f, -0.5f}}, {3, {-0.4000000059604645f, -0.30000001192092896f, -0.20000000298023224f, -0.10000000149011612f, -0.5f, 0.5f, -0.20000000298023224f, -0.30000001192092896f, -0.20000000298023224f, -0.6000000238418579f, 0.6000000238418579f, -0.10000000149011612f, -0.4000000059604645f, -0.30000001192092896f, -0.699999988079071f, 0.699999988079071f, -0.8999999761581421f, -0.5f, 0.800000011920929f, 0.6000000238418579f}}, {4, {-0.800000011920929f, -0.4000000059604645f, -0.20000000298023224f, -0.8999999761581421f, -0.10000000149011612f, -0.699999988079071f, 0.30000001192092896f, -0.30000001192092896f, -0.800000011920929f, -0.20000000298023224f, 0.6000000238418579f, -0.20000000298023224f, 0.4000000059604645f, -0.699999988079071f, -0.30000001192092896f, -0.5f, 0.10000000149011612f, 0.5f, -0.6000000238418579f, -0.4000000059604645f}}, {5, {}}, {6, {-0.5f, -0.30000001192092896f, -0.5f, -0.20000000298023224f, 0.6000000238418579f, 0.4000000059604645f, 0.8999999761581421f, 0.30000001192092896f, -0.10000000149011612f, 0.20000000298023224f, 0.5f, 0.20000000298023224f}}, {7, {-0.30000001192092896f, 0.20000000298023224f, 0.10000000149011612f, -0.30000001192092896f, 0.800000011920929f, -0.07999999821186066f, -0.20000000298023224f, 0.30000001192092896f, 0.800000011920929f, -0.6000000238418579f, -0.10000000149011612f, 0.20000000298023224f}}, {8, {0.30000001192092896f, -0.10000000149011612f, 0.10000000149011612f, -0.20000000298023224f, -0.5f, -0.699999988079071f, -0.20000000298023224f, -0.6000000238418579f, -0.10000000149011612f, -0.4000000059604645f, -0.699999988079071f, -0.20000000298023224f}}, {9, {}}, {10, {-0.019999999552965164f, -0.15000000596046448f, -0.25f, -0.029999999329447746f}}, {11, {0.10000000149011612f, -0.10000000149011612f, -0.5f, 0.05000000074505806f}}, {12, {}}, {13, {0.10000000149011612f, -0.30000001192092896f, -0.20000000298023224f, 0.10000000149011612f}}, {14, {-0.05000000074505806f, 0.7200000286102295f, 0.25f, 0.07999999821186066f}}, {15, {0.05000000074505806f, -0.009999999776482582f, 0.20000000298023224f, 0.10000000149011612f}}, {16, {-0.10000000149011612f, 0.20000000298023224f, 0.009999999776482582f, -0.20000000298023224f, 0.10000000149011612f, 0.5f, 0.30000001192092896f, 0.07999999821186066f, 0.07000000029802322f, 0.20000000298023224f, -0.4000000059604645f, 0.20000000298023224f}}, {17, {}}, {18, {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f}}, {19, {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f}}, {20, {}}, {21, {0.20000000298023224f, 0.20000000298023224f, 0.4000000059604645f, 0.30000001192092896f}}, {22, {0.699999988079071f, 0.20000000298023224f, 0.30000001192092896f, 0.800000011920929f}}, {23, {0.6000000238418579f, 0.20000000298023224f, 0.20000000298023224f, 0.5f}}},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
  // int -> QUANT16_ASYMM map
  .quant16AsymmOperands = {},
  // int -> QUANT8_SYMM map
  .quant8SymmOperands = {},
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {3, 2, 3}}},
  // int -> FLOAT32 map
  .float32Operands = {},
  // int -> INT32 map
  .int32Operands = {},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {{0, {0.021297059953212738f, 0.14081624150276184f, 0.011273305863142014f, -0.02263505384325981f, 0.09169481694698334f, 0.07691758126020432f, 0.013230234384536743f, 0.15230804681777954f, 0.034631311893463135f, -0.02699669823050499f, 0.14970770478248596f, 0.09414921700954437f, -0.012368805706501007f, 0.1657901108264923f, 0.08930779993534088f, -0.010342933237552643f, 0.17301644384860992f, 0.07205088436603546f}}},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
  // int -> QUANT16_ASYMM map
  .quant16AsymmOperands = {},
  // int -> QUANT8_SYMM map
  .quant8SymmOperands = {},
}
},
}, // End of an example
};
return examples_dynamic_output_shape_float16;
};
