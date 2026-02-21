Shader "Unlit/outDraw"
{
    Properties
    {
        _MainTex ("_MainTex", 2D) = "white" {}
        _EdgeColor("EdgeColor", Color) = (1,1,1,1)
        _Instensy("_Instensy",float)=1
    }
    SubShader
    {
        Tags { "RenderType"="Transparent" }
        Pass
        {
            Name "OutDrawPass"
            ZTest Always
            Cull Off
            ZWrite Off
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
                float2 uv[9] : TEXCOORD0;
                float4 vertex : SV_POSITION;
            };
            half3 _EdgeColor;
            TEXTURE2D(_MainTex);
            half4 _MainTex_ST;
            SAMPLER(sampler_MainTex);
            half4 _MainTex_TexelSize;
            float _Instensy;
            v2f vert (appdata v)
            {
                v2f o;
                o.vertex = TransformObjectToHClip(v.vertex.xyz);
                o.uv[0]=v.uv+_MainTex_TexelSize.xy*half2(-1,-1);
                o.uv[1]=v.uv+_MainTex_TexelSize.xy*half2(0,-1);
                o.uv[2]=v.uv+_MainTex_TexelSize.xy*half2(1,-1);
                o.uv[3]=v.uv+_MainTex_TexelSize.xy*half2(-1,0);
                o.uv[4]=v.uv;
                o.uv[5]=v.uv+_MainTex_TexelSize.xy*half2(1,0);
                o.uv[6]=v.uv+_MainTex_TexelSize.xy*half2(-1,1);
                o.uv[7]=v.uv+_MainTex_TexelSize.xy*half2(0,1);
                o.uv[8]=v.uv+_MainTex_TexelSize.xy*half2(1,1);
                return o;
            }
            half cal(half4 color)
            {
                return 0.2126*color.r+0.7152*color.g+0.0722*color.b;
            }
            half soble(v2f i)
            {
                //sobel算子两个卷积核
                half GX[9]=
                {
                    -1,-2,-1,
                     0, 0, 0,
                     1, 2, 1
                };
                half GY[9]=
                {
                     -1, 0, 1,
                     -2, 0, 2,
                     -1, 0, 1
                };
                half L;
                half edgeX=0;//水平方向梯度值
                half edgeY=0;//竖直方向梯度值
                for(int j=0;j<9;j++)
                {
                    L=cal(SAMPLE_TEXTURE2D(_MainTex,sampler_MainTex,i.uv[j]));
                    edgeX+=L*GX[j];
                    edgeY+=L*GY[j];
                }
                return abs(edgeX)+abs(edgeY);
            }
            half4 frag (v2f i) : SV_Target
            {
                half3 col = SAMPLE_TEXTURE2D(_MainTex,sampler_MainTex, i.uv[4]).rgb;
                half edge= saturate(soble(i)*_Instensy);
                half3 color=lerp(col,_EdgeColor,edge);
                return half4(color,1);
            }
            ENDHLSL
        }
    }
}
