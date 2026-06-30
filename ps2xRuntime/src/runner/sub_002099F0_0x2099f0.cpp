#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002099F0
// Address: 0x2099f0 - 0x209eb0
void sub_002099F0_0x2099f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002099F0_0x2099f0");
#endif

    switch (ctx->pc) {
        case 0x2099f0u: goto label_2099f0;
        case 0x2099f4u: goto label_2099f4;
        case 0x2099f8u: goto label_2099f8;
        case 0x2099fcu: goto label_2099fc;
        case 0x209a00u: goto label_209a00;
        case 0x209a04u: goto label_209a04;
        case 0x209a08u: goto label_209a08;
        case 0x209a0cu: goto label_209a0c;
        case 0x209a10u: goto label_209a10;
        case 0x209a14u: goto label_209a14;
        case 0x209a18u: goto label_209a18;
        case 0x209a1cu: goto label_209a1c;
        case 0x209a20u: goto label_209a20;
        case 0x209a24u: goto label_209a24;
        case 0x209a28u: goto label_209a28;
        case 0x209a2cu: goto label_209a2c;
        case 0x209a30u: goto label_209a30;
        case 0x209a34u: goto label_209a34;
        case 0x209a38u: goto label_209a38;
        case 0x209a3cu: goto label_209a3c;
        case 0x209a40u: goto label_209a40;
        case 0x209a44u: goto label_209a44;
        case 0x209a48u: goto label_209a48;
        case 0x209a4cu: goto label_209a4c;
        case 0x209a50u: goto label_209a50;
        case 0x209a54u: goto label_209a54;
        case 0x209a58u: goto label_209a58;
        case 0x209a5cu: goto label_209a5c;
        case 0x209a60u: goto label_209a60;
        case 0x209a64u: goto label_209a64;
        case 0x209a68u: goto label_209a68;
        case 0x209a6cu: goto label_209a6c;
        case 0x209a70u: goto label_209a70;
        case 0x209a74u: goto label_209a74;
        case 0x209a78u: goto label_209a78;
        case 0x209a7cu: goto label_209a7c;
        case 0x209a80u: goto label_209a80;
        case 0x209a84u: goto label_209a84;
        case 0x209a88u: goto label_209a88;
        case 0x209a8cu: goto label_209a8c;
        case 0x209a90u: goto label_209a90;
        case 0x209a94u: goto label_209a94;
        case 0x209a98u: goto label_209a98;
        case 0x209a9cu: goto label_209a9c;
        case 0x209aa0u: goto label_209aa0;
        case 0x209aa4u: goto label_209aa4;
        case 0x209aa8u: goto label_209aa8;
        case 0x209aacu: goto label_209aac;
        case 0x209ab0u: goto label_209ab0;
        case 0x209ab4u: goto label_209ab4;
        case 0x209ab8u: goto label_209ab8;
        case 0x209abcu: goto label_209abc;
        case 0x209ac0u: goto label_209ac0;
        case 0x209ac4u: goto label_209ac4;
        case 0x209ac8u: goto label_209ac8;
        case 0x209accu: goto label_209acc;
        case 0x209ad0u: goto label_209ad0;
        case 0x209ad4u: goto label_209ad4;
        case 0x209ad8u: goto label_209ad8;
        case 0x209adcu: goto label_209adc;
        case 0x209ae0u: goto label_209ae0;
        case 0x209ae4u: goto label_209ae4;
        case 0x209ae8u: goto label_209ae8;
        case 0x209aecu: goto label_209aec;
        case 0x209af0u: goto label_209af0;
        case 0x209af4u: goto label_209af4;
        case 0x209af8u: goto label_209af8;
        case 0x209afcu: goto label_209afc;
        case 0x209b00u: goto label_209b00;
        case 0x209b04u: goto label_209b04;
        case 0x209b08u: goto label_209b08;
        case 0x209b0cu: goto label_209b0c;
        case 0x209b10u: goto label_209b10;
        case 0x209b14u: goto label_209b14;
        case 0x209b18u: goto label_209b18;
        case 0x209b1cu: goto label_209b1c;
        case 0x209b20u: goto label_209b20;
        case 0x209b24u: goto label_209b24;
        case 0x209b28u: goto label_209b28;
        case 0x209b2cu: goto label_209b2c;
        case 0x209b30u: goto label_209b30;
        case 0x209b34u: goto label_209b34;
        case 0x209b38u: goto label_209b38;
        case 0x209b3cu: goto label_209b3c;
        case 0x209b40u: goto label_209b40;
        case 0x209b44u: goto label_209b44;
        case 0x209b48u: goto label_209b48;
        case 0x209b4cu: goto label_209b4c;
        case 0x209b50u: goto label_209b50;
        case 0x209b54u: goto label_209b54;
        case 0x209b58u: goto label_209b58;
        case 0x209b5cu: goto label_209b5c;
        case 0x209b60u: goto label_209b60;
        case 0x209b64u: goto label_209b64;
        case 0x209b68u: goto label_209b68;
        case 0x209b6cu: goto label_209b6c;
        case 0x209b70u: goto label_209b70;
        case 0x209b74u: goto label_209b74;
        case 0x209b78u: goto label_209b78;
        case 0x209b7cu: goto label_209b7c;
        case 0x209b80u: goto label_209b80;
        case 0x209b84u: goto label_209b84;
        case 0x209b88u: goto label_209b88;
        case 0x209b8cu: goto label_209b8c;
        case 0x209b90u: goto label_209b90;
        case 0x209b94u: goto label_209b94;
        case 0x209b98u: goto label_209b98;
        case 0x209b9cu: goto label_209b9c;
        case 0x209ba0u: goto label_209ba0;
        case 0x209ba4u: goto label_209ba4;
        case 0x209ba8u: goto label_209ba8;
        case 0x209bacu: goto label_209bac;
        case 0x209bb0u: goto label_209bb0;
        case 0x209bb4u: goto label_209bb4;
        case 0x209bb8u: goto label_209bb8;
        case 0x209bbcu: goto label_209bbc;
        case 0x209bc0u: goto label_209bc0;
        case 0x209bc4u: goto label_209bc4;
        case 0x209bc8u: goto label_209bc8;
        case 0x209bccu: goto label_209bcc;
        case 0x209bd0u: goto label_209bd0;
        case 0x209bd4u: goto label_209bd4;
        case 0x209bd8u: goto label_209bd8;
        case 0x209bdcu: goto label_209bdc;
        case 0x209be0u: goto label_209be0;
        case 0x209be4u: goto label_209be4;
        case 0x209be8u: goto label_209be8;
        case 0x209becu: goto label_209bec;
        case 0x209bf0u: goto label_209bf0;
        case 0x209bf4u: goto label_209bf4;
        case 0x209bf8u: goto label_209bf8;
        case 0x209bfcu: goto label_209bfc;
        case 0x209c00u: goto label_209c00;
        case 0x209c04u: goto label_209c04;
        case 0x209c08u: goto label_209c08;
        case 0x209c0cu: goto label_209c0c;
        case 0x209c10u: goto label_209c10;
        case 0x209c14u: goto label_209c14;
        case 0x209c18u: goto label_209c18;
        case 0x209c1cu: goto label_209c1c;
        case 0x209c20u: goto label_209c20;
        case 0x209c24u: goto label_209c24;
        case 0x209c28u: goto label_209c28;
        case 0x209c2cu: goto label_209c2c;
        case 0x209c30u: goto label_209c30;
        case 0x209c34u: goto label_209c34;
        case 0x209c38u: goto label_209c38;
        case 0x209c3cu: goto label_209c3c;
        case 0x209c40u: goto label_209c40;
        case 0x209c44u: goto label_209c44;
        case 0x209c48u: goto label_209c48;
        case 0x209c4cu: goto label_209c4c;
        case 0x209c50u: goto label_209c50;
        case 0x209c54u: goto label_209c54;
        case 0x209c58u: goto label_209c58;
        case 0x209c5cu: goto label_209c5c;
        case 0x209c60u: goto label_209c60;
        case 0x209c64u: goto label_209c64;
        case 0x209c68u: goto label_209c68;
        case 0x209c6cu: goto label_209c6c;
        case 0x209c70u: goto label_209c70;
        case 0x209c74u: goto label_209c74;
        case 0x209c78u: goto label_209c78;
        case 0x209c7cu: goto label_209c7c;
        case 0x209c80u: goto label_209c80;
        case 0x209c84u: goto label_209c84;
        case 0x209c88u: goto label_209c88;
        case 0x209c8cu: goto label_209c8c;
        case 0x209c90u: goto label_209c90;
        case 0x209c94u: goto label_209c94;
        case 0x209c98u: goto label_209c98;
        case 0x209c9cu: goto label_209c9c;
        case 0x209ca0u: goto label_209ca0;
        case 0x209ca4u: goto label_209ca4;
        case 0x209ca8u: goto label_209ca8;
        case 0x209cacu: goto label_209cac;
        case 0x209cb0u: goto label_209cb0;
        case 0x209cb4u: goto label_209cb4;
        case 0x209cb8u: goto label_209cb8;
        case 0x209cbcu: goto label_209cbc;
        case 0x209cc0u: goto label_209cc0;
        case 0x209cc4u: goto label_209cc4;
        case 0x209cc8u: goto label_209cc8;
        case 0x209cccu: goto label_209ccc;
        case 0x209cd0u: goto label_209cd0;
        case 0x209cd4u: goto label_209cd4;
        case 0x209cd8u: goto label_209cd8;
        case 0x209cdcu: goto label_209cdc;
        case 0x209ce0u: goto label_209ce0;
        case 0x209ce4u: goto label_209ce4;
        case 0x209ce8u: goto label_209ce8;
        case 0x209cecu: goto label_209cec;
        case 0x209cf0u: goto label_209cf0;
        case 0x209cf4u: goto label_209cf4;
        case 0x209cf8u: goto label_209cf8;
        case 0x209cfcu: goto label_209cfc;
        case 0x209d00u: goto label_209d00;
        case 0x209d04u: goto label_209d04;
        case 0x209d08u: goto label_209d08;
        case 0x209d0cu: goto label_209d0c;
        case 0x209d10u: goto label_209d10;
        case 0x209d14u: goto label_209d14;
        case 0x209d18u: goto label_209d18;
        case 0x209d1cu: goto label_209d1c;
        case 0x209d20u: goto label_209d20;
        case 0x209d24u: goto label_209d24;
        case 0x209d28u: goto label_209d28;
        case 0x209d2cu: goto label_209d2c;
        case 0x209d30u: goto label_209d30;
        case 0x209d34u: goto label_209d34;
        case 0x209d38u: goto label_209d38;
        case 0x209d3cu: goto label_209d3c;
        case 0x209d40u: goto label_209d40;
        case 0x209d44u: goto label_209d44;
        case 0x209d48u: goto label_209d48;
        case 0x209d4cu: goto label_209d4c;
        case 0x209d50u: goto label_209d50;
        case 0x209d54u: goto label_209d54;
        case 0x209d58u: goto label_209d58;
        case 0x209d5cu: goto label_209d5c;
        case 0x209d60u: goto label_209d60;
        case 0x209d64u: goto label_209d64;
        case 0x209d68u: goto label_209d68;
        case 0x209d6cu: goto label_209d6c;
        case 0x209d70u: goto label_209d70;
        case 0x209d74u: goto label_209d74;
        case 0x209d78u: goto label_209d78;
        case 0x209d7cu: goto label_209d7c;
        case 0x209d80u: goto label_209d80;
        case 0x209d84u: goto label_209d84;
        case 0x209d88u: goto label_209d88;
        case 0x209d8cu: goto label_209d8c;
        case 0x209d90u: goto label_209d90;
        case 0x209d94u: goto label_209d94;
        case 0x209d98u: goto label_209d98;
        case 0x209d9cu: goto label_209d9c;
        case 0x209da0u: goto label_209da0;
        case 0x209da4u: goto label_209da4;
        case 0x209da8u: goto label_209da8;
        case 0x209dacu: goto label_209dac;
        case 0x209db0u: goto label_209db0;
        case 0x209db4u: goto label_209db4;
        case 0x209db8u: goto label_209db8;
        case 0x209dbcu: goto label_209dbc;
        case 0x209dc0u: goto label_209dc0;
        case 0x209dc4u: goto label_209dc4;
        case 0x209dc8u: goto label_209dc8;
        case 0x209dccu: goto label_209dcc;
        case 0x209dd0u: goto label_209dd0;
        case 0x209dd4u: goto label_209dd4;
        case 0x209dd8u: goto label_209dd8;
        case 0x209ddcu: goto label_209ddc;
        case 0x209de0u: goto label_209de0;
        case 0x209de4u: goto label_209de4;
        case 0x209de8u: goto label_209de8;
        case 0x209decu: goto label_209dec;
        case 0x209df0u: goto label_209df0;
        case 0x209df4u: goto label_209df4;
        case 0x209df8u: goto label_209df8;
        case 0x209dfcu: goto label_209dfc;
        case 0x209e00u: goto label_209e00;
        case 0x209e04u: goto label_209e04;
        case 0x209e08u: goto label_209e08;
        case 0x209e0cu: goto label_209e0c;
        case 0x209e10u: goto label_209e10;
        case 0x209e14u: goto label_209e14;
        case 0x209e18u: goto label_209e18;
        case 0x209e1cu: goto label_209e1c;
        case 0x209e20u: goto label_209e20;
        case 0x209e24u: goto label_209e24;
        case 0x209e28u: goto label_209e28;
        case 0x209e2cu: goto label_209e2c;
        case 0x209e30u: goto label_209e30;
        case 0x209e34u: goto label_209e34;
        case 0x209e38u: goto label_209e38;
        case 0x209e3cu: goto label_209e3c;
        case 0x209e40u: goto label_209e40;
        case 0x209e44u: goto label_209e44;
        case 0x209e48u: goto label_209e48;
        case 0x209e4cu: goto label_209e4c;
        case 0x209e50u: goto label_209e50;
        case 0x209e54u: goto label_209e54;
        case 0x209e58u: goto label_209e58;
        case 0x209e5cu: goto label_209e5c;
        case 0x209e60u: goto label_209e60;
        case 0x209e64u: goto label_209e64;
        case 0x209e68u: goto label_209e68;
        case 0x209e6cu: goto label_209e6c;
        case 0x209e70u: goto label_209e70;
        case 0x209e74u: goto label_209e74;
        case 0x209e78u: goto label_209e78;
        case 0x209e7cu: goto label_209e7c;
        case 0x209e80u: goto label_209e80;
        case 0x209e84u: goto label_209e84;
        case 0x209e88u: goto label_209e88;
        case 0x209e8cu: goto label_209e8c;
        case 0x209e90u: goto label_209e90;
        case 0x209e94u: goto label_209e94;
        case 0x209e98u: goto label_209e98;
        case 0x209e9cu: goto label_209e9c;
        case 0x209ea0u: goto label_209ea0;
        case 0x209ea4u: goto label_209ea4;
        case 0x209ea8u: goto label_209ea8;
        case 0x209eacu: goto label_209eac;
        default: break;
    }

    ctx->pc = 0x2099f0u;

