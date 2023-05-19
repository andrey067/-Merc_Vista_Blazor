using Merc_Vista_Blazor;
using Merc_Vista_Blazor.Services;
using Microsoft.AspNetCore.Components.Web;
using Microsoft.AspNetCore.Components.WebAssembly.Hosting;
using MudBlazor.Services;

var builder = WebAssemblyHostBuilder.CreateDefault(args);
builder.RootComponents.Add<App>("#app");
builder.RootComponents.Add<HeadOutlet>("head::after");

builder.Services.AddScoped(sp =>
{
    var httpClient = new HttpClient();
    var apiBaseUrl = builder.Configuration["ServicesUrlOptions:ApiBaseUrl"]!;
    httpClient.DefaultRequestHeaders.Add("Origin", "*");
    httpClient.BaseAddress = new Uri(apiBaseUrl);
    return httpClient;
});
builder.Services.AddMudServices();

builder.Services.AddScoped<IServiceCaller, ServiceCaller>();
builder.Services.AddScoped<IErrorHandlingService, ErrorHandlingService>();

await builder.Build().RunAsync();
