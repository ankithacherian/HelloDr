json.extract! appointment, :id, :doctor_id, :time_slot, :appt_date, :patient_id, :taken, :created_at, :updated_at
json.url appointment_url(appointment, format: :json)
