class PatientsController < ApplicationController
  before_action :set_patient, only: [:show, :edit, :update, :destroy]
    before_action :authenticate_user!, only: [:create]
 


  # GET /patients
  # GET /patients.json
  def index

   # patient.current_user.all
   #@patients = Patient.find_by_user_id(current_user.id)
   @patients = current_user.patients.all
   # @patients = Patient.all
  end

  # GET /patients/1
  # GET /patients/1.json
  def show
  end

  # GET /patients/new
  def new
   # @user_patient = current_user.patient.all
  
    @patient = Patient.new
   
  end

  # GET /patients/1/edit
  def edit
  end

  # POST /patients
  # POST /patients.json
  def create
    #@patient=current_user.patients.new(patient_params)
   @patient = Patient.new(patient_params)
  #@patient.appointments.new(app_params)
@patient.appointments.build(app_params)
    
    respond_to do |format|
      if @patient.save
        

        format.html { redirect_to @patient, notice: 'Appointment was successfully created.' }
        format.json { render :show, status: :created, location: @patient }
      else
        format.html { render :new }
        format.json { render json: @patient.errors, status: :unprocessable_entity }
      end
    end
  end

  # PATCH/PUT /patients/1
  # PATCH/PUT /patients/1.json
  def update
    respond_to do |format|
      if @patient.update(patient_params)
        format.html { redirect_to @patient, notice: 'Appointment was successfully updated.' }
        format.json { render :show, status: :ok, location: @patient }
      else
        format.html { render :edit }
        format.json { render json: @patient.errors, status: :unprocessable_entity }
      end
    end
  end

  # DELETE /patients/1
  # DELETE /patients/1.json
  def destroy
    @patient.destroy
    respond_to do |format|
      format.html { redirect_to patients_url, notice: 'Appointment was successfully cancelled.' }
      format.json { head :no_content }
    end
  end

  private
    # Use callbacks to share common setup or constraints between actions.
    def set_patient
      @patient = Patient.find(params[:id])
    end

     def add_appointment
    
      
Appointment.create!(patient_params)
    end

    # Only allow a list of trusted parameters through.
    def patient_params
     # params.require(:patient).permit(:name, :doctor_id, appointments_fields: [:time_slot, :appt_date, :taken =>'Y'])
      params.require(:patient).permit(:name, :doctor_id, :appdate, :apptime, :user_id )
    end

    def app_params
     
      params.require(:patient).permit(:doctor_id, :patient_id )
      #params.require(:patient).permit( :doctor_id, :time_slot, :appt_date, :patient_id )
    end
end
