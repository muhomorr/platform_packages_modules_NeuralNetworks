// Generated from reduce_sum.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::reduce_sum {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::reduce_sum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_sum {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, reduce_sum) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::reduce_sum::get_examples());
}

TEST_F(ValidationTest, reduce_sum) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::reduce_sum::get_examples());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_sum

namespace generated_tests::reduce_sum {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape();

} // namespace generated_tests::reduce_sum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_sum {

Model createTestModel_dynamic_output_shape();
bool is_ignored_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, reduce_sum_dynamic_output_shape) {
  Execute(device,
          createTestModel_dynamic_output_shape,
          is_ignored_dynamic_output_shape,
          ::generated_tests::reduce_sum::get_examples_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, reduce_sum_dynamic_output_shape) {
  const Model model = createTestModel_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::reduce_sum::get_examples_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_sum

namespace generated_tests::reduce_sum {

std::vector<::test_helper::MixedTypedExample>& get_examples_all_inputs_as_internal();

} // namespace generated_tests::reduce_sum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_sum {

Model createTestModel_all_inputs_as_internal();
bool is_ignored_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, reduce_sum_all_inputs_as_internal) {
  Execute(device,
          createTestModel_all_inputs_as_internal,
          is_ignored_all_inputs_as_internal,
          ::generated_tests::reduce_sum::get_examples_all_inputs_as_internal());
}

TEST_F(ValidationTest, reduce_sum_all_inputs_as_internal) {
  const Model model = createTestModel_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::reduce_sum::get_examples_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_sum

namespace generated_tests::reduce_sum {

std::vector<::test_helper::MixedTypedExample>& get_examples_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::reduce_sum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_sum {

Model createTestModel_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, reduce_sum_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::reduce_sum::get_examples_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, reduce_sum_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::reduce_sum::get_examples_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_sum

namespace generated_tests::reduce_sum {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed();

} // namespace generated_tests::reduce_sum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_sum {

Model createTestModel_relaxed();
bool is_ignored_relaxed(int);

TEST_F(NeuralnetworksHidlTest, reduce_sum_relaxed) {
  Execute(device,
          createTestModel_relaxed,
          is_ignored_relaxed,
          ::generated_tests::reduce_sum::get_examples_relaxed());
}

TEST_F(ValidationTest, reduce_sum_relaxed) {
  const Model model = createTestModel_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::reduce_sum::get_examples_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_sum

namespace generated_tests::reduce_sum {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dynamic_output_shape();

} // namespace generated_tests::reduce_sum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_sum {

Model createTestModel_relaxed_dynamic_output_shape();
bool is_ignored_relaxed_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, reduce_sum_relaxed_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dynamic_output_shape,
          is_ignored_relaxed_dynamic_output_shape,
          ::generated_tests::reduce_sum::get_examples_relaxed_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, reduce_sum_relaxed_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::reduce_sum::get_examples_relaxed_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_sum

namespace generated_tests::reduce_sum {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_all_inputs_as_internal();

} // namespace generated_tests::reduce_sum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_sum {

Model createTestModel_relaxed_all_inputs_as_internal();
bool is_ignored_relaxed_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, reduce_sum_relaxed_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_all_inputs_as_internal,
          is_ignored_relaxed_all_inputs_as_internal,
          ::generated_tests::reduce_sum::get_examples_relaxed_all_inputs_as_internal());
}

TEST_F(ValidationTest, reduce_sum_relaxed_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::reduce_sum::get_examples_relaxed_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_sum

namespace generated_tests::reduce_sum {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::reduce_sum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_sum {

Model createTestModel_relaxed_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, reduce_sum_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::reduce_sum::get_examples_relaxed_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, reduce_sum_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::reduce_sum::get_examples_relaxed_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_sum

namespace generated_tests::reduce_sum {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16();

} // namespace generated_tests::reduce_sum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_sum {

Model createTestModel_float16();
bool is_ignored_float16(int);

TEST_F(NeuralnetworksHidlTest, reduce_sum_float16) {
  Execute(device,
          createTestModel_float16,
          is_ignored_float16,
          ::generated_tests::reduce_sum::get_examples_float16());
}

TEST_F(ValidationTest, reduce_sum_float16) {
  const Model model = createTestModel_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::reduce_sum::get_examples_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_sum

namespace generated_tests::reduce_sum {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_dynamic_output_shape();

} // namespace generated_tests::reduce_sum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_sum {

Model createTestModel_float16_dynamic_output_shape();
bool is_ignored_float16_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, reduce_sum_float16_dynamic_output_shape) {
  Execute(device,
          createTestModel_float16_dynamic_output_shape,
          is_ignored_float16_dynamic_output_shape,
          ::generated_tests::reduce_sum::get_examples_float16_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, reduce_sum_float16_dynamic_output_shape) {
  const Model model = createTestModel_float16_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::reduce_sum::get_examples_float16_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_sum

namespace generated_tests::reduce_sum {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_all_inputs_as_internal();

} // namespace generated_tests::reduce_sum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_sum {

Model createTestModel_float16_all_inputs_as_internal();
bool is_ignored_float16_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, reduce_sum_float16_all_inputs_as_internal) {
  Execute(device,
          createTestModel_float16_all_inputs_as_internal,
          is_ignored_float16_all_inputs_as_internal,
          ::generated_tests::reduce_sum::get_examples_float16_all_inputs_as_internal());
}

TEST_F(ValidationTest, reduce_sum_float16_all_inputs_as_internal) {
  const Model model = createTestModel_float16_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::reduce_sum::get_examples_float16_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_sum

namespace generated_tests::reduce_sum {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::reduce_sum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_sum {

Model createTestModel_float16_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_float16_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, reduce_sum_float16_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_float16_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_float16_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::reduce_sum::get_examples_float16_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, reduce_sum_float16_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_float16_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::reduce_sum::get_examples_float16_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_sum

namespace generated_tests::reduce_sum {

std::vector<::test_helper::MixedTypedExample>& get_examples_2();

} // namespace generated_tests::reduce_sum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_sum {

Model createTestModel_2();
bool is_ignored_2(int);

TEST_F(NeuralnetworksHidlTest, reduce_sum_2) {
  Execute(device,
          createTestModel_2,
          is_ignored_2,
          ::generated_tests::reduce_sum::get_examples_2());
}

TEST_F(ValidationTest, reduce_sum_2) {
  const Model model = createTestModel_2();
  const std::vector<Request> requests = createRequests(::generated_tests::reduce_sum::get_examples_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_sum

namespace generated_tests::reduce_sum {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_2();

} // namespace generated_tests::reduce_sum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_sum {

Model createTestModel_dynamic_output_shape_2();
bool is_ignored_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, reduce_sum_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_2,
          is_ignored_dynamic_output_shape_2,
          ::generated_tests::reduce_sum::get_examples_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, reduce_sum_dynamic_output_shape_2) {
  const Model model = createTestModel_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::reduce_sum::get_examples_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_sum

namespace generated_tests::reduce_sum {

std::vector<::test_helper::MixedTypedExample>& get_examples_all_inputs_as_internal_2();

} // namespace generated_tests::reduce_sum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_sum {

Model createTestModel_all_inputs_as_internal_2();
bool is_ignored_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, reduce_sum_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_all_inputs_as_internal_2,
          is_ignored_all_inputs_as_internal_2,
          ::generated_tests::reduce_sum::get_examples_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, reduce_sum_all_inputs_as_internal_2) {
  const Model model = createTestModel_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::reduce_sum::get_examples_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_sum

namespace generated_tests::reduce_sum {

std::vector<::test_helper::MixedTypedExample>& get_examples_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::reduce_sum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_sum {

Model createTestModel_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, reduce_sum_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::reduce_sum::get_examples_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, reduce_sum_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::reduce_sum::get_examples_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_sum

namespace generated_tests::reduce_sum {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_2();

} // namespace generated_tests::reduce_sum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_sum {

Model createTestModel_relaxed_2();
bool is_ignored_relaxed_2(int);

TEST_F(NeuralnetworksHidlTest, reduce_sum_relaxed_2) {
  Execute(device,
          createTestModel_relaxed_2,
          is_ignored_relaxed_2,
          ::generated_tests::reduce_sum::get_examples_relaxed_2());
}

TEST_F(ValidationTest, reduce_sum_relaxed_2) {
  const Model model = createTestModel_relaxed_2();
  const std::vector<Request> requests = createRequests(::generated_tests::reduce_sum::get_examples_relaxed_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_sum

namespace generated_tests::reduce_sum {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dynamic_output_shape_2();

} // namespace generated_tests::reduce_sum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_sum {

Model createTestModel_relaxed_dynamic_output_shape_2();
bool is_ignored_relaxed_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, reduce_sum_relaxed_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_relaxed_dynamic_output_shape_2,
          is_ignored_relaxed_dynamic_output_shape_2,
          ::generated_tests::reduce_sum::get_examples_relaxed_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, reduce_sum_relaxed_dynamic_output_shape_2) {
  const Model model = createTestModel_relaxed_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::reduce_sum::get_examples_relaxed_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_sum

namespace generated_tests::reduce_sum {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_all_inputs_as_internal_2();

} // namespace generated_tests::reduce_sum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_sum {

Model createTestModel_relaxed_all_inputs_as_internal_2();
bool is_ignored_relaxed_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, reduce_sum_relaxed_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_relaxed_all_inputs_as_internal_2,
          is_ignored_relaxed_all_inputs_as_internal_2,
          ::generated_tests::reduce_sum::get_examples_relaxed_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, reduce_sum_relaxed_all_inputs_as_internal_2) {
  const Model model = createTestModel_relaxed_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::reduce_sum::get_examples_relaxed_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_sum

namespace generated_tests::reduce_sum {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::reduce_sum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_sum {

Model createTestModel_relaxed_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, reduce_sum_relaxed_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_relaxed_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::reduce_sum::get_examples_relaxed_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, reduce_sum_relaxed_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_relaxed_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::reduce_sum::get_examples_relaxed_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_sum

namespace generated_tests::reduce_sum {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_2();

} // namespace generated_tests::reduce_sum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_sum {

Model createTestModel_float16_2();
bool is_ignored_float16_2(int);

TEST_F(NeuralnetworksHidlTest, reduce_sum_float16_2) {
  Execute(device,
          createTestModel_float16_2,
          is_ignored_float16_2,
          ::generated_tests::reduce_sum::get_examples_float16_2());
}

TEST_F(ValidationTest, reduce_sum_float16_2) {
  const Model model = createTestModel_float16_2();
  const std::vector<Request> requests = createRequests(::generated_tests::reduce_sum::get_examples_float16_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_sum

namespace generated_tests::reduce_sum {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_dynamic_output_shape_2();

} // namespace generated_tests::reduce_sum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_sum {

Model createTestModel_float16_dynamic_output_shape_2();
bool is_ignored_float16_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, reduce_sum_float16_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_float16_dynamic_output_shape_2,
          is_ignored_float16_dynamic_output_shape_2,
          ::generated_tests::reduce_sum::get_examples_float16_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, reduce_sum_float16_dynamic_output_shape_2) {
  const Model model = createTestModel_float16_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::reduce_sum::get_examples_float16_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_sum

namespace generated_tests::reduce_sum {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_all_inputs_as_internal_2();

} // namespace generated_tests::reduce_sum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_sum {

Model createTestModel_float16_all_inputs_as_internal_2();
bool is_ignored_float16_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, reduce_sum_float16_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_float16_all_inputs_as_internal_2,
          is_ignored_float16_all_inputs_as_internal_2,
          ::generated_tests::reduce_sum::get_examples_float16_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, reduce_sum_float16_all_inputs_as_internal_2) {
  const Model model = createTestModel_float16_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::reduce_sum::get_examples_float16_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_sum

namespace generated_tests::reduce_sum {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::reduce_sum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_sum {

Model createTestModel_float16_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_float16_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, reduce_sum_float16_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_float16_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_float16_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::reduce_sum::get_examples_float16_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, reduce_sum_float16_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_float16_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::reduce_sum::get_examples_float16_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_sum

namespace generated_tests::reduce_sum {

std::vector<::test_helper::MixedTypedExample>& get_examples_3();

} // namespace generated_tests::reduce_sum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_sum {

Model createTestModel_3();
bool is_ignored_3(int);

TEST_F(NeuralnetworksHidlTest, reduce_sum_3) {
  Execute(device,
          createTestModel_3,
          is_ignored_3,
          ::generated_tests::reduce_sum::get_examples_3());
}

TEST_F(ValidationTest, reduce_sum_3) {
  const Model model = createTestModel_3();
  const std::vector<Request> requests = createRequests(::generated_tests::reduce_sum::get_examples_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_sum

namespace generated_tests::reduce_sum {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_3();

} // namespace generated_tests::reduce_sum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_sum {

Model createTestModel_dynamic_output_shape_3();
bool is_ignored_dynamic_output_shape_3(int);

TEST_F(DynamicOutputShapeTest, reduce_sum_dynamic_output_shape_3) {
  Execute(device,
          createTestModel_dynamic_output_shape_3,
          is_ignored_dynamic_output_shape_3,
          ::generated_tests::reduce_sum::get_examples_dynamic_output_shape_3(), true);
}

TEST_F(ValidationTest, reduce_sum_dynamic_output_shape_3) {
  const Model model = createTestModel_dynamic_output_shape_3();
  const std::vector<Request> requests = createRequests(::generated_tests::reduce_sum::get_examples_dynamic_output_shape_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_sum

namespace generated_tests::reduce_sum {

std::vector<::test_helper::MixedTypedExample>& get_examples_all_inputs_as_internal_3();

} // namespace generated_tests::reduce_sum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_sum {

Model createTestModel_all_inputs_as_internal_3();
bool is_ignored_all_inputs_as_internal_3(int);

TEST_F(NeuralnetworksHidlTest, reduce_sum_all_inputs_as_internal_3) {
  Execute(device,
          createTestModel_all_inputs_as_internal_3,
          is_ignored_all_inputs_as_internal_3,
          ::generated_tests::reduce_sum::get_examples_all_inputs_as_internal_3());
}

TEST_F(ValidationTest, reduce_sum_all_inputs_as_internal_3) {
  const Model model = createTestModel_all_inputs_as_internal_3();
  const std::vector<Request> requests = createRequests(::generated_tests::reduce_sum::get_examples_all_inputs_as_internal_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_sum

namespace generated_tests::reduce_sum {

std::vector<::test_helper::MixedTypedExample>& get_examples_all_inputs_as_internal_dynamic_output_shape_3();

} // namespace generated_tests::reduce_sum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_sum {

Model createTestModel_all_inputs_as_internal_dynamic_output_shape_3();
bool is_ignored_all_inputs_as_internal_dynamic_output_shape_3(int);

TEST_F(DynamicOutputShapeTest, reduce_sum_all_inputs_as_internal_dynamic_output_shape_3) {
  Execute(device,
          createTestModel_all_inputs_as_internal_dynamic_output_shape_3,
          is_ignored_all_inputs_as_internal_dynamic_output_shape_3,
          ::generated_tests::reduce_sum::get_examples_all_inputs_as_internal_dynamic_output_shape_3(), true);
}

TEST_F(ValidationTest, reduce_sum_all_inputs_as_internal_dynamic_output_shape_3) {
  const Model model = createTestModel_all_inputs_as_internal_dynamic_output_shape_3();
  const std::vector<Request> requests = createRequests(::generated_tests::reduce_sum::get_examples_all_inputs_as_internal_dynamic_output_shape_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_sum

namespace generated_tests::reduce_sum {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_3();

} // namespace generated_tests::reduce_sum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_sum {

Model createTestModel_relaxed_3();
bool is_ignored_relaxed_3(int);

TEST_F(NeuralnetworksHidlTest, reduce_sum_relaxed_3) {
  Execute(device,
          createTestModel_relaxed_3,
          is_ignored_relaxed_3,
          ::generated_tests::reduce_sum::get_examples_relaxed_3());
}

TEST_F(ValidationTest, reduce_sum_relaxed_3) {
  const Model model = createTestModel_relaxed_3();
  const std::vector<Request> requests = createRequests(::generated_tests::reduce_sum::get_examples_relaxed_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_sum

namespace generated_tests::reduce_sum {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dynamic_output_shape_3();

} // namespace generated_tests::reduce_sum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_sum {

Model createTestModel_relaxed_dynamic_output_shape_3();
bool is_ignored_relaxed_dynamic_output_shape_3(int);

TEST_F(DynamicOutputShapeTest, reduce_sum_relaxed_dynamic_output_shape_3) {
  Execute(device,
          createTestModel_relaxed_dynamic_output_shape_3,
          is_ignored_relaxed_dynamic_output_shape_3,
          ::generated_tests::reduce_sum::get_examples_relaxed_dynamic_output_shape_3(), true);
}

TEST_F(ValidationTest, reduce_sum_relaxed_dynamic_output_shape_3) {
  const Model model = createTestModel_relaxed_dynamic_output_shape_3();
  const std::vector<Request> requests = createRequests(::generated_tests::reduce_sum::get_examples_relaxed_dynamic_output_shape_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_sum

namespace generated_tests::reduce_sum {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_all_inputs_as_internal_3();

} // namespace generated_tests::reduce_sum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_sum {

Model createTestModel_relaxed_all_inputs_as_internal_3();
bool is_ignored_relaxed_all_inputs_as_internal_3(int);

TEST_F(NeuralnetworksHidlTest, reduce_sum_relaxed_all_inputs_as_internal_3) {
  Execute(device,
          createTestModel_relaxed_all_inputs_as_internal_3,
          is_ignored_relaxed_all_inputs_as_internal_3,
          ::generated_tests::reduce_sum::get_examples_relaxed_all_inputs_as_internal_3());
}

TEST_F(ValidationTest, reduce_sum_relaxed_all_inputs_as_internal_3) {
  const Model model = createTestModel_relaxed_all_inputs_as_internal_3();
  const std::vector<Request> requests = createRequests(::generated_tests::reduce_sum::get_examples_relaxed_all_inputs_as_internal_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_sum

namespace generated_tests::reduce_sum {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_all_inputs_as_internal_dynamic_output_shape_3();

} // namespace generated_tests::reduce_sum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_sum {

Model createTestModel_relaxed_all_inputs_as_internal_dynamic_output_shape_3();
bool is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape_3(int);

TEST_F(DynamicOutputShapeTest, reduce_sum_relaxed_all_inputs_as_internal_dynamic_output_shape_3) {
  Execute(device,
          createTestModel_relaxed_all_inputs_as_internal_dynamic_output_shape_3,
          is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape_3,
          ::generated_tests::reduce_sum::get_examples_relaxed_all_inputs_as_internal_dynamic_output_shape_3(), true);
}

TEST_F(ValidationTest, reduce_sum_relaxed_all_inputs_as_internal_dynamic_output_shape_3) {
  const Model model = createTestModel_relaxed_all_inputs_as_internal_dynamic_output_shape_3();
  const std::vector<Request> requests = createRequests(::generated_tests::reduce_sum::get_examples_relaxed_all_inputs_as_internal_dynamic_output_shape_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_sum

namespace generated_tests::reduce_sum {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_3();

} // namespace generated_tests::reduce_sum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_sum {

Model createTestModel_float16_3();
bool is_ignored_float16_3(int);

TEST_F(NeuralnetworksHidlTest, reduce_sum_float16_3) {
  Execute(device,
          createTestModel_float16_3,
          is_ignored_float16_3,
          ::generated_tests::reduce_sum::get_examples_float16_3());
}

TEST_F(ValidationTest, reduce_sum_float16_3) {
  const Model model = createTestModel_float16_3();
  const std::vector<Request> requests = createRequests(::generated_tests::reduce_sum::get_examples_float16_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_sum

namespace generated_tests::reduce_sum {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_dynamic_output_shape_3();

} // namespace generated_tests::reduce_sum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_sum {

Model createTestModel_float16_dynamic_output_shape_3();
bool is_ignored_float16_dynamic_output_shape_3(int);

TEST_F(DynamicOutputShapeTest, reduce_sum_float16_dynamic_output_shape_3) {
  Execute(device,
          createTestModel_float16_dynamic_output_shape_3,
          is_ignored_float16_dynamic_output_shape_3,
          ::generated_tests::reduce_sum::get_examples_float16_dynamic_output_shape_3(), true);
}

TEST_F(ValidationTest, reduce_sum_float16_dynamic_output_shape_3) {
  const Model model = createTestModel_float16_dynamic_output_shape_3();
  const std::vector<Request> requests = createRequests(::generated_tests::reduce_sum::get_examples_float16_dynamic_output_shape_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_sum

namespace generated_tests::reduce_sum {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_all_inputs_as_internal_3();

} // namespace generated_tests::reduce_sum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_sum {

Model createTestModel_float16_all_inputs_as_internal_3();
bool is_ignored_float16_all_inputs_as_internal_3(int);

TEST_F(NeuralnetworksHidlTest, reduce_sum_float16_all_inputs_as_internal_3) {
  Execute(device,
          createTestModel_float16_all_inputs_as_internal_3,
          is_ignored_float16_all_inputs_as_internal_3,
          ::generated_tests::reduce_sum::get_examples_float16_all_inputs_as_internal_3());
}

TEST_F(ValidationTest, reduce_sum_float16_all_inputs_as_internal_3) {
  const Model model = createTestModel_float16_all_inputs_as_internal_3();
  const std::vector<Request> requests = createRequests(::generated_tests::reduce_sum::get_examples_float16_all_inputs_as_internal_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_sum

namespace generated_tests::reduce_sum {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_all_inputs_as_internal_dynamic_output_shape_3();

} // namespace generated_tests::reduce_sum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_sum {

Model createTestModel_float16_all_inputs_as_internal_dynamic_output_shape_3();
bool is_ignored_float16_all_inputs_as_internal_dynamic_output_shape_3(int);

TEST_F(DynamicOutputShapeTest, reduce_sum_float16_all_inputs_as_internal_dynamic_output_shape_3) {
  Execute(device,
          createTestModel_float16_all_inputs_as_internal_dynamic_output_shape_3,
          is_ignored_float16_all_inputs_as_internal_dynamic_output_shape_3,
          ::generated_tests::reduce_sum::get_examples_float16_all_inputs_as_internal_dynamic_output_shape_3(), true);
}

TEST_F(ValidationTest, reduce_sum_float16_all_inputs_as_internal_dynamic_output_shape_3) {
  const Model model = createTestModel_float16_all_inputs_as_internal_dynamic_output_shape_3();
  const std::vector<Request> requests = createRequests(::generated_tests::reduce_sum::get_examples_float16_all_inputs_as_internal_dynamic_output_shape_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_sum

namespace generated_tests::reduce_sum {

std::vector<::test_helper::MixedTypedExample>& get_examples_4();

} // namespace generated_tests::reduce_sum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_sum {

Model createTestModel_4();
bool is_ignored_4(int);

TEST_F(NeuralnetworksHidlTest, reduce_sum_4) {
  Execute(device,
          createTestModel_4,
          is_ignored_4,
          ::generated_tests::reduce_sum::get_examples_4());
}

TEST_F(ValidationTest, reduce_sum_4) {
  const Model model = createTestModel_4();
  const std::vector<Request> requests = createRequests(::generated_tests::reduce_sum::get_examples_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_sum

namespace generated_tests::reduce_sum {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_4();

} // namespace generated_tests::reduce_sum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_sum {

Model createTestModel_dynamic_output_shape_4();
bool is_ignored_dynamic_output_shape_4(int);

TEST_F(DynamicOutputShapeTest, reduce_sum_dynamic_output_shape_4) {
  Execute(device,
          createTestModel_dynamic_output_shape_4,
          is_ignored_dynamic_output_shape_4,
          ::generated_tests::reduce_sum::get_examples_dynamic_output_shape_4(), true);
}

TEST_F(ValidationTest, reduce_sum_dynamic_output_shape_4) {
  const Model model = createTestModel_dynamic_output_shape_4();
  const std::vector<Request> requests = createRequests(::generated_tests::reduce_sum::get_examples_dynamic_output_shape_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_sum

namespace generated_tests::reduce_sum {

std::vector<::test_helper::MixedTypedExample>& get_examples_all_inputs_as_internal_4();

} // namespace generated_tests::reduce_sum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_sum {

Model createTestModel_all_inputs_as_internal_4();
bool is_ignored_all_inputs_as_internal_4(int);

TEST_F(NeuralnetworksHidlTest, reduce_sum_all_inputs_as_internal_4) {
  Execute(device,
          createTestModel_all_inputs_as_internal_4,
          is_ignored_all_inputs_as_internal_4,
          ::generated_tests::reduce_sum::get_examples_all_inputs_as_internal_4());
}

TEST_F(ValidationTest, reduce_sum_all_inputs_as_internal_4) {
  const Model model = createTestModel_all_inputs_as_internal_4();
  const std::vector<Request> requests = createRequests(::generated_tests::reduce_sum::get_examples_all_inputs_as_internal_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_sum

namespace generated_tests::reduce_sum {

std::vector<::test_helper::MixedTypedExample>& get_examples_all_inputs_as_internal_dynamic_output_shape_4();

} // namespace generated_tests::reduce_sum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_sum {

Model createTestModel_all_inputs_as_internal_dynamic_output_shape_4();
bool is_ignored_all_inputs_as_internal_dynamic_output_shape_4(int);

TEST_F(DynamicOutputShapeTest, reduce_sum_all_inputs_as_internal_dynamic_output_shape_4) {
  Execute(device,
          createTestModel_all_inputs_as_internal_dynamic_output_shape_4,
          is_ignored_all_inputs_as_internal_dynamic_output_shape_4,
          ::generated_tests::reduce_sum::get_examples_all_inputs_as_internal_dynamic_output_shape_4(), true);
}

TEST_F(ValidationTest, reduce_sum_all_inputs_as_internal_dynamic_output_shape_4) {
  const Model model = createTestModel_all_inputs_as_internal_dynamic_output_shape_4();
  const std::vector<Request> requests = createRequests(::generated_tests::reduce_sum::get_examples_all_inputs_as_internal_dynamic_output_shape_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_sum

namespace generated_tests::reduce_sum {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_4();

} // namespace generated_tests::reduce_sum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_sum {

Model createTestModel_relaxed_4();
bool is_ignored_relaxed_4(int);

TEST_F(NeuralnetworksHidlTest, reduce_sum_relaxed_4) {
  Execute(device,
          createTestModel_relaxed_4,
          is_ignored_relaxed_4,
          ::generated_tests::reduce_sum::get_examples_relaxed_4());
}

TEST_F(ValidationTest, reduce_sum_relaxed_4) {
  const Model model = createTestModel_relaxed_4();
  const std::vector<Request> requests = createRequests(::generated_tests::reduce_sum::get_examples_relaxed_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_sum

namespace generated_tests::reduce_sum {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dynamic_output_shape_4();

} // namespace generated_tests::reduce_sum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_sum {

Model createTestModel_relaxed_dynamic_output_shape_4();
bool is_ignored_relaxed_dynamic_output_shape_4(int);

TEST_F(DynamicOutputShapeTest, reduce_sum_relaxed_dynamic_output_shape_4) {
  Execute(device,
          createTestModel_relaxed_dynamic_output_shape_4,
          is_ignored_relaxed_dynamic_output_shape_4,
          ::generated_tests::reduce_sum::get_examples_relaxed_dynamic_output_shape_4(), true);
}

TEST_F(ValidationTest, reduce_sum_relaxed_dynamic_output_shape_4) {
  const Model model = createTestModel_relaxed_dynamic_output_shape_4();
  const std::vector<Request> requests = createRequests(::generated_tests::reduce_sum::get_examples_relaxed_dynamic_output_shape_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_sum

namespace generated_tests::reduce_sum {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_all_inputs_as_internal_4();

} // namespace generated_tests::reduce_sum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_sum {

Model createTestModel_relaxed_all_inputs_as_internal_4();
bool is_ignored_relaxed_all_inputs_as_internal_4(int);

TEST_F(NeuralnetworksHidlTest, reduce_sum_relaxed_all_inputs_as_internal_4) {
  Execute(device,
          createTestModel_relaxed_all_inputs_as_internal_4,
          is_ignored_relaxed_all_inputs_as_internal_4,
          ::generated_tests::reduce_sum::get_examples_relaxed_all_inputs_as_internal_4());
}

TEST_F(ValidationTest, reduce_sum_relaxed_all_inputs_as_internal_4) {
  const Model model = createTestModel_relaxed_all_inputs_as_internal_4();
  const std::vector<Request> requests = createRequests(::generated_tests::reduce_sum::get_examples_relaxed_all_inputs_as_internal_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_sum

namespace generated_tests::reduce_sum {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_all_inputs_as_internal_dynamic_output_shape_4();

} // namespace generated_tests::reduce_sum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_sum {

Model createTestModel_relaxed_all_inputs_as_internal_dynamic_output_shape_4();
bool is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape_4(int);

TEST_F(DynamicOutputShapeTest, reduce_sum_relaxed_all_inputs_as_internal_dynamic_output_shape_4) {
  Execute(device,
          createTestModel_relaxed_all_inputs_as_internal_dynamic_output_shape_4,
          is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape_4,
          ::generated_tests::reduce_sum::get_examples_relaxed_all_inputs_as_internal_dynamic_output_shape_4(), true);
}

TEST_F(ValidationTest, reduce_sum_relaxed_all_inputs_as_internal_dynamic_output_shape_4) {
  const Model model = createTestModel_relaxed_all_inputs_as_internal_dynamic_output_shape_4();
  const std::vector<Request> requests = createRequests(::generated_tests::reduce_sum::get_examples_relaxed_all_inputs_as_internal_dynamic_output_shape_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_sum

namespace generated_tests::reduce_sum {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_4();

} // namespace generated_tests::reduce_sum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_sum {

Model createTestModel_float16_4();
bool is_ignored_float16_4(int);

TEST_F(NeuralnetworksHidlTest, reduce_sum_float16_4) {
  Execute(device,
          createTestModel_float16_4,
          is_ignored_float16_4,
          ::generated_tests::reduce_sum::get_examples_float16_4());
}

TEST_F(ValidationTest, reduce_sum_float16_4) {
  const Model model = createTestModel_float16_4();
  const std::vector<Request> requests = createRequests(::generated_tests::reduce_sum::get_examples_float16_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_sum

namespace generated_tests::reduce_sum {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_dynamic_output_shape_4();

} // namespace generated_tests::reduce_sum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_sum {

Model createTestModel_float16_dynamic_output_shape_4();
bool is_ignored_float16_dynamic_output_shape_4(int);

TEST_F(DynamicOutputShapeTest, reduce_sum_float16_dynamic_output_shape_4) {
  Execute(device,
          createTestModel_float16_dynamic_output_shape_4,
          is_ignored_float16_dynamic_output_shape_4,
          ::generated_tests::reduce_sum::get_examples_float16_dynamic_output_shape_4(), true);
}

TEST_F(ValidationTest, reduce_sum_float16_dynamic_output_shape_4) {
  const Model model = createTestModel_float16_dynamic_output_shape_4();
  const std::vector<Request> requests = createRequests(::generated_tests::reduce_sum::get_examples_float16_dynamic_output_shape_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_sum

namespace generated_tests::reduce_sum {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_all_inputs_as_internal_4();

} // namespace generated_tests::reduce_sum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_sum {

Model createTestModel_float16_all_inputs_as_internal_4();
bool is_ignored_float16_all_inputs_as_internal_4(int);

TEST_F(NeuralnetworksHidlTest, reduce_sum_float16_all_inputs_as_internal_4) {
  Execute(device,
          createTestModel_float16_all_inputs_as_internal_4,
          is_ignored_float16_all_inputs_as_internal_4,
          ::generated_tests::reduce_sum::get_examples_float16_all_inputs_as_internal_4());
}

TEST_F(ValidationTest, reduce_sum_float16_all_inputs_as_internal_4) {
  const Model model = createTestModel_float16_all_inputs_as_internal_4();
  const std::vector<Request> requests = createRequests(::generated_tests::reduce_sum::get_examples_float16_all_inputs_as_internal_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_sum

namespace generated_tests::reduce_sum {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_all_inputs_as_internal_dynamic_output_shape_4();

} // namespace generated_tests::reduce_sum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_sum {

Model createTestModel_float16_all_inputs_as_internal_dynamic_output_shape_4();
bool is_ignored_float16_all_inputs_as_internal_dynamic_output_shape_4(int);

TEST_F(DynamicOutputShapeTest, reduce_sum_float16_all_inputs_as_internal_dynamic_output_shape_4) {
  Execute(device,
          createTestModel_float16_all_inputs_as_internal_dynamic_output_shape_4,
          is_ignored_float16_all_inputs_as_internal_dynamic_output_shape_4,
          ::generated_tests::reduce_sum::get_examples_float16_all_inputs_as_internal_dynamic_output_shape_4(), true);
}

TEST_F(ValidationTest, reduce_sum_float16_all_inputs_as_internal_dynamic_output_shape_4) {
  const Model model = createTestModel_float16_all_inputs_as_internal_dynamic_output_shape_4();
  const std::vector<Request> requests = createRequests(::generated_tests::reduce_sum::get_examples_float16_all_inputs_as_internal_dynamic_output_shape_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_sum
