#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004478E0
// Address: 0x4478e0 - 0x447ce0
void sub_004478E0_0x4478e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004478E0_0x4478e0");
#endif

    switch (ctx->pc) {
        case 0x4478e0u: goto label_4478e0;
        case 0x4478e4u: goto label_4478e4;
        case 0x4478e8u: goto label_4478e8;
        case 0x4478ecu: goto label_4478ec;
        case 0x4478f0u: goto label_4478f0;
        case 0x4478f4u: goto label_4478f4;
        case 0x4478f8u: goto label_4478f8;
        case 0x4478fcu: goto label_4478fc;
        case 0x447900u: goto label_447900;
        case 0x447904u: goto label_447904;
        case 0x447908u: goto label_447908;
        case 0x44790cu: goto label_44790c;
        case 0x447910u: goto label_447910;
        case 0x447914u: goto label_447914;
        case 0x447918u: goto label_447918;
        case 0x44791cu: goto label_44791c;
        case 0x447920u: goto label_447920;
        case 0x447924u: goto label_447924;
        case 0x447928u: goto label_447928;
        case 0x44792cu: goto label_44792c;
        case 0x447930u: goto label_447930;
        case 0x447934u: goto label_447934;
        case 0x447938u: goto label_447938;
        case 0x44793cu: goto label_44793c;
        case 0x447940u: goto label_447940;
        case 0x447944u: goto label_447944;
        case 0x447948u: goto label_447948;
        case 0x44794cu: goto label_44794c;
        case 0x447950u: goto label_447950;
        case 0x447954u: goto label_447954;
        case 0x447958u: goto label_447958;
        case 0x44795cu: goto label_44795c;
        case 0x447960u: goto label_447960;
        case 0x447964u: goto label_447964;
        case 0x447968u: goto label_447968;
        case 0x44796cu: goto label_44796c;
        case 0x447970u: goto label_447970;
        case 0x447974u: goto label_447974;
        case 0x447978u: goto label_447978;
        case 0x44797cu: goto label_44797c;
        case 0x447980u: goto label_447980;
        case 0x447984u: goto label_447984;
        case 0x447988u: goto label_447988;
        case 0x44798cu: goto label_44798c;
        case 0x447990u: goto label_447990;
        case 0x447994u: goto label_447994;
        case 0x447998u: goto label_447998;
        case 0x44799cu: goto label_44799c;
        case 0x4479a0u: goto label_4479a0;
        case 0x4479a4u: goto label_4479a4;
        case 0x4479a8u: goto label_4479a8;
        case 0x4479acu: goto label_4479ac;
        case 0x4479b0u: goto label_4479b0;
        case 0x4479b4u: goto label_4479b4;
        case 0x4479b8u: goto label_4479b8;
        case 0x4479bcu: goto label_4479bc;
        case 0x4479c0u: goto label_4479c0;
        case 0x4479c4u: goto label_4479c4;
        case 0x4479c8u: goto label_4479c8;
        case 0x4479ccu: goto label_4479cc;
        case 0x4479d0u: goto label_4479d0;
        case 0x4479d4u: goto label_4479d4;
        case 0x4479d8u: goto label_4479d8;
        case 0x4479dcu: goto label_4479dc;
        case 0x4479e0u: goto label_4479e0;
        case 0x4479e4u: goto label_4479e4;
        case 0x4479e8u: goto label_4479e8;
        case 0x4479ecu: goto label_4479ec;
        case 0x4479f0u: goto label_4479f0;
        case 0x4479f4u: goto label_4479f4;
        case 0x4479f8u: goto label_4479f8;
        case 0x4479fcu: goto label_4479fc;
        case 0x447a00u: goto label_447a00;
        case 0x447a04u: goto label_447a04;
        case 0x447a08u: goto label_447a08;
        case 0x447a0cu: goto label_447a0c;
        case 0x447a10u: goto label_447a10;
        case 0x447a14u: goto label_447a14;
        case 0x447a18u: goto label_447a18;
        case 0x447a1cu: goto label_447a1c;
        case 0x447a20u: goto label_447a20;
        case 0x447a24u: goto label_447a24;
        case 0x447a28u: goto label_447a28;
        case 0x447a2cu: goto label_447a2c;
        case 0x447a30u: goto label_447a30;
        case 0x447a34u: goto label_447a34;
        case 0x447a38u: goto label_447a38;
        case 0x447a3cu: goto label_447a3c;
        case 0x447a40u: goto label_447a40;
        case 0x447a44u: goto label_447a44;
        case 0x447a48u: goto label_447a48;
        case 0x447a4cu: goto label_447a4c;
        case 0x447a50u: goto label_447a50;
        case 0x447a54u: goto label_447a54;
        case 0x447a58u: goto label_447a58;
        case 0x447a5cu: goto label_447a5c;
        case 0x447a60u: goto label_447a60;
        case 0x447a64u: goto label_447a64;
        case 0x447a68u: goto label_447a68;
        case 0x447a6cu: goto label_447a6c;
        case 0x447a70u: goto label_447a70;
        case 0x447a74u: goto label_447a74;
        case 0x447a78u: goto label_447a78;
        case 0x447a7cu: goto label_447a7c;
        case 0x447a80u: goto label_447a80;
        case 0x447a84u: goto label_447a84;
        case 0x447a88u: goto label_447a88;
        case 0x447a8cu: goto label_447a8c;
        case 0x447a90u: goto label_447a90;
        case 0x447a94u: goto label_447a94;
        case 0x447a98u: goto label_447a98;
        case 0x447a9cu: goto label_447a9c;
        case 0x447aa0u: goto label_447aa0;
        case 0x447aa4u: goto label_447aa4;
        case 0x447aa8u: goto label_447aa8;
        case 0x447aacu: goto label_447aac;
        case 0x447ab0u: goto label_447ab0;
        case 0x447ab4u: goto label_447ab4;
        case 0x447ab8u: goto label_447ab8;
        case 0x447abcu: goto label_447abc;
        case 0x447ac0u: goto label_447ac0;
        case 0x447ac4u: goto label_447ac4;
        case 0x447ac8u: goto label_447ac8;
        case 0x447accu: goto label_447acc;
        case 0x447ad0u: goto label_447ad0;
        case 0x447ad4u: goto label_447ad4;
        case 0x447ad8u: goto label_447ad8;
        case 0x447adcu: goto label_447adc;
        case 0x447ae0u: goto label_447ae0;
        case 0x447ae4u: goto label_447ae4;
        case 0x447ae8u: goto label_447ae8;
        case 0x447aecu: goto label_447aec;
        case 0x447af0u: goto label_447af0;
        case 0x447af4u: goto label_447af4;
        case 0x447af8u: goto label_447af8;
        case 0x447afcu: goto label_447afc;
        case 0x447b00u: goto label_447b00;
        case 0x447b04u: goto label_447b04;
        case 0x447b08u: goto label_447b08;
        case 0x447b0cu: goto label_447b0c;
        case 0x447b10u: goto label_447b10;
        case 0x447b14u: goto label_447b14;
        case 0x447b18u: goto label_447b18;
        case 0x447b1cu: goto label_447b1c;
        case 0x447b20u: goto label_447b20;
        case 0x447b24u: goto label_447b24;
        case 0x447b28u: goto label_447b28;
        case 0x447b2cu: goto label_447b2c;
        case 0x447b30u: goto label_447b30;
        case 0x447b34u: goto label_447b34;
        case 0x447b38u: goto label_447b38;
        case 0x447b3cu: goto label_447b3c;
        case 0x447b40u: goto label_447b40;
        case 0x447b44u: goto label_447b44;
        case 0x447b48u: goto label_447b48;
        case 0x447b4cu: goto label_447b4c;
        case 0x447b50u: goto label_447b50;
        case 0x447b54u: goto label_447b54;
        case 0x447b58u: goto label_447b58;
        case 0x447b5cu: goto label_447b5c;
        case 0x447b60u: goto label_447b60;
        case 0x447b64u: goto label_447b64;
        case 0x447b68u: goto label_447b68;
        case 0x447b6cu: goto label_447b6c;
        case 0x447b70u: goto label_447b70;
        case 0x447b74u: goto label_447b74;
        case 0x447b78u: goto label_447b78;
        case 0x447b7cu: goto label_447b7c;
        case 0x447b80u: goto label_447b80;
        case 0x447b84u: goto label_447b84;
        case 0x447b88u: goto label_447b88;
        case 0x447b8cu: goto label_447b8c;
        case 0x447b90u: goto label_447b90;
        case 0x447b94u: goto label_447b94;
        case 0x447b98u: goto label_447b98;
        case 0x447b9cu: goto label_447b9c;
        case 0x447ba0u: goto label_447ba0;
        case 0x447ba4u: goto label_447ba4;
        case 0x447ba8u: goto label_447ba8;
        case 0x447bacu: goto label_447bac;
        case 0x447bb0u: goto label_447bb0;
        case 0x447bb4u: goto label_447bb4;
        case 0x447bb8u: goto label_447bb8;
        case 0x447bbcu: goto label_447bbc;
        case 0x447bc0u: goto label_447bc0;
        case 0x447bc4u: goto label_447bc4;
        case 0x447bc8u: goto label_447bc8;
        case 0x447bccu: goto label_447bcc;
        case 0x447bd0u: goto label_447bd0;
        case 0x447bd4u: goto label_447bd4;
        case 0x447bd8u: goto label_447bd8;
        case 0x447bdcu: goto label_447bdc;
        case 0x447be0u: goto label_447be0;
        case 0x447be4u: goto label_447be4;
        case 0x447be8u: goto label_447be8;
        case 0x447becu: goto label_447bec;
        case 0x447bf0u: goto label_447bf0;
        case 0x447bf4u: goto label_447bf4;
        case 0x447bf8u: goto label_447bf8;
        case 0x447bfcu: goto label_447bfc;
        case 0x447c00u: goto label_447c00;
        case 0x447c04u: goto label_447c04;
        case 0x447c08u: goto label_447c08;
        case 0x447c0cu: goto label_447c0c;
        case 0x447c10u: goto label_447c10;
        case 0x447c14u: goto label_447c14;
        case 0x447c18u: goto label_447c18;
        case 0x447c1cu: goto label_447c1c;
        case 0x447c20u: goto label_447c20;
        case 0x447c24u: goto label_447c24;
        case 0x447c28u: goto label_447c28;
        case 0x447c2cu: goto label_447c2c;
        case 0x447c30u: goto label_447c30;
        case 0x447c34u: goto label_447c34;
        case 0x447c38u: goto label_447c38;
        case 0x447c3cu: goto label_447c3c;
        case 0x447c40u: goto label_447c40;
        case 0x447c44u: goto label_447c44;
        case 0x447c48u: goto label_447c48;
        case 0x447c4cu: goto label_447c4c;
        case 0x447c50u: goto label_447c50;
        case 0x447c54u: goto label_447c54;
        case 0x447c58u: goto label_447c58;
        case 0x447c5cu: goto label_447c5c;
        case 0x447c60u: goto label_447c60;
        case 0x447c64u: goto label_447c64;
        case 0x447c68u: goto label_447c68;
        case 0x447c6cu: goto label_447c6c;
        case 0x447c70u: goto label_447c70;
        case 0x447c74u: goto label_447c74;
        case 0x447c78u: goto label_447c78;
        case 0x447c7cu: goto label_447c7c;
        case 0x447c80u: goto label_447c80;
        case 0x447c84u: goto label_447c84;
        case 0x447c88u: goto label_447c88;
        case 0x447c8cu: goto label_447c8c;
        case 0x447c90u: goto label_447c90;
        case 0x447c94u: goto label_447c94;
        case 0x447c98u: goto label_447c98;
        case 0x447c9cu: goto label_447c9c;
        case 0x447ca0u: goto label_447ca0;
        case 0x447ca4u: goto label_447ca4;
        case 0x447ca8u: goto label_447ca8;
        case 0x447cacu: goto label_447cac;
        case 0x447cb0u: goto label_447cb0;
        case 0x447cb4u: goto label_447cb4;
        case 0x447cb8u: goto label_447cb8;
        case 0x447cbcu: goto label_447cbc;
        case 0x447cc0u: goto label_447cc0;
        case 0x447cc4u: goto label_447cc4;
        case 0x447cc8u: goto label_447cc8;
        case 0x447cccu: goto label_447ccc;
        case 0x447cd0u: goto label_447cd0;
        case 0x447cd4u: goto label_447cd4;
        case 0x447cd8u: goto label_447cd8;
        case 0x447cdcu: goto label_447cdc;
        default: break;
    }

    ctx->pc = 0x4478e0u;

