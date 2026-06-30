#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001388F0
// Address: 0x1388f0 - 0x138cf0
void sub_001388F0_0x1388f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001388F0_0x1388f0");
#endif

    switch (ctx->pc) {
        case 0x1388f0u: goto label_1388f0;
        case 0x1388f4u: goto label_1388f4;
        case 0x1388f8u: goto label_1388f8;
        case 0x1388fcu: goto label_1388fc;
        case 0x138900u: goto label_138900;
        case 0x138904u: goto label_138904;
        case 0x138908u: goto label_138908;
        case 0x13890cu: goto label_13890c;
        case 0x138910u: goto label_138910;
        case 0x138914u: goto label_138914;
        case 0x138918u: goto label_138918;
        case 0x13891cu: goto label_13891c;
        case 0x138920u: goto label_138920;
        case 0x138924u: goto label_138924;
        case 0x138928u: goto label_138928;
        case 0x13892cu: goto label_13892c;
        case 0x138930u: goto label_138930;
        case 0x138934u: goto label_138934;
        case 0x138938u: goto label_138938;
        case 0x13893cu: goto label_13893c;
        case 0x138940u: goto label_138940;
        case 0x138944u: goto label_138944;
        case 0x138948u: goto label_138948;
        case 0x13894cu: goto label_13894c;
        case 0x138950u: goto label_138950;
        case 0x138954u: goto label_138954;
        case 0x138958u: goto label_138958;
        case 0x13895cu: goto label_13895c;
        case 0x138960u: goto label_138960;
        case 0x138964u: goto label_138964;
        case 0x138968u: goto label_138968;
        case 0x13896cu: goto label_13896c;
        case 0x138970u: goto label_138970;
        case 0x138974u: goto label_138974;
        case 0x138978u: goto label_138978;
        case 0x13897cu: goto label_13897c;
        case 0x138980u: goto label_138980;
        case 0x138984u: goto label_138984;
        case 0x138988u: goto label_138988;
        case 0x13898cu: goto label_13898c;
        case 0x138990u: goto label_138990;
        case 0x138994u: goto label_138994;
        case 0x138998u: goto label_138998;
        case 0x13899cu: goto label_13899c;
        case 0x1389a0u: goto label_1389a0;
        case 0x1389a4u: goto label_1389a4;
        case 0x1389a8u: goto label_1389a8;
        case 0x1389acu: goto label_1389ac;
        case 0x1389b0u: goto label_1389b0;
        case 0x1389b4u: goto label_1389b4;
        case 0x1389b8u: goto label_1389b8;
        case 0x1389bcu: goto label_1389bc;
        case 0x1389c0u: goto label_1389c0;
        case 0x1389c4u: goto label_1389c4;
        case 0x1389c8u: goto label_1389c8;
        case 0x1389ccu: goto label_1389cc;
        case 0x1389d0u: goto label_1389d0;
        case 0x1389d4u: goto label_1389d4;
        case 0x1389d8u: goto label_1389d8;
        case 0x1389dcu: goto label_1389dc;
        case 0x1389e0u: goto label_1389e0;
        case 0x1389e4u: goto label_1389e4;
        case 0x1389e8u: goto label_1389e8;
        case 0x1389ecu: goto label_1389ec;
        case 0x1389f0u: goto label_1389f0;
        case 0x1389f4u: goto label_1389f4;
        case 0x1389f8u: goto label_1389f8;
        case 0x1389fcu: goto label_1389fc;
        case 0x138a00u: goto label_138a00;
        case 0x138a04u: goto label_138a04;
        case 0x138a08u: goto label_138a08;
        case 0x138a0cu: goto label_138a0c;
        case 0x138a10u: goto label_138a10;
        case 0x138a14u: goto label_138a14;
        case 0x138a18u: goto label_138a18;
        case 0x138a1cu: goto label_138a1c;
        case 0x138a20u: goto label_138a20;
        case 0x138a24u: goto label_138a24;
        case 0x138a28u: goto label_138a28;
        case 0x138a2cu: goto label_138a2c;
        case 0x138a30u: goto label_138a30;
        case 0x138a34u: goto label_138a34;
        case 0x138a38u: goto label_138a38;
        case 0x138a3cu: goto label_138a3c;
        case 0x138a40u: goto label_138a40;
        case 0x138a44u: goto label_138a44;
        case 0x138a48u: goto label_138a48;
        case 0x138a4cu: goto label_138a4c;
        case 0x138a50u: goto label_138a50;
        case 0x138a54u: goto label_138a54;
        case 0x138a58u: goto label_138a58;
        case 0x138a5cu: goto label_138a5c;
        case 0x138a60u: goto label_138a60;
        case 0x138a64u: goto label_138a64;
        case 0x138a68u: goto label_138a68;
        case 0x138a6cu: goto label_138a6c;
        case 0x138a70u: goto label_138a70;
        case 0x138a74u: goto label_138a74;
        case 0x138a78u: goto label_138a78;
        case 0x138a7cu: goto label_138a7c;
        case 0x138a80u: goto label_138a80;
        case 0x138a84u: goto label_138a84;
        case 0x138a88u: goto label_138a88;
        case 0x138a8cu: goto label_138a8c;
        case 0x138a90u: goto label_138a90;
        case 0x138a94u: goto label_138a94;
        case 0x138a98u: goto label_138a98;
        case 0x138a9cu: goto label_138a9c;
        case 0x138aa0u: goto label_138aa0;
        case 0x138aa4u: goto label_138aa4;
        case 0x138aa8u: goto label_138aa8;
        case 0x138aacu: goto label_138aac;
        case 0x138ab0u: goto label_138ab0;
        case 0x138ab4u: goto label_138ab4;
        case 0x138ab8u: goto label_138ab8;
        case 0x138abcu: goto label_138abc;
        case 0x138ac0u: goto label_138ac0;
        case 0x138ac4u: goto label_138ac4;
        case 0x138ac8u: goto label_138ac8;
        case 0x138accu: goto label_138acc;
        case 0x138ad0u: goto label_138ad0;
        case 0x138ad4u: goto label_138ad4;
        case 0x138ad8u: goto label_138ad8;
        case 0x138adcu: goto label_138adc;
        case 0x138ae0u: goto label_138ae0;
        case 0x138ae4u: goto label_138ae4;
        case 0x138ae8u: goto label_138ae8;
        case 0x138aecu: goto label_138aec;
        case 0x138af0u: goto label_138af0;
        case 0x138af4u: goto label_138af4;
        case 0x138af8u: goto label_138af8;
        case 0x138afcu: goto label_138afc;
        case 0x138b00u: goto label_138b00;
        case 0x138b04u: goto label_138b04;
        case 0x138b08u: goto label_138b08;
        case 0x138b0cu: goto label_138b0c;
        case 0x138b10u: goto label_138b10;
        case 0x138b14u: goto label_138b14;
        case 0x138b18u: goto label_138b18;
        case 0x138b1cu: goto label_138b1c;
        case 0x138b20u: goto label_138b20;
        case 0x138b24u: goto label_138b24;
        case 0x138b28u: goto label_138b28;
        case 0x138b2cu: goto label_138b2c;
        case 0x138b30u: goto label_138b30;
        case 0x138b34u: goto label_138b34;
        case 0x138b38u: goto label_138b38;
        case 0x138b3cu: goto label_138b3c;
        case 0x138b40u: goto label_138b40;
        case 0x138b44u: goto label_138b44;
        case 0x138b48u: goto label_138b48;
        case 0x138b4cu: goto label_138b4c;
        case 0x138b50u: goto label_138b50;
        case 0x138b54u: goto label_138b54;
        case 0x138b58u: goto label_138b58;
        case 0x138b5cu: goto label_138b5c;
        case 0x138b60u: goto label_138b60;
        case 0x138b64u: goto label_138b64;
        case 0x138b68u: goto label_138b68;
        case 0x138b6cu: goto label_138b6c;
        case 0x138b70u: goto label_138b70;
        case 0x138b74u: goto label_138b74;
        case 0x138b78u: goto label_138b78;
        case 0x138b7cu: goto label_138b7c;
        case 0x138b80u: goto label_138b80;
        case 0x138b84u: goto label_138b84;
        case 0x138b88u: goto label_138b88;
        case 0x138b8cu: goto label_138b8c;
        case 0x138b90u: goto label_138b90;
        case 0x138b94u: goto label_138b94;
        case 0x138b98u: goto label_138b98;
        case 0x138b9cu: goto label_138b9c;
        case 0x138ba0u: goto label_138ba0;
        case 0x138ba4u: goto label_138ba4;
        case 0x138ba8u: goto label_138ba8;
        case 0x138bacu: goto label_138bac;
        case 0x138bb0u: goto label_138bb0;
        case 0x138bb4u: goto label_138bb4;
        case 0x138bb8u: goto label_138bb8;
        case 0x138bbcu: goto label_138bbc;
        case 0x138bc0u: goto label_138bc0;
        case 0x138bc4u: goto label_138bc4;
        case 0x138bc8u: goto label_138bc8;
        case 0x138bccu: goto label_138bcc;
        case 0x138bd0u: goto label_138bd0;
        case 0x138bd4u: goto label_138bd4;
        case 0x138bd8u: goto label_138bd8;
        case 0x138bdcu: goto label_138bdc;
        case 0x138be0u: goto label_138be0;
        case 0x138be4u: goto label_138be4;
        case 0x138be8u: goto label_138be8;
        case 0x138becu: goto label_138bec;
        case 0x138bf0u: goto label_138bf0;
        case 0x138bf4u: goto label_138bf4;
        case 0x138bf8u: goto label_138bf8;
        case 0x138bfcu: goto label_138bfc;
        case 0x138c00u: goto label_138c00;
        case 0x138c04u: goto label_138c04;
        case 0x138c08u: goto label_138c08;
        case 0x138c0cu: goto label_138c0c;
        case 0x138c10u: goto label_138c10;
        case 0x138c14u: goto label_138c14;
        case 0x138c18u: goto label_138c18;
        case 0x138c1cu: goto label_138c1c;
        case 0x138c20u: goto label_138c20;
        case 0x138c24u: goto label_138c24;
        case 0x138c28u: goto label_138c28;
        case 0x138c2cu: goto label_138c2c;
        case 0x138c30u: goto label_138c30;
        case 0x138c34u: goto label_138c34;
        case 0x138c38u: goto label_138c38;
        case 0x138c3cu: goto label_138c3c;
        case 0x138c40u: goto label_138c40;
        case 0x138c44u: goto label_138c44;
        case 0x138c48u: goto label_138c48;
        case 0x138c4cu: goto label_138c4c;
        case 0x138c50u: goto label_138c50;
        case 0x138c54u: goto label_138c54;
        case 0x138c58u: goto label_138c58;
        case 0x138c5cu: goto label_138c5c;
        case 0x138c60u: goto label_138c60;
        case 0x138c64u: goto label_138c64;
        case 0x138c68u: goto label_138c68;
        case 0x138c6cu: goto label_138c6c;
        case 0x138c70u: goto label_138c70;
        case 0x138c74u: goto label_138c74;
        case 0x138c78u: goto label_138c78;
        case 0x138c7cu: goto label_138c7c;
        case 0x138c80u: goto label_138c80;
        case 0x138c84u: goto label_138c84;
        case 0x138c88u: goto label_138c88;
        case 0x138c8cu: goto label_138c8c;
        case 0x138c90u: goto label_138c90;
        case 0x138c94u: goto label_138c94;
        case 0x138c98u: goto label_138c98;
        case 0x138c9cu: goto label_138c9c;
        case 0x138ca0u: goto label_138ca0;
        case 0x138ca4u: goto label_138ca4;
        case 0x138ca8u: goto label_138ca8;
        case 0x138cacu: goto label_138cac;
        case 0x138cb0u: goto label_138cb0;
        case 0x138cb4u: goto label_138cb4;
        case 0x138cb8u: goto label_138cb8;
        case 0x138cbcu: goto label_138cbc;
        case 0x138cc0u: goto label_138cc0;
        case 0x138cc4u: goto label_138cc4;
        case 0x138cc8u: goto label_138cc8;
        case 0x138cccu: goto label_138ccc;
        case 0x138cd0u: goto label_138cd0;
        case 0x138cd4u: goto label_138cd4;
        case 0x138cd8u: goto label_138cd8;
        case 0x138cdcu: goto label_138cdc;
        case 0x138ce0u: goto label_138ce0;
        case 0x138ce4u: goto label_138ce4;
        case 0x138ce8u: goto label_138ce8;
        case 0x138cecu: goto label_138cec;
        default: break;
    }

    ctx->pc = 0x1388f0u;

