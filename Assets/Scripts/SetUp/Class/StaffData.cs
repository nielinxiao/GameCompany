[System.Serializable]
public class StaffData
{
    public string Name;
    public float Money;
    public float SaveMoney;
    public float workingTimer;
    public float HopeWorkingTime;
    public string ErrorMessage;
    public float HappyWorkingTimer;
    public float NormalWorkingTimer;
    public float TiredWorkTimer;
    public float LittleTiredWorkTimer;
    public StaffState staffState;
    public StaffData(string Name, float Money, float SaveMoney, float workingTimer)
    {
        this.Name = Name;
        this.Money = Money;
        this.SaveMoney = SaveMoney;
        this.HopeWorkingTime = workingTimer;
    }
}