label_2099f0:
    // 0x2099f0: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x2099f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
label_2099f4:
    // 0x2099f4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2099f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_2099f8:
    // 0x2099f8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2099f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2099fc:
    // 0x2099fc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2099fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_209a00:
    // 0x209a00: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x209a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_209a04:
    // 0x209a04: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x209a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_209a08:
    // 0x209a08: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x209a08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_209a0c:
    // 0x209a0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x209a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_209a10:
    // 0x209a10: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x209a10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_209a14:
    // 0x209a14: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x209a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_209a18:
    // 0x209a18: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x209a18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_209a1c:
    // 0x209a1c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x209a1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_209a20:
    // 0x209a20: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x209a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_209a24:
    // 0x209a24: 0xc09c5cc  jal         func_271730
label_209a28:
    if (ctx->pc == 0x209A28u) {
        ctx->pc = 0x209A28u;
            // 0x209a28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x209A2Cu;
        goto label_209a2c;
    }
    ctx->pc = 0x209A24u;
    SET_GPR_U32(ctx, 31, 0x209A2Cu);
    ctx->pc = 0x209A28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209A24u;
            // 0x209a28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x271730u;
    if (runtime->hasFunction(0x271730u)) {
        auto targetFn = runtime->lookupFunction(0x271730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209A2Cu; }
        if (ctx->pc != 0x209A2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00271730_0x271730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209A2Cu; }
        if (ctx->pc != 0x209A2Cu) { return; }
    }
    ctx->pc = 0x209A2Cu;