label_4478e0:
    // 0x4478e0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x4478e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_4478e4:
    // 0x4478e4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4478e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_4478e8:
    // 0x4478e8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x4478e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_4478ec:
    // 0x4478ec: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x4478ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
label_4478f0:
    // 0x4478f0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4478f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4478f4:
    // 0x4478f4: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x4478f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4478f8:
    // 0x4478f8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4478f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4478fc:
    // 0x4478fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4478fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_447900:
    // 0x447900: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x447900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_447904:
    // 0x447904: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x447904u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_447908:
    // 0x447908: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x447908u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_44790c:
    // 0x44790c: 0xc0aeaf4  jal         func_2BABD0
label_447910:
    if (ctx->pc == 0x447910u) {
        ctx->pc = 0x447910u;
            // 0x447910: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x447914u;
        goto label_447914;
    }
    ctx->pc = 0x44790Cu;
    SET_GPR_U32(ctx, 31, 0x447914u);
    ctx->pc = 0x447910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44790Cu;
            // 0x447910: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BABD0u;
    if (runtime->hasFunction(0x2BABD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BABD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x447914u; }
        if (ctx->pc != 0x447914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BABD0_0x2babd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x447914u; }
        if (ctx->pc != 0x447914u) { return; }
    }
    ctx->pc = 0x447914u;
label_447914:
    // 0x447914: 0xc111fb0  jal         func_447EC0