label_1388f0:
    // 0x1388f0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x1388f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_1388f4:
    // 0x1388f4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1388f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_1388f8:
    // 0x1388f8: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x1388f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_1388fc:
    // 0x1388fc: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1388fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_138900:
    // 0x138900: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x138900u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_138904:
    // 0x138904: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x138904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_138908:
    // 0x138908: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x138908u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13890c:
    // 0x13890c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x13890cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_138910:
    // 0x138910: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x138910u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_138914:
    // 0x138914: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x138914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_138918:
    // 0x138918: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x138918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_13891c:
    // 0x13891c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x13891cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_138920:
    // 0x138920: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x138920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_138924:
    // 0x138924: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x138924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_138928:
    // 0x138928: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x138928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_13892c:
    // 0x13892c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x13892cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_138930:
    // 0x138930: 0x8fb50100  lw          $s5, 0x100($sp)
    ctx->pc = 0x138930u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_138934:
    // 0x138934: 0x8d640000  lw          $a0, 0x0($t3)
    ctx->pc = 0x138934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_138938:
    // 0x138938: 0xc560000c  lwc1        $f0, 0xC($t3)
    ctx->pc = 0x138938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13893c:
    // 0x13893c: 0x8fb30108  lw          $s3, 0x108($sp)
    ctx->pc = 0x13893cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_138940:
    // 0x138940: 0x140802d  daddu       $s0, $t2, $zero
    ctx->pc = 0x138940u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_138944:
    // 0x138944: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x138944u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_138948:
    // 0x138948: 0xafa700cc  sw          $a3, 0xCC($sp)
    ctx->pc = 0x138948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 7));
label_13894c:
    // 0x13894c: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x13894cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
label_138950:
    // 0x138950: 0x30820f00  andi        $v0, $a0, 0xF00
    ctx->pc = 0x138950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3840);
