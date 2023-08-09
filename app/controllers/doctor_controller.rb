class DoctorController < ApplicationController
  def index
  	@doctor = Doctor.all
  end

  def show
  end
end
