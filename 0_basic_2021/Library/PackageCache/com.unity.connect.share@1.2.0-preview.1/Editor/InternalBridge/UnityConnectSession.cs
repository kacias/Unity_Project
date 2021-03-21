using UnityEditor.Connect;

public class UnityConnectSession
{
    static UnityConnectSession _instance = new UnityConnectSession();

    public static UnityConnectSession instance
    {
        get => _instance;
    }

    public string GetAccessToken()
    {
        return UnityConnect.instance.GetAccessToken();
    }

    public string GetEnvironment()
    {
        return UnityConnect.instance.GetEnvironment();
    }

    public void ShowLogin()
    {
        UnityConnect.instance.ShowLogin();
    }

    /// <summary>
    /// NOTE no-op if user is not logged in
    /// </summary>
    /// <param name="url"></param>
    public static void OpenAuthorizedURLInWebBrowser(string url) =>
        UnityConnect.instance.OpenAuthorizedURLInWebBrowser(url);

    public static bool loggedIn => UnityConnect.instance.loggedIn;
}
