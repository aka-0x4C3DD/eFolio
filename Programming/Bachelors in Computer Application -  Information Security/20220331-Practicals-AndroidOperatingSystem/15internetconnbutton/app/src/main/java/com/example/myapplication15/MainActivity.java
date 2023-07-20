package com.example.myapplication15;

import androidx.appcompat.app.AlertDialog;
import androidx.appcompat.app.AppCompatActivity;
import android.content.Context;
import android.content.DialogInterface;
import android.net.ConnectivityManager;
import android.net.NetworkCapabilities;
import android.os.Build;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.Toast;

public class MainActivity extends AppCompatActivity {
    Button btn_check;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        btn_check = findViewById(R.id.btn_check);
        btn_check.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                if (!isNetworkAvailable() == true) {
                    new AlertDialog.Builder(getApplicationContext())
                            .setIcon(android.R.drawable.ic_dialog_alert)
                            .setTitle("Internet Connection Alert")
                            .setMessage("Please Check Your Internet Connection")
                            .setPositiveButton("Close", new DialogInterface.OnClickListener() {
                                @Override
                                public void onClick(DialogInterface dialogInterface, int i) {
                                    finish();
                                }
                            }).show();
                } else if (isNetworkAvailable() == true) {
                    Toast.makeText(MainActivity.this, "Welcome", Toast.LENGTH_LONG).show();
                }
            }

            public boolean isNetworkAvailable() {
                ConnectivityManager connectivityManager = (ConnectivityManager) getSystemService(Context.CONNECTIVITY_SERVICE);
                if (connectivityManager != null) {
                    if (android.os.Build.VERSION.SDK_INT >= Build.VERSION_CODES.Q) {
                        NetworkCapabilities capabilities = connectivityManager.getNetworkCapabilities(connectivityManager.getActiveNetwork());
                        if (capabilities != null) {
                            if (capabilities.hasTransport(NetworkCapabilities.TRANSPORT_CELLULAR)) {
                                return true;
                            } else if (capabilities.hasTransport(NetworkCapabilities.TRANSPORT_WIFI)) {
                                return true;
                            } else if (capabilities.hasTransport(NetworkCapabilities.TRANSPORT_ETHERNET)) {
                                return true;
                            }
                        }
                    }
                }
                return false;
            }
        });
    }
}