label_447918:
    if (ctx->pc == 0x447918u) {
        ctx->pc = 0x447918u;
            // 0x447918: 0x26440064  addiu       $a0, $s2, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 100));
        ctx->pc = 0x44791Cu;
        goto label_44791c;
    }
    ctx->pc = 0x447914u;
    SET_GPR_U32(ctx, 31, 0x44791Cu);
    ctx->pc = 0x447918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x447914u;
            // 0x447918: 0x26440064  addiu       $a0, $s2, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x447EC0u;
    if (runtime->hasFunction(0x447EC0u)) {
        auto targetFn = runtime->lookupFunction(0x447EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44791Cu; }
        if (ctx->pc != 0x44791Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00447EC0_0x447ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44791Cu; }
        if (ctx->pc != 0x44791Cu) { return; }
    }
    ctx->pc = 0x44791Cu;
label_44791c:
    // 0x44791c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x44791cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_447920:
    // 0x447920: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x447920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_447924:
    // 0x447924: 0x2463d5e0  addiu       $v1, $v1, -0x2A20
    ctx->pc = 0x447924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956512));
label_447928:
    // 0x447928: 0x2442d618  addiu       $v0, $v0, -0x29E8
    ctx->pc = 0x447928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956568));
label_44792c:
    // 0x44792c: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x44792cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_447930:
    // 0x447930: 0x2644006c  addiu       $a0, $s2, 0x6C
    ctx->pc = 0x447930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 108));
label_447934:
    // 0x447934: 0xae420064  sw          $v0, 0x64($s2)
    ctx->pc = 0x447934u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 2));
label_447938:
    // 0x447938: 0xc111fa8  jal         func_447EA0
label_44793c:
    if (ctx->pc == 0x44793Cu) {
        ctx->pc = 0x44793Cu;
            // 0x44793c: 0xae400068  sw          $zero, 0x68($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 0));
        ctx->pc = 0x447940u;
        goto label_447940;
    }
    ctx->pc = 0x447938u;
    SET_GPR_U32(ctx, 31, 0x447940u);
    ctx->pc = 0x44793Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x447938u;
            // 0x44793c: 0xae400068  sw          $zero, 0x68($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x447EA0u;
    if (runtime->hasFunction(0x447EA0u)) {
        auto targetFn = runtime->lookupFunction(0x447EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x447940u; }
        if (ctx->pc != 0x447940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00447EA0_0x447ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x447940u; }
        if (ctx->pc != 0x447940u) { return; }
    }
    ctx->pc = 0x447940u;
label_447940:
    // 0x447940: 0xc111fa8  jal         func_447EA0
label_447944:
    if (ctx->pc == 0x447944u) {
        ctx->pc = 0x447944u;
            // 0x447944: 0x26440078  addiu       $a0, $s2, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 120));
        ctx->pc = 0x447948u;
        goto label_447948;
    }
    ctx->pc = 0x447940u;
    SET_GPR_U32(ctx, 31, 0x447948u);
    ctx->pc = 0x447944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x447940u;
            // 0x447944: 0x26440078  addiu       $a0, $s2, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x447EA0u;
    if (runtime->hasFunction(0x447EA0u)) {
        auto targetFn = runtime->lookupFunction(0x447EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x447948u; }
        if (ctx->pc != 0x447948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00447EA0_0x447ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x447948u; }
        if (ctx->pc != 0x447948u) { return; }
    }
    ctx->pc = 0x447948u;
label_447948:
    // 0x447948: 0xc0a8d10  jal         func_2A3440
label_44794c:
    if (ctx->pc == 0x44794Cu) {
        ctx->pc = 0x44794Cu;
            // 0x44794c: 0x26440084  addiu       $a0, $s2, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 132));
        ctx->pc = 0x447950u;
        goto label_447950;
    }
    ctx->pc = 0x447948u;
    SET_GPR_U32(ctx, 31, 0x447950u);
    ctx->pc = 0x44794Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x447948u;
            // 0x44794c: 0x26440084  addiu       $a0, $s2, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 132));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3440u;
    if (runtime->hasFunction(0x2A3440u)) {
        auto targetFn = runtime->lookupFunction(0x2A3440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x447950u; }
        if (ctx->pc != 0x447950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3440_0x2a3440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x447950u; }
        if (ctx->pc != 0x447950u) { return; }
    }
    ctx->pc = 0x447950u;
label_447950:
    // 0x447950: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x447950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_447954:
    // 0x447954: 0xc0aeac0  jal         func_2BAB00
label_447958:
    if (ctx->pc == 0x447958u) {
        ctx->pc = 0x447958u;
            // 0x447958: 0xae40008c  sw          $zero, 0x8C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 0));
        ctx->pc = 0x44795Cu;
        goto label_44795c;
    }
    ctx->pc = 0x447954u;
    SET_GPR_U32(ctx, 31, 0x44795Cu);
    ctx->pc = 0x447958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x447954u;
            // 0x447958: 0xae40008c  sw          $zero, 0x8C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAB00u;
    if (runtime->hasFunction(0x2BAB00u)) {
        auto targetFn = runtime->lookupFunction(0x2BAB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44795Cu; }
        if (ctx->pc != 0x44795Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAB00_0x2bab00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44795Cu; }
        if (ctx->pc != 0x44795Cu) { return; }
    }
    ctx->pc = 0x44795Cu;
label_44795c:
    // 0x44795c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x44795cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_447960:
    // 0x447960: 0x12000021  beqz        $s0, . + 4 + (0x21 << 2)
label_447964:
    if (ctx->pc == 0x447964u) {
        ctx->pc = 0x447968u;
        goto label_447968;
    }
    ctx->pc = 0x447960u;
    {
        const bool branch_taken_0x447960 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x447960) {
            ctx->pc = 0x4479E8u;
            goto label_4479e8;
        }
    }
    ctx->pc = 0x447968u;
label_447968:
    // 0x447968: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x447968u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_44796c:
    // 0x44796c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x44796cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_447970:
    // 0x447970: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x447970u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_447974:
    // 0x447974: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x447974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_447978:
    // 0x447978: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x447978u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_44797c:
    // 0x44797c: 0xc040138  jal         func_1004E0
label_447980:
    if (ctx->pc == 0x447980u) {
        ctx->pc = 0x447980u;
            // 0x447980: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x447984u;
        goto label_447984;
    }
    ctx->pc = 0x44797Cu;
    SET_GPR_U32(ctx, 31, 0x447984u);
    ctx->pc = 0x447980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44797Cu;
            // 0x447980: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x447984u; }
        if (ctx->pc != 0x447984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x447984u; }
        if (ctx->pc != 0x447984u) { return; }
    }
    ctx->pc = 0x447984u;
label_447984:
    // 0x447984: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x447984u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
label_447988:
    // 0x447988: 0x3c060044  lui         $a2, 0x44
    ctx->pc = 0x447988u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)68 << 16));
label_44798c:
    // 0x44798c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x44798cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_447990:
    // 0x447990: 0x24a57d10  addiu       $a1, $a1, 0x7D10
    ctx->pc = 0x447990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32016));
label_447994:
    // 0x447994: 0x24c669e0  addiu       $a2, $a2, 0x69E0
    ctx->pc = 0x447994u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27104));
label_447998:
    // 0x447998: 0x240700b0  addiu       $a3, $zero, 0xB0
    ctx->pc = 0x447998u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_44799c:
    // 0x44799c: 0xc040840  jal         func_102100
