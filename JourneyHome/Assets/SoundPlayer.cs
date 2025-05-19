using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SoundPlayer : MonoBehaviour
{
    private static SoundPlayer _instance;
    public static SoundPlayer Instance
    {
        get
        {
            if (_instance == null)
            {
                _instance = FindObjectOfType<SoundPlayer>();
                if (_instance == null)
                {
                    GameObject obj = new GameObject("SoundPlayer");
                    _instance = obj.AddComponent<SoundPlayer>();
                }
            }
            return _instance;
        }
    }

    private float _volume = 1.0f;
    public float Volume
    {
        get => _volume;
        set
        {
            _volume = Mathf.Clamp01(value);
            if (_audioSource != null)
                _audioSource.volume = _volume;
        }
    }

    private AudioSource _audioSource;

    void Awake()
    {
        if (_instance != null && _instance != this)
        {
            Destroy(gameObject);
            return;
        }
        _instance = this;
        DontDestroyOnLoad(gameObject);

        _audioSource = GetComponent<AudioSource>();
        if (_audioSource == null)
            _audioSource = gameObject.AddComponent<AudioSource>();
        _audioSource.volume = _volume;
    }

    public void PlaySound(AudioClip clip)
    {
        if (clip == null) return;
        _audioSource.PlayOneShot(clip, _volume);
    }
}
