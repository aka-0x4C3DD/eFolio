package com.example.myapplication03;

import androidx.appcompat.app.AppCompatActivity;
import android.widget.*;
import android.view.View;
import android.os.Bundle;

public class MainActivity extends AppCompatActivity {
    EditText E1;
    Button B1;
    TextView T1;


    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        E1 = (EditText)findViewById(R.id.MyEditText);
        B1 = (Button)findViewById(R.id.displayText);
        T1 = (TextView) findViewById(R.id.MyTextView);

        B1.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                {
                    Toast.makeText(MainActivity.this, E1.getText().toString(), Toast.LENGTH_LONG).show();
                    T1.setText(E1.getText());
                }
            }
        });
    }
}