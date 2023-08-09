class AddRolesToUsers < ActiveRecord::Migration[5.2]
  def change
    add_column :users, :admin_role, :boolean, default: false
    add_column :users, :doctor_role, :boolean default: false
    add_column :users, :patient_role, :boolean default: true
  end
end
