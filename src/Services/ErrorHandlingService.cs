using Merc_Vista_Blazor.Models;
using Merc_Vista_Blazor.Shared;
using MudBlazor;
using System.Net.Http.Json;

namespace Merc_Vista_Blazor.Services
{
    public class ErrorHandlingService: IErrorHandlingService
    {
        private readonly IDialogService _dialogService;

        public ErrorHandlingService(IDialogService dialogService) => _dialogService = dialogService;

        public async Task HandleRequestError(HttpResponseMessage response)
        {
            var parameters = new DialogParameters();
            var errors = await response.Content.ReadFromJsonAsync<List<ErrorResponseModel>>();
            var options = new DialogOptions { CloseOnEscapeKey = true };
            parameters.Add("Errors", errors);
            parameters.Add("Navigation", "carregar-arquivos");
            _dialogService.Show<ErrorDialog>("Erro", parameters, options);
        }

        public void HandleRequestError(HttpRequestException exception)
        {
            var parameters = new DialogParameters();
            var errors = new List<ErrorResponseModel> { new ErrorResponseModel("Erro", exception.Message) };
            var options = new DialogOptions { CloseOnEscapeKey = true };
            parameters.Add("Errors", errors);
            _dialogService.Show<ErrorDialog>("Erro", parameters, options);
        }
    }
}
