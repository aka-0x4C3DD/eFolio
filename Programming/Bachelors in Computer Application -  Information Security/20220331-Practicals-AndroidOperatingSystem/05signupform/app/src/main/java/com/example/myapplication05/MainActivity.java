package com.example.myapplication05;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.text.TextUtils;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.Toast;
import java.io.IOException;

public class MainActivity extends AppCompatActivity {
    EditText etname,etemail,etpass;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        etname=findViewById(R.id.editName);
        etemail=findViewById(R.id.editEmail);
        etpass=findViewById(R.id.editPass);

        Button btn_new=findViewById(R.id.buttonAcount);
        final String name=etname.getText().toString().trim();
        final String email=etemail.getText().toString().trim();
        final String pass=etpass.getText().toString().trim();

        btn_new.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                createNewAcount(name,email,pass);
            }
        });

    }

    private void createNewAcount(String name, String email, String pass) {
        if (TextUtils.isEmpty(name)){
            etname.setError("Please Enter Name");
            etname.requestFocus();
            return;
        }
        if (TextUtils.isEmpty(email)){
            etemail.setError("Please Enter Email");
            etemail.requestFocus();
            return;
        }
        if (TextUtils.isEmpty(pass)){
            etpass.setError("Please Enter Password");
            etpass.requestFocus();
            return;
        }
        Call<ResponseBody>call= MyRetrofit.getInstance().getMyApi().createNewAcount(name,email,pass);
        call.enqueue(new Callback<ResponseBody>() {
            @Override
            public void onResponse(Call<ResponseBody> call, Response<ResponseBody> response) {
                try {
                    String hi=response.body().string();
                    Toast.makeText(getApplicationContext(),hi,Toast.LENGTH_LONG).show();
                } catch (IOException e) {
                    e.printStackTrace();
                }

            }

            @Override
            public void onFailure(Call<ResponseBody> call, Throwable t) {

            }
        }
    }
}