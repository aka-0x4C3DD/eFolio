package com.example.myapplication11;

import androidx.annotation.NonNull;
import androidx.appcompat.app.ActionBar;
import androidx.appcompat.app.AppCompatActivity;
import android.os.Bundle;
import android.view.Menu;
import android.view.MenuItem;
import android.widget.Toast;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

    }

    @Override
    public boolean onCreateOptionsMenu(Menu menu) {
        getMenuInflater().inflate(R.menu.menu, menu);
        return true;
    }

    @Override
    public boolean onOptionsItemSelected(@NonNull MenuItem item) {
        switch (item.getItemId()) {
            case R.id.search:
                Toast.makeText(this, "Search Clicked",
                        Toast.LENGTH_SHORT).show();
                break;
            case R.id.refresh:
                Toast.makeText(this, "Refresh Clicked",
                        Toast.LENGTH_SHORT).show();
                break;
            case R.id.copy:
                Toast.makeText(this, "Copy Clicked",
                        Toast.LENGTH_SHORT).show();
                break;
        }
        return true;
    }
}