label_4479a0:
    if (ctx->pc == 0x4479A0u) {
        ctx->pc = 0x4479A0u;
            // 0x4479a0: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4479A4u;
        goto label_4479a4;
    }
    ctx->pc = 0x44799Cu;
    SET_GPR_U32(ctx, 31, 0x4479A4u);
    ctx->pc = 0x4479A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44799Cu;
            // 0x4479a0: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4479A4u; }
        if (ctx->pc != 0x4479A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4479A4u; }
        if (ctx->pc != 0x4479A4u) { return; }
    }
    ctx->pc = 0x4479A4u;
label_4479a4:
    // 0x4479a4: 0xae420068  sw          $v0, 0x68($s2)
    ctx->pc = 0x4479a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 2));
label_4479a8:
    // 0x4479a8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x4479a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4479ac:
    // 0x4479ac: 0x2644006c  addiu       $a0, $s2, 0x6C
    ctx->pc = 0x4479acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 108));
label_4479b0:
    // 0x4479b0: 0xc111f40  jal         func_447D00
label_4479b4:
    if (ctx->pc == 0x4479B4u) {
        ctx->pc = 0x4479B4u;
            // 0x4479b4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4479B8u;
        goto label_4479b8;
    }
    ctx->pc = 0x4479B0u;
    SET_GPR_U32(ctx, 31, 0x4479B8u);
    ctx->pc = 0x4479B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4479B0u;
            // 0x4479b4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x447D00u;
    if (runtime->hasFunction(0x447D00u)) {
        auto targetFn = runtime->lookupFunction(0x447D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4479B8u; }
        if (ctx->pc != 0x4479B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00447D00_0x447d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4479B8u; }
        if (ctx->pc != 0x4479B8u) { return; }
    }
    ctx->pc = 0x4479B8u;
label_4479b8:
    // 0x4479b8: 0x26440078  addiu       $a0, $s2, 0x78
    ctx->pc = 0x4479b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 120));
label_4479bc:
    // 0x4479bc: 0xc111f40  jal         func_447D00
label_4479c0:
    if (ctx->pc == 0x4479C0u) {
        ctx->pc = 0x4479C0u;
            // 0x4479c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4479C4u;
        goto label_4479c4;
    }
    ctx->pc = 0x4479BCu;
    SET_GPR_U32(ctx, 31, 0x4479C4u);
    ctx->pc = 0x4479C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4479BCu;
            // 0x4479c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x447D00u;
    if (runtime->hasFunction(0x447D00u)) {
        auto targetFn = runtime->lookupFunction(0x447D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4479C4u; }
        if (ctx->pc != 0x4479C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00447D00_0x447d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4479C4u; }
        if (ctx->pc != 0x4479C4u) { return; }
    }
    ctx->pc = 0x4479C4u;
label_4479c4:
    // 0x4479c4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4479c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4479c8:
    // 0x4479c8: 0x26440078  addiu       $a0, $s2, 0x78
    ctx->pc = 0x4479c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 120));
label_4479cc:
    // 0x4479cc: 0x27a5006c  addiu       $a1, $sp, 0x6C
    ctx->pc = 0x4479ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
label_4479d0:
    // 0x4479d0: 0xc111f38  jal         func_447CE0
label_4479d4:
    if (ctx->pc == 0x4479D4u) {
        ctx->pc = 0x4479D4u;
            // 0x4479d4: 0xafb4006c  sw          $s4, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 20));
        ctx->pc = 0x4479D8u;
        goto label_4479d8;
    }
    ctx->pc = 0x4479D0u;
    SET_GPR_U32(ctx, 31, 0x4479D8u);
    ctx->pc = 0x4479D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4479D0u;
            // 0x4479d4: 0xafb4006c  sw          $s4, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x447CE0u;
    if (runtime->hasFunction(0x447CE0u)) {
        auto targetFn = runtime->lookupFunction(0x447CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4479D8u; }
        if (ctx->pc != 0x4479D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00447CE0_0x447ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4479D8u; }
        if (ctx->pc != 0x4479D8u) { return; }
    }
    ctx->pc = 0x4479D8u;
label_4479d8:
    // 0x4479d8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x4479d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_4479dc:
    // 0x4479dc: 0x270102b  sltu        $v0, $s3, $s0
    ctx->pc = 0x4479dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4479e0:
    // 0x4479e0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_4479e4:
    if (ctx->pc == 0x4479E4u) {
        ctx->pc = 0x4479E4u;
            // 0x4479e4: 0x269400b0  addiu       $s4, $s4, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 176));
        ctx->pc = 0x4479E8u;
        goto label_4479e8;
    }
    ctx->pc = 0x4479E0u;
    {
        const bool branch_taken_0x4479e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4479E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4479E0u;
            // 0x4479e4: 0x269400b0  addiu       $s4, $s4, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4479e0) {
            ctx->pc = 0x4479C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4479c8;
        }
    }
    ctx->pc = 0x4479E8u;
label_4479e8:
    // 0x4479e8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4479e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4479ec:
    // 0x4479ec: 0x2442d570  addiu       $v0, $v0, -0x2A90
    ctx->pc = 0x4479ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956400));
label_4479f0:
    // 0x4479f0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4479f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4479f4:
    // 0x4479f4: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4479f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_4479f8:
    // 0x4479f8: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x4479f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_4479fc:
    // 0x4479fc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4479fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_447a00:
    // 0x447a00: 0x2463cfe0  addiu       $v1, $v1, -0x3020
    ctx->pc = 0x447a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954976));
label_447a04:
    // 0x447a04: 0x2442d5a8  addiu       $v0, $v0, -0x2A58
    ctx->pc = 0x447a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956456));
label_447a08:
    // 0x447a08: 0x24842460  addiu       $a0, $a0, 0x2460
    ctx->pc = 0x447a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9312));
label_447a0c:
    // 0x447a0c: 0xae420064  sw          $v0, 0x64($s2)
    ctx->pc = 0x447a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 2));
label_447a10:
    // 0x447a10: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x447a10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_447a14:
    // 0x447a14: 0xae400094  sw          $zero, 0x94($s2)
    ctx->pc = 0x447a14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 148), GPR_U32(ctx, 0));
label_447a18:
    // 0x447a18: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x447a18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_447a1c:
    // 0x447a1c: 0xae400098  sw          $zero, 0x98($s2)
    ctx->pc = 0x447a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 0));
label_447a20:
    // 0x447a20: 0x244224a0  addiu       $v0, $v0, 0x24A0
    ctx->pc = 0x447a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9376));
label_447a24:
    // 0x447a24: 0xae4300a0  sw          $v1, 0xA0($s2)
    ctx->pc = 0x447a24u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 3));
label_447a28:
    // 0x447a28: 0xae4200a0  sw          $v0, 0xA0($s2)
    ctx->pc = 0x447a28u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 2));
label_447a2c:
    // 0x447a2c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x447a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_447a30:
    // 0x447a30: 0xae4400a0  sw          $a0, 0xA0($s2)
    ctx->pc = 0x447a30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 4));
