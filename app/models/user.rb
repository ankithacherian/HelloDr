class User < ApplicationRecord
  # Include default devise modules. Others available are:
  # :confirmable, :lockable, :timeoutable, :trackable and :omniauthable
  devise :database_authenticatable, :registerable,
         :recoverable, :rememberable, :validatable
         has_many :patients
         validates_presence_of :name,  :password
         validates :email, uniqueness: true
         validates :password, length:{in: 6..20}
end
