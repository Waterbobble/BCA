using System;
using System.Collections.Generic;
using System.Configuration;
using System.Data;
using System.Data.SqlClient;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

namespace Web_Tech
{
    public partial class Student_list : System.Web.UI.Page
    {
		public readonly String ConnectionString = ConfigurationManager.ConnectionStrings["DefaultConnection"].ToString();

		protected void Page_Load(object sender, EventArgs e)
        {
			SqlConnection connection = new SqlConnection(ConnectionString);
			connection.Open();
			string query = "SELECT id,first_name,last_name,age FROM Students";
			SqlCommand cmd = new SqlCommand(query, connection);
			SqlDataAdapter sqlDataAdapter = new SqlDataAdapter(cmd);
			DataTable dataTable = new DataTable();
			sqlDataAdapter.Fill(dataTable);
			gridviewforstudents.DataSource = dataTable;
			gridviewforstudents.DataBind();

			connection.Close();


		}
	}
}