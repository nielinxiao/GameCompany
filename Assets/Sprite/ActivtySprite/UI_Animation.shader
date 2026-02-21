Shader "Unlit/UI_Animation"
{
    Properties
    {
        _MainTex ("Texture", 2D) = "white" {}
        _Speed("Roate Speed",float)=1
        _Line("LineCount",int)=3
        _List("ListCount",int)=3
        _SelectLine("SelectLine",int)=6
        _SelectList("SelectList",int)=1
        _EndSelect("EndSelect", 2D) = "white" {}
        _SelectIndex("SelectIndex",int)=0
        [Toggle]_OnComplited("Complited",int)=0
    }
    SubShader
    {
        Tags { "Queue"="Transparent" }
        Pass
        {
            Blend SrcAlpha OneMinusSrcAlpha
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
            TEXTURE2D(_EndSelect);
            SAMPLER(sampler_MainTex);
            SAMPLER(sampler_EndSelect);
            float4 _MainTex_ST;
            float4 _EndSelect_ST;
            CBUFFER_START(UnityPerMaterial)
            float _Line;
            float _List;
            float _SelectList;
            float _SelectLine;
            float _Speed;
            int _OnComplited;
            int _SelectIndex;
            CBUFFER_END
            v2f vert (appdata v)
            {
                v2f o;
                o.vertex = TransformObjectToHClip(v.vertex.xyz);
                if(_OnComplited==1)
                {
                    int LineCount= _SelectIndex%_SelectLine;
                    int ListCount=_SelectIndex/_SelectLine;
                    float2 ScreenUV=float2(LineCount/_SelectLine,ListCount/_SelectList);
                    float2 uv=float2(v.uv.x/_SelectLine,v.uv.y/_SelectList);
                    o.uv = ScreenUV+uv;
                }
                else
                {
                    int index =(_Time.y*_Speed)%(_Line*_List);
                    int LineCount= index%_Line;
                    int ListCount=index/_Line;
                    float2 ScreenUV=float2(LineCount/_Line,ListCount/_List);
                    float2 uv=float2(v.uv.x/_Line,v.uv.y/_List);
                    o.uv = ScreenUV+uv;
                }
                return o;
            }

            half4 frag (v2f i) : SV_Target
            {
                half4 col ;
                if(_OnComplited==1)
                {
                    col=SAMPLE_TEXTURE2D(_EndSelect,sampler_EndSelect,i.uv);
                }
                else
                {
                    col= SAMPLE_TEXTURE2D(_MainTex, sampler_MainTex, i.uv);
                }
                return col;
            }
            ENDHLSL
        }
    }
}
