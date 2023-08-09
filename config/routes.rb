Rails.application.routes.draw do
  
  
 root to: 'pages#home'
 devise_for :users
  get 'pages/contact'
  resources :patients
  
  get 'doctor/index'
  get 'doctor/show'
  resources :appointments
  get 'appointments/show'
  # For details on the DSL available within this file, see http://guides.rubyonrails.org/routing.html
end