label_138954:
    // 0x138954: 0xc5600010  lwc1        $f0, 0x10($t3)
    ctx->pc = 0x138954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_138958:
    // 0x138958: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x138958u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_13895c:
    // 0x13895c: 0x30820002  andi        $v0, $a0, 0x2
    ctx->pc = 0x13895cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
label_138960:
    // 0x138960: 0xafa800c8  sw          $t0, 0xC8($sp)
    ctx->pc = 0x138960u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 8));
label_138964:
    // 0x138964: 0xe4e00004  swc1        $f0, 0x4($a3)
    ctx->pc = 0x138964u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
label_138968:
    // 0x138968: 0xc5600014  lwc1        $f0, 0x14($t3)
    ctx->pc = 0x138968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13896c:
    // 0x13896c: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x13896cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
label_138970:
    // 0x138970: 0xc5600024  lwc1        $f0, 0x24($t3)
    ctx->pc = 0x138970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_138974:
    // 0x138974: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x138974u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
label_138978:
    // 0x138978: 0xc5600028  lwc1        $f0, 0x28($t3)
    ctx->pc = 0x138978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13897c:
    // 0x13897c: 0xe5000004  swc1        $f0, 0x4($t0)
    ctx->pc = 0x13897cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
label_138980:
    // 0x138980: 0xc560002c  lwc1        $f0, 0x2C($t3)
    ctx->pc = 0x138980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_138984:
    // 0x138984: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_138988:
    if (ctx->pc == 0x138988u) {
        ctx->pc = 0x138988u;
            // 0x138988: 0xe5000008  swc1        $f0, 0x8($t0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
        ctx->pc = 0x13898Cu;
        goto label_13898c;
    }
    ctx->pc = 0x138984u;
    {
        const bool branch_taken_0x138984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x138988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138984u;
            // 0x138988: 0xe5000008  swc1        $f0, 0x8($t0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x138984) {
            ctx->pc = 0x1389CCu;
            goto label_1389cc;
        }
    }
    ctx->pc = 0x13898Cu;
label_13898c:
    // 0x13898c: 0xafa000f8  sw          $zero, 0xF8($sp)
    ctx->pc = 0x13898cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 0));
label_138990:
    // 0x138990: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x138990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_138994:
    // 0x138994: 0xafa000f4  sw          $zero, 0xF4($sp)
    ctx->pc = 0x138994u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 0));
label_138998:
    // 0x138998: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x138998u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_13899c:
    // 0x13899c: 0xafa000f0  sw          $zero, 0xF0($sp)
    ctx->pc = 0x13899cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
label_1389a0:
    // 0x1389a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1389a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1389a4:
    // 0x1389a4: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x1389a4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
label_1389a8:
    // 0x1389a8: 0xaec00004  sw          $zero, 0x4($s6)
    ctx->pc = 0x1389a8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 0));
label_1389ac:
    // 0x1389ac: 0xaec00008  sw          $zero, 0x8($s6)
    ctx->pc = 0x1389acu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 0));
label_1389b0:
    // 0x1389b0: 0x12000031  beqz        $s0, . + 4 + (0x31 << 2)
label_1389b4:
    if (ctx->pc == 0x1389B4u) {
        ctx->pc = 0x1389B4u;
            // 0x1389b4: 0xaec2000c  sw          $v0, 0xC($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 12), GPR_U32(ctx, 2));
        ctx->pc = 0x1389B8u;
        goto label_1389b8;
    }
    ctx->pc = 0x1389B0u;
    {
        const bool branch_taken_0x1389b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1389B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1389B0u;
            // 0x1389b4: 0xaec2000c  sw          $v0, 0xC($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1389b0) {
            ctx->pc = 0x138A78u;
            goto label_138a78;
        }
    }
    ctx->pc = 0x1389B8u;
label_1389b8:
    // 0x1389b8: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x1389b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_1389bc:
    // 0x1389bc: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x1389bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_1389c0:
    // 0x1389c0: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x1389c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_1389c4:
    // 0x1389c4: 0x1000002c  b           . + 4 + (0x2C << 2)
label_1389c8:
    if (ctx->pc == 0x1389C8u) {
        ctx->pc = 0x1389C8u;
            // 0x1389c8: 0xe600000c  swc1        $f0, 0xC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->pc = 0x1389CCu;
        goto label_1389cc;
    }
    ctx->pc = 0x1389C4u;
    {
        const bool branch_taken_0x1389c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1389C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1389C4u;
            // 0x1389c8: 0xe600000c  swc1        $f0, 0xC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1389c4) {
            ctx->pc = 0x138A78u;
            goto label_138a78;
        }
    }
    ctx->pc = 0x1389CCu;
label_1389cc:
    // 0x1389cc: 0x8d630018  lw          $v1, 0x18($t3)
    ctx->pc = 0x1389ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 24)));
label_1389d0:
    // 0x1389d0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1389d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_1389d4:
    // 0x1389d4: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x1389d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
label_1389d8:
    // 0x1389d8: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1389d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_1389dc:
    // 0x1389dc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1389e0:
    if (ctx->pc == 0x1389E0u) {
        ctx->pc = 0x1389E0u;
            // 0x1389e0: 0xafa300f0  sw          $v1, 0xF0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
        ctx->pc = 0x1389E4u;
        goto label_1389e4;
    }
    ctx->pc = 0x1389DCu;
    {
        const bool branch_taken_0x1389dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1389E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1389DCu;
            // 0x1389e0: 0xafa300f0  sw          $v1, 0xF0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1389dc) {
            ctx->pc = 0x1389F0u;
            goto label_1389f0;
        }
    }
    ctx->pc = 0x1389E4u;
label_1389e4:
    // 0x1389e4: 0xafa000f4  sw          $zero, 0xF4($sp)
    ctx->pc = 0x1389e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 0));
label_1389e8:
    // 0x1389e8: 0x10000005  b           . + 4 + (0x5 << 2)
label_1389ec:
    if (ctx->pc == 0x1389ECu) {
        ctx->pc = 0x1389ECu;
            // 0x1389ec: 0xafa000f8  sw          $zero, 0xF8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 0));
        ctx->pc = 0x1389F0u;
        goto label_1389f0;
    }
    ctx->pc = 0x1389E8u;
    {
        const bool branch_taken_0x1389e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1389ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1389E8u;
            // 0x1389ec: 0xafa000f8  sw          $zero, 0xF8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1389e8) {
            ctx->pc = 0x138A00u;
            goto label_138a00;
        }
    }
    ctx->pc = 0x1389F0u;
label_1389f0:
    // 0x1389f0: 0x8d62001c  lw          $v0, 0x1C($t3)
    ctx->pc = 0x1389f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 28)));
label_1389f4:
    // 0x1389f4: 0xafa200f4  sw          $v0, 0xF4($sp)
    ctx->pc = 0x1389f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 2));
label_1389f8:
    // 0x1389f8: 0x8d620020  lw          $v0, 0x20($t3)
    ctx->pc = 0x1389f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 32)));
label_1389fc:
    // 0x1389fc: 0xafa200f8  sw          $v0, 0xF8($sp)
    ctx->pc = 0x1389fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
label_138a00:
    // 0x138a00: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x138a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_138a04:
    // 0x138a04: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x138a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_138a08:
    // 0x138a08: 0x5043000c  beql        $v0, $v1, . + 4 + (0xC << 2)
