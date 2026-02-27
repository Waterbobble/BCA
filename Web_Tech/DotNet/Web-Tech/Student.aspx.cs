using System;
using System.Collections.Generic;
using System.Configuration;
using System.Data.SqlClient;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

namespace Web_Tech
{
	public partial class Student : System.Web.UI.Page
    {
		public readonly String ConnectionString = ConfigurationManager.ConnectionStrings["DefaultConnection"].ToString();

		protected void Page_Load(object sender, EventArgs e)
        {

        }

		protected void Clicked(object sender, EventArgs e)
		{
            
            var first = txtFirstName.Text;
            var last = txtLastName.Text;
            var age = txtAge.Text;
            
            SqlConnection connection = new SqlConnection(ConnectionString);
            connection.Open();
            string query = $"INSERT INTO Students (first_name, last_name, age) VALUES ('{first}', '{last}', {age})";
            SqlCommand cmd = new SqlCommand(query, connection);
            cmd.ExecuteNonQuery();
            connection.Close();

		}
	}
}