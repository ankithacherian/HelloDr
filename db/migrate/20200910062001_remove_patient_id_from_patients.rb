class RemovePatientIdFromPatients < ActiveRecord::Migration[5.2]
  def change
    remove_column :patients, :patient_id, :integer
  end
end
