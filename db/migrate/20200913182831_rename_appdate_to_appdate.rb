class RenameAppdateToAppdate < ActiveRecord::Migration[5.2]
  def change
  	 rename_column :patients, :Appdate, :appdate
  	  rename_column :patients, :Apptime, :apptime
  end
end
