class AddAppDateToPatients < ActiveRecord::Migration[5.2]
  def change
    add_column :patients, :appdate, :date
    add_column :patients, :apptime, :time
  end
end
