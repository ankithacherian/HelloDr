class ChangeColumnRolesInUsers < ActiveRecord::Migration[5.2]
  def change
  	change_column :users, :admin_role , :boolean , default: false
  	change_column :users, :patient_role,  :boolean, default: true
  end
end
