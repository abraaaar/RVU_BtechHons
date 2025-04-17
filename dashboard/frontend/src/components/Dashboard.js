import React, { useEffect, useState } from "react";
import axios from "axios";

function Dashboard() {
  const [message, setMessage] = useState("");

  useEffect(() => {
    axios.get("http://localhost:8000/api/hello/")
      .then(response => setMessage(response.data.message))
      .catch(error => console.error("API error", error));
  }, []);

  return (
    <div className="p-4">
      <h1 className="text-2xl font-bold mb-4">Drone Surveillance Dashboard</h1>
      <p>Backend says: {message}</p>
    </div>
  );
}

export default Dashboard;