label_138a0c:
    if (ctx->pc == 0x138A0Cu) {
        ctx->pc = 0x138A0Cu;
            // 0x138a0c: 0x8fa500f0  lw          $a1, 0xF0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->pc = 0x138A10u;
        goto label_138a10;
    }
    ctx->pc = 0x138A08u;
    {
        const bool branch_taken_0x138a08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x138a08) {
            ctx->pc = 0x138A0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x138A08u;
            // 0x138a0c: 0x8fa500f0  lw          $a1, 0xF0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x138A3Cu;
            goto label_138a3c;
        }
    }
    ctx->pc = 0x138A10u;
label_138a10:
    // 0x138a10: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x138a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_138a14:
    // 0x138a14: 0x50430003  beql        $v0, $v1, . + 4 + (0x3 << 2)
label_138a18:
    if (ctx->pc == 0x138A18u) {
        ctx->pc = 0x138A18u;
            // 0x138a18: 0x8fa500f0  lw          $a1, 0xF0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->pc = 0x138A1Cu;
        goto label_138a1c;
    }
    ctx->pc = 0x138A14u;
    {
        const bool branch_taken_0x138a14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x138a14) {
            ctx->pc = 0x138A18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x138A14u;
            // 0x138a18: 0x8fa500f0  lw          $a1, 0xF0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x138A24u;
            goto label_138a24;
        }
    }
    ctx->pc = 0x138A1Cu;
label_138a1c:
    // 0x138a1c: 0x1000000d  b           . + 4 + (0xD << 2)
label_138a20:
    if (ctx->pc == 0x138A20u) {
        ctx->pc = 0x138A20u;
            // 0x138a20: 0x8fa500f0  lw          $a1, 0xF0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->pc = 0x138A24u;
        goto label_138a24;
    }
    ctx->pc = 0x138A1Cu;
    {
        const bool branch_taken_0x138a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138A20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138A1Cu;
            // 0x138a20: 0x8fa500f0  lw          $a1, 0xF0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138a1c) {
            ctx->pc = 0x138A54u;
            goto label_138a54;
        }
    }
    ctx->pc = 0x138A24u;
label_138a24:
    // 0x138a24: 0x8fa600f4  lw          $a2, 0xF4($sp)
    ctx->pc = 0x138a24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
label_138a28:
    // 0x138a28: 0x8fa700f8  lw          $a3, 0xF8($sp)
    ctx->pc = 0x138a28u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
label_138a2c:
    // 0x138a2c: 0xc04ca64  jal         func_132990
label_138a30:
    if (ctx->pc == 0x138A30u) {
        ctx->pc = 0x138A30u;
            // 0x138a30: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x138A34u;
        goto label_138a34;
    }
    ctx->pc = 0x138A2Cu;
    SET_GPR_U32(ctx, 31, 0x138A34u);
    ctx->pc = 0x138A30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138A2Cu;
            // 0x138a30: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132990u;
    if (runtime->hasFunction(0x132990u)) {
        auto targetFn = runtime->lookupFunction(0x132990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138A34u; }
        if (ctx->pc != 0x138A34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132990_0x132990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138A34u; }
        if (ctx->pc != 0x138A34u) { return; }
    }
    ctx->pc = 0x138A34u;
label_138a34:
    // 0x138a34: 0x1000000b  b           . + 4 + (0xB << 2)
label_138a38:
    if (ctx->pc == 0x138A38u) {
        ctx->pc = 0x138A3Cu;
        goto label_138a3c;
    }
    ctx->pc = 0x138A34u;
    {
        const bool branch_taken_0x138a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x138a34) {
            ctx->pc = 0x138A64u;
            goto label_138a64;
        }
    }
    ctx->pc = 0x138A3Cu;
label_138a3c:
    // 0x138a3c: 0x8fa600f4  lw          $a2, 0xF4($sp)
    ctx->pc = 0x138a3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
label_138a40:
    // 0x138a40: 0x8fa700f8  lw          $a3, 0xF8($sp)
    ctx->pc = 0x138a40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
label_138a44:
    // 0x138a44: 0xc04cab0  jal         func_132AC0
label_138a48:
    if (ctx->pc == 0x138A48u) {
        ctx->pc = 0x138A48u;
            // 0x138a48: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x138A4Cu;
        goto label_138a4c;
    }
    ctx->pc = 0x138A44u;
    SET_GPR_U32(ctx, 31, 0x138A4Cu);
    ctx->pc = 0x138A48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138A44u;
            // 0x138a48: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132AC0u;
    if (runtime->hasFunction(0x132AC0u)) {
        auto targetFn = runtime->lookupFunction(0x132AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138A4Cu; }
        if (ctx->pc != 0x138A4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132AC0_0x132ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138A4Cu; }
        if (ctx->pc != 0x138A4Cu) { return; }
    }
    ctx->pc = 0x138A4Cu;
label_138a4c:
    // 0x138a4c: 0x10000005  b           . + 4 + (0x5 << 2)
label_138a50:
    if (ctx->pc == 0x138A50u) {
        ctx->pc = 0x138A54u;
        goto label_138a54;
    }
    ctx->pc = 0x138A4Cu;
    {
        const bool branch_taken_0x138a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x138a4c) {
            ctx->pc = 0x138A64u;
            goto label_138a64;
        }
    }
    ctx->pc = 0x138A54u;
label_138a54:
    // 0x138a54: 0x8fa600f4  lw          $a2, 0xF4($sp)
    ctx->pc = 0x138a54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
label_138a58:
    // 0x138a58: 0x8fa700f8  lw          $a3, 0xF8($sp)
    ctx->pc = 0x138a58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
label_138a5c:
    // 0x138a5c: 0xc04ca18  jal         func_132860
label_138a60:
    if (ctx->pc == 0x138A60u) {
        ctx->pc = 0x138A60u;
            // 0x138a60: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x138A64u;
        goto label_138a64;
    }
    ctx->pc = 0x138A5Cu;
    SET_GPR_U32(ctx, 31, 0x138A64u);
    ctx->pc = 0x138A60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138A5Cu;
            // 0x138a60: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132860u;
    if (runtime->hasFunction(0x132860u)) {
        auto targetFn = runtime->lookupFunction(0x132860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138A64u; }
        if (ctx->pc != 0x138A64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132860_0x132860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138A64u; }
        if (ctx->pc != 0x138A64u) { return; }
    }
    ctx->pc = 0x138A64u;
label_138a64:
    // 0x138a64: 0x52000005  beql        $s0, $zero, . + 4 + (0x5 << 2)
label_138a68:
    if (ctx->pc == 0x138A68u) {
        ctx->pc = 0x138A68u;
            // 0x138a68: 0xaee00000  sw          $zero, 0x0($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x138A6Cu;
        goto label_138a6c;
    }
    ctx->pc = 0x138A64u;
    {
        const bool branch_taken_0x138a64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x138a64) {
            ctx->pc = 0x138A68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x138A64u;
            // 0x138a68: 0xaee00000  sw          $zero, 0x0($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x138A7Cu;
            goto label_138a7c;
        }
    }
    ctx->pc = 0x138A6Cu;
label_138a6c:
    // 0x138a6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x138a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_138a70:
    // 0x138a70: 0xc04c774  jal         func_131DD0
