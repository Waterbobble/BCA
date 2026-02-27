<%@ Page Title="" Language="C#" MasterPageFile="~/Site.Master" AutoEventWireup="true" CodeBehind="Student_list.aspx.cs" Inherits="Web_Tech.Student_list" %>
<asp:Content ID="Content1" ContentPlaceHolderID="MainContent" runat="server">
<asp:GridView ID="gridviewforstudents" runat="server" Width="100%" AutoGenerateColumns="false">
<columns>
	<asp:BoundField DataField="id" HeaderText="ID" />
	<asp:BoundField DataField="first_name" HeaderText="FIRST NAME" />
	<asp:BoundField DataField="last_name" HeaderText="LAST NAME" />
	<asp:BoundField DataField="age" HeaderText="AGE" />
	</columns>
</asp:GridView>
</asp:Content>
