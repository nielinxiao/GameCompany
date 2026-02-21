Shader "Unlit/UIProgress"
{
    Properties
    {
        _MainTex ("Texture", 2D) = "white" {}
        _Distance("_Distance",Range(0,1))=0
    }
    SubShader
    {
        Tags
        {
            "RenderPipeline" = "UniversalPipeline"
            "Queue"="Transparent"
        }
        Stencil
        {
            Ref 5
            Comp Always
            Pass replace
        }
        Pass
        {
            Blend Zero One
            HLSLPROGRAM
            
            #pragma vertex vert
            #pragma fragment frag
            #include "Packages/com.unity.render-pipelines.core/ShaderLibrary/Color.hlsl"
            #include "Packages/com.unity.render-pipelines.universal/ShaderLibrary/Core.hlsl"
            struct appdata
            {
                float4 vertex : POSITION;
                float2 uv : TEXCOORD0;
            };
            struct v2f
            {
                float2 uv : TEXCOORD0;
                float4 vertex : SV_POSITION;
            };
            TEXTURE2D(_MainTex);
            SAMPLER(sampler_MainTex);
            float4 _MainTex_ST;
            float _Distance;
            v2f vert (appdata v)
            {
                v2f o;
                o.vertex = TransformObjectToHClip(v.vertex.xyz);
                o.uv = TRANSFORM_TEX(v.uv, _MainTex);
                return o;
            }
            half4 frag (v2f i) : SV_Target
            {
                half4 col = SAMPLE_TEXTURE2D(_MainTex,sampler_MainTex, i.uv);
                float2 center=float2(0.5,0.5);
                float distance= length(i.uv-center);
                clip(_Distance-distance);
                return col;
            }
            ENDHLSL
        }
    }
}
