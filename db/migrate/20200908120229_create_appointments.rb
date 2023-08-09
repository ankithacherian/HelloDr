class CreateAppointments < ActiveRecord::Migration[5.2]
  def change
    create_table :appointments do |t|
      t.integer :doctor_id
      t.time :time_slot
      t.date :appt_date
      t.integer :patient_id
      t.boolean :taken

      t.timestamps
    end
  end
end
