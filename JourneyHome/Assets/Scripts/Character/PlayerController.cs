using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(Rigidbody))]
public class PlayerController : MonoBehaviour
{
    public float walkSpeed = 5f;
    public float sneakSpeed = 2f;


    [Header("Jump Settings")]
    public AnimationCurve jumpCurve; 
    public float jumpDuration = 0.5f; 
    public float jumpForce = 7f;
    private bool isJumping = false;
    private float jumpTimer = 0f;

    [Header("Air Control Settings")]
    public float airControlMultiplier = 0.5f; 

    public LayerMask groundLayer;
    public Transform groundCheck;
    public float groundCheckRadius = 0.2f;

    private Rigidbody rb;
    private bool isGrounded;
    private bool isSneaking;


    private Animator animator;
   [SerializeField] private Transform spawnLocation;


    public bool isClimbing = false;
    public Transform model; 

    private void Start()
    {
        animator = GetComponent<Animator>();
        rb = GetComponent<Rigidbody>();
    }

    private void Update()
    {
        // Ground Check
        isGrounded = Physics.CheckSphere(groundCheck.position, groundCheckRadius, groundLayer);
       
        
        if (GameManager.Instance.GetGameState() == GameManager.GameState.Dialog)
        {
            rb.velocity = Vector3.zero;
            return;
        }



        if (!isClimbing && isGrounded)
        {
            // Movement input
            float moveInput = Input.GetAxisRaw("Horizontal");

            float speed = isSneaking ? sneakSpeed : walkSpeed;
            Vector3 velocity = new Vector3(moveInput * speed, rb.velocity.y, 0f);
            rb.velocity = velocity;

            // Flip character
            if (moveInput < 0)
                transform.rotation = Quaternion.Euler(0, 270, 0);
            else if (moveInput > 0)
                transform.rotation = Quaternion.Euler(0, 90, 0);

            animator.SetBool("IsWalking", moveInput != 0);
        }


        // Sneaking
        isSneaking = Input.GetKey(KeyCode.LeftShift);



            // Jump
            if (Input.GetKeyDown(KeyCode.Space) && isGrounded)
            {
                isJumping = true;
                jumpTimer = 0f;
                animator.SetTrigger("Jump");
            }


            // Animator parameters
            animator.SetBool("IsSneaking", isSneaking);
            animator.SetBool("IsClimbing", isClimbing);
            animator.SetBool("InAir", isGrounded);

    }
    
    private void FixedUpdate()
    {
        PreventFallBelowGround();
        if (GameManager.Instance.GetGameState() == GameManager.GameState.Play)
        {
            isGrounded = Physics.CheckSphere(groundCheck.position, groundCheckRadius, groundLayer);

            float moveInput = Input.GetAxisRaw("Horizontal");
            float speed = isSneaking ? sneakSpeed : walkSpeed;

            float horizontalSpeed = isGrounded ? speed : speed * airControlMultiplier;

            Vector3 velocity = new Vector3(moveInput * horizontalSpeed, rb.velocity.y, 0f);

            if (isJumping)
            {
                jumpTimer += Time.fixedDeltaTime;
                float normalizedTime = jumpTimer / jumpDuration;

                if (normalizedTime >= 1f)
                {
                    isJumping = false;
                }
                else
                {
                    float curveValue = jumpCurve.Evaluate(normalizedTime);
                    velocity.y = curveValue * jumpForce;
                }
            }

            rb.velocity = velocity;
        }
    }

    public void ReturnToSpawn()
    {
        // Return the player to the spawn location
        transform.position = spawnLocation.position;
        transform.rotation = spawnLocation.rotation;
        rb.velocity = Vector3.zero; // Reset velocity
    }

    //jumping bug temp solution 
    private void PreventFallBelowGround()
    {
        if (transform.position.y < -1f)
        {
            transform.position = new Vector3(transform.position.x, -1f, transform.position.z);

            rb.velocity = new Vector3(rb.velocity.x, 0f, rb.velocity.z);
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