label_209a2c:
    // 0x209a2c: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x209a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_209a30:
    // 0x209a30: 0xc09cc58  jal         func_273160
label_209a34:
    if (ctx->pc == 0x209A34u) {
        ctx->pc = 0x209A34u;
            // 0x209a34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x209A38u;
        goto label_209a38;
    }
    ctx->pc = 0x209A30u;
    SET_GPR_U32(ctx, 31, 0x209A38u);
    ctx->pc = 0x209A34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209A30u;
            // 0x209a34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x273160u;
    if (runtime->hasFunction(0x273160u)) {
        auto targetFn = runtime->lookupFunction(0x273160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209A38u; }
        if (ctx->pc != 0x209A38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00273160_0x273160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209A38u; }
        if (ctx->pc != 0x209A38u) { return; }
    }
    ctx->pc = 0x209A38u;
label_209a38:
    // 0x209a38: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x209a38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_209a3c:
    // 0x209a3c: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x209a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
label_209a40:
    // 0x209a40: 0x8222001c  lb          $v0, 0x1C($s1)
    ctx->pc = 0x209a40u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 28)));
label_209a44:
    // 0x209a44: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x209a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
label_209a48:
    // 0x209a48: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x209a48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_209a4c:
    // 0x209a4c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_209a50:
    if (ctx->pc == 0x209A50u) {
        ctx->pc = 0x209A50u;
            // 0x209a50: 0xafa00110  sw          $zero, 0x110($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 0));
        ctx->pc = 0x209A54u;
        goto label_209a54;
    }
    ctx->pc = 0x209A4Cu;
    {
        const bool branch_taken_0x209a4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x209a4c) {
            ctx->pc = 0x209A50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x209A4Cu;
            // 0x209a50: 0xafa00110  sw          $zero, 0x110($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x209A6Cu;
            goto label_209a6c;
        }
    }
    ctx->pc = 0x209A54u;
label_209a54:
    // 0x209a54: 0x8222001e  lb          $v0, 0x1E($s1)
    ctx->pc = 0x209a54u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 30)));
label_209a58:
    // 0x209a58: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x209a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_209a5c:
    // 0x209a5c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x209a5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_209a60:
    // 0x209a60: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_209a64:
    if (ctx->pc == 0x209A64u) {
        ctx->pc = 0x209A64u;
            // 0x209a64: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x209A68u;
        goto label_209a68;
    }
    ctx->pc = 0x209A60u;
    {
        const bool branch_taken_0x209a60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x209a60) {
            ctx->pc = 0x209A64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x209A60u;
            // 0x209a64: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
            ctx->pc = 0x209A70u;
            goto label_209a70;
        }
    }
    ctx->pc = 0x209A68u;
label_209a68:
    // 0x209a68: 0xafa00110  sw          $zero, 0x110($sp)
    ctx->pc = 0x209a68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 0));
label_209a6c:
    // 0x209a6c: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x209a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_209a70:
    // 0x209a70: 0xc09c614  jal         func_271850
label_209a74:
    if (ctx->pc == 0x209A74u) {
        ctx->pc = 0x209A74u;
            // 0x209a74: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x209A78u;
        goto label_209a78;
    }
    ctx->pc = 0x209A70u;
    SET_GPR_U32(ctx, 31, 0x209A78u);
    ctx->pc = 0x209A74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209A70u;
            // 0x209a74: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x271850u;
    if (runtime->hasFunction(0x271850u)) {
        auto targetFn = runtime->lookupFunction(0x271850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209A78u; }
        if (ctx->pc != 0x209A78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00271850_0x271850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209A78u; }
        if (ctx->pc != 0x209A78u) { return; }
    }
    ctx->pc = 0x209A78u;
label_209a78:
    // 0x209a78: 0x8223001f  lb          $v1, 0x1F($s1)
    ctx->pc = 0x209a78u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 31)));
label_209a7c:
    // 0x209a7c: 0x8222001e  lb          $v0, 0x1E($s1)
    ctx->pc = 0x209a7cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 30)));
label_209a80:
    // 0x209a80: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_209a84:
    if (ctx->pc == 0x209A84u) {
        ctx->pc = 0x209A84u;
            // 0x209a84: 0x3a02b  sltu        $s4, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->pc = 0x209A88u;
        goto label_209a88;
    }
    ctx->pc = 0x209A80u;
    {
        const bool branch_taken_0x209a80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x209A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209A80u;
            // 0x209a84: 0x3a02b  sltu        $s4, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x209a80) {
            ctx->pc = 0x209A8Cu;
            goto label_209a8c;
        }
    }
    ctx->pc = 0x209A88u;
label_209a88:
    // 0x209a88: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x209a88u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_209a8c:
    // 0x209a8c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x209a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_209a90:
    // 0x209a90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x209a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_209a94:
    // 0x209a94: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x209a94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_209a98:
    // 0x209a98: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x209a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_209a9c:
    // 0x209a9c: 0xafa000ec  sw          $zero, 0xEC($sp)
    ctx->pc = 0x209a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 0));
label_209aa0:
    // 0x209aa0: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x209aa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_209aa4:
    // 0x209aa4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x209aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_209aa8:
    // 0x209aa8: 0xafa300d4  sw          $v1, 0xD4($sp)
    ctx->pc = 0x209aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 3));
label_209aac:
    // 0x209aac: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x209aacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
label_209ab0:
    // 0x209ab0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x209ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_209ab4:
    // 0x209ab4: 0xafa300e0  sw          $v1, 0xE0($sp)
    ctx->pc = 0x209ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
label_209ab8:
    // 0x209ab8: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x209ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
label_209abc:
    // 0x209abc: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x209abcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
label_209ac0:
    // 0x209ac0: 0xafa300e4  sw          $v1, 0xE4($sp)
    ctx->pc = 0x209ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 3));
label_209ac4:
    // 0x209ac4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x209ac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_209ac8:
    // 0x209ac8: 0xafa200e8  sw          $v0, 0xE8($sp)
    ctx->pc = 0x209ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
label_209acc:
    // 0x209acc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x209accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_209ad0:
    // 0x209ad0: 0xc082570  jal         func_2095C0
label_209ad4:
    if (ctx->pc == 0x209AD4u) {
        ctx->pc = 0x209AD4u;
            // 0x209ad4: 0xa3a200f4  sb          $v0, 0xF4($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 244), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x209AD8u;
        goto label_209ad8;
    }
    ctx->pc = 0x209AD0u;
    SET_GPR_U32(ctx, 31, 0x209AD8u);
    ctx->pc = 0x209AD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209AD0u;
            // 0x209ad4: 0xa3a200f4  sb          $v0, 0xF4($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 244), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2095C0u;
    if (runtime->hasFunction(0x2095C0u)) {
        auto targetFn = runtime->lookupFunction(0x2095C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209AD8u; }
        if (ctx->pc != 0x209AD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002095C0_0x2095c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209AD8u; }
        if (ctx->pc != 0x209AD8u) { return; }
    }
    ctx->pc = 0x209AD8u;
label_209ad8:
    // 0x209ad8: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x209ad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_209adc:
    // 0x209adc: 0xc082574  jal         func_2095D0