label_138a74:
    if (ctx->pc == 0x138A74u) {
        ctx->pc = 0x138A74u;
            // 0x138a74: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x138A78u;
        goto label_138a78;
    }
    ctx->pc = 0x138A70u;
    SET_GPR_U32(ctx, 31, 0x138A78u);
    ctx->pc = 0x138A74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138A70u;
            // 0x138a74: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131DD0u;
    if (runtime->hasFunction(0x131DD0u)) {
        auto targetFn = runtime->lookupFunction(0x131DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138A78u; }
        if (ctx->pc != 0x138A78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131DD0_0x131dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138A78u; }
        if (ctx->pc != 0x138A78u) { return; }
    }
    ctx->pc = 0x138A78u;
label_138a78:
    // 0x138a78: 0xaee00000  sw          $zero, 0x0($s7)
    ctx->pc = 0x138a78u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 0));
label_138a7c:
    // 0x138a7c: 0x8fb20110  lw          $s2, 0x110($sp)
    ctx->pc = 0x138a7cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_138a80:
    // 0x138a80: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x138a80u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
label_138a84:
    // 0x138a84: 0xafc00000  sw          $zero, 0x0($fp)
    ctx->pc = 0x138a84u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 0));
label_138a88:
    // 0x138a88: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x138a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_138a8c:
    // 0x138a8c: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x138a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_138a90:
    // 0x138a90: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x138a90u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_138a94:
    // 0x138a94: 0x1020006a  beqz        $at, . + 4 + (0x6A << 2)
label_138a98:
    if (ctx->pc == 0x138A98u) {
        ctx->pc = 0x138A9Cu;
        goto label_138a9c;
    }
    ctx->pc = 0x138A94u;
    {
        const bool branch_taken_0x138a94 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x138a94) {
            ctx->pc = 0x138C40u;
            goto label_138c40;
        }
    }
    ctx->pc = 0x138A9Cu;
label_138a9c:
    // 0x138a9c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x138a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_138aa0:
    // 0x138aa0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x138aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_138aa4:
    // 0x138aa4: 0x280c0  sll         $s0, $v0, 3
    ctx->pc = 0x138aa4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_138aa8:
    // 0x138aa8: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x138aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_138aac:
    // 0x138aac: 0x508821  addu        $s1, $v0, $s0
    ctx->pc = 0x138aacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_138ab0:
    // 0x138ab0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x138ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_138ab4:
    // 0x138ab4: 0x2a2082a  slt         $at, $s5, $v0
    ctx->pc = 0x138ab4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_138ab8:
    // 0x138ab8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_138abc:
    if (ctx->pc == 0x138ABCu) {
        ctx->pc = 0x138AC0u;
        goto label_138ac0;
    }
    ctx->pc = 0x138AB8u;
    {
        const bool branch_taken_0x138ab8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x138ab8) {
            ctx->pc = 0x138AC8u;
            goto label_138ac8;
        }
    }
    ctx->pc = 0x138AC0u;
label_138ac0:
    // 0x138ac0: 0x1000005f  b           . + 4 + (0x5F << 2)
label_138ac4:
    if (ctx->pc == 0x138AC4u) {
        ctx->pc = 0x138AC4u;
            // 0x138ac4: 0xafb20110  sw          $s2, 0x110($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 18));
        ctx->pc = 0x138AC8u;
        goto label_138ac8;
    }
    ctx->pc = 0x138AC0u;
    {
        const bool branch_taken_0x138ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138AC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138AC0u;
            // 0x138ac4: 0xafb20110  sw          $s2, 0x110($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138ac0) {
            ctx->pc = 0x138C40u;
            goto label_138c40;
        }
    }
    ctx->pc = 0x138AC8u;
label_138ac8:
    // 0x138ac8: 0x14550057  bne         $v0, $s5, . + 4 + (0x57 << 2)
label_138acc:
    if (ctx->pc == 0x138ACCu) {
        ctx->pc = 0x138AD0u;
        goto label_138ad0;
    }
    ctx->pc = 0x138AC8u;
    {
        const bool branch_taken_0x138ac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x138ac8) {
            ctx->pc = 0x138C28u;
            goto label_138c28;
        }
    }
    ctx->pc = 0x138AD0u;
label_138ad0:
    // 0x138ad0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x138ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_138ad4:
    // 0x138ad4: 0x10400054  beqz        $v0, . + 4 + (0x54 << 2)
label_138ad8:
    if (ctx->pc == 0x138AD8u) {
        ctx->pc = 0x138ADCu;
        goto label_138adc;
    }
    ctx->pc = 0x138AD4u;
    {
        const bool branch_taken_0x138ad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x138ad4) {
            ctx->pc = 0x138C28u;
            goto label_138c28;
        }
    }
    ctx->pc = 0x138ADCu;
label_138adc:
    // 0x138adc: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x138adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_138ae0:
    // 0x138ae0: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x138ae0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_138ae4:
    // 0x138ae4: 0x45000050  bc1f        . + 4 + (0x50 << 2)
label_138ae8:
    if (ctx->pc == 0x138AE8u) {
        ctx->pc = 0x138AECu;
        goto label_138aec;
    }
    ctx->pc = 0x138AE4u;
    {
        const bool branch_taken_0x138ae4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x138ae4) {
            ctx->pc = 0x138C28u;
            goto label_138c28;
        }
    }
    ctx->pc = 0x138AECu;
label_138aec:
    // 0x138aec: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x138aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_138af0:
    // 0x138af0: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x138af0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_138af4:
    // 0x138af4: 0x4500004c  bc1f        . + 4 + (0x4C << 2)
label_138af8:
    if (ctx->pc == 0x138AF8u) {
        ctx->pc = 0x138AFCu;
        goto label_138afc;
    }
    ctx->pc = 0x138AF4u;
    {
        const bool branch_taken_0x138af4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x138af4) {
            ctx->pc = 0x138C28u;
            goto label_138c28;
        }
    }
    ctx->pc = 0x138AFCu;
label_138afc:
    // 0x138afc: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x138afcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_138b00:
    // 0x138b00: 0xc62c0014  lwc1        $f12, 0x14($s1)
    ctx->pc = 0x138b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_138b04:
    // 0x138b04: 0xc62d0018  lwc1        $f13, 0x18($s1)
    ctx->pc = 0x138b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_138b08:
    // 0x138b08: 0x27a400fc  addiu       $a0, $sp, 0xFC
    ctx->pc = 0x138b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
label_138b0c:
    // 0x138b0c: 0xc04d03c  jal         func_1340F0
label_138b10:
    if (ctx->pc == 0x138B10u) {
        ctx->pc = 0x138B10u;
            // 0x138b10: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x138B14u;
        goto label_138b14;
    }
    ctx->pc = 0x138B0Cu;
    SET_GPR_U32(ctx, 31, 0x138B14u);
    ctx->pc = 0x138B10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138B0Cu;
            // 0x138b10: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1340F0u;
    if (runtime->hasFunction(0x1340F0u)) {
        auto targetFn = runtime->lookupFunction(0x1340F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138B14u; }
        if (ctx->pc != 0x138B14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001340F0_0x1340f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138B14u; }
        if (ctx->pc != 0x138B14u) { return; }
    }
    ctx->pc = 0x138B14u;
label_138b14:
    // 0x138b14: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
label_138b18:
    if (ctx->pc == 0x138B18u) {
        ctx->pc = 0x138B1Cu;
        goto label_138b1c;
    }
    ctx->pc = 0x138B14u;
    {
        const bool branch_taken_0x138b14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x138b14) {
            ctx->pc = 0x138C28u;
            goto label_138c28;
        }
    }
    ctx->pc = 0x138B1Cu;
