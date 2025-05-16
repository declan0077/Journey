using UnityEngine;
using TMPro;
using System.Collections.Generic;

public class HackerTextRain : MonoBehaviour
{
    public TextMeshProUGUI[] texts;
    public float updateRate = 0.05f; // Time between updates
    public int charactersPerText = 50;

    private float timer = 0f;
    private const string charset = "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*";

    void Update()
    {
        timer += Time.deltaTime;
        if (timer >= updateRate)
        {
            timer = 0f;

            foreach (var tmp in texts)
            {
                tmp.text = GenerateRandomString(charactersPerText);
            }
        }
    }

    string GenerateRandomString(int length)
    {
        char[] result = new char[length];
        for (int i = 0; i < length; i++)
        {
            result[i] = charset[Random.Range(0, charset.Length)];
        }
        return new string(result);
    }
}