label_447a34:
    // 0x447a34: 0x2463d680  addiu       $v1, $v1, -0x2980
    ctx->pc = 0x447a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956672));
label_447a38:
    // 0x447a38: 0xae4000a4  sw          $zero, 0xA4($s2)
    ctx->pc = 0x447a38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 164), GPR_U32(ctx, 0));
label_447a3c:
    // 0x447a3c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x447a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_447a40:
    // 0x447a40: 0xae4300a0  sw          $v1, 0xA0($s2)
    ctx->pc = 0x447a40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 3));
label_447a44:
    // 0x447a44: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x447a44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_447a48:
    // 0x447a48: 0xc0a7a88  jal         func_29EA20
label_447a4c:
    if (ctx->pc == 0x447A4Cu) {
        ctx->pc = 0x447A4Cu;
            // 0x447a4c: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x447A50u;
        goto label_447a50;
    }
    ctx->pc = 0x447A48u;
    SET_GPR_U32(ctx, 31, 0x447A50u);
    ctx->pc = 0x447A4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x447A48u;
            // 0x447a4c: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x447A50u; }
        if (ctx->pc != 0x447A50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x447A50u; }
        if (ctx->pc != 0x447A50u) { return; }
    }
    ctx->pc = 0x447A50u;
label_447a50:
    // 0x447a50: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x447a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_447a54:
    // 0x447a54: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x447a54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_447a58:
    // 0x447a58: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_447a5c:
    if (ctx->pc == 0x447A5Cu) {
        ctx->pc = 0x447A5Cu;
            // 0x447a5c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x447A60u;
        goto label_447a60;
    }
    ctx->pc = 0x447A58u;
    {
        const bool branch_taken_0x447a58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x447A5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x447A58u;
            // 0x447a5c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447a58) {
            ctx->pc = 0x447A74u;
            goto label_447a74;
        }
    }
    ctx->pc = 0x447A60u;
label_447a60:
    // 0x447a60: 0x3c0240f0  lui         $v0, 0x40F0
    ctx->pc = 0x447a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16624 << 16));
label_447a64:
    // 0x447a64: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x447a64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_447a68:
    // 0x447a68: 0xc0827ac  jal         func_209EB0
label_447a6c:
    if (ctx->pc == 0x447A6Cu) {
        ctx->pc = 0x447A70u;
        goto label_447a70;
    }
    ctx->pc = 0x447A68u;
    SET_GPR_U32(ctx, 31, 0x447A70u);
    ctx->pc = 0x209EB0u;
    if (runtime->hasFunction(0x209EB0u)) {
        auto targetFn = runtime->lookupFunction(0x209EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x447A70u; }
        if (ctx->pc != 0x447A70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00209EB0_0x209eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x447A70u; }
        if (ctx->pc != 0x447A70u) { return; }
    }
    ctx->pc = 0x447A70u;
label_447a70:
    // 0x447a70: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x447a70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_447a74:
    // 0x447a74: 0xae44005c  sw          $a0, 0x5C($s2)
    ctx->pc = 0x447a74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 4));
label_447a78:
    // 0x447a78: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x447a78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_447a7c:
    // 0x447a7c: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x447a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_447a80:
    // 0x447a80: 0x2404006c  addiu       $a0, $zero, 0x6C
    ctx->pc = 0x447a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
label_447a84:
    // 0x447a84: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x447a84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_447a88:
    // 0x447a88: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x447a88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_447a8c:
    // 0x447a8c: 0x8c42077c  lw          $v0, 0x77C($v0)
    ctx->pc = 0x447a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1916)));
label_447a90:
    // 0x447a90: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x447a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_447a94:
    // 0x447a94: 0x2228018  mult        $s0, $s1, $v0
    ctx->pc = 0x447a94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_447a98:
    // 0x447a98: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x447a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_447a9c:
    // 0x447a9c: 0xc040140  jal         func_100500
label_447aa0:
    if (ctx->pc == 0x447AA0u) {
        ctx->pc = 0x447AA0u;
            // 0x447aa0: 0x23980  sll         $a3, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->pc = 0x447AA4u;
        goto label_447aa4;
    }
    ctx->pc = 0x447A9Cu;
    SET_GPR_U32(ctx, 31, 0x447AA4u);
    ctx->pc = 0x447AA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x447A9Cu;
            // 0x447aa0: 0x23980  sll         $a3, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100500u;
    if (runtime->hasFunction(0x100500u)) {
        auto targetFn = runtime->lookupFunction(0x100500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x447AA4u; }
        if (ctx->pc != 0x447AA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100500_0x100500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x447AA4u; }
        if (ctx->pc != 0x447AA4u) { return; }
    }
    ctx->pc = 0x447AA4u;
label_447aa4:
    // 0x447aa4: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_447aa8:
    if (ctx->pc == 0x447AA8u) {
        ctx->pc = 0x447AA8u;
            // 0x447aa8: 0xae42008c  sw          $v0, 0x8C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 2));
        ctx->pc = 0x447AACu;
        goto label_447aac;
    }
    ctx->pc = 0x447AA4u;
    {
        const bool branch_taken_0x447aa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x447aa4) {
            ctx->pc = 0x447AA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x447AA4u;
            // 0x447aa8: 0xae42008c  sw          $v0, 0x8C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x447AC4u;
            goto label_447ac4;
        }
    }
    ctx->pc = 0x447AACu;
label_447aac:
    // 0x447aac: 0x26060001  addiu       $a2, $s0, 0x1
    ctx->pc = 0x447aacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_447ab0:
    // 0x447ab0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x447ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_447ab4:
    // 0x447ab4: 0x26450094  addiu       $a1, $s2, 0x94
    ctx->pc = 0x447ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 148));
label_447ab8:
    // 0x447ab8: 0xc0b4554  jal         func_2D1550
label_447abc:
    if (ctx->pc == 0x447ABCu) {
        ctx->pc = 0x447ABCu;
            // 0x447abc: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x447AC0u;
        goto label_447ac0;
    }
    ctx->pc = 0x447AB8u;
    SET_GPR_U32(ctx, 31, 0x447AC0u);
    ctx->pc = 0x447ABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x447AB8u;
            // 0x447abc: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D1550u;
    if (runtime->hasFunction(0x2D1550u)) {
        auto targetFn = runtime->lookupFunction(0x2D1550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x447AC0u; }
        if (ctx->pc != 0x447AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1550_0x2d1550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x447AC0u; }
        if (ctx->pc != 0x447AC0u) { return; }
    }
    ctx->pc = 0x447AC0u;
label_447ac0:
    // 0x447ac0: 0xae42008c  sw          $v0, 0x8C($s2)
    ctx->pc = 0x447ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 2));
label_447ac4:
    // 0x447ac4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x447ac4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_447ac8:
    // 0x447ac8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x447ac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_447acc:
    // 0x447acc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x447accu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_447ad0:
    // 0x447ad0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x447ad0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_447ad4:
    // 0x447ad4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x447ad4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_447ad8:
    // 0x447ad8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x447ad8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_447adc:
    // 0x447adc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x447adcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_447ae0:
    // 0x447ae0: 0x3e00008  jr          $ra