label_138b1c:
    // 0x138b1c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x138b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_138b20:
    // 0x138b20: 0x30627800  andi        $v0, $v1, 0x7800
    ctx->pc = 0x138b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)30720);
label_138b24:
    // 0x138b24: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_138b28:
    if (ctx->pc == 0x138B28u) {
        ctx->pc = 0x138B2Cu;
        goto label_138b2c;
    }
    ctx->pc = 0x138B24u;
    {
        const bool branch_taken_0x138b24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x138b24) {
            ctx->pc = 0x138B58u;
            goto label_138b58;
        }
    }
    ctx->pc = 0x138B2Cu;
label_138b2c:
    // 0x138b2c: 0xc7ac00fc  lwc1        $f12, 0xFC($sp)
    ctx->pc = 0x138b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_138b30:
    // 0x138b30: 0x8fa700b0  lw          $a3, 0xB0($sp)
    ctx->pc = 0x138b30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_138b34:
    // 0x138b34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x138b34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_138b38:
    // 0x138b38: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x138b38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_138b3c:
    // 0x138b3c: 0xc04d280  jal         func_134A00
label_138b40:
    if (ctx->pc == 0x138B40u) {
        ctx->pc = 0x138B40u;
            // 0x138b40: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x138B44u;
        goto label_138b44;
    }
    ctx->pc = 0x138B3Cu;
    SET_GPR_U32(ctx, 31, 0x138B44u);
    ctx->pc = 0x138B40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138B3Cu;
            // 0x138b40: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134A00u;
    if (runtime->hasFunction(0x134A00u)) {
        auto targetFn = runtime->lookupFunction(0x134A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138B44u; }
        if (ctx->pc != 0x138B44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00134A00_0x134a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138B44u; }
        if (ctx->pc != 0x138B44u) { return; }
    }
    ctx->pc = 0x138B44u;
label_138b44:
    // 0x138b44: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x138b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_138b48:
    // 0x138b48: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x138b48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_138b4c:
    // 0x138b4c: 0x10000036  b           . + 4 + (0x36 << 2)
label_138b50:
    if (ctx->pc == 0x138B50u) {
        ctx->pc = 0x138B50u;
            // 0x138b50: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x138B54u;
        goto label_138b54;
    }
    ctx->pc = 0x138B4Cu;
    {
        const bool branch_taken_0x138b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138B50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138B4Cu;
            // 0x138b50: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138b4c) {
            ctx->pc = 0x138C28u;
            goto label_138c28;
        }
    }
    ctx->pc = 0x138B54u;
label_138b54:
    // 0x138b54: 0x0  nop
    ctx->pc = 0x138b54u;
    // NOP
label_138b58:
    // 0x138b58: 0x30620700  andi        $v0, $v1, 0x700
    ctx->pc = 0x138b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1792);
label_138b5c:
    // 0x138b5c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_138b60:
    if (ctx->pc == 0x138B60u) {
        ctx->pc = 0x138B64u;
        goto label_138b64;
    }
    ctx->pc = 0x138B5Cu;
    {
        const bool branch_taken_0x138b5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x138b5c) {
            ctx->pc = 0x138B88u;
            goto label_138b88;
        }
    }
    ctx->pc = 0x138B64u;
label_138b64:
    // 0x138b64: 0xc7ac00fc  lwc1        $f12, 0xFC($sp)
    ctx->pc = 0x138b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_138b68:
    // 0x138b68: 0x8fa500cc  lw          $a1, 0xCC($sp)
    ctx->pc = 0x138b68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
label_138b6c:
    // 0x138b6c: 0xc04d4d4  jal         func_135350
label_138b70:
    if (ctx->pc == 0x138B70u) {
        ctx->pc = 0x138B70u;
            // 0x138b70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x138B74u;
        goto label_138b74;
    }
    ctx->pc = 0x138B6Cu;
    SET_GPR_U32(ctx, 31, 0x138B74u);
    ctx->pc = 0x138B70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138B6Cu;
            // 0x138b70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135350u;
    if (runtime->hasFunction(0x135350u)) {
        auto targetFn = runtime->lookupFunction(0x135350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138B74u; }
        if (ctx->pc != 0x138B74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00135350_0x135350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138B74u; }
        if (ctx->pc != 0x138B74u) { return; }
    }
    ctx->pc = 0x138B74u;
label_138b74:
    // 0x138b74: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x138b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_138b78:
    // 0x138b78: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x138b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_138b7c:
    // 0x138b7c: 0x1000002a  b           . + 4 + (0x2A << 2)
label_138b80:
    if (ctx->pc == 0x138B80u) {
        ctx->pc = 0x138B80u;
            // 0x138b80: 0xaee20000  sw          $v0, 0x0($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x138B84u;
        goto label_138b84;
    }
    ctx->pc = 0x138B7Cu;
    {
        const bool branch_taken_0x138b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138B80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138B7Cu;
            // 0x138b80: 0xaee20000  sw          $v0, 0x0($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138b7c) {
            ctx->pc = 0x138C28u;
            goto label_138c28;
        }
    }
    ctx->pc = 0x138B84u;
label_138b84:
    // 0x138b84: 0x0  nop
    ctx->pc = 0x138b84u;
    // NOP
label_138b88:
    // 0x138b88: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x138b88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_138b8c:
    // 0x138b8c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x138b8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_138b90:
    // 0x138b90: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x138b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_138b94:
    // 0x138b94: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_138b98:
    if (ctx->pc == 0x138B98u) {
        ctx->pc = 0x138B9Cu;
        goto label_138b9c;
    }
    ctx->pc = 0x138B94u;
    {
        const bool branch_taken_0x138b94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x138b94) {
            ctx->pc = 0x138BC0u;
            goto label_138bc0;
        }
    }
    ctx->pc = 0x138B9Cu;
label_138b9c:
    // 0x138b9c: 0xc7ac00fc  lwc1        $f12, 0xFC($sp)
    ctx->pc = 0x138b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_138ba0:
    // 0x138ba0: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x138ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_138ba4:
    // 0x138ba4: 0xc04d54c  jal         func_135530
label_138ba8:
    if (ctx->pc == 0x138BA8u) {
        ctx->pc = 0x138BA8u;
            // 0x138ba8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x138BACu;
        goto label_138bac;
    }
    ctx->pc = 0x138BA4u;
    SET_GPR_U32(ctx, 31, 0x138BACu);
    ctx->pc = 0x138BA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138BA4u;
            // 0x138ba8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135530u;
    if (runtime->hasFunction(0x135530u)) {
        auto targetFn = runtime->lookupFunction(0x135530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138BACu; }
        if (ctx->pc != 0x138BACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00135530_0x135530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138BACu; }
        if (ctx->pc != 0x138BACu) { return; }
    }
    ctx->pc = 0x138BACu;
label_138bac:
    // 0x138bac: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x138bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_138bb0:
    // 0x138bb0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x138bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_138bb4:
    // 0x138bb4: 0x1000001c  b           . + 4 + (0x1C << 2)