label_209ae0:
    if (ctx->pc == 0x209AE0u) {
        ctx->pc = 0x209AE0u;
            // 0x209ae0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x209AE4u;
        goto label_209ae4;
    }
    ctx->pc = 0x209ADCu;
    SET_GPR_U32(ctx, 31, 0x209AE4u);
    ctx->pc = 0x209AE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209ADCu;
            // 0x209ae0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2095D0u;
    if (runtime->hasFunction(0x2095D0u)) {
        auto targetFn = runtime->lookupFunction(0x2095D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209AE4u; }
        if (ctx->pc != 0x209AE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002095D0_0x2095d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209AE4u; }
        if (ctx->pc != 0x209AE4u) { return; }
    }
    ctx->pc = 0x209AE4u;
label_209ae4:
    // 0x209ae4: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x209ae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_209ae8:
    // 0x209ae8: 0xc082560  jal         func_209580
label_209aec:
    if (ctx->pc == 0x209AECu) {
        ctx->pc = 0x209AECu;
            // 0x209aec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x209AF0u;
        goto label_209af0;
    }
    ctx->pc = 0x209AE8u;
    SET_GPR_U32(ctx, 31, 0x209AF0u);
    ctx->pc = 0x209AECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209AE8u;
            // 0x209aec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x209580u;
    if (runtime->hasFunction(0x209580u)) {
        auto targetFn = runtime->lookupFunction(0x209580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209AF0u; }
        if (ctx->pc != 0x209AF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00209580_0x209580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209AF0u; }
        if (ctx->pc != 0x209AF0u) { return; }
    }
    ctx->pc = 0x209AF0u;
label_209af0:
    // 0x209af0: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x209af0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_209af4:
    // 0x209af4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x209af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_209af8:
    // 0x209af8: 0xc082564  jal         func_209590
label_209afc:
    if (ctx->pc == 0x209AFCu) {
        ctx->pc = 0x209AFCu;
            // 0x209afc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x209B00u;
        goto label_209b00;
    }
    ctx->pc = 0x209AF8u;
    SET_GPR_U32(ctx, 31, 0x209B00u);
    ctx->pc = 0x209AFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209AF8u;
            // 0x209afc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x209590u;
    if (runtime->hasFunction(0x209590u)) {
        auto targetFn = runtime->lookupFunction(0x209590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209B00u; }
        if (ctx->pc != 0x209B00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00209590_0x209590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209B00u; }
        if (ctx->pc != 0x209B00u) { return; }
    }
    ctx->pc = 0x209B00u;
label_209b00:
    // 0x209b00: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x209b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_209b04:
    // 0x209b04: 0xa3b400f4  sb          $s4, 0xF4($sp)
    ctx->pc = 0x209b04u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 244), (uint8_t)GPR_U32(ctx, 20));
label_209b08:
    // 0x209b08: 0xc7a20070  lwc1        $f2, 0x70($sp)
    ctx->pc = 0x209b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_209b0c:
    // 0x209b0c: 0x14a63c  dsll32      $s4, $s4, 24
    ctx->pc = 0x209b0cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) << (32 + 24));
label_209b10:
    // 0x209b10: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x209b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_209b14:
    // 0x209b14: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x209b14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_209b18:
    // 0x209b18: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x209b18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_209b1c:
    // 0x209b1c: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x209b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_209b20:
    // 0x209b20: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x209b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_209b24:
    // 0x209b24: 0x14a63f  dsra32      $s4, $s4, 24
    ctx->pc = 0x209b24u;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 20) >> (32 + 24));
label_209b28:
    // 0x209b28: 0xe7a200e0  swc1        $f2, 0xE0($sp)
    ctx->pc = 0x209b28u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_209b2c:
    // 0x209b2c: 0xe7a100e4  swc1        $f1, 0xE4($sp)
    ctx->pc = 0x209b2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_209b30:
    // 0x209b30: 0xc09c624  jal         func_271890
label_209b34:
    if (ctx->pc == 0x209B34u) {
        ctx->pc = 0x209B34u;
            // 0x209b34: 0xe7a000ec  swc1        $f0, 0xEC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
        ctx->pc = 0x209B38u;
        goto label_209b38;
    }
    ctx->pc = 0x209B30u;
    SET_GPR_U32(ctx, 31, 0x209B38u);
    ctx->pc = 0x209B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209B30u;
            // 0x209b34: 0xe7a000ec  swc1        $f0, 0xEC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x271890u;
    if (runtime->hasFunction(0x271890u)) {
        auto targetFn = runtime->lookupFunction(0x271890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209B38u; }
        if (ctx->pc != 0x209B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00271890_0x271890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209B38u; }
        if (ctx->pc != 0x209B38u) { return; }
    }
    ctx->pc = 0x209B38u;
label_209b38:
    // 0x209b38: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x209b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_209b3c:
    // 0x209b3c: 0xc09d4c0  jal         func_275300
label_209b40:
    if (ctx->pc == 0x209B40u) {
        ctx->pc = 0x209B40u;
            // 0x209b40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x209B44u;
        goto label_209b44;
    }
    ctx->pc = 0x209B3Cu;
    SET_GPR_U32(ctx, 31, 0x209B44u);
    ctx->pc = 0x209B40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209B3Cu;
            // 0x209b40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x275300u;
    if (runtime->hasFunction(0x275300u)) {
        auto targetFn = runtime->lookupFunction(0x275300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209B44u; }
        if (ctx->pc != 0x209B44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00275300_0x275300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209B44u; }
        if (ctx->pc != 0x209B44u) { return; }
    }
    ctx->pc = 0x209B44u;
label_209b44:
    // 0x209b44: 0x8222001d  lb          $v0, 0x1D($s1)
    ctx->pc = 0x209b44u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 29)));
label_209b48:
    // 0x209b48: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_209b4c:
    if (ctx->pc == 0x209B4Cu) {
        ctx->pc = 0x209B4Cu;
            // 0x209b4c: 0xafa000b4  sw          $zero, 0xB4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 0));
        ctx->pc = 0x209B50u;
        goto label_209b50;
    }
    ctx->pc = 0x209B48u;
    {
        const bool branch_taken_0x209b48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x209b48) {
            ctx->pc = 0x209B4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x209B48u;
            // 0x209b4c: 0xafa000b4  sw          $zero, 0xB4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x209B5Cu;
            goto label_209b5c;
        }
    }
    ctx->pc = 0x209B50u;
label_209b50:
    // 0x209b50: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x209b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_209b54:
    // 0x209b54: 0x10000002  b           . + 4 + (0x2 << 2)
label_209b58:
    if (ctx->pc == 0x209B58u) {
        ctx->pc = 0x209B58u;
            // 0x209b58: 0xafa200b8  sw          $v0, 0xB8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
        ctx->pc = 0x209B5Cu;
        goto label_209b5c;
    }
    ctx->pc = 0x209B54u;
    {
        const bool branch_taken_0x209b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209B58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209B54u;
            // 0x209b58: 0xafa200b8  sw          $v0, 0xB8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209b54) {
            ctx->pc = 0x209B60u;
            goto label_209b60;
        }
    }
    ctx->pc = 0x209B5Cu;
label_209b5c:
    // 0x209b5c: 0xafa000b8  sw          $zero, 0xB8($sp)
    ctx->pc = 0x209b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 0));
label_209b60:
    // 0x209b60: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x209b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_209b64:
    // 0x209b64: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x209b64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_209b68:
    // 0x209b68: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x209b68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
label_209b6c:
    // 0x209b6c: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x209b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_209b70:
    // 0x209b70: 0xc09c604  jal         func_271810