label_447ae4:
    if (ctx->pc == 0x447AE4u) {
        ctx->pc = 0x447AE4u;
            // 0x447ae4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x447AE8u;
        goto label_447ae8;
    }
    ctx->pc = 0x447AE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x447AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x447AE0u;
            // 0x447ae4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x447AE8u;
label_447ae8:
    // 0x447ae8: 0x0  nop
    ctx->pc = 0x447ae8u;
    // NOP
label_447aec:
    // 0x447aec: 0x0  nop
    ctx->pc = 0x447aecu;
    // NOP
label_447af0:
    // 0x447af0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x447af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_447af4:
    // 0x447af4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x447af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_447af8:
    // 0x447af8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x447af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_447afc:
    // 0x447afc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x447afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_447b00:
    // 0x447b00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x447b00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_447b04:
    // 0x447b04: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
label_447b08:
    if (ctx->pc == 0x447B08u) {
        ctx->pc = 0x447B08u;
            // 0x447b08: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x447B0Cu;
        goto label_447b0c;
    }
    ctx->pc = 0x447B04u;
    {
        const bool branch_taken_0x447b04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x447B08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x447B04u;
            // 0x447b08: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447b04) {
            ctx->pc = 0x447B68u;
            goto label_447b68;
        }
    }
    ctx->pc = 0x447B0Cu;
label_447b0c:
    // 0x447b0c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x447b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_447b10:
    // 0x447b10: 0x2442d680  addiu       $v0, $v0, -0x2980
    ctx->pc = 0x447b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
label_447b14:
    // 0x447b14: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
label_447b18:
    if (ctx->pc == 0x447B18u) {
        ctx->pc = 0x447B18u;
            // 0x447b18: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x447B1Cu;
        goto label_447b1c;
    }
    ctx->pc = 0x447B14u;
    {
        const bool branch_taken_0x447b14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x447B18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x447B14u;
            // 0x447b18: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447b14) {
            ctx->pc = 0x447B50u;
            goto label_447b50;
        }
    }
    ctx->pc = 0x447B1Cu;
label_447b1c:
    // 0x447b1c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x447b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_447b20:
    // 0x447b20: 0x24422460  addiu       $v0, $v0, 0x2460
    ctx->pc = 0x447b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9312));
label_447b24:
    // 0x447b24: 0xc0d37dc  jal         func_34DF70
label_447b28:
    if (ctx->pc == 0x447B28u) {
        ctx->pc = 0x447B28u;
            // 0x447b28: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x447B2Cu;
        goto label_447b2c;
    }
    ctx->pc = 0x447B24u;
    SET_GPR_U32(ctx, 31, 0x447B2Cu);
    ctx->pc = 0x447B28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x447B24u;
            // 0x447b28: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x447B2Cu; }
        if (ctx->pc != 0x447B2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x447B2Cu; }
        if (ctx->pc != 0x447B2Cu) { return; }
    }
    ctx->pc = 0x447B2Cu;
label_447b2c:
    // 0x447b2c: 0x52000009  beql        $s0, $zero, . + 4 + (0x9 << 2)
label_447b30:
    if (ctx->pc == 0x447B30u) {
        ctx->pc = 0x447B30u;
            // 0x447b30: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x447B34u;
        goto label_447b34;
    }
    ctx->pc = 0x447B2Cu;
    {
        const bool branch_taken_0x447b2c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x447b2c) {
            ctx->pc = 0x447B30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x447B2Cu;
            // 0x447b30: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x447B54u;
            goto label_447b54;
        }
    }
    ctx->pc = 0x447B34u;
label_447b34:
    // 0x447b34: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x447b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_447b38:
    // 0x447b38: 0x244224a0  addiu       $v0, $v0, 0x24A0
    ctx->pc = 0x447b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9376));
label_447b3c:
    // 0x447b3c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_447b40:
    if (ctx->pc == 0x447B40u) {
        ctx->pc = 0x447B40u;
            // 0x447b40: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x447B44u;
        goto label_447b44;
    }
    ctx->pc = 0x447B3Cu;
    {
        const bool branch_taken_0x447b3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x447B40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x447B3Cu;
            // 0x447b40: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447b3c) {
            ctx->pc = 0x447B50u;
            goto label_447b50;
        }
    }
    ctx->pc = 0x447B44u;
label_447b44:
    // 0x447b44: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x447b44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_447b48:
    // 0x447b48: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x447b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_447b4c:
    // 0x447b4c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x447b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_447b50:
    // 0x447b50: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x447b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_447b54:
    // 0x447b54: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x447b54u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_447b58:
    // 0x447b58: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_447b5c:
    if (ctx->pc == 0x447B5Cu) {
        ctx->pc = 0x447B5Cu;
            // 0x447b5c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x447B60u;
        goto label_447b60;
    }
    ctx->pc = 0x447B58u;
    {
        const bool branch_taken_0x447b58 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x447b58) {
            ctx->pc = 0x447B5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x447B58u;
            // 0x447b5c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x447B6Cu;
            goto label_447b6c;
        }
    }
    ctx->pc = 0x447B60u;
label_447b60:
    // 0x447b60: 0xc0400a8  jal         func_1002A0
label_447b64:
    if (ctx->pc == 0x447B64u) {
        ctx->pc = 0x447B64u;
            // 0x447b64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x447B68u;
        goto label_447b68;
    }
    ctx->pc = 0x447B60u;
    SET_GPR_U32(ctx, 31, 0x447B68u);
    ctx->pc = 0x447B64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x447B60u;
            // 0x447b64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x447B68u; }
        if (ctx->pc != 0x447B68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x447B68u; }
        if (ctx->pc != 0x447B68u) { return; }
    }
    ctx->pc = 0x447B68u;
label_447b68:
    // 0x447b68: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x447b68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_447b6c:
    // 0x447b6c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x447b6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_447b70:
    // 0x447b70: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x447b70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_447b74:
    // 0x447b74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x447b74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_447b78:
    // 0x447b78: 0x3e00008  jr          $ra
label_447b7c:
    if (ctx->pc == 0x447B7Cu) {
        ctx->pc = 0x447B7Cu;
            // 0x447b7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x447B80u;
        goto label_447b80;
    }
    ctx->pc = 0x447B78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x447B7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x447B78u;
            // 0x447b7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x447B80u;
label_447b80:
    // 0x447b80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x447b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_447b84:
    // 0x447b84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x447b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_447b88:
    // 0x447b88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x447b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_447b8c:
    // 0x447b8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x447b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_447b90:
    // 0x447b90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x447b90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_447b94:
    // 0x447b94: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_447b98:
    if (ctx->pc == 0x447B98u) {
        ctx->pc = 0x447B98u;
            // 0x447b98: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x447B9Cu;
        goto label_447b9c;
    }
    ctx->pc = 0x447B94u;
    {
        const bool branch_taken_0x447b94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x447B98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x447B94u;
            // 0x447b98: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447b94) {
            ctx->pc = 0x447CC8u;
            goto label_447cc8;
        }
    }
    ctx->pc = 0x447B9Cu;
label_447b9c:
    // 0x447b9c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x447b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_447ba0:
    // 0x447ba0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x447ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_447ba4:
    // 0x447ba4: 0x2463d5e0  addiu       $v1, $v1, -0x2A20
    ctx->pc = 0x447ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956512));
