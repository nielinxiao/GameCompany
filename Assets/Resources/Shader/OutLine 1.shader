Shader "Unlit/OutLine"
{
    Properties
    {
        _MainTex ("Texture", 2D) = "white" {}
        _Color("Color",Color)=(0,0,0,0)
        _Width("_Width",float)=1
        _Speed("Speed",float)=0
        _Amplitude("Amplitude",float)=1
        _Noise("Noise",2D)="white"{}
    }
    SubShader
    {
        Tags { "RenderType"="Opaque" }
        Pass
        {
            Cull Front
            HLSLPROGRAM
            #pragma vertex vert
            #pragma fragment frag
            #include "Packages/com.unity.render-pipelines.core/ShaderLibrary/Color.hlsl"
            #include "Packages/com.unity.render-pipelines.universal/ShaderLibrary/Core.hlsl"
            #include "Packages/com.unity.render-pipelines.universal/ShaderLibrary/Lighting.hlsl"
            struct appdata
            {
                float4 vertex : POSITION;
                float3 normal : NORMAL;
                float2 uv:TEXCOORD0;
            };
            struct v2f
            {
                float4 vertex : SV_POSITION;
            };
            float4 _Color;
            float _Width;
            float _Speed;
            float _Amplitude;
            TEXTURE2D(_Noise);
            float4 _Noise_ST;
            SAMPLER(sampler_Noise);
            v2f vert (appdata v)
            {
                v2f o;
                v.uv=float2(v.uv.x+_Time.y*_Speed,v.uv.y+_Time.y*_Speed);
                float height=_Amplitude* SAMPLE_TEXTURE2D_LOD(_Noise,sampler_Noise,v.uv,0).r;
                v.vertex.xyz+=v.normal*_Width*height;
                o.vertex = TransformObjectToHClip(v.vertex.xyz);
                
                return o;
            }

            half4 frag (v2f i) : SV_Target
            {
                return _Color;
            }
            ENDHLSL
        }
    }
}
