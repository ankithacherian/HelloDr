class Appointment < ApplicationRecord
	 attr_accessor :appointments_attributes
	belongs_to :patient
	belongs_to :doctor
	accepts_nested_attributes_for :doctor

	
end 