label_209b74:
    if (ctx->pc == 0x209B74u) {
        ctx->pc = 0x209B74u;
            // 0x209b74: 0xa3b400c4  sb          $s4, 0xC4($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 196), (uint8_t)GPR_U32(ctx, 20));
        ctx->pc = 0x209B78u;
        goto label_209b78;
    }
    ctx->pc = 0x209B70u;
    SET_GPR_U32(ctx, 31, 0x209B78u);
    ctx->pc = 0x209B74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209B70u;
            // 0x209b74: 0xa3b400c4  sb          $s4, 0xC4($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 196), (uint8_t)GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x271810u;
    if (runtime->hasFunction(0x271810u)) {
        auto targetFn = runtime->lookupFunction(0x271810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209B78u; }
        if (ctx->pc != 0x209B78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00271810_0x271810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209B78u; }
        if (ctx->pc != 0x209B78u) { return; }
    }
    ctx->pc = 0x209B78u;
label_209b78:
    // 0x209b78: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x209b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_209b7c:
    // 0x209b7c: 0xc09c638  jal         func_2718E0
label_209b80:
    if (ctx->pc == 0x209B80u) {
        ctx->pc = 0x209B80u;
            // 0x209b80: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x209B84u;
        goto label_209b84;
    }
    ctx->pc = 0x209B7Cu;
    SET_GPR_U32(ctx, 31, 0x209B84u);
    ctx->pc = 0x209B80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209B7Cu;
            // 0x209b80: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2718E0u;
    if (runtime->hasFunction(0x2718E0u)) {
        auto targetFn = runtime->lookupFunction(0x2718E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209B84u; }
        if (ctx->pc != 0x209B84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002718E0_0x2718e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209B84u; }
        if (ctx->pc != 0x209B84u) { return; }
    }
    ctx->pc = 0x209B84u;
label_209b84:
    // 0x209b84: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x209b84u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_209b88:
    // 0x209b88: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x209b88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_209b8c:
    // 0x209b8c: 0x26a30010  addiu       $v1, $s5, 0x10
    ctx->pc = 0x209b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
label_209b90:
    // 0x209b90: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x209b90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_209b94:
    // 0x209b94: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x209b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_209b98:
    // 0x209b98: 0x8c94000c  lw          $s4, 0xC($a0)
    ctx->pc = 0x209b98u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_209b9c:
    // 0x209b9c: 0x622824  and         $a1, $v1, $v0
    ctx->pc = 0x209b9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_209ba0:
    // 0x209ba0: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x209ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_209ba4:
    // 0x209ba4: 0x2851821  addu        $v1, $s4, $a1
    ctx->pc = 0x209ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_209ba8:
    // 0x209ba8: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x209ba8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_209bac:
    // 0x209bac: 0x54200003  bnel        $at, $zero, . + 4 + (0x3 << 2)
label_209bb0:
    if (ctx->pc == 0x209BB0u) {
        ctx->pc = 0x209BB0u;
            // 0x209bb0: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x209BB4u;
        goto label_209bb4;
    }
    ctx->pc = 0x209BACu;
    {
        const bool branch_taken_0x209bac = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x209bac) {
            ctx->pc = 0x209BB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x209BACu;
            // 0x209bb0: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x209BBCu;
            goto label_209bbc;
        }
    }
    ctx->pc = 0x209BB4u;
label_209bb4:
    // 0x209bb4: 0x10000005  b           . + 4 + (0x5 << 2)
label_209bb8:
    if (ctx->pc == 0x209BB8u) {
        ctx->pc = 0x209BB8u;
            // 0x209bb8: 0xac83000c  sw          $v1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->pc = 0x209BBCu;
        goto label_209bbc;
    }
    ctx->pc = 0x209BB4u;
    {
        const bool branch_taken_0x209bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209BB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209BB4u;
            // 0x209bb8: 0xac83000c  sw          $v1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209bb4) {
            ctx->pc = 0x209BCCu;
            goto label_209bcc;
        }
    }
    ctx->pc = 0x209BBCu;
label_209bbc:
    // 0x209bbc: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x209bbcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_209bc0:
    // 0x209bc0: 0x320f809  jalr        $t9
label_209bc4:
    if (ctx->pc == 0x209BC4u) {
        ctx->pc = 0x209BC8u;
        goto label_209bc8;
    }
    ctx->pc = 0x209BC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x209BC8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x209BC8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x209BC8u; }
            if (ctx->pc != 0x209BC8u) { return; }
        }
        }
    }
    ctx->pc = 0x209BC8u;
label_209bc8:
    // 0x209bc8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x209bc8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_209bcc:
    // 0x209bcc: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x209bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_209bd0:
    // 0x209bd0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x209bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_209bd4:
    // 0x209bd4: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x209bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
label_209bd8:
    // 0x209bd8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x209bd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_209bdc:
    // 0x209bdc: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x209bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_209be0:
    // 0x209be0: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x209be0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
label_209be4:
    // 0x209be4: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x209be4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
label_209be8:
    // 0x209be8: 0xafa3008c  sw          $v1, 0x8C($sp)
    ctx->pc = 0x209be8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 3));
label_209bec:
    // 0x209bec: 0xafa30098  sw          $v1, 0x98($sp)
    ctx->pc = 0x209becu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 3));
label_209bf0:
    // 0x209bf0: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x209bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_209bf4:
    // 0x209bf4: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x209bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
label_209bf8:
    // 0x209bf8: 0xafa00094  sw          $zero, 0x94($sp)
    ctx->pc = 0x209bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
label_209bfc:
    // 0x209bfc: 0xafa0009c  sw          $zero, 0x9C($sp)
    ctx->pc = 0x209bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
label_209c00:
    // 0x209c00: 0x8e260024  lw          $a2, 0x24($s1)
    ctx->pc = 0x209c00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_209c04:
    // 0x209c04: 0xc09c780  jal         func_271E00
label_209c08:
    if (ctx->pc == 0x209C08u) {
        ctx->pc = 0x209C08u;
            // 0x209c08: 0x27a40198  addiu       $a0, $sp, 0x198 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 408));
        ctx->pc = 0x209C0Cu;
        goto label_209c0c;
    }
    ctx->pc = 0x209C04u;
    SET_GPR_U32(ctx, 31, 0x209C0Cu);
    ctx->pc = 0x209C08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209C04u;
            // 0x209c08: 0x27a40198  addiu       $a0, $sp, 0x198 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 408));
        ctx->in_delay_slot = false;
    ctx->pc = 0x271E00u;
    if (runtime->hasFunction(0x271E00u)) {
        auto targetFn = runtime->lookupFunction(0x271E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209C0Cu; }
        if (ctx->pc != 0x209C0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00271E00_0x271e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209C0Cu; }
        if (ctx->pc != 0x209C0Cu) { return; }
    }
    ctx->pc = 0x209C0Cu;
label_209c0c:
    // 0x209c0c: 0x8222001e  lb          $v0, 0x1E($s1)
    ctx->pc = 0x209c0cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 30)));
label_209c10:
    // 0x209c10: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_209c14:
    if (ctx->pc == 0x209C14u) {
        ctx->pc = 0x209C18u;
        goto label_209c18;
    }
    ctx->pc = 0x209C10u;
    {
        const bool branch_taken_0x209c10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x209c10) {
            ctx->pc = 0x209C34u;
            goto label_209c34;
        }
    }
    ctx->pc = 0x209C18u;
label_209c18:
    // 0x209c18: 0x82220021  lb          $v0, 0x21($s1)
    ctx->pc = 0x209c18u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 33)));
label_209c1c:
    // 0x209c1c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_209c20:
    if (ctx->pc == 0x209C20u) {
        ctx->pc = 0x209C20u;
            // 0x209c20: 0x27a20080  addiu       $v0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x209C24u;
        goto label_209c24;
    }
    ctx->pc = 0x209C1Cu;
    {
        const bool branch_taken_0x209c1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x209c1c) {
            ctx->pc = 0x209C20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x209C1Cu;
            // 0x209c20: 0x27a20080  addiu       $v0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
            ctx->pc = 0x209C30u;
            goto label_209c30;
        }
    }
    ctx->pc = 0x209C24u;
label_209c24:
    // 0x209c24: 0x27a20198  addiu       $v0, $sp, 0x198
    ctx->pc = 0x209c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 408));
