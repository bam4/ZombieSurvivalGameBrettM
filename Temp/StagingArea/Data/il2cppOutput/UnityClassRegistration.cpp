struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_CloudWebServices();
	RegisterModule_CloudWebServices();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

}

void RegisterAllClasses()
{
	//Total: 56 classes
	//0. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//1. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//2. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//3. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//4. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//5. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//6. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//7. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//8. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//9. Rigidbody2D
	void RegisterClass_Rigidbody2D();
	RegisterClass_Rigidbody2D();

	//10. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//11. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//12. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//13. Collider2D
	void RegisterClass_Collider2D();
	RegisterClass_Collider2D();

	//14. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//15. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//16. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//17. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//18. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//19. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//20. Texture2DArray
	void RegisterClass_Texture2DArray();
	RegisterClass_Texture2DArray();

	//21. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//22. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//23. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//24. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//25. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//26. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//27. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//28. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//29. Physics2DSettings
	void RegisterClass_Physics2DSettings();
	RegisterClass_Physics2DSettings();

	//30. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//31. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//32. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//33. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//34. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//35. CircleCollider2D
	void RegisterClass_CircleCollider2D();
	RegisterClass_CircleCollider2D();

	//36. BoxCollider2D
	void RegisterClass_BoxCollider2D();
	RegisterClass_BoxCollider2D();

	//37. PhysicsMaterial2D
	void RegisterClass_PhysicsMaterial2D();
	RegisterClass_PhysicsMaterial2D();

	//38. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//39. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//40. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//41. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//42. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//43. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//44. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//45. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//46. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//47. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//48. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//49. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//50. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//51. SpriteRenderer
	void RegisterClass_SpriteRenderer();
	RegisterClass_SpriteRenderer();

	//52. Sprite
	void RegisterClass_Sprite();
	RegisterClass_Sprite();

	//53. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

	//54. CloudWebServicesManager
	void RegisterClass_CloudWebServicesManager();
	RegisterClass_CloudWebServicesManager();

	//55. UnityConnectSettings
	void RegisterClass_UnityConnectSettings();
	RegisterClass_UnityConnectSettings();

}
