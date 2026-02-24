<%@ Page Title="" Language="C#" MasterPageFile="~/Site.Master" AutoEventWireup="true" CodeBehind="Student.aspx.cs" Inherits="Web_Tech.Student" %>
<asp:Content ID="Content1" ContentPlaceHolderID="MainContent" runat="server">

	<label> First_name</label>
	<asp:TextBox ID="txtFirstName" runat="server"></asp:TextBox>

	<label>Last_name</label>
	<asp:TextBox ID="txtLastName" runat="server"></asp:TextBox>

	<label>Age</label>
	<asp:TextBox ID="txtAge" runat="server"></asp:TextBox>

	<asp:Button runat="server" Text="Submit" OnClick="Clicked" />

</asp:Content>