label_209c28:
    // 0x209c28: 0xafa2009c  sw          $v0, 0x9C($sp)
    ctx->pc = 0x209c28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
label_209c2c:
    // 0x209c2c: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x209c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_209c30:
    // 0x209c30: 0xafa20124  sw          $v0, 0x124($sp)
    ctx->pc = 0x209c30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 2));
label_209c34:
    // 0x209c34: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x209c34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_209c38:
    // 0x209c38: 0x27a401ac  addiu       $a0, $sp, 0x1AC
    ctx->pc = 0x209c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 428));
label_209c3c:
    // 0x209c3c: 0x8c45ea18  lw          $a1, -0x15E8($v0)
    ctx->pc = 0x209c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961688)));
label_209c40:
    // 0x209c40: 0x8cb90000  lw          $t9, 0x0($a1)
    ctx->pc = 0x209c40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_209c44:
    // 0x209c44: 0x3c027dd6  lui         $v0, 0x7DD6
    ctx->pc = 0x209c44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32214 << 16));
label_209c48:
    // 0x209c48: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x209c48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_209c4c:
    // 0x209c4c: 0x320f809  jalr        $t9
label_209c50:
    if (ctx->pc == 0x209C50u) {
        ctx->pc = 0x209C50u;
            // 0x209c50: 0x34465995  ori         $a2, $v0, 0x5995 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22933);
        ctx->pc = 0x209C54u;
        goto label_209c54;
    }
    ctx->pc = 0x209C4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x209C54u);
        ctx->pc = 0x209C50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209C4Cu;
            // 0x209c50: 0x34465995  ori         $a2, $v0, 0x5995 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22933);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x209C54u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x209C54u; }
            if (ctx->pc != 0x209C54u) { return; }
        }
        }
    }
    ctx->pc = 0x209C54u;
label_209c54:
    // 0x209c54: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x209c54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_209c58:
    // 0x209c58: 0x3c037dd6  lui         $v1, 0x7DD6
    ctx->pc = 0x209c58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32214 << 16));
label_209c5c:
    // 0x209c5c: 0x8c44ea18  lw          $a0, -0x15E8($v0)
    ctx->pc = 0x209c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961688)));
label_209c60:
    // 0x209c60: 0x363c  dsll32      $a2, $zero, 24
    ctx->pc = 0x209c60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) << (32 + 24));
label_209c64:
    // 0x209c64: 0x34655995  ori         $a1, $v1, 0x5995
    ctx->pc = 0x209c64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)22933);
label_209c68:
    // 0x209c68: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x209c68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_209c6c:
    // 0x209c6c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x209c6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_209c70:
    // 0x209c70: 0x320f809  jalr        $t9
label_209c74:
    if (ctx->pc == 0x209C74u) {
        ctx->pc = 0x209C74u;
            // 0x209c74: 0x6363f  dsra32      $a2, $a2, 24 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
        ctx->pc = 0x209C78u;
        goto label_209c78;
    }
    ctx->pc = 0x209C70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x209C78u);
        ctx->pc = 0x209C74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209C70u;
            // 0x209c74: 0x6363f  dsra32      $a2, $a2, 24 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x209C78u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x209C78u; }
            if (ctx->pc != 0x209C78u) { return; }
        }
        }
    }
    ctx->pc = 0x209C78u;
label_209c78:
    // 0x209c78: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x209c78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_209c7c:
    // 0x209c7c: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x209c7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_209c80:
    // 0x209c80: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x209c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_209c84:
    // 0x209c84: 0xc09c654  jal         func_271950
label_209c88:
    if (ctx->pc == 0x209C88u) {
        ctx->pc = 0x209C88u;
            // 0x209c88: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x209C8Cu;
        goto label_209c8c;
    }
    ctx->pc = 0x209C84u;
    SET_GPR_U32(ctx, 31, 0x209C8Cu);
    ctx->pc = 0x209C88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209C84u;
            // 0x209c88: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x271950u;
    if (runtime->hasFunction(0x271950u)) {
        auto targetFn = runtime->lookupFunction(0x271950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209C8Cu; }
        if (ctx->pc != 0x209C8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00271950_0x271950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209C8Cu; }
        if (ctx->pc != 0x209C8Cu) { return; }
    }
    ctx->pc = 0x209C8Cu;
label_209c8c:
    // 0x209c8c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x209c8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_209c90:
    // 0x209c90: 0x83a601ac  lb          $a2, 0x1AC($sp)
    ctx->pc = 0x209c90u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 428)));
label_209c94:
    // 0x209c94: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x209c94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_209c98:
    // 0x209c98: 0x8c44ea18  lw          $a0, -0x15E8($v0)
    ctx->pc = 0x209c98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961688)));
label_209c9c:
    // 0x209c9c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x209c9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_209ca0:
    // 0x209ca0: 0x3c027dd6  lui         $v0, 0x7DD6
    ctx->pc = 0x209ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32214 << 16));
label_209ca4:
    // 0x209ca4: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x209ca4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_209ca8:
    // 0x209ca8: 0x320f809  jalr        $t9
label_209cac:
    if (ctx->pc == 0x209CACu) {
        ctx->pc = 0x209CACu;
            // 0x209cac: 0x34455995  ori         $a1, $v0, 0x5995 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22933);
        ctx->pc = 0x209CB0u;
        goto label_209cb0;
    }
    ctx->pc = 0x209CA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x209CB0u);
        ctx->pc = 0x209CACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209CA8u;
            // 0x209cac: 0x34455995  ori         $a1, $v0, 0x5995 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22933);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x209CB0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x209CB0u; }
            if (ctx->pc != 0x209CB0u) { return; }
        }
        }
    }
    ctx->pc = 0x209CB0u;
label_209cb0:
    // 0x209cb0: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_209cb4:
    if (ctx->pc == 0x209CB4u) {
        ctx->pc = 0x209CB8u;
        goto label_209cb8;
    }
    ctx->pc = 0x209CB0u;
    {
        const bool branch_taken_0x209cb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x209cb0) {
            ctx->pc = 0x209CCCu;
            goto label_209ccc;
        }
    }
    ctx->pc = 0x209CB8u;
label_209cb8:
    // 0x209cb8: 0x8fa60084  lw          $a2, 0x84($sp)
    ctx->pc = 0x209cb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
label_209cbc:
    // 0x209cbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x209cbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_209cc0:
    // 0x209cc0: 0x8fa70088  lw          $a3, 0x88($sp)
    ctx->pc = 0x209cc0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_209cc4:
    // 0x209cc4: 0xc082578  jal         func_2095E0
label_209cc8:
    if (ctx->pc == 0x209CC8u) {
        ctx->pc = 0x209CC8u;
            // 0x209cc8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x209CCCu;
        goto label_209ccc;
    }
    ctx->pc = 0x209CC4u;
    SET_GPR_U32(ctx, 31, 0x209CCCu);
    ctx->pc = 0x209CC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209CC4u;
            // 0x209cc8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2095E0u;
    if (runtime->hasFunction(0x2095E0u)) {
        auto targetFn = runtime->lookupFunction(0x2095E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209CCCu; }
        if (ctx->pc != 0x209CCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002095E0_0x2095e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209CCCu; }
        if (ctx->pc != 0x209CCCu) { return; }
    }
    ctx->pc = 0x209CCCu;
label_209ccc:
    // 0x209ccc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x209cccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_209cd0:
    // 0x209cd0: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x209cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_209cd4:
    // 0x209cd4: 0xac94000c  sw          $s4, 0xC($a0)
    ctx->pc = 0x209cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 20));
label_209cd8:
    // 0x209cd8: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x209cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_209cdc:
    // 0x209cdc: 0x16820005  bne         $s4, $v0, . + 4 + (0x5 << 2)
label_209ce0:
    if (ctx->pc == 0x209CE0u) {
        ctx->pc = 0x209CE4u;
        goto label_209ce4;
    }
    ctx->pc = 0x209CDCu;
    {
        const bool branch_taken_0x209cdc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x209cdc) {
            ctx->pc = 0x209CF4u;
            goto label_209cf4;
        }
    }
    ctx->pc = 0x209CE4u;