label_447ba8:
    // 0x447ba8: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x447ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
label_447bac:
    // 0x447bac: 0x2442d618  addiu       $v0, $v0, -0x29E8
    ctx->pc = 0x447bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956568));
label_447bb0:
    // 0x447bb0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x447bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_447bb4:
    // 0x447bb4: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x447bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_447bb8:
    // 0x447bb8: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x447bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_447bbc:
    // 0x447bbc: 0xc0407c0  jal         func_101F00
label_447bc0:
    if (ctx->pc == 0x447BC0u) {
        ctx->pc = 0x447BC0u;
            // 0x447bc0: 0x24a569e0  addiu       $a1, $a1, 0x69E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27104));
        ctx->pc = 0x447BC4u;
        goto label_447bc4;
    }
    ctx->pc = 0x447BBCu;
    SET_GPR_U32(ctx, 31, 0x447BC4u);
    ctx->pc = 0x447BC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x447BBCu;
            // 0x447bc0: 0x24a569e0  addiu       $a1, $a1, 0x69E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x447BC4u; }
        if (ctx->pc != 0x447BC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x447BC4u; }
        if (ctx->pc != 0x447BC4u) { return; }
    }
    ctx->pc = 0x447BC4u;
label_447bc4:
    // 0x447bc4: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x447bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_447bc8:
    // 0x447bc8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_447bcc:
    if (ctx->pc == 0x447BCCu) {
        ctx->pc = 0x447BCCu;
            // 0x447bcc: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x447BD0u;
        goto label_447bd0;
    }
    ctx->pc = 0x447BC8u;
    {
        const bool branch_taken_0x447bc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x447bc8) {
            ctx->pc = 0x447BCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x447BC8u;
            // 0x447bcc: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x447BDCu;
            goto label_447bdc;
        }
    }
    ctx->pc = 0x447BD0u;
label_447bd0:
    // 0x447bd0: 0xc07507c  jal         func_1D41F0
label_447bd4:
    if (ctx->pc == 0x447BD4u) {
        ctx->pc = 0x447BD4u;
            // 0x447bd4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x447BD8u;
        goto label_447bd8;
    }
    ctx->pc = 0x447BD0u;
    SET_GPR_U32(ctx, 31, 0x447BD8u);
    ctx->pc = 0x447BD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x447BD0u;
            // 0x447bd4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x447BD8u; }
        if (ctx->pc != 0x447BD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x447BD8u; }
        if (ctx->pc != 0x447BD8u) { return; }
    }
    ctx->pc = 0x447BD8u;
label_447bd8:
    // 0x447bd8: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x447bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_447bdc:
    // 0x447bdc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_447be0:
    if (ctx->pc == 0x447BE0u) {
        ctx->pc = 0x447BE0u;
            // 0x447be0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x447BE4u;
        goto label_447be4;
    }
    ctx->pc = 0x447BDCu;
    {
        const bool branch_taken_0x447bdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x447bdc) {
            ctx->pc = 0x447BE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x447BDCu;
            // 0x447be0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x447C0Cu;
            goto label_447c0c;
        }
    }
    ctx->pc = 0x447BE4u;
label_447be4:
    // 0x447be4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_447be8:
    if (ctx->pc == 0x447BE8u) {
        ctx->pc = 0x447BECu;
        goto label_447bec;
    }
    ctx->pc = 0x447BE4u;
    {
        const bool branch_taken_0x447be4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x447be4) {
            ctx->pc = 0x447C08u;
            goto label_447c08;
        }
    }
    ctx->pc = 0x447BECu;
label_447bec:
    // 0x447bec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_447bf0:
    if (ctx->pc == 0x447BF0u) {
        ctx->pc = 0x447BF4u;
        goto label_447bf4;
    }
    ctx->pc = 0x447BECu;
    {
        const bool branch_taken_0x447bec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x447bec) {
            ctx->pc = 0x447C08u;
            goto label_447c08;
        }
    }
    ctx->pc = 0x447BF4u;
label_447bf4:
    // 0x447bf4: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x447bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_447bf8:
    // 0x447bf8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_447bfc:
    if (ctx->pc == 0x447BFCu) {
        ctx->pc = 0x447C00u;
        goto label_447c00;
    }
    ctx->pc = 0x447BF8u;
    {
        const bool branch_taken_0x447bf8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x447bf8) {
            ctx->pc = 0x447C08u;
            goto label_447c08;
        }
    }
    ctx->pc = 0x447C00u;
label_447c00:
    // 0x447c00: 0xc0400a8  jal         func_1002A0
label_447c04:
    if (ctx->pc == 0x447C04u) {
        ctx->pc = 0x447C08u;
        goto label_447c08;
    }
    ctx->pc = 0x447C00u;
    SET_GPR_U32(ctx, 31, 0x447C08u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x447C08u; }
        if (ctx->pc != 0x447C08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x447C08u; }
        if (ctx->pc != 0x447C08u) { return; }
    }
    ctx->pc = 0x447C08u;
label_447c08:
    // 0x447c08: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x447c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_447c0c:
    // 0x447c0c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_447c10:
    if (ctx->pc == 0x447C10u) {
        ctx->pc = 0x447C10u;
            // 0x447c10: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x447C14u;
        goto label_447c14;
    }
    ctx->pc = 0x447C0Cu;
    {
        const bool branch_taken_0x447c0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x447c0c) {
            ctx->pc = 0x447C10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x447C0Cu;
            // 0x447c10: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x447C3Cu;
            goto label_447c3c;
        }
    }
    ctx->pc = 0x447C14u;
label_447c14:
    // 0x447c14: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_447c18:
    if (ctx->pc == 0x447C18u) {
        ctx->pc = 0x447C1Cu;
        goto label_447c1c;
    }
    ctx->pc = 0x447C14u;
    {
        const bool branch_taken_0x447c14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x447c14) {
            ctx->pc = 0x447C38u;
            goto label_447c38;
        }
    }
    ctx->pc = 0x447C1Cu;
label_447c1c:
    // 0x447c1c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_447c20:
    if (ctx->pc == 0x447C20u) {
        ctx->pc = 0x447C24u;
        goto label_447c24;
    }
    ctx->pc = 0x447C1Cu;
    {
        const bool branch_taken_0x447c1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x447c1c) {
            ctx->pc = 0x447C38u;
            goto label_447c38;
        }
    }
    ctx->pc = 0x447C24u;
label_447c24:
    // 0x447c24: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x447c24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_447c28:
    // 0x447c28: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_447c2c:
    if (ctx->pc == 0x447C2Cu) {
        ctx->pc = 0x447C30u;
        goto label_447c30;
    }
    ctx->pc = 0x447C28u;
    {
        const bool branch_taken_0x447c28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x447c28) {
            ctx->pc = 0x447C38u;
            goto label_447c38;
        }
    }
    ctx->pc = 0x447C30u;
label_447c30:
    // 0x447c30: 0xc0400a8  jal         func_1002A0
