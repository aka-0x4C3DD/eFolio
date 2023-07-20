package com.example.myapplication14;

import androidx.appcompat.app.AppCompatActivity;
import androidx.constraintlayout.widget.ConstraintLayout;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.Button;
import android.widget.EditText;
import android.widget.Spinner;

import java.lang.reflect.Array;

public class MainActivity extends AppCompatActivity  {
    public Spinner sp;
    public EditText kg,pd,cm,ft;
    public Button height,weight;
    public ConstraintLayout h,w;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        sp= findViewById(R.id.spinner);
        kg=findViewById(R.id.kgWeight);
        pd=findViewById(R.id.pdsWeight);
        cm=findViewById(R.id.cmHeight);
        ft=findViewById(R.id.feetHeight);
        height=findViewById(R.id.heightConvert);
        weight=findViewById(R.id.weightConvert);
        h=findViewById(R.id.height);
        w=findViewById(R.id.weight);

        String[] values= new String[]{"Weight","Height"};
        ArrayAdapter<String> options =new ArrayAdapter<String>(this,android.R.layout.simple_spinner_item, values );
        options.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        sp.setAdapter(options);


        sp.setOnItemSelectedListener(new AdapterView.OnItemSelectedListener() {
            @Override
            public void onItemSelected(AdapterView<?> adapterView, View view, int i, long l) {
                w.setVisibility(View.VISIBLE);
            }

            @Override
            public void onNothingSelected(AdapterView<?> adapterView) {
                h.setVisibility(View.INVISIBLE);
                w.setVisibility(View.INVISIBLE);
            }
        });


        weight.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                double kilo = Double.parseDouble(kg.getText().toString());
                double pounds = kilo * 2.205;

                String res= String.format("Pounds : %.2f",pounds);
                pd.setText(res);
            }
        });


    }

}