label_209ce4:
    // 0x209ce4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x209ce4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_209ce8:
    // 0x209ce8: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x209ce8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_209cec:
    // 0x209cec: 0x320f809  jalr        $t9
label_209cf0:
    if (ctx->pc == 0x209CF0u) {
        ctx->pc = 0x209CF0u;
            // 0x209cf0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x209CF4u;
        goto label_209cf4;
    }
    ctx->pc = 0x209CECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x209CF4u);
        ctx->pc = 0x209CF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209CECu;
            // 0x209cf0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x209CF4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x209CF4u; }
            if (ctx->pc != 0x209CF4u) { return; }
        }
        }
    }
    ctx->pc = 0x209CF4u;
label_209cf4:
    // 0x209cf4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x209cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_209cf8:
    // 0x209cf8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x209cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_209cfc:
    // 0x209cfc: 0x2442e560  addiu       $v0, $v0, -0x1AA0
    ctx->pc = 0x209cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960480));
label_209d00:
    // 0x209d00: 0xafa20198  sw          $v0, 0x198($sp)
    ctx->pc = 0x209d00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 2));
label_209d04:
    // 0x209d04: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x209d04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_209d08:
    // 0x209d08: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x209d08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_209d0c:
    // 0x209d0c: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_209d10:
    if (ctx->pc == 0x209D10u) {
        ctx->pc = 0x209D10u;
            // 0x209d10: 0x8fa3008c  lw          $v1, 0x8C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
        ctx->pc = 0x209D14u;
        goto label_209d14;
    }
    ctx->pc = 0x209D0Cu;
    {
        const bool branch_taken_0x209d0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x209d0c) {
            ctx->pc = 0x209D10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x209D0Cu;
            // 0x209d10: 0x8fa3008c  lw          $v1, 0x8C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x209D3Cu;
            goto label_209d3c;
        }
    }
    ctx->pc = 0x209D14u;
label_209d14:
    // 0x209d14: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x209d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_209d18:
    // 0x209d18: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x209d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_209d1c:
    // 0x209d1c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x209d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_209d20:
    // 0x209d20: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x209d20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_209d24:
    // 0x209d24: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x209d24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_209d28:
    // 0x209d28: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x209d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_209d2c:
    // 0x209d2c: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x209d2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_209d30:
    // 0x209d30: 0xc0a7ab4  jal         func_29EAD0
label_209d34:
    if (ctx->pc == 0x209D34u) {
        ctx->pc = 0x209D34u;
            // 0x209d34: 0x230c0  sll         $a2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->pc = 0x209D38u;
        goto label_209d38;
    }
    ctx->pc = 0x209D30u;
    SET_GPR_U32(ctx, 31, 0x209D38u);
    ctx->pc = 0x209D34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209D30u;
            // 0x209d34: 0x230c0  sll         $a2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209D38u; }
        if (ctx->pc != 0x209D38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209D38u; }
        if (ctx->pc != 0x209D38u) { return; }
    }
    ctx->pc = 0x209D38u;
label_209d38:
    // 0x209d38: 0x8fa3008c  lw          $v1, 0x8C($sp)
    ctx->pc = 0x209d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
label_209d3c:
    // 0x209d3c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x209d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_209d40:
    // 0x209d40: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x209d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_209d44:
    // 0x209d44: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_209d48:
    if (ctx->pc == 0x209D48u) {
        ctx->pc = 0x209D48u;
            // 0x209d48: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x209D4Cu;
        goto label_209d4c;
    }
    ctx->pc = 0x209D44u;
    {
        const bool branch_taken_0x209d44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x209d44) {
            ctx->pc = 0x209D48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x209D44u;
            // 0x209d48: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
            ctx->pc = 0x209D74u;
            goto label_209d74;
        }
    }
    ctx->pc = 0x209D4Cu;
label_209d4c:
    // 0x209d4c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x209d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_209d50:
    // 0x209d50: 0x8fa3008c  lw          $v1, 0x8C($sp)
    ctx->pc = 0x209d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
label_209d54:
    // 0x209d54: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x209d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_209d58:
    // 0x209d58: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x209d58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_209d5c:
    // 0x209d5c: 0x8fa50084  lw          $a1, 0x84($sp)
    ctx->pc = 0x209d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
label_209d60:
    // 0x209d60: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x209d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_209d64:
    // 0x209d64: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x209d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_209d68:
    // 0x209d68: 0xc0a7ab4  jal         func_29EAD0
label_209d6c:
    if (ctx->pc == 0x209D6Cu) {
        ctx->pc = 0x209D6Cu;
            // 0x209d6c: 0x230c0  sll         $a2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->pc = 0x209D70u;
        goto label_209d70;
    }
    ctx->pc = 0x209D68u;
    SET_GPR_U32(ctx, 31, 0x209D70u);
    ctx->pc = 0x209D6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209D68u;
            // 0x209d6c: 0x230c0  sll         $a2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209D70u; }
        if (ctx->pc != 0x209D70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209D70u; }
        if (ctx->pc != 0x209D70u) { return; }
    }
    ctx->pc = 0x209D70u;
label_209d70:
    // 0x209d70: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x209d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_209d74:
    // 0x209d74: 0xc09c5f0  jal         func_2717C0
label_209d78:
    if (ctx->pc == 0x209D78u) {
        ctx->pc = 0x209D78u;
            // 0x209d78: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x209D7Cu;
        goto label_209d7c;
    }
    ctx->pc = 0x209D74u;
    SET_GPR_U32(ctx, 31, 0x209D7Cu);
    ctx->pc = 0x209D78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209D74u;
            // 0x209d78: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2717C0u;
    if (runtime->hasFunction(0x2717C0u)) {
        auto targetFn = runtime->lookupFunction(0x2717C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209D7Cu; }
        if (ctx->pc != 0x209D7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002717C0_0x2717c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209D7Cu; }
        if (ctx->pc != 0x209D7Cu) { return; }
    }
    ctx->pc = 0x209D7Cu;
label_209d7c:
    // 0x209d7c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x209d7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_209d80:
    // 0x209d80: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x209d80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_209d84:
    // 0x209d84: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x209d84u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_209d88:
    // 0x209d88: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x209d88u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_209d8c:
    // 0x209d8c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x209d8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_209d90:
    // 0x209d90: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x209d90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_209d94:
    // 0x209d94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x209d94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_209d98:
    // 0x209d98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x209d98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_209d9c:
    // 0x209d9c: 0x3e00008  jr          $ra
label_209da0:
    if (ctx->pc == 0x209DA0u) {
        ctx->pc = 0x209DA0u;
            // 0x209da0: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->pc = 0x209DA4u;
        goto label_209da4;
    }
    ctx->pc = 0x209D9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209DA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209D9Cu;
            // 0x209da0: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x209DA4u;
label_209da4:
    // 0x209da4: 0x0  nop
    ctx->pc = 0x209da4u;
    // NOP
label_209da8:
    // 0x209da8: 0x0  nop
    ctx->pc = 0x209da8u;
    // NOP
label_209dac:
    // 0x209dac: 0x0  nop
    ctx->pc = 0x209dacu;
    // NOP
label_209db0:
    // 0x209db0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x209db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_209db4:
    // 0x209db4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x209db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_209db8:
    // 0x209db8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x209db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_209dbc:
    // 0x209dbc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x209dbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_209dc0:
    // 0x209dc0: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_209dc4:
    if (ctx->pc == 0x209DC4u) {
        ctx->pc = 0x209DC4u;
            // 0x209dc4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x209DC8u;
        goto label_209dc8;
    }
    ctx->pc = 0x209DC0u;
    {
        const bool branch_taken_0x209dc0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x209dc0) {
            ctx->pc = 0x209DC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x209DC0u;
            // 0x209dc4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x209E00u;
            goto label_209e00;
        }
    }
    ctx->pc = 0x209DC8u;
