#version 330 compatibility
/*============================================================================*/
/* INCOMING PER-FRAGMENT ATTRIBUTES											  */
/*============================================================================*/
in vec4 var_v4Color;
/*============================================================================*/
/* UNIFORM VARIABLES														  */
/*============================================================================*/
/*============================================================================*/
/* SHADER MAIN																  */
/*============================================================================*/
void main(void)
{
	gl_FragColor = var_v4Color;
}
/*============================================================================*/
/* END OF FILE																  */
/*============================================================================*/
