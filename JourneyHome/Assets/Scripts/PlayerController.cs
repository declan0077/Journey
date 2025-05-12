using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(Rigidbody))]
public class PlayerController : MonoBehaviour
{
    public float walkSpeed = 5f;
    public float sneakSpeed = 2f;
    public float jumpForce = 7f;
    public LayerMask groundLayer;
    public Transform groundCheck;
    public float groundCheckRadius = 0.2f;

    private Rigidbody rb;
    private bool isGrounded;
    private bool isSneaking;

    private Vector3 originalScale;
    private Vector3 sneakScale;

    private void Start()
    {
        rb = GetComponent<Rigidbody>();
        originalScale = transform.localScale;
        sneakScale = new Vector3(originalScale.x, originalScale.y / 2f, originalScale.z);
    }

    private void Update()
    {
        // Ground Check
        isGrounded = Physics.CheckSphere(groundCheck.position, groundCheckRadius, groundLayer);

        // Input for horizontal movement
        float moveInput = Input.GetAxisRaw("Horizontal");
        float speed = isSneaking ? sneakSpeed : walkSpeed;
        Vector3 velocity = new Vector3(moveInput * speed, rb.velocity.y, 0f);
        rb.velocity = velocity;

        if (moveInput < 0)
        {
            if (transform.rotation.eulerAngles.y != 270)
            {
                transform.rotation = Quaternion.Euler(0, 270, 0);
            }
        }
        else if (moveInput > 0)
        {
            if (transform.rotation.eulerAngles.y != 90)
            {
                transform.rotation = Quaternion.Euler(0, 90, 0);
            }
        }
        // Sneaking
        isSneaking = Input.GetKey(KeyCode.LeftShift);
        transform.localScale = isSneaking ? sneakScale : originalScale;

        // Jumping
        if (Input.GetKeyDown(KeyCode.Space) && isGrounded)
        {
            rb.velocity = new Vector3(rb.velocity.x, jumpForce, rb.velocity.z);
        }
    }

    private void OnDrawGizmosSelected()
    {
        if (groundCheck != null)
        {
            Gizmos.color = Color.red;
            Gizmos.DrawWireSphere(groundCheck.position, groundCheckRadius);
        }
    }
}
