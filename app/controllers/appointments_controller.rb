class AppointmentsController < ApplicationController
  before_action :set_appointment, only: [:show, :edit, :update, :destroy]
  before_action :authenticate_user!, only: [:create]
  after_action :set_taken,  only: [:create]


  # GET /appointments
  # GET /appointments.json
  def index
    
   
    #@appointments = Appointment.all
     @appointments = Appointment.order(:created_at).page(params[:page]).per(2)
    
  end

  # GET /appointments/1
  # GET /appointments/1.json
  def show

  end

  # GET /appointments/new
  def new

    @appointment = Appointment.new
  end

  # GET /appointments/1/edit
  def edit
  end

  # POST /appointments
  # POST /appointments.json
  def create
    
    @appointment = Appointment.new (appointment_params)


    respond_to do |format|
      if @appointment.save
       # @custcity = Custcity.create({cityname: params[:customer][:cityname], cust_id: @customer.id})
      
        #@patient = Patient.create( patient_id: :@appointments.patient.id, name: 81831000, illness: :@appointments.illness, doctor_id: :@appointments.doctor.id)
        #Country.create( name: 'Germany', population: 81831000 )
        format.html { redirect_to @appointment, notice: 'Appointment was successfully created.' }
        format.json { render :show, status: :created, location: @appointment }
      else
        format.html { render :new }
        format.json { render json: @appointment.errors, status: :unprocessable_entity }
      end
    end
  end

  # PATCH/PUT /appointments/1
  # PATCH/PUT /appointments/1.json
  def update
    respond_to do |format|
      if @appointment.update(appointment_params)
        format.html { redirect_to @appointment, notice: 'Appointment was successfully updated.' }
        format.json { render :show, status: :ok, location: @appointment }
      else
        format.html { render :edit }
        format.json { render json: @appointment.errors, status: :unprocessable_entity }
      end
    end
  end

  # DELETE /appointments/1
  # DELETE /appointments/1.json
  def destroy
    @appointment.destroy
    respond_to do |format|
      format.html { redirect_to appointments_url, notice: 'Appointment was successfully destroyed.' }
      format.json { head :no_content }
    end
  end

  private
    # Use callbacks to share common setup or constraints between actions.
    def set_appointment
      @appointment = Appointment.find(params[:id])
    end

    def set_taken
    
     @appointment.taken = 'Y'
   end
   private
  def add_appointment
    #a=Appointment.create!(:doctor_id, :time_slot, :appt_date, :taken =>'Y')
    @appointment = Appointment.new(app_params)
        
    
   @appointment.save
       redirect_to patients_path
      
 end

   

    # Only allow a list of trusted parameters through.
    def appointment_params
      params.require(:appointment).permit(:doctor_id, :time_slot, :appt_date, :patient_id, :taken)
    end
end