label_209dc8:
    // 0x209dc8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x209dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_209dcc:
    // 0x209dcc: 0x2442f330  addiu       $v0, $v0, -0xCD0
    ctx->pc = 0x209dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964016));
label_209dd0:
    // 0x209dd0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_209dd4:
    if (ctx->pc == 0x209DD4u) {
        ctx->pc = 0x209DD4u;
            // 0x209dd4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x209DD8u;
        goto label_209dd8;
    }
    ctx->pc = 0x209DD0u;
    {
        const bool branch_taken_0x209dd0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x209DD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209DD0u;
            // 0x209dd4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209dd0) {
            ctx->pc = 0x209DE4u;
            goto label_209de4;
        }
    }
    ctx->pc = 0x209DD8u;
label_209dd8:
    // 0x209dd8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x209dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_209ddc:
    // 0x209ddc: 0x2442e560  addiu       $v0, $v0, -0x1AA0
    ctx->pc = 0x209ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960480));
label_209de0:
    // 0x209de0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x209de0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_209de4:
    // 0x209de4: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x209de4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_209de8:
    // 0x209de8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x209de8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_209dec:
    // 0x209dec: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_209df0:
    if (ctx->pc == 0x209DF0u) {
        ctx->pc = 0x209DF4u;
        goto label_209df4;
    }
    ctx->pc = 0x209DECu;
    {
        const bool branch_taken_0x209dec = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x209dec) {
            ctx->pc = 0x209DFCu;
            goto label_209dfc;
        }
    }
    ctx->pc = 0x209DF4u;
label_209df4:
    // 0x209df4: 0xc0400a8  jal         func_1002A0
label_209df8:
    if (ctx->pc == 0x209DF8u) {
        ctx->pc = 0x209DF8u;
            // 0x209df8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x209DFCu;
        goto label_209dfc;
    }
    ctx->pc = 0x209DF4u;
    SET_GPR_U32(ctx, 31, 0x209DFCu);
    ctx->pc = 0x209DF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209DF4u;
            // 0x209df8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209DFCu; }
        if (ctx->pc != 0x209DFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209DFCu; }
        if (ctx->pc != 0x209DFCu) { return; }
    }
    ctx->pc = 0x209DFCu;
label_209dfc:
    // 0x209dfc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x209dfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_209e00:
    // 0x209e00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x209e00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_209e04:
    // 0x209e04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x209e04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_209e08:
    // 0x209e08: 0x3e00008  jr          $ra
label_209e0c:
    if (ctx->pc == 0x209E0Cu) {
        ctx->pc = 0x209E0Cu;
            // 0x209e0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x209E10u;
        goto label_209e10;
    }
    ctx->pc = 0x209E08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209E0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209E08u;
            // 0x209e0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x209E10u;
label_209e10:
    // 0x209e10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x209e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_209e14:
    // 0x209e14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x209e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_209e18:
    // 0x209e18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x209e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_209e1c:
    // 0x209e1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x209e1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_209e20:
    // 0x209e20: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
label_209e24:
    if (ctx->pc == 0x209E24u) {
        ctx->pc = 0x209E24u;
            // 0x209e24: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x209E28u;
        goto label_209e28;
    }
    ctx->pc = 0x209E20u;
    {
        const bool branch_taken_0x209e20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x209e20) {
            ctx->pc = 0x209E24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x209E20u;
            // 0x209e24: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x209E4Cu;
            goto label_209e4c;
        }
    }
    ctx->pc = 0x209E28u;
label_209e28:
    // 0x209e28: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x209e28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_209e2c:
    // 0x209e2c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x209e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_209e30:
    // 0x209e30: 0x2463e560  addiu       $v1, $v1, -0x1AA0
    ctx->pc = 0x209e30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960480));
label_209e34:
    // 0x209e34: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x209e34u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_209e38:
    // 0x209e38: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_209e3c:
    if (ctx->pc == 0x209E3Cu) {
        ctx->pc = 0x209E3Cu;
            // 0x209e3c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x209E40u;
        goto label_209e40;
    }
    ctx->pc = 0x209E38u;
    {
        const bool branch_taken_0x209e38 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x209E3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209E38u;
            // 0x209e3c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209e38) {
            ctx->pc = 0x209E48u;
            goto label_209e48;
        }
    }
    ctx->pc = 0x209E40u;
label_209e40:
    // 0x209e40: 0xc0400a8  jal         func_1002A0
label_209e44:
    if (ctx->pc == 0x209E44u) {
        ctx->pc = 0x209E48u;
        goto label_209e48;
    }
    ctx->pc = 0x209E40u;
    SET_GPR_U32(ctx, 31, 0x209E48u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209E48u; }
        if (ctx->pc != 0x209E48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209E48u; }
        if (ctx->pc != 0x209E48u) { return; }
    }
    ctx->pc = 0x209E48u;
label_209e48:
    // 0x209e48: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x209e48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_209e4c:
    // 0x209e4c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x209e4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_209e50:
    // 0x209e50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x209e50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_209e54:
    // 0x209e54: 0x3e00008  jr          $ra
label_209e58:
    if (ctx->pc == 0x209E58u) {
        ctx->pc = 0x209E58u;
            // 0x209e58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x209E5Cu;
        goto label_209e5c;
    }
    ctx->pc = 0x209E54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209E54u;
            // 0x209e58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x209E5Cu;
label_209e5c:
    // 0x209e5c: 0x0  nop
    ctx->pc = 0x209e5cu;
    // NOP
label_209e60:
    // 0x209e60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x209e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_209e64:
    // 0x209e64: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x209e64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_209e68:
    // 0x209e68: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x209e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_209e6c:
    // 0x209e6c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x209e6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_209e70:
    // 0x209e70: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x209e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_209e74:
    // 0x209e74: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x209e74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_209e78:
    // 0x209e78: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x209e78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_209e7c:
    // 0x209e7c: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x209e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_209e80:
    // 0x209e80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x209e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_209e84:
    // 0x209e84: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x209e84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_209e88:
    // 0x209e88: 0x320f809  jalr        $t9
label_209e8c:
    if (ctx->pc == 0x209E8Cu) {
        ctx->pc = 0x209E8Cu;
            // 0x209e8c: 0x24a5bf58  addiu       $a1, $a1, -0x40A8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950744));
        ctx->pc = 0x209E90u;
        goto label_209e90;
    }
    ctx->pc = 0x209E88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x209E90u);
        ctx->pc = 0x209E8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209E88u;
            // 0x209e8c: 0x24a5bf58  addiu       $a1, $a1, -0x40A8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950744));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x209E90u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x209E90u; }
            if (ctx->pc != 0x209E90u) { return; }
        }
        }
    }
    ctx->pc = 0x209E90u;
label_209e90:
    // 0x209e90: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x209e90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_209e94:
    // 0x209e94: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x209e94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_209e98:
    // 0x209e98: 0x320f809  jalr        $t9
label_209e9c:
    if (ctx->pc == 0x209E9Cu) {
        ctx->pc = 0x209E9Cu;
            // 0x209e9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x209EA0u;
        goto label_209ea0;
    }
    ctx->pc = 0x209E98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x209EA0u);
        ctx->pc = 0x209E9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209E98u;
            // 0x209e9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x209EA0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x209EA0u; }
            if (ctx->pc != 0x209EA0u) { return; }
        }
        }
    }
    ctx->pc = 0x209EA0u;
label_209ea0:
    // 0x209ea0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x209ea0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_209ea4:
    // 0x209ea4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x209ea4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_209ea8:
    // 0x209ea8: 0x3e00008  jr          $ra
label_209eac:
    if (ctx->pc == 0x209EACu) {
        ctx->pc = 0x209EACu;
            // 0x209eac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x209EB0u;
        goto label_fallthrough_0x209ea8;
    }
    ctx->pc = 0x209EA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209EACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209EA8u;
            // 0x209eac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x209ea8:
    ctx->pc = 0x209EB0u;
}
