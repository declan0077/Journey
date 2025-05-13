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


    private Animator animator;

    public bool isClimbing = false;
    public Transform model; // Assign this in the Inspector

    private void Start()
    {
        animator = GetComponent<Animator>();

        rb = GetComponent<Rigidbody>();
    }

    private void Update()
    {
        // Ground Check
        isGrounded = Physics.CheckSphere(groundCheck.position, groundCheckRadius, groundLayer);

        // Movement input
        float moveInput = Input.GetAxisRaw("Horizontal");

        // Sneaking
        isSneaking = Input.GetKey(KeyCode.LeftShift);
   

        // Apply horizontal movement
        float speed = isSneaking ? sneakSpeed : walkSpeed;
        Vector3 velocity = new Vector3(moveInput * speed, rb.velocity.y, 0f);
        rb.velocity = velocity;

        // Flip character
        if (moveInput < 0)
            transform.rotation = Quaternion.Euler(0, 270, 0);
        else if (moveInput > 0)
            transform.rotation = Quaternion.Euler(0, 90, 0);

        // Jump
        if (Input.GetKeyDown(KeyCode.Space) && isGrounded)
        {
            rb.velocity = new Vector3(rb.velocity.x, jumpForce, rb.velocity.z);
            animator.SetTrigger("Jump");
        }

        // Animator parameters
        animator.SetBool("IsWalking", moveInput != 0 && isGrounded && !isSneaking);
        animator.SetBool("IsSneaking", isSneaking);
        animator.SetBool("IsClimbing", isClimbing); 
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
