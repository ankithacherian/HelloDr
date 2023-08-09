class ApplicationController < ActionController::Base
	before_action :configure_permitted_parameters, if:  :devise_controller?

protected

  def configure_permitted_parameters

   devise_parameter_sanitizer.permit(:sign_up, keys: [:name, :age, :dateofbirth, :gender])
   devise_parameter_sanitizer.permit(:account_update, keys: [:name, :age, :dateofbirth, :gender])
    
          end

  end

	
  

