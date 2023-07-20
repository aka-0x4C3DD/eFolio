package com.example.myapplication10;

import androidx.appcompat.app.AppCompatActivity;

import android.graphics.Color;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        Button mbutton;
        final EditText mET;
        final TextView mTV;

        mbutton= (Button) findViewById(R.id.button);
        mET=(EditText) findViewById(R.id.editText);
        mTV=(TextView) findViewById(R.id.textView);

        mbutton.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Double convert= Double.parseDouble(mET.getText().toString());
                mTV.setText(String.valueOf(convert*100));
                mTV.setTextColor(Color.RED);
            }
        });
    }
}