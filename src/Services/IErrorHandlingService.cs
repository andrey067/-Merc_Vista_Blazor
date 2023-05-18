namespace Merc_Vista_Blazor.Services
{
    public interface IErrorHandlingService
    {
        Task HandleRequestError(HttpResponseMessage response);
        void HandleRequestError(HttpRequestException response);
    }
}
