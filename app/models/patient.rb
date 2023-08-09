class Patient < ApplicationRecord
	#after_create :add_appointment

    attr_accessor :appointments_attributes
    belongs_to :user
	has_many :appointments, inverse_of: :patient
	has_many :doctors, through: :appointments


	accepts_nested_attributes_for :appointments

	
  
end
