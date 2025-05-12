using UnityEngine;
using UnityEngine.UI;

namespace EasyTransition
{
    public class Transition : MonoBehaviour
    {
        public static Transition Instance { get; private set; }

        public TransitionSettings transitionSettings;

        public Transform transitionPanelIN;
        public Transform transitionPanelOUT;

        public CanvasScaler transitionCanvas;

        public Material multiplyColorMaterial;
        public Material additiveColorMaterial;

        private bool initialized;

        private void Awake()
        {
            if (Instance != null && Instance != this)
            {
                Destroy(gameObject);
                return;
            }

            Instance = this;
            DontDestroyOnLoad(gameObject);
        }

        public void InitializeTransition()
        {
            if (initialized) return;
            initialized = true;

            // Set resolution
            transitionCanvas.referenceResolution = transitionSettings.refrenceResolution;

            transitionPanelIN.gameObject.SetActive(false);
            transitionPanelOUT.gameObject.SetActive(false);

            // Set materials
            multiplyColorMaterial = transitionSettings.multiplyColorMaterial;
            additiveColorMaterial = transitionSettings.addColorMaterial;

            if (multiplyColorMaterial == null || additiveColorMaterial == null)
                Debug.LogWarning("No color tint materials set. Color changes will not affect the transition.");

            // Prepare IN panel
            transitionPanelIN.gameObject.SetActive(true);
            GameObject transitionIn = Instantiate(transitionSettings.transitionIn, transitionPanelIN);
            transitionIn.AddComponent<CanvasGroup>().blocksRaycasts = transitionSettings.blockRaycasts;

            ApplyColorTint(transitionIn);
            FlipIfNeeded(transitionIn);
            SetAnimatorSpeed(transitionIn);
        }
        public void PlayTransistionIn()
        {
            transitionPanelIN.gameObject.SetActive(true);
            transitionPanelOUT.gameObject.SetActive(false);
            GameObject transitionIn = Instantiate(transitionSettings.transitionIn, transitionPanelIN);
            transitionIn.AddComponent<CanvasGroup>().blocksRaycasts = transitionSettings.blockRaycasts;
            ApplyColorTint(transitionIn);
            FlipIfNeeded(transitionIn);
            SetAnimatorSpeed(transitionIn);
            float destroyTime = transitionSettings.autoAdjustTransitionTime
                ? transitionSettings.destroyTime / transitionSettings.transitionSpeed
                : transitionSettings.destroyTime;
         //   Destroy(gameObject, destroyTime);
        }
        public void PlayTransitionOut()
        {
            transitionPanelIN.gameObject.SetActive(false);
            transitionPanelOUT.gameObject.SetActive(true);

            GameObject transitionOut = Instantiate(transitionSettings.transitionOut, transitionPanelOUT);
            transitionOut.AddComponent<CanvasGroup>().blocksRaycasts = transitionSettings.blockRaycasts;

            ApplyColorTint(transitionOut);
            FlipIfNeeded(transitionOut);
            SetAnimatorSpeed(transitionOut);

            float destroyTime = transitionSettings.autoAdjustTransitionTime
                ? transitionSettings.destroyTime / transitionSettings.transitionSpeed
                : transitionSettings.destroyTime;

         //   Destroy(gameObject, destroyTime);
        }

        private void ApplyColorTint(GameObject transitionObject)
        {
            if (transitionSettings.isCutoutTransition) return;

            if (transitionObject.TryGetComponent<Image>(out Image parentImage))
                SetMaterialColor(parentImage);

            for (int i = 0; i < transitionObject.transform.childCount; i++)
            {
                if (transitionObject.transform.GetChild(i).TryGetComponent<Image>(out Image childImage))
                    SetMaterialColor(childImage);
            }
        }

        private void SetMaterialColor(Image image)
        {
            if (transitionSettings.colorTintMode == ColorTintMode.Multiply)
            {
                image.material = multiplyColorMaterial;
                image.material.SetColor("_Color", transitionSettings.colorTint);
            }
            else if (transitionSettings.colorTintMode == ColorTintMode.Add)
            {
                image.material = additiveColorMaterial;
                image.material.SetColor("_Color", transitionSettings.colorTint);
            }
        }

        private void FlipIfNeeded(GameObject obj)
        {
            Vector3 scale = obj.transform.localScale;
            if (transitionSettings.flipX) scale.x = -scale.x;
            if (transitionSettings.flipY) scale.y = -scale.y;
            obj.transform.localScale = scale;
        }

        private void SetAnimatorSpeed(GameObject obj)
        {
            if (obj.TryGetComponent<Animator>(out Animator animator))
            {
                animator.speed = transitionSettings.transitionSpeed;
                return;
            }

            for (int i = 0; i < obj.transform.childCount; i++)
            {
                if (obj.transform.GetChild(i).TryGetComponent<Animator>(out Animator childAnim))
                    childAnim.speed = transitionSettings.transitionSpeed;
            }
        }
    }
}