label_138bb8:
    if (ctx->pc == 0x138BB8u) {
        ctx->pc = 0x138BB8u;
            // 0x138bb8: 0xafc20000  sw          $v0, 0x0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x138BBCu;
        goto label_138bbc;
    }
    ctx->pc = 0x138BB4u;
    {
        const bool branch_taken_0x138bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138BB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138BB4u;
            // 0x138bb8: 0xafc20000  sw          $v0, 0x0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138bb4) {
            ctx->pc = 0x138C28u;
            goto label_138c28;
        }
    }
    ctx->pc = 0x138BBCu;
label_138bbc:
    // 0x138bbc: 0x0  nop
    ctx->pc = 0x138bbcu;
    // NOP
label_138bc0:
    // 0x138bc0: 0x3c02000c  lui         $v0, 0xC
    ctx->pc = 0x138bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12 << 16));
label_138bc4:
    // 0x138bc4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x138bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_138bc8:
    // 0x138bc8: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_138bcc:
    if (ctx->pc == 0x138BCCu) {
        ctx->pc = 0x138BD0u;
        goto label_138bd0;
    }
    ctx->pc = 0x138BC8u;
    {
        const bool branch_taken_0x138bc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x138bc8) {
            ctx->pc = 0x138C28u;
            goto label_138c28;
        }
    }
    ctx->pc = 0x138BD0u;
label_138bd0:
    // 0x138bd0: 0xc7ac00fc  lwc1        $f12, 0xFC($sp)
    ctx->pc = 0x138bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_138bd4:
    // 0x138bd4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x138bd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_138bd8:
    // 0x138bd8: 0xc04d734  jal         func_135CD0
label_138bdc:
    if (ctx->pc == 0x138BDCu) {
        ctx->pc = 0x138BDCu;
            // 0x138bdc: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x138BE0u;
        goto label_138be0;
    }
    ctx->pc = 0x138BD8u;
    SET_GPR_U32(ctx, 31, 0x138BE0u);
    ctx->pc = 0x138BDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138BD8u;
            // 0x138bdc: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135CD0u;
    if (runtime->hasFunction(0x135CD0u)) {
        auto targetFn = runtime->lookupFunction(0x135CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138BE0u; }
        if (ctx->pc != 0x138BE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00135CD0_0x135cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138BE0u; }
        if (ctx->pc != 0x138BE0u) { return; }
    }
    ctx->pc = 0x138BE0u;
label_138be0:
    // 0x138be0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_138be4:
    if (ctx->pc == 0x138BE4u) {
        ctx->pc = 0x138BE8u;
        goto label_138be8;
    }
    ctx->pc = 0x138BE0u;
    {
        const bool branch_taken_0x138be0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x138be0) {
            ctx->pc = 0x138C28u;
            goto label_138c28;
        }
    }
    ctx->pc = 0x138BE8u;
label_138be8:
    // 0x138be8: 0xafb500d0  sw          $s5, 0xD0($sp)
    ctx->pc = 0x138be8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 21));
label_138bec:
    // 0x138bec: 0xe7b400d4  swc1        $f20, 0xD4($sp)
    ctx->pc = 0x138becu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_138bf0:
    // 0x138bf0: 0xafb300dc  sw          $s3, 0xDC($sp)
    ctx->pc = 0x138bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 19));
label_138bf4:
    // 0x138bf4: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x138bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_138bf8:
    // 0x138bf8: 0xafb200e0  sw          $s2, 0xE0($sp)
    ctx->pc = 0x138bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 18));
label_138bfc:
    // 0x138bfc: 0x8e650010  lw          $a1, 0x10($s3)
    ctx->pc = 0x138bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_138c00:
    // 0x138c00: 0x8f838100  lw          $v1, -0x7F00($gp)
    ctx->pc = 0x138c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934784)));
label_138c04:
    // 0x138c04: 0x8f828368  lw          $v0, -0x7C98($gp)
    ctx->pc = 0x138c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935400)));
label_138c08:
    // 0x138c08: 0xb03021  addu        $a2, $a1, $s0
    ctx->pc = 0x138c08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_138c0c:
    // 0x138c0c: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x138c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_138c10:
    // 0x138c10: 0xafa500e4  sw          $a1, 0xE4($sp)
    ctx->pc = 0x138c10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 5));
label_138c14:
    // 0x138c14: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x138c14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_138c18:
    // 0x138c18: 0xafa500e8  sw          $a1, 0xE8($sp)
    ctx->pc = 0x138c18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 5));
label_138c1c:
    // 0x138c1c: 0x40f809  jalr        $v0
label_138c20:
    if (ctx->pc == 0x138C20u) {
        ctx->pc = 0x138C20u;
            // 0x138c20: 0xafa300ec  sw          $v1, 0xEC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 3));
        ctx->pc = 0x138C24u;
        goto label_138c24;
    }
    ctx->pc = 0x138C1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x138C24u);
        ctx->pc = 0x138C20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138C1Cu;
            // 0x138c20: 0xafa300ec  sw          $v1, 0xEC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x138C24u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x138C24u; }
            if (ctx->pc != 0x138C24u) { return; }
        }
        }
    }
    ctx->pc = 0x138C24u;
label_138c24:
    // 0x138c24: 0x0  nop
    ctx->pc = 0x138c24u;
    // NOP
label_138c28:
    // 0x138c28: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x138c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_138c2c:
    // 0x138c2c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x138c2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_138c30:
    // 0x138c30: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x138c30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_138c34:
    // 0x138c34: 0x1440ff9c  bnez        $v0, . + 4 + (-0x64 << 2)
label_138c38:
    if (ctx->pc == 0x138C38u) {
        ctx->pc = 0x138C38u;
            // 0x138c38: 0x26100028  addiu       $s0, $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
        ctx->pc = 0x138C3Cu;
        goto label_138c3c;
    }
    ctx->pc = 0x138C34u;
    {
        const bool branch_taken_0x138c34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x138C38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138C34u;
            // 0x138c38: 0x26100028  addiu       $s0, $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138c34) {
            ctx->pc = 0x138AA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_138aa8;
        }
    }
    ctx->pc = 0x138C3Cu;
label_138c3c:
    // 0x138c3c: 0x0  nop
    ctx->pc = 0x138c3cu;
    // NOP
label_138c40:
    // 0x138c40: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x138c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_138c44:
    // 0x138c44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x138c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_138c48:
    // 0x138c48: 0x5462001b  bnel        $v1, $v0, . + 4 + (0x1B << 2)
label_138c4c:
    if (ctx->pc == 0x138C4Cu) {
        ctx->pc = 0x138C4Cu;
            // 0x138c4c: 0x8fa20110  lw          $v0, 0x110($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->pc = 0x138C50u;
        goto label_138c50;
    }
    ctx->pc = 0x138C48u;
    {
        const bool branch_taken_0x138c48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x138c48) {
            ctx->pc = 0x138C4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x138C48u;
            // 0x138c4c: 0x8fa20110  lw          $v0, 0x110($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138C50u;
label_138c50:
    // 0x138c50: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x138c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_138c54:
    // 0x138c54: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x138c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_138c58:
    // 0x138c58: 0x5043000c  beql        $v0, $v1, . + 4 + (0xC << 2)
label_138c5c:
    if (ctx->pc == 0x138C5Cu) {
        ctx->pc = 0x138C5Cu;
            // 0x138c5c: 0x8fa500f0  lw          $a1, 0xF0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->pc = 0x138C60u;
        goto label_138c60;
    }
    ctx->pc = 0x138C58u;
    {
        const bool branch_taken_0x138c58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x138c58) {
            ctx->pc = 0x138C5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x138C58u;
            // 0x138c5c: 0x8fa500f0  lw          $a1, 0xF0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x138C8Cu;
            goto label_138c8c;
        }
    }
    ctx->pc = 0x138C60u;