label_447c34:
    if (ctx->pc == 0x447C34u) {
        ctx->pc = 0x447C38u;
        goto label_447c38;
    }
    ctx->pc = 0x447C30u;
    SET_GPR_U32(ctx, 31, 0x447C38u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x447C38u; }
        if (ctx->pc != 0x447C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x447C38u; }
        if (ctx->pc != 0x447C38u) { return; }
    }
    ctx->pc = 0x447C38u;
label_447c38:
    // 0x447c38: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x447c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_447c3c:
    // 0x447c3c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_447c40:
    if (ctx->pc == 0x447C40u) {
        ctx->pc = 0x447C44u;
        goto label_447c44;
    }
    ctx->pc = 0x447C3Cu;
    {
        const bool branch_taken_0x447c3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x447c3c) {
            ctx->pc = 0x447C58u;
            goto label_447c58;
        }
    }
    ctx->pc = 0x447C44u;
label_447c44:
    // 0x447c44: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x447c44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_447c48:
    // 0x447c48: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x447c48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_447c4c:
    // 0x447c4c: 0x2463d5c8  addiu       $v1, $v1, -0x2A38
    ctx->pc = 0x447c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956488));
label_447c50:
    // 0x447c50: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x447c50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_447c54:
    // 0x447c54: 0xac407538  sw          $zero, 0x7538($v0)
    ctx->pc = 0x447c54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 30008), GPR_U32(ctx, 0));
label_447c58:
    // 0x447c58: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_447c5c:
    if (ctx->pc == 0x447C5Cu) {
        ctx->pc = 0x447C5Cu;
            // 0x447c5c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x447C60u;
        goto label_447c60;
    }
    ctx->pc = 0x447C58u;
    {
        const bool branch_taken_0x447c58 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x447c58) {
            ctx->pc = 0x447C5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x447C58u;
            // 0x447c5c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x447CB4u;
            goto label_447cb4;
        }
    }
    ctx->pc = 0x447C60u;
label_447c60:
    // 0x447c60: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x447c60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_447c64:
    // 0x447c64: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x447c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_447c68:
    // 0x447c68: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x447c68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_447c6c:
    // 0x447c6c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x447c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_447c70:
    // 0x447c70: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_447c74:
    if (ctx->pc == 0x447C74u) {
        ctx->pc = 0x447C74u;
            // 0x447c74: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x447C78u;
        goto label_447c78;
    }
    ctx->pc = 0x447C70u;
    {
        const bool branch_taken_0x447c70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x447c70) {
            ctx->pc = 0x447C74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x447C70u;
            // 0x447c74: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x447C8Cu;
            goto label_447c8c;
        }
    }
    ctx->pc = 0x447C78u;
label_447c78:
    // 0x447c78: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x447c78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_447c7c:
    // 0x447c7c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x447c7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_447c80:
    // 0x447c80: 0x320f809  jalr        $t9
label_447c84:
    if (ctx->pc == 0x447C84u) {
        ctx->pc = 0x447C84u;
            // 0x447c84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x447C88u;
        goto label_447c88;
    }
    ctx->pc = 0x447C80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x447C88u);
        ctx->pc = 0x447C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x447C80u;
            // 0x447c84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x447C88u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x447C88u; }
            if (ctx->pc != 0x447C88u) { return; }
        }
        }
    }
    ctx->pc = 0x447C88u;
label_447c88:
    // 0x447c88: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x447c88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_447c8c:
    // 0x447c8c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_447c90:
    if (ctx->pc == 0x447C90u) {
        ctx->pc = 0x447C90u;
            // 0x447c90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x447C94u;
        goto label_447c94;
    }
    ctx->pc = 0x447C8Cu;
    {
        const bool branch_taken_0x447c8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x447c8c) {
            ctx->pc = 0x447C90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x447C8Cu;
            // 0x447c90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x447CA8u;
            goto label_447ca8;
        }
    }
    ctx->pc = 0x447C94u;
label_447c94:
    // 0x447c94: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x447c94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_447c98:
    // 0x447c98: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x447c98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_447c9c:
    // 0x447c9c: 0x320f809  jalr        $t9
label_447ca0:
    if (ctx->pc == 0x447CA0u) {
        ctx->pc = 0x447CA0u;
            // 0x447ca0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x447CA4u;
        goto label_447ca4;
    }
    ctx->pc = 0x447C9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x447CA4u);
        ctx->pc = 0x447CA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x447C9Cu;
            // 0x447ca0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x447CA4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x447CA4u; }
            if (ctx->pc != 0x447CA4u) { return; }
        }
        }
    }
    ctx->pc = 0x447CA4u;
label_447ca4:
    // 0x447ca4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x447ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_447ca8:
    // 0x447ca8: 0xc075bf8  jal         func_1D6FE0
label_447cac:
    if (ctx->pc == 0x447CACu) {
        ctx->pc = 0x447CACu;
            // 0x447cac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x447CB0u;
        goto label_447cb0;
    }
    ctx->pc = 0x447CA8u;
    SET_GPR_U32(ctx, 31, 0x447CB0u);
    ctx->pc = 0x447CACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x447CA8u;
            // 0x447cac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x447CB0u; }
        if (ctx->pc != 0x447CB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x447CB0u; }
        if (ctx->pc != 0x447CB0u) { return; }
    }
    ctx->pc = 0x447CB0u;
label_447cb0:
    // 0x447cb0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x447cb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_447cb4:
    // 0x447cb4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x447cb4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_447cb8:
    // 0x447cb8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_447cbc:
    if (ctx->pc == 0x447CBCu) {
        ctx->pc = 0x447CBCu;
            // 0x447cbc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x447CC0u;
        goto label_447cc0;
    }
    ctx->pc = 0x447CB8u;
    {
        const bool branch_taken_0x447cb8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x447cb8) {
            ctx->pc = 0x447CBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x447CB8u;
            // 0x447cbc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x447CCCu;
            goto label_447ccc;
        }
    }
    ctx->pc = 0x447CC0u;
label_447cc0:
    // 0x447cc0: 0xc0400a8  jal         func_1002A0
label_447cc4:
    if (ctx->pc == 0x447CC4u) {
        ctx->pc = 0x447CC4u;
            // 0x447cc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x447CC8u;
        goto label_447cc8;
    }
    ctx->pc = 0x447CC0u;
    SET_GPR_U32(ctx, 31, 0x447CC8u);
    ctx->pc = 0x447CC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x447CC0u;
            // 0x447cc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x447CC8u; }
        if (ctx->pc != 0x447CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x447CC8u; }
        if (ctx->pc != 0x447CC8u) { return; }
    }
    ctx->pc = 0x447CC8u;
label_447cc8:
    // 0x447cc8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x447cc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_447ccc:
    // 0x447ccc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x447cccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_447cd0:
    // 0x447cd0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x447cd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_447cd4:
    // 0x447cd4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x447cd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_447cd8:
    // 0x447cd8: 0x3e00008  jr          $ra
label_447cdc:
    if (ctx->pc == 0x447CDCu) {
        ctx->pc = 0x447CDCu;
            // 0x447cdc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x447CE0u;
        goto label_fallthrough_0x447cd8;
    }
    ctx->pc = 0x447CD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x447CDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x447CD8u;
            // 0x447cdc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x447cd8:
    ctx->pc = 0x447CE0u;
}
