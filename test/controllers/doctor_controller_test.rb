require 'test_helper'

class DoctorControllerTest < ActionDispatch::IntegrationTest
  test "should get index" do
    get doctor_index_url
    assert_response :success
  end

  test "should get show" do
    get doctor_show_url
    assert_response :success
  end

end