label_138c60:
    // 0x138c60: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x138c60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_138c64:
    // 0x138c64: 0x50430003  beql        $v0, $v1, . + 4 + (0x3 << 2)
label_138c68:
    if (ctx->pc == 0x138C68u) {
        ctx->pc = 0x138C68u;
            // 0x138c68: 0x8fa500f0  lw          $a1, 0xF0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->pc = 0x138C6Cu;
        goto label_138c6c;
    }
    ctx->pc = 0x138C64u;
    {
        const bool branch_taken_0x138c64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x138c64) {
            ctx->pc = 0x138C68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x138C64u;
            // 0x138c68: 0x8fa500f0  lw          $a1, 0xF0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x138C74u;
            goto label_138c74;
        }
    }
    ctx->pc = 0x138C6Cu;
label_138c6c:
    // 0x138c6c: 0x1000000d  b           . + 4 + (0xD << 2)
label_138c70:
    if (ctx->pc == 0x138C70u) {
        ctx->pc = 0x138C70u;
            // 0x138c70: 0x8fa500f0  lw          $a1, 0xF0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->pc = 0x138C74u;
        goto label_138c74;
    }
    ctx->pc = 0x138C6Cu;
    {
        const bool branch_taken_0x138c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138C70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138C6Cu;
            // 0x138c70: 0x8fa500f0  lw          $a1, 0xF0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138c6c) {
            ctx->pc = 0x138CA4u;
            goto label_138ca4;
        }
    }
    ctx->pc = 0x138C74u;
label_138c74:
    // 0x138c74: 0x8fa600f4  lw          $a2, 0xF4($sp)
    ctx->pc = 0x138c74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
label_138c78:
    // 0x138c78: 0x8fa700f8  lw          $a3, 0xF8($sp)
    ctx->pc = 0x138c78u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
label_138c7c:
    // 0x138c7c: 0xc04ca64  jal         func_132990
label_138c80:
    if (ctx->pc == 0x138C80u) {
        ctx->pc = 0x138C80u;
            // 0x138c80: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x138C84u;
        goto label_138c84;
    }
    ctx->pc = 0x138C7Cu;
    SET_GPR_U32(ctx, 31, 0x138C84u);
    ctx->pc = 0x138C80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138C7Cu;
            // 0x138c80: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132990u;
    if (runtime->hasFunction(0x132990u)) {
        auto targetFn = runtime->lookupFunction(0x132990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138C84u; }
        if (ctx->pc != 0x138C84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132990_0x132990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138C84u; }
        if (ctx->pc != 0x138C84u) { return; }
    }
    ctx->pc = 0x138C84u;
label_138c84:
    // 0x138c84: 0x1000000b  b           . + 4 + (0xB << 2)
label_138c88:
    if (ctx->pc == 0x138C88u) {
        ctx->pc = 0x138C8Cu;
        goto label_138c8c;
    }
    ctx->pc = 0x138C84u;
    {
        const bool branch_taken_0x138c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x138c84) {
            ctx->pc = 0x138CB4u;
            goto label_138cb4;
        }
    }
    ctx->pc = 0x138C8Cu;
label_138c8c:
    // 0x138c8c: 0x8fa600f4  lw          $a2, 0xF4($sp)
    ctx->pc = 0x138c8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
label_138c90:
    // 0x138c90: 0x8fa700f8  lw          $a3, 0xF8($sp)
    ctx->pc = 0x138c90u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
label_138c94:
    // 0x138c94: 0xc04cab0  jal         func_132AC0
label_138c98:
    if (ctx->pc == 0x138C98u) {
        ctx->pc = 0x138C98u;
            // 0x138c98: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x138C9Cu;
        goto label_138c9c;
    }
    ctx->pc = 0x138C94u;
    SET_GPR_U32(ctx, 31, 0x138C9Cu);
    ctx->pc = 0x138C98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138C94u;
            // 0x138c98: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132AC0u;
    if (runtime->hasFunction(0x132AC0u)) {
        auto targetFn = runtime->lookupFunction(0x132AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138C9Cu; }
        if (ctx->pc != 0x138C9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132AC0_0x132ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138C9Cu; }
        if (ctx->pc != 0x138C9Cu) { return; }
    }
    ctx->pc = 0x138C9Cu;
label_138c9c:
    // 0x138c9c: 0x10000005  b           . + 4 + (0x5 << 2)
label_138ca0:
    if (ctx->pc == 0x138CA0u) {
        ctx->pc = 0x138CA4u;
        goto label_138ca4;
    }
    ctx->pc = 0x138C9Cu;
    {
        const bool branch_taken_0x138c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x138c9c) {
            ctx->pc = 0x138CB4u;
            goto label_138cb4;
        }
    }
    ctx->pc = 0x138CA4u;
label_138ca4:
    // 0x138ca4: 0x8fa600f4  lw          $a2, 0xF4($sp)
    ctx->pc = 0x138ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
label_138ca8:
    // 0x138ca8: 0x8fa700f8  lw          $a3, 0xF8($sp)
    ctx->pc = 0x138ca8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
label_138cac:
    // 0x138cac: 0xc04ca18  jal         func_132860
label_138cb0:
    if (ctx->pc == 0x138CB0u) {
        ctx->pc = 0x138CB0u;
            // 0x138cb0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x138CB4u;
        goto label_138cb4;
    }
    ctx->pc = 0x138CACu;
    SET_GPR_U32(ctx, 31, 0x138CB4u);
    ctx->pc = 0x138CB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138CACu;
            // 0x138cb0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132860u;
    if (runtime->hasFunction(0x132860u)) {
        auto targetFn = runtime->lookupFunction(0x132860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138CB4u; }
        if (ctx->pc != 0x138CB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132860_0x132860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138CB4u; }
        if (ctx->pc != 0x138CB4u) { return; }
    }
    ctx->pc = 0x138CB4u;
label_138cb4:
    // 0x138cb4: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x138cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_138cb8:
    // 0x138cb8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x138cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_138cbc:
    // 0x138cbc: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x138cbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_138cc0:
    // 0x138cc0: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x138cc0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_138cc4:
    // 0x138cc4: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x138cc4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_138cc8:
    // 0x138cc8: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x138cc8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_138ccc:
    // 0x138ccc: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x138cccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_138cd0:
    // 0x138cd0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x138cd0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_138cd4:
    // 0x138cd4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x138cd4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_138cd8:
    // 0x138cd8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x138cd8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_138cdc:
    // 0x138cdc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x138cdcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_138ce0:
    // 0x138ce0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x138ce0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_138ce4:
    // 0x138ce4: 0x3e00008  jr          $ra
label_138ce8:
    if (ctx->pc == 0x138CE8u) {
        ctx->pc = 0x138CE8u;
            // 0x138ce8: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x138CECu;
        goto label_138cec;
    }
    ctx->pc = 0x138CE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x138CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138CE4u;
            // 0x138ce8: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x138CECu;
label_138cec:
    // 0x138cec: 0x0  nop
    ctx->pc = 0x138cecu;
    // NOP
}
