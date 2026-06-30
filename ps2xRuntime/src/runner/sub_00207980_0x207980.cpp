#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00207980
// Address: 0x207980 - 0x207ea0
void sub_00207980_0x207980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00207980_0x207980");
#endif

    switch (ctx->pc) {
        case 0x207980u: goto label_207980;
        case 0x207984u: goto label_207984;
        case 0x207988u: goto label_207988;
        case 0x20798cu: goto label_20798c;
        case 0x207990u: goto label_207990;
        case 0x207994u: goto label_207994;
        case 0x207998u: goto label_207998;
        case 0x20799cu: goto label_20799c;
        case 0x2079a0u: goto label_2079a0;
        case 0x2079a4u: goto label_2079a4;
        case 0x2079a8u: goto label_2079a8;
        case 0x2079acu: goto label_2079ac;
        case 0x2079b0u: goto label_2079b0;
        case 0x2079b4u: goto label_2079b4;
        case 0x2079b8u: goto label_2079b8;
        case 0x2079bcu: goto label_2079bc;
        case 0x2079c0u: goto label_2079c0;
        case 0x2079c4u: goto label_2079c4;
        case 0x2079c8u: goto label_2079c8;
        case 0x2079ccu: goto label_2079cc;
        case 0x2079d0u: goto label_2079d0;
        case 0x2079d4u: goto label_2079d4;
        case 0x2079d8u: goto label_2079d8;
        case 0x2079dcu: goto label_2079dc;
        case 0x2079e0u: goto label_2079e0;
        case 0x2079e4u: goto label_2079e4;
        case 0x2079e8u: goto label_2079e8;
        case 0x2079ecu: goto label_2079ec;
        case 0x2079f0u: goto label_2079f0;
        case 0x2079f4u: goto label_2079f4;
        case 0x2079f8u: goto label_2079f8;
        case 0x2079fcu: goto label_2079fc;
        case 0x207a00u: goto label_207a00;
        case 0x207a04u: goto label_207a04;
        case 0x207a08u: goto label_207a08;
        case 0x207a0cu: goto label_207a0c;
        case 0x207a10u: goto label_207a10;
        case 0x207a14u: goto label_207a14;
        case 0x207a18u: goto label_207a18;
        case 0x207a1cu: goto label_207a1c;
        case 0x207a20u: goto label_207a20;
        case 0x207a24u: goto label_207a24;
        case 0x207a28u: goto label_207a28;
        case 0x207a2cu: goto label_207a2c;
        case 0x207a30u: goto label_207a30;
        case 0x207a34u: goto label_207a34;
        case 0x207a38u: goto label_207a38;
        case 0x207a3cu: goto label_207a3c;
        case 0x207a40u: goto label_207a40;
        case 0x207a44u: goto label_207a44;
        case 0x207a48u: goto label_207a48;
        case 0x207a4cu: goto label_207a4c;
        case 0x207a50u: goto label_207a50;
        case 0x207a54u: goto label_207a54;
        case 0x207a58u: goto label_207a58;
        case 0x207a5cu: goto label_207a5c;
        case 0x207a60u: goto label_207a60;
        case 0x207a64u: goto label_207a64;
        case 0x207a68u: goto label_207a68;
        case 0x207a6cu: goto label_207a6c;
        case 0x207a70u: goto label_207a70;
        case 0x207a74u: goto label_207a74;
        case 0x207a78u: goto label_207a78;
        case 0x207a7cu: goto label_207a7c;
        case 0x207a80u: goto label_207a80;
        case 0x207a84u: goto label_207a84;
        case 0x207a88u: goto label_207a88;
        case 0x207a8cu: goto label_207a8c;
        case 0x207a90u: goto label_207a90;
        case 0x207a94u: goto label_207a94;
        case 0x207a98u: goto label_207a98;
        case 0x207a9cu: goto label_207a9c;
        case 0x207aa0u: goto label_207aa0;
        case 0x207aa4u: goto label_207aa4;
        case 0x207aa8u: goto label_207aa8;
        case 0x207aacu: goto label_207aac;
        case 0x207ab0u: goto label_207ab0;
        case 0x207ab4u: goto label_207ab4;
        case 0x207ab8u: goto label_207ab8;
        case 0x207abcu: goto label_207abc;
        case 0x207ac0u: goto label_207ac0;
        case 0x207ac4u: goto label_207ac4;
        case 0x207ac8u: goto label_207ac8;
        case 0x207accu: goto label_207acc;
        case 0x207ad0u: goto label_207ad0;
        case 0x207ad4u: goto label_207ad4;
        case 0x207ad8u: goto label_207ad8;
        case 0x207adcu: goto label_207adc;
        case 0x207ae0u: goto label_207ae0;
        case 0x207ae4u: goto label_207ae4;
        case 0x207ae8u: goto label_207ae8;
        case 0x207aecu: goto label_207aec;
        case 0x207af0u: goto label_207af0;
        case 0x207af4u: goto label_207af4;
        case 0x207af8u: goto label_207af8;
        case 0x207afcu: goto label_207afc;
        case 0x207b00u: goto label_207b00;
        case 0x207b04u: goto label_207b04;
        case 0x207b08u: goto label_207b08;
        case 0x207b0cu: goto label_207b0c;
        case 0x207b10u: goto label_207b10;
        case 0x207b14u: goto label_207b14;
        case 0x207b18u: goto label_207b18;
        case 0x207b1cu: goto label_207b1c;
        case 0x207b20u: goto label_207b20;
        case 0x207b24u: goto label_207b24;
        case 0x207b28u: goto label_207b28;
        case 0x207b2cu: goto label_207b2c;
        case 0x207b30u: goto label_207b30;
        case 0x207b34u: goto label_207b34;
        case 0x207b38u: goto label_207b38;
        case 0x207b3cu: goto label_207b3c;
        case 0x207b40u: goto label_207b40;
        case 0x207b44u: goto label_207b44;
        case 0x207b48u: goto label_207b48;
        case 0x207b4cu: goto label_207b4c;
        case 0x207b50u: goto label_207b50;
        case 0x207b54u: goto label_207b54;
        case 0x207b58u: goto label_207b58;
        case 0x207b5cu: goto label_207b5c;
        case 0x207b60u: goto label_207b60;
        case 0x207b64u: goto label_207b64;
        case 0x207b68u: goto label_207b68;
        case 0x207b6cu: goto label_207b6c;
        case 0x207b70u: goto label_207b70;
        case 0x207b74u: goto label_207b74;
        case 0x207b78u: goto label_207b78;
        case 0x207b7cu: goto label_207b7c;
        case 0x207b80u: goto label_207b80;
        case 0x207b84u: goto label_207b84;
        case 0x207b88u: goto label_207b88;
        case 0x207b8cu: goto label_207b8c;
        case 0x207b90u: goto label_207b90;
        case 0x207b94u: goto label_207b94;
        case 0x207b98u: goto label_207b98;
        case 0x207b9cu: goto label_207b9c;
        case 0x207ba0u: goto label_207ba0;
        case 0x207ba4u: goto label_207ba4;
        case 0x207ba8u: goto label_207ba8;
        case 0x207bacu: goto label_207bac;
        case 0x207bb0u: goto label_207bb0;
        case 0x207bb4u: goto label_207bb4;
        case 0x207bb8u: goto label_207bb8;
        case 0x207bbcu: goto label_207bbc;
        case 0x207bc0u: goto label_207bc0;
        case 0x207bc4u: goto label_207bc4;
        case 0x207bc8u: goto label_207bc8;
        case 0x207bccu: goto label_207bcc;
        case 0x207bd0u: goto label_207bd0;
        case 0x207bd4u: goto label_207bd4;
        case 0x207bd8u: goto label_207bd8;
        case 0x207bdcu: goto label_207bdc;
        case 0x207be0u: goto label_207be0;
        case 0x207be4u: goto label_207be4;
        case 0x207be8u: goto label_207be8;
        case 0x207becu: goto label_207bec;
        case 0x207bf0u: goto label_207bf0;
        case 0x207bf4u: goto label_207bf4;
        case 0x207bf8u: goto label_207bf8;
        case 0x207bfcu: goto label_207bfc;
        case 0x207c00u: goto label_207c00;
        case 0x207c04u: goto label_207c04;
        case 0x207c08u: goto label_207c08;
        case 0x207c0cu: goto label_207c0c;
        case 0x207c10u: goto label_207c10;
        case 0x207c14u: goto label_207c14;
        case 0x207c18u: goto label_207c18;
        case 0x207c1cu: goto label_207c1c;
        case 0x207c20u: goto label_207c20;
        case 0x207c24u: goto label_207c24;
        case 0x207c28u: goto label_207c28;
        case 0x207c2cu: goto label_207c2c;
        case 0x207c30u: goto label_207c30;
        case 0x207c34u: goto label_207c34;
        case 0x207c38u: goto label_207c38;
        case 0x207c3cu: goto label_207c3c;
        case 0x207c40u: goto label_207c40;
        case 0x207c44u: goto label_207c44;
        case 0x207c48u: goto label_207c48;
        case 0x207c4cu: goto label_207c4c;
        case 0x207c50u: goto label_207c50;
        case 0x207c54u: goto label_207c54;
        case 0x207c58u: goto label_207c58;
        case 0x207c5cu: goto label_207c5c;
        case 0x207c60u: goto label_207c60;
        case 0x207c64u: goto label_207c64;
        case 0x207c68u: goto label_207c68;
        case 0x207c6cu: goto label_207c6c;
        case 0x207c70u: goto label_207c70;
        case 0x207c74u: goto label_207c74;
        case 0x207c78u: goto label_207c78;
        case 0x207c7cu: goto label_207c7c;
        case 0x207c80u: goto label_207c80;
        case 0x207c84u: goto label_207c84;
        case 0x207c88u: goto label_207c88;
        case 0x207c8cu: goto label_207c8c;
        case 0x207c90u: goto label_207c90;
        case 0x207c94u: goto label_207c94;
        case 0x207c98u: goto label_207c98;
        case 0x207c9cu: goto label_207c9c;
        case 0x207ca0u: goto label_207ca0;
        case 0x207ca4u: goto label_207ca4;
        case 0x207ca8u: goto label_207ca8;
        case 0x207cacu: goto label_207cac;
        case 0x207cb0u: goto label_207cb0;
        case 0x207cb4u: goto label_207cb4;
        case 0x207cb8u: goto label_207cb8;
        case 0x207cbcu: goto label_207cbc;
        case 0x207cc0u: goto label_207cc0;
        case 0x207cc4u: goto label_207cc4;
        case 0x207cc8u: goto label_207cc8;
        case 0x207cccu: goto label_207ccc;
        case 0x207cd0u: goto label_207cd0;
        case 0x207cd4u: goto label_207cd4;
        case 0x207cd8u: goto label_207cd8;
        case 0x207cdcu: goto label_207cdc;
        case 0x207ce0u: goto label_207ce0;
        case 0x207ce4u: goto label_207ce4;
        case 0x207ce8u: goto label_207ce8;
        case 0x207cecu: goto label_207cec;
        case 0x207cf0u: goto label_207cf0;
        case 0x207cf4u: goto label_207cf4;
        case 0x207cf8u: goto label_207cf8;
        case 0x207cfcu: goto label_207cfc;
        case 0x207d00u: goto label_207d00;
        case 0x207d04u: goto label_207d04;
        case 0x207d08u: goto label_207d08;
        case 0x207d0cu: goto label_207d0c;
        case 0x207d10u: goto label_207d10;
        case 0x207d14u: goto label_207d14;
        case 0x207d18u: goto label_207d18;
        case 0x207d1cu: goto label_207d1c;
        case 0x207d20u: goto label_207d20;
        case 0x207d24u: goto label_207d24;
        case 0x207d28u: goto label_207d28;
        case 0x207d2cu: goto label_207d2c;
        case 0x207d30u: goto label_207d30;
        case 0x207d34u: goto label_207d34;
        case 0x207d38u: goto label_207d38;
        case 0x207d3cu: goto label_207d3c;
        case 0x207d40u: goto label_207d40;
        case 0x207d44u: goto label_207d44;
        case 0x207d48u: goto label_207d48;
        case 0x207d4cu: goto label_207d4c;
        case 0x207d50u: goto label_207d50;
        case 0x207d54u: goto label_207d54;
        case 0x207d58u: goto label_207d58;
        case 0x207d5cu: goto label_207d5c;
        case 0x207d60u: goto label_207d60;
        case 0x207d64u: goto label_207d64;
        case 0x207d68u: goto label_207d68;
        case 0x207d6cu: goto label_207d6c;
        case 0x207d70u: goto label_207d70;
        case 0x207d74u: goto label_207d74;
        case 0x207d78u: goto label_207d78;
        case 0x207d7cu: goto label_207d7c;
        case 0x207d80u: goto label_207d80;
        case 0x207d84u: goto label_207d84;
        case 0x207d88u: goto label_207d88;
        case 0x207d8cu: goto label_207d8c;
        case 0x207d90u: goto label_207d90;
        case 0x207d94u: goto label_207d94;
        case 0x207d98u: goto label_207d98;
        case 0x207d9cu: goto label_207d9c;
        case 0x207da0u: goto label_207da0;
        case 0x207da4u: goto label_207da4;
        case 0x207da8u: goto label_207da8;
        case 0x207dacu: goto label_207dac;
        case 0x207db0u: goto label_207db0;
        case 0x207db4u: goto label_207db4;
        case 0x207db8u: goto label_207db8;
        case 0x207dbcu: goto label_207dbc;
        case 0x207dc0u: goto label_207dc0;
        case 0x207dc4u: goto label_207dc4;
        case 0x207dc8u: goto label_207dc8;
        case 0x207dccu: goto label_207dcc;
        case 0x207dd0u: goto label_207dd0;
        case 0x207dd4u: goto label_207dd4;
        case 0x207dd8u: goto label_207dd8;
        case 0x207ddcu: goto label_207ddc;
        case 0x207de0u: goto label_207de0;
        case 0x207de4u: goto label_207de4;
        case 0x207de8u: goto label_207de8;
        case 0x207decu: goto label_207dec;
        case 0x207df0u: goto label_207df0;
        case 0x207df4u: goto label_207df4;
        case 0x207df8u: goto label_207df8;
        case 0x207dfcu: goto label_207dfc;
        case 0x207e00u: goto label_207e00;
        case 0x207e04u: goto label_207e04;
        case 0x207e08u: goto label_207e08;
        case 0x207e0cu: goto label_207e0c;
        case 0x207e10u: goto label_207e10;
        case 0x207e14u: goto label_207e14;
        case 0x207e18u: goto label_207e18;
        case 0x207e1cu: goto label_207e1c;
        case 0x207e20u: goto label_207e20;
        case 0x207e24u: goto label_207e24;
        case 0x207e28u: goto label_207e28;
        case 0x207e2cu: goto label_207e2c;
        case 0x207e30u: goto label_207e30;
        case 0x207e34u: goto label_207e34;
        case 0x207e38u: goto label_207e38;
        case 0x207e3cu: goto label_207e3c;
        case 0x207e40u: goto label_207e40;
        case 0x207e44u: goto label_207e44;
        case 0x207e48u: goto label_207e48;
        case 0x207e4cu: goto label_207e4c;
        case 0x207e50u: goto label_207e50;
        case 0x207e54u: goto label_207e54;
        case 0x207e58u: goto label_207e58;
        case 0x207e5cu: goto label_207e5c;
        case 0x207e60u: goto label_207e60;
        case 0x207e64u: goto label_207e64;
        case 0x207e68u: goto label_207e68;
        case 0x207e6cu: goto label_207e6c;
        case 0x207e70u: goto label_207e70;
        case 0x207e74u: goto label_207e74;
        case 0x207e78u: goto label_207e78;
        case 0x207e7cu: goto label_207e7c;
        case 0x207e80u: goto label_207e80;
        case 0x207e84u: goto label_207e84;
        case 0x207e88u: goto label_207e88;
        case 0x207e8cu: goto label_207e8c;
        case 0x207e90u: goto label_207e90;
        case 0x207e94u: goto label_207e94;
        case 0x207e98u: goto label_207e98;
        case 0x207e9cu: goto label_207e9c;
        default: break;
    }

    ctx->pc = 0x207980u;

label_207980:
    // 0x207980: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x207980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_207984:
    // 0x207984: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x207984u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_207988:
    // 0x207988: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x207988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_20798c:
    // 0x20798c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x20798cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_207990:
    // 0x207990: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x207990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_207994:
    // 0x207994: 0x24a5d6e0  addiu       $a1, $a1, -0x2920
    ctx->pc = 0x207994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956768));
label_207998:
    // 0x207998: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x207998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_20799c:
    // 0x20799c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x20799cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2079a0:
    // 0x2079a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2079a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2079a4:
    // 0x2079a4: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x2079a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_2079a8:
    // 0x2079a8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2079a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2079ac:
    // 0x2079ac: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2079acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2079b0:
    // 0x2079b0: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x2079b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_2079b4:
    // 0x2079b4: 0x320f809  jalr        $t9
label_2079b8:
    if (ctx->pc == 0x2079B8u) {
        ctx->pc = 0x2079B8u;
            // 0x2079b8: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x2079BCu;
        goto label_2079bc;
    }
    ctx->pc = 0x2079B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2079BCu);
        ctx->pc = 0x2079B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2079B4u;
            // 0x2079b8: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2079BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2079BCu; }
            if (ctx->pc != 0x2079BCu) { return; }
        }
        }
    }
    ctx->pc = 0x2079BCu;
label_2079bc:
    // 0x2079bc: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x2079bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_2079c0:
    // 0x2079c0: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x2079c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_2079c4:
    // 0x2079c4: 0x14200048  bnez        $at, . + 4 + (0x48 << 2)
label_2079c8:
    if (ctx->pc == 0x2079C8u) {
        ctx->pc = 0x2079C8u;
            // 0x2079c8: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2079CCu;
        goto label_2079cc;
    }
    ctx->pc = 0x2079C4u;
    {
        const bool branch_taken_0x2079c4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2079C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2079C4u;
            // 0x2079c8: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2079c4) {
            ctx->pc = 0x207AE8u;
            goto label_207ae8;
        }
    }
    ctx->pc = 0x2079CCu;
label_2079cc:
    // 0x2079cc: 0x24100010  addiu       $s0, $zero, 0x10
    ctx->pc = 0x2079ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2079d0:
    // 0x2079d0: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x2079d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_2079d4:
    // 0x2079d4: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x2079d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_2079d8:
    // 0x2079d8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2079d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2079dc:
    // 0x2079dc: 0x24a5d6e0  addiu       $a1, $a1, -0x2920
    ctx->pc = 0x2079dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956768));
label_2079e0:
    // 0x2079e0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2079e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2079e4:
    // 0x2079e4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2079e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2079e8:
    // 0x2079e8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2079e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2079ec:
    // 0x2079ec: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x2079ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_2079f0:
    // 0x2079f0: 0x320f809  jalr        $t9
label_2079f4:
    if (ctx->pc == 0x2079F4u) {
        ctx->pc = 0x2079F4u;
            // 0x2079f4: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x2079F8u;
        goto label_2079f8;
    }
    ctx->pc = 0x2079F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2079F8u);
        ctx->pc = 0x2079F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2079F0u;
            // 0x2079f4: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2079F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2079F8u; }
            if (ctx->pc != 0x2079F8u) { return; }
        }
        }
    }
    ctx->pc = 0x2079F8u;
label_2079f8:
    // 0x2079f8: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x2079f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2079fc:
    // 0x2079fc: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x2079fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_207a00:
    // 0x207a00: 0xc7a20060  lwc1        $f2, 0x60($sp)
    ctx->pc = 0x207a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_207a04:
    // 0x207a04: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x207a04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_207a08:
    // 0x207a08: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_207a0c:
    if (ctx->pc == 0x207A0Cu) {
        ctx->pc = 0x207A0Cu;
            // 0x207a0c: 0xc7a30040  lwc1        $f3, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->pc = 0x207A10u;
        goto label_207a10;
    }
    ctx->pc = 0x207A08u;
    {
        const bool branch_taken_0x207a08 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x207A0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207A08u;
            // 0x207a0c: 0xc7a30040  lwc1        $f3, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x207a08) {
            ctx->pc = 0x207A18u;
            goto label_207a18;
        }
    }
    ctx->pc = 0x207A10u;
label_207a10:
    // 0x207a10: 0x10000003  b           . + 4 + (0x3 << 2)
label_207a14:
    if (ctx->pc == 0x207A14u) {
        ctx->pc = 0x207A14u;
            // 0x207a14: 0xc7a10044  lwc1        $f1, 0x44($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x207A18u;
        goto label_207a18;
    }
    ctx->pc = 0x207A10u;
    {
        const bool branch_taken_0x207a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207A14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207A10u;
            // 0x207a14: 0xc7a10044  lwc1        $f1, 0x44($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x207a10) {
            ctx->pc = 0x207A20u;
            goto label_207a20;
        }
    }
    ctx->pc = 0x207A18u;
label_207a18:
    // 0x207a18: 0x46001886  mov.s       $f2, $f3
    ctx->pc = 0x207a18u;
    ctx->f[2] = FPU_MOV_S(ctx->f[3]);
label_207a1c:
    // 0x207a1c: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x207a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_207a20:
    // 0x207a20: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x207a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_207a24:
    // 0x207a24: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x207a24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_207a28:
    // 0x207a28: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_207a2c:
    if (ctx->pc == 0x207A2Cu) {
        ctx->pc = 0x207A2Cu;
            // 0x207a2c: 0xe7a20060  swc1        $f2, 0x60($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->pc = 0x207A30u;
        goto label_207a30;
    }
    ctx->pc = 0x207A28u;
    {
        const bool branch_taken_0x207a28 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x207A2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207A28u;
            // 0x207a2c: 0xe7a20060  swc1        $f2, 0x60($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x207a28) {
            ctx->pc = 0x207A38u;
            goto label_207a38;
        }
    }
    ctx->pc = 0x207A30u;
label_207a30:
    // 0x207a30: 0x10000003  b           . + 4 + (0x3 << 2)
label_207a34:
    if (ctx->pc == 0x207A34u) {
        ctx->pc = 0x207A34u;
            // 0x207a34: 0xe7a00064  swc1        $f0, 0x64($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
        ctx->pc = 0x207A38u;
        goto label_207a38;
    }
    ctx->pc = 0x207A30u;
    {
        const bool branch_taken_0x207a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207A34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207A30u;
            // 0x207a34: 0xe7a00064  swc1        $f0, 0x64($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x207a30) {
            ctx->pc = 0x207A40u;
            goto label_207a40;
        }
    }
    ctx->pc = 0x207A38u;
label_207a38:
    // 0x207a38: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x207a38u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
label_207a3c:
    // 0x207a3c: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x207a3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_207a40:
    // 0x207a40: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x207a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_207a44:
    // 0x207a44: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x207a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_207a48:
    // 0x207a48: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x207a48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_207a4c:
    // 0x207a4c: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
label_207a50:
    if (ctx->pc == 0x207A50u) {
        ctx->pc = 0x207A50u;
            // 0x207a50: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = 0x207A54u;
        goto label_207a54;
    }
    ctx->pc = 0x207A4Cu;
    {
        const bool branch_taken_0x207a4c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x207a4c) {
            ctx->pc = 0x207A50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x207A4Cu;
            // 0x207a50: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x207A54u;
            goto label_207a54;
        }
    }
    ctx->pc = 0x207A54u;
label_207a54:
    // 0x207a54: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x207a54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_207a58:
    // 0x207a58: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x207a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_207a5c:
    // 0x207a5c: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x207a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_207a60:
    // 0x207a60: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x207a60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_207a64:
    // 0x207a64: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
label_207a68:
    if (ctx->pc == 0x207A68u) {
        ctx->pc = 0x207A68u;
            // 0x207a68: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = 0x207A6Cu;
        goto label_207a6c;
    }
    ctx->pc = 0x207A64u;
    {
        const bool branch_taken_0x207a64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x207a64) {
            ctx->pc = 0x207A68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x207A64u;
            // 0x207a68: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x207A6Cu;
            goto label_207a6c;
        }
    }
    ctx->pc = 0x207A6Cu;
label_207a6c:
    // 0x207a6c: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x207a6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_207a70:
    // 0x207a70: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x207a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_207a74:
    // 0x207a74: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x207a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_207a78:
    // 0x207a78: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x207a78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_207a7c:
    // 0x207a7c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_207a80:
    if (ctx->pc == 0x207A80u) {
        ctx->pc = 0x207A80u;
            // 0x207a80: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = 0x207A84u;
        goto label_207a84;
    }
    ctx->pc = 0x207A7Cu;
    {
        const bool branch_taken_0x207a7c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x207a7c) {
            ctx->pc = 0x207A80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x207A7Cu;
            // 0x207a80: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x207A84u;
            goto label_207a84;
        }
    }
    ctx->pc = 0x207A84u;
label_207a84:
    // 0x207a84: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x207a84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_207a88:
    // 0x207a88: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x207a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_207a8c:
    // 0x207a8c: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x207a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_207a90:
    // 0x207a90: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x207a90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_207a94:
    // 0x207a94: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_207a98:
    if (ctx->pc == 0x207A98u) {
        ctx->pc = 0x207A98u;
            // 0x207a98: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = 0x207A9Cu;
        goto label_207a9c;
    }
    ctx->pc = 0x207A94u;
    {
        const bool branch_taken_0x207a94 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x207a94) {
            ctx->pc = 0x207A98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x207A94u;
            // 0x207a98: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x207A9Cu;
            goto label_207a9c;
        }
    }
    ctx->pc = 0x207A9Cu;
label_207a9c:
    // 0x207a9c: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x207a9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_207aa0:
    // 0x207aa0: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x207aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_207aa4:
    // 0x207aa4: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x207aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_207aa8:
    // 0x207aa8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x207aa8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_207aac:
    // 0x207aac: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_207ab0:
    if (ctx->pc == 0x207AB0u) {
        ctx->pc = 0x207AB0u;
            // 0x207ab0: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = 0x207AB4u;
        goto label_207ab4;
    }
    ctx->pc = 0x207AACu;
    {
        const bool branch_taken_0x207aac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x207aac) {
            ctx->pc = 0x207AB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x207AACu;
            // 0x207ab0: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x207AB4u;
            goto label_207ab4;
        }
    }
    ctx->pc = 0x207AB4u;
label_207ab4:
    // 0x207ab4: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x207ab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_207ab8:
    // 0x207ab8: 0xc7a1005c  lwc1        $f1, 0x5C($sp)
    ctx->pc = 0x207ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_207abc:
    // 0x207abc: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x207abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_207ac0:
    // 0x207ac0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x207ac0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_207ac4:
    // 0x207ac4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_207ac8:
    if (ctx->pc == 0x207AC8u) {
        ctx->pc = 0x207AC8u;
            // 0x207ac8: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = 0x207ACCu;
        goto label_207acc;
    }
    ctx->pc = 0x207AC4u;
    {
        const bool branch_taken_0x207ac4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x207ac4) {
            ctx->pc = 0x207AC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x207AC4u;
            // 0x207ac8: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x207ACCu;
            goto label_207acc;
        }
    }
    ctx->pc = 0x207ACCu;
label_207acc:
    // 0x207acc: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x207accu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_207ad0:
    // 0x207ad0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x207ad0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_207ad4:
    // 0x207ad4: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x207ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_207ad8:
    // 0x207ad8: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x207ad8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_207adc:
    // 0x207adc: 0x1460ffbc  bnez        $v1, . + 4 + (-0x44 << 2)
label_207ae0:
    if (ctx->pc == 0x207AE0u) {
        ctx->pc = 0x207AE0u;
            // 0x207ae0: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x207AE4u;
        goto label_207ae4;
    }
    ctx->pc = 0x207ADCu;
    {
        const bool branch_taken_0x207adc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x207AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207ADCu;
            // 0x207ae0: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207adc) {
            ctx->pc = 0x2079D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2079d0;
        }
    }
    ctx->pc = 0x207AE4u;
label_207ae4:
    // 0x207ae4: 0x0  nop
    ctx->pc = 0x207ae4u;
    // NOP
label_207ae8:
    // 0x207ae8: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x207ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_207aec:
    // 0x207aec: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x207aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_207af0:
    // 0x207af0: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x207af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_207af4:
    // 0x207af4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x207af4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_207af8:
    // 0x207af8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x207af8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_207afc:
    // 0x207afc: 0xe6400030  swc1        $f0, 0x30($s2)
    ctx->pc = 0x207afcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
label_207b00:
    // 0x207b00: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x207b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_207b04:
    // 0x207b04: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x207b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_207b08:
    // 0x207b08: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x207b08u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_207b0c:
    // 0x207b0c: 0xe6400034  swc1        $f0, 0x34($s2)
    ctx->pc = 0x207b0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
label_207b10:
    // 0x207b10: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x207b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_207b14:
    // 0x207b14: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x207b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_207b18:
    // 0x207b18: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x207b18u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_207b1c:
    // 0x207b1c: 0xe6400038  swc1        $f0, 0x38($s2)
    ctx->pc = 0x207b1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
label_207b20:
    // 0x207b20: 0xc7a1007c  lwc1        $f1, 0x7C($sp)
    ctx->pc = 0x207b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_207b24:
    // 0x207b24: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x207b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_207b28:
    // 0x207b28: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x207b28u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_207b2c:
    // 0x207b2c: 0xe640003c  swc1        $f0, 0x3C($s2)
    ctx->pc = 0x207b2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 60), bits); }
label_207b30:
    // 0x207b30: 0xc6400030  lwc1        $f0, 0x30($s2)
    ctx->pc = 0x207b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_207b34:
    // 0x207b34: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x207b34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_207b38:
    // 0x207b38: 0xe6400030  swc1        $f0, 0x30($s2)
    ctx->pc = 0x207b38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
label_207b3c:
    // 0x207b3c: 0xc6400034  lwc1        $f0, 0x34($s2)
    ctx->pc = 0x207b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_207b40:
    // 0x207b40: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x207b40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_207b44:
    // 0x207b44: 0xe6400034  swc1        $f0, 0x34($s2)
    ctx->pc = 0x207b44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
label_207b48:
    // 0x207b48: 0xc6400038  lwc1        $f0, 0x38($s2)
    ctx->pc = 0x207b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_207b4c:
    // 0x207b4c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x207b4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_207b50:
    // 0x207b50: 0xe6400038  swc1        $f0, 0x38($s2)
    ctx->pc = 0x207b50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
label_207b54:
    // 0x207b54: 0xc640003c  lwc1        $f0, 0x3C($s2)
    ctx->pc = 0x207b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_207b58:
    // 0x207b58: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x207b58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_207b5c:
    // 0x207b5c: 0xe640003c  swc1        $f0, 0x3C($s2)
    ctx->pc = 0x207b5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 60), bits); }
label_207b60:
    // 0x207b60: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x207b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_207b64:
    // 0x207b64: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x207b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_207b68:
    // 0x207b68: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x207b68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_207b6c:
    // 0x207b6c: 0xe6400040  swc1        $f0, 0x40($s2)
    ctx->pc = 0x207b6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 64), bits); }
label_207b70:
    // 0x207b70: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x207b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_207b74:
    // 0x207b74: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x207b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_207b78:
    // 0x207b78: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x207b78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_207b7c:
    // 0x207b7c: 0xe6400044  swc1        $f0, 0x44($s2)
    ctx->pc = 0x207b7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 68), bits); }
label_207b80:
    // 0x207b80: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x207b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_207b84:
    // 0x207b84: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x207b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_207b88:
    // 0x207b88: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x207b88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_207b8c:
    // 0x207b8c: 0xe6400048  swc1        $f0, 0x48($s2)
    ctx->pc = 0x207b8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 72), bits); }
label_207b90:
    // 0x207b90: 0xc7a1006c  lwc1        $f1, 0x6C($sp)
    ctx->pc = 0x207b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_207b94:
    // 0x207b94: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x207b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_207b98:
    // 0x207b98: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x207b98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_207b9c:
    // 0x207b9c: 0xe640004c  swc1        $f0, 0x4C($s2)
    ctx->pc = 0x207b9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 76), bits); }
label_207ba0:
    // 0x207ba0: 0xc6400040  lwc1        $f0, 0x40($s2)
    ctx->pc = 0x207ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_207ba4:
    // 0x207ba4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x207ba4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_207ba8:
    // 0x207ba8: 0xe6400040  swc1        $f0, 0x40($s2)
    ctx->pc = 0x207ba8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 64), bits); }
label_207bac:
    // 0x207bac: 0xc6400044  lwc1        $f0, 0x44($s2)
    ctx->pc = 0x207bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_207bb0:
    // 0x207bb0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x207bb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_207bb4:
    // 0x207bb4: 0xe6400044  swc1        $f0, 0x44($s2)
    ctx->pc = 0x207bb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 68), bits); }
label_207bb8:
    // 0x207bb8: 0xc6400048  lwc1        $f0, 0x48($s2)
    ctx->pc = 0x207bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_207bbc:
    // 0x207bbc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x207bbcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_207bc0:
    // 0x207bc0: 0xe6400048  swc1        $f0, 0x48($s2)
    ctx->pc = 0x207bc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 72), bits); }
label_207bc4:
    // 0x207bc4: 0xc640004c  lwc1        $f0, 0x4C($s2)
    ctx->pc = 0x207bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_207bc8:
    // 0x207bc8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x207bc8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_207bcc:
    // 0x207bcc: 0xe640004c  swc1        $f0, 0x4C($s2)
    ctx->pc = 0x207bccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 76), bits); }
label_207bd0:
    // 0x207bd0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x207bd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_207bd4:
    // 0x207bd4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x207bd4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_207bd8:
    // 0x207bd8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x207bd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_207bdc:
    // 0x207bdc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x207bdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_207be0:
    // 0x207be0: 0x3e00008  jr          $ra
label_207be4:
    if (ctx->pc == 0x207BE4u) {
        ctx->pc = 0x207BE4u;
            // 0x207be4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x207BE8u;
        goto label_207be8;
    }
    ctx->pc = 0x207BE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x207BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207BE0u;
            // 0x207be4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x207BE8u;
label_207be8:
    // 0x207be8: 0x0  nop
    ctx->pc = 0x207be8u;
    // NOP
label_207bec:
    // 0x207bec: 0x0  nop
    ctx->pc = 0x207becu;
    // NOP
label_207bf0:
    // 0x207bf0: 0x3e00008  jr          $ra
label_207bf4:
    if (ctx->pc == 0x207BF4u) {
        ctx->pc = 0x207BF4u;
            // 0x207bf4: 0x8c82001c  lw          $v0, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->pc = 0x207BF8u;
        goto label_207bf8;
    }
    ctx->pc = 0x207BF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x207BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207BF0u;
            // 0x207bf4: 0x8c82001c  lw          $v0, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x207BF8u;
label_207bf8:
    // 0x207bf8: 0x0  nop
    ctx->pc = 0x207bf8u;
    // NOP
label_207bfc:
    // 0x207bfc: 0x0  nop
    ctx->pc = 0x207bfcu;
    // NOP
label_207c00:
    // 0x207c00: 0x3e00008  jr          $ra
label_207c04:
    if (ctx->pc == 0x207C04u) {
        ctx->pc = 0x207C04u;
            // 0x207c04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x207C08u;
        goto label_207c08;
    }
    ctx->pc = 0x207C00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x207C04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207C00u;
            // 0x207c04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x207C08u;
label_207c08:
    // 0x207c08: 0x0  nop
    ctx->pc = 0x207c08u;
    // NOP
label_207c0c:
    // 0x207c0c: 0x0  nop
    ctx->pc = 0x207c0cu;
    // NOP
label_207c10:
    // 0x207c10: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x207c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_207c14:
    // 0x207c14: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x207c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_207c18:
    // 0x207c18: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x207c18u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_207c1c:
    // 0x207c1c: 0x50200001  beql        $at, $zero, . + 4 + (0x1 << 2)
label_207c20:
    if (ctx->pc == 0x207C20u) {
        ctx->pc = 0x207C20u;
            // 0x207c20: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x207C24u;
        goto label_207c24;
    }
    ctx->pc = 0x207C1Cu;
    {
        const bool branch_taken_0x207c1c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x207c1c) {
            ctx->pc = 0x207C20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x207C1Cu;
            // 0x207c20: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x207C24u;
            goto label_207c24;
        }
    }
    ctx->pc = 0x207C24u;
label_207c24:
    // 0x207c24: 0x3e00008  jr          $ra
label_207c28:
    if (ctx->pc == 0x207C28u) {
        ctx->pc = 0x207C2Cu;
        goto label_207c2c;
    }
    ctx->pc = 0x207C24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x207C2Cu;
label_207c2c:
    // 0x207c2c: 0x0  nop
    ctx->pc = 0x207c2cu;
    // NOP
label_207c30:
    // 0x207c30: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x207c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_207c34:
    // 0x207c34: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x207c34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_207c38:
    // 0x207c38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x207c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_207c3c:
    // 0x207c3c: 0x3e00008  jr          $ra
label_207c40:
    if (ctx->pc == 0x207C40u) {
        ctx->pc = 0x207C40u;
            // 0x207c40: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x207C44u;
        goto label_207c44;
    }
    ctx->pc = 0x207C3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x207C40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207C3Cu;
            // 0x207c40: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x207C44u;
label_207c44:
    // 0x207c44: 0x0  nop
    ctx->pc = 0x207c44u;
    // NOP
label_207c48:
    // 0x207c48: 0x0  nop
    ctx->pc = 0x207c48u;
    // NOP
label_207c4c:
    // 0x207c4c: 0x0  nop
    ctx->pc = 0x207c4cu;
    // NOP
label_207c50:
    // 0x207c50: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x207c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_207c54:
    // 0x207c54: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x207c54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_207c58:
    // 0x207c58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x207c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_207c5c:
    // 0x207c5c: 0x3e00008  jr          $ra
label_207c60:
    if (ctx->pc == 0x207C60u) {
        ctx->pc = 0x207C60u;
            // 0x207c60: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->pc = 0x207C64u;
        goto label_207c64;
    }
    ctx->pc = 0x207C5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x207C60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207C5Cu;
            // 0x207c60: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x207C64u;
label_207c64:
    // 0x207c64: 0x0  nop
    ctx->pc = 0x207c64u;
    // NOP
label_207c68:
    // 0x207c68: 0x0  nop
    ctx->pc = 0x207c68u;
    // NOP
label_207c6c:
    // 0x207c6c: 0x0  nop
    ctx->pc = 0x207c6cu;
    // NOP
label_207c70:
    // 0x207c70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x207c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_207c74:
    // 0x207c74: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x207c74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_207c78:
    // 0x207c78: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x207c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_207c7c:
    // 0x207c7c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x207c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_207c80:
    // 0x207c80: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x207c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_207c84:
    // 0x207c84: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x207c84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_207c88:
    // 0x207c88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x207c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_207c8c:
    // 0x207c8c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x207c8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_207c90:
    // 0x207c90: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x207c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_207c94:
    // 0x207c94: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x207c94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_207c98:
    // 0x207c98: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x207c98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_207c9c:
    // 0x207c9c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x207c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_207ca0:
    // 0x207ca0: 0x24a5bba0  addiu       $a1, $a1, -0x4460
    ctx->pc = 0x207ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949792));
label_207ca4:
    // 0x207ca4: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x207ca4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_207ca8:
    // 0x207ca8: 0x320f809  jalr        $t9
label_207cac:
    if (ctx->pc == 0x207CACu) {
        ctx->pc = 0x207CACu;
            // 0x207cac: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x207CB0u;
        goto label_207cb0;
    }
    ctx->pc = 0x207CA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x207CB0u);
        ctx->pc = 0x207CACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207CA8u;
            // 0x207cac: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x207CB0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x207CB0u; }
            if (ctx->pc != 0x207CB0u) { return; }
        }
        }
    }
    ctx->pc = 0x207CB0u;
label_207cb0:
    // 0x207cb0: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x207cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_207cb4:
    // 0x207cb4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x207cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_207cb8:
    // 0x207cb8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x207cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_207cbc:
    // 0x207cbc: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
label_207cc0:
    if (ctx->pc == 0x207CC0u) {
        ctx->pc = 0x207CC0u;
            // 0x207cc0: 0x8e62001c  lw          $v0, 0x1C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
        ctx->pc = 0x207CC4u;
        goto label_207cc4;
    }
    ctx->pc = 0x207CBCu;
    {
        const bool branch_taken_0x207cbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x207cbc) {
            ctx->pc = 0x207CC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x207CBCu;
            // 0x207cc0: 0x8e62001c  lw          $v0, 0x1C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x207CFCu;
            goto label_207cfc;
        }
    }
    ctx->pc = 0x207CC4u;
label_207cc4:
    // 0x207cc4: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x207cc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_207cc8:
    // 0x207cc8: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x207cc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_207ccc:
    // 0x207ccc: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x207cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_207cd0:
    // 0x207cd0: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x207cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_207cd4:
    // 0x207cd4: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x207cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_207cd8:
    // 0x207cd8: 0x8e670018  lw          $a3, 0x18($s3)
    ctx->pc = 0x207cd8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_207cdc:
    // 0x207cdc: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x207cdcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_207ce0:
    // 0x207ce0: 0x24900  sll         $t1, $v0, 4
    ctx->pc = 0x207ce0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_207ce4:
    // 0x207ce4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x207ce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_207ce8:
    // 0x207ce8: 0x24a5bbb0  addiu       $a1, $a1, -0x4450
    ctx->pc = 0x207ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949808));
label_207cec:
    // 0x207cec: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x207cecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_207cf0:
    // 0x207cf0: 0x320f809  jalr        $t9
label_207cf4:
    if (ctx->pc == 0x207CF4u) {
        ctx->pc = 0x207CF4u;
            // 0x207cf4: 0x34100  sll         $t0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->pc = 0x207CF8u;
        goto label_207cf8;
    }
    ctx->pc = 0x207CF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x207CF8u);
        ctx->pc = 0x207CF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207CF0u;
            // 0x207cf4: 0x34100  sll         $t0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x207CF8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x207CF8u; }
            if (ctx->pc != 0x207CF8u) { return; }
        }
        }
    }
    ctx->pc = 0x207CF8u;
label_207cf8:
    // 0x207cf8: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x207cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_207cfc:
    // 0x207cfc: 0x18400012  blez        $v0, . + 4 + (0x12 << 2)
label_207d00:
    if (ctx->pc == 0x207D00u) {
        ctx->pc = 0x207D00u;
            // 0x207d00: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x207D04u;
        goto label_207d04;
    }
    ctx->pc = 0x207CFCu;
    {
        const bool branch_taken_0x207cfc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x207D00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207CFCu;
            // 0x207d00: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207cfc) {
            ctx->pc = 0x207D48u;
            goto label_207d48;
        }
    }
    ctx->pc = 0x207D04u;
label_207d04:
    // 0x207d04: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x207d04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_207d08:
    // 0x207d08: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x207d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_207d0c:
    // 0x207d0c: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x207d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_207d10:
    // 0x207d10: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x207d10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_207d14:
    // 0x207d14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x207d14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_207d18:
    // 0x207d18: 0x24a5bbc0  addiu       $a1, $a1, -0x4440
    ctx->pc = 0x207d18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949824));
label_207d1c:
    // 0x207d1c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x207d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_207d20:
    // 0x207d20: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x207d20u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_207d24:
    // 0x207d24: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x207d24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_207d28:
    // 0x207d28: 0x320f809  jalr        $t9
label_207d2c:
    if (ctx->pc == 0x207D2Cu) {
        ctx->pc = 0x207D2Cu;
            // 0x207d2c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x207D30u;
        goto label_207d30;
    }
    ctx->pc = 0x207D28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x207D30u);
        ctx->pc = 0x207D2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207D28u;
            // 0x207d2c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x207D30u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x207D30u; }
            if (ctx->pc != 0x207D30u) { return; }
        }
        }
    }
    ctx->pc = 0x207D30u;
label_207d30:
    // 0x207d30: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x207d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_207d34:
    // 0x207d34: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x207d34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_207d38:
    // 0x207d38: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x207d38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_207d3c:
    // 0x207d3c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_207d40:
    if (ctx->pc == 0x207D40u) {
        ctx->pc = 0x207D40u;
            // 0x207d40: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x207D44u;
        goto label_207d44;
    }
    ctx->pc = 0x207D3Cu;
    {
        const bool branch_taken_0x207d3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x207D40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207D3Cu;
            // 0x207d40: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207d3c) {
            ctx->pc = 0x207D08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_207d08;
        }
    }
    ctx->pc = 0x207D44u;
label_207d44:
    // 0x207d44: 0x0  nop
    ctx->pc = 0x207d44u;
    // NOP
label_207d48:
    // 0x207d48: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x207d48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_207d4c:
    // 0x207d4c: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x207d4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_207d50:
    // 0x207d50: 0x320f809  jalr        $t9
label_207d54:
    if (ctx->pc == 0x207D54u) {
        ctx->pc = 0x207D54u;
            // 0x207d54: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x207D58u;
        goto label_207d58;
    }
    ctx->pc = 0x207D50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x207D58u);
        ctx->pc = 0x207D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207D50u;
            // 0x207d54: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x207D58u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x207D58u; }
            if (ctx->pc != 0x207D58u) { return; }
        }
        }
    }
    ctx->pc = 0x207D58u;
label_207d58:
    // 0x207d58: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x207d58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_207d5c:
    // 0x207d5c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x207d5cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_207d60:
    // 0x207d60: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x207d60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_207d64:
    // 0x207d64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x207d64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_207d68:
    // 0x207d68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x207d68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_207d6c:
    // 0x207d6c: 0x3e00008  jr          $ra
label_207d70:
    if (ctx->pc == 0x207D70u) {
        ctx->pc = 0x207D70u;
            // 0x207d70: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x207D74u;
        goto label_207d74;
    }
    ctx->pc = 0x207D6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x207D70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207D6Cu;
            // 0x207d70: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x207D74u;
label_207d74:
    // 0x207d74: 0x0  nop
    ctx->pc = 0x207d74u;
    // NOP
label_207d78:
    // 0x207d78: 0x0  nop
    ctx->pc = 0x207d78u;
    // NOP
label_207d7c:
    // 0x207d7c: 0x0  nop
    ctx->pc = 0x207d7cu;
    // NOP
label_207d80:
    // 0x207d80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x207d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_207d84:
    // 0x207d84: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x207d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_207d88:
    // 0x207d88: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x207d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_207d8c:
    // 0x207d8c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x207d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_207d90:
    // 0x207d90: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x207d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_207d94:
    // 0x207d94: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x207d94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_207d98:
    // 0x207d98: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x207d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_207d9c:
    // 0x207d9c: 0x286201ff  slti        $v0, $v1, 0x1FF
    ctx->pc = 0x207d9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)511) ? 1 : 0);
label_207da0:
    // 0x207da0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_207da4:
    if (ctx->pc == 0x207DA4u) {
        ctx->pc = 0x207DA4u;
            // 0x207da4: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x207DA8u;
        goto label_207da8;
    }
    ctx->pc = 0x207DA0u;
    {
        const bool branch_taken_0x207da0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x207DA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207DA0u;
            // 0x207da4: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207da0) {
            ctx->pc = 0x207DB0u;
            goto label_207db0;
        }
    }
    ctx->pc = 0x207DA8u;
label_207da8:
    // 0x207da8: 0x1000001e  b           . + 4 + (0x1E << 2)
label_207dac:
    if (ctx->pc == 0x207DACu) {
        ctx->pc = 0x207DACu;
            // 0x207dac: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x207DB0u;
        goto label_207db0;
    }
    ctx->pc = 0x207DA8u;
    {
        const bool branch_taken_0x207da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207DACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207DA8u;
            // 0x207dac: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207da8) {
            ctx->pc = 0x207E24u;
            goto label_207e24;
        }
    }
    ctx->pc = 0x207DB0u;
label_207db0:
    // 0x207db0: 0x1860001b  blez        $v1, . + 4 + (0x1B << 2)
label_207db4:
    if (ctx->pc == 0x207DB4u) {
        ctx->pc = 0x207DB4u;
            // 0x207db4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x207DB8u;
        goto label_207db8;
    }
    ctx->pc = 0x207DB0u;
    {
        const bool branch_taken_0x207db0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x207DB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207DB0u;
            // 0x207db4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207db0) {
            ctx->pc = 0x207E20u;
            goto label_207e20;
        }
    }
    ctx->pc = 0x207DB8u;
label_207db8:
    // 0x207db8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x207db8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_207dbc:
    // 0x207dbc: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x207dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_207dc0:
    // 0x207dc0: 0x509821  addu        $s3, $v0, $s0
    ctx->pc = 0x207dc0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_207dc4:
    // 0x207dc4: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x207dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_207dc8:
    // 0x207dc8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x207dc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_207dcc:
    // 0x207dcc: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x207dccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_207dd0:
    // 0x207dd0: 0x320f809  jalr        $t9
label_207dd4:
    if (ctx->pc == 0x207DD4u) {
        ctx->pc = 0x207DD4u;
            // 0x207dd4: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->pc = 0x207DD8u;
        goto label_207dd8;
    }
    ctx->pc = 0x207DD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x207DD8u);
        ctx->pc = 0x207DD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207DD0u;
            // 0x207dd4: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x207DD8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x207DD8u; }
            if (ctx->pc != 0x207DD8u) { return; }
        }
        }
    }
    ctx->pc = 0x207DD8u;
label_207dd8:
    // 0x207dd8: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x207dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
label_207ddc:
    // 0x207ddc: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x207ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_207de0:
    // 0x207de0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x207de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_207de4:
    // 0x207de4: 0x8e44001c  lw          $a0, 0x1C($s2)
    ctx->pc = 0x207de4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_207de8:
    // 0x207de8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x207de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_207dec:
    // 0x207dec: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x207decu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
label_207df0:
    // 0x207df0: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x207df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_207df4:
    // 0x207df4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x207df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_207df8:
    // 0x207df8: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x207df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_207dfc:
    // 0x207dfc: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
label_207e00:
    if (ctx->pc == 0x207E00u) {
        ctx->pc = 0x207E00u;
            // 0x207e00: 0x8e42001c  lw          $v0, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->pc = 0x207E04u;
        goto label_207e04;
    }
    ctx->pc = 0x207DFCu;
    {
        const bool branch_taken_0x207dfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x207dfc) {
            ctx->pc = 0x207E00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x207DFCu;
            // 0x207e00: 0x8e42001c  lw          $v0, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x207E0Cu;
            goto label_207e0c;
        }
    }
    ctx->pc = 0x207E04u;
label_207e04:
    // 0x207e04: 0x10000008  b           . + 4 + (0x8 << 2)
label_207e08:
    if (ctx->pc == 0x207E08u) {
        ctx->pc = 0x207E08u;
            // 0x207e08: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x207E0Cu;
        goto label_207e0c;
    }
    ctx->pc = 0x207E04u;
    {
        const bool branch_taken_0x207e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207E08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207E04u;
            // 0x207e08: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207e04) {
            ctx->pc = 0x207E28u;
            goto label_207e28;
        }
    }
    ctx->pc = 0x207E0Cu;
label_207e0c:
    // 0x207e0c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x207e0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_207e10:
    // 0x207e10: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x207e10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_207e14:
    // 0x207e14: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
label_207e18:
    if (ctx->pc == 0x207E18u) {
        ctx->pc = 0x207E18u;
            // 0x207e18: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x207E1Cu;
        goto label_207e1c;
    }
    ctx->pc = 0x207E14u;
    {
        const bool branch_taken_0x207e14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x207E18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207E14u;
            // 0x207e18: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207e14) {
            ctx->pc = 0x207DBCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_207dbc;
        }
    }
    ctx->pc = 0x207E1Cu;
label_207e1c:
    // 0x207e1c: 0x0  nop
    ctx->pc = 0x207e1cu;
    // NOP
label_207e20:
    // 0x207e20: 0x24020070  addiu       $v0, $zero, 0x70
    ctx->pc = 0x207e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_207e24:
    // 0x207e24: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x207e24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_207e28:
    // 0x207e28: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x207e28u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_207e2c:
    // 0x207e2c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x207e2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_207e30:
    // 0x207e30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x207e30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_207e34:
    // 0x207e34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x207e34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_207e38:
    // 0x207e38: 0x3e00008  jr          $ra
label_207e3c:
    if (ctx->pc == 0x207E3Cu) {
        ctx->pc = 0x207E3Cu;
            // 0x207e3c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x207E40u;
        goto label_207e40;
    }
    ctx->pc = 0x207E38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x207E3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207E38u;
            // 0x207e3c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x207E40u;
label_207e40:
    // 0x207e40: 0x8081f0c  j           func_207C30
label_207e44:
    if (ctx->pc == 0x207E44u) {
        ctx->pc = 0x207E44u;
            // 0x207e44: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->pc = 0x207E48u;
        goto label_207e48;
    }
    ctx->pc = 0x207E40u;
    ctx->pc = 0x207E44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x207E40u;
            // 0x207e44: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x207C30u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_207c30;
    ctx->pc = 0x207E48u;
label_207e48:
    // 0x207e48: 0x0  nop
    ctx->pc = 0x207e48u;
    // NOP
label_207e4c:
    // 0x207e4c: 0x0  nop
    ctx->pc = 0x207e4cu;
    // NOP
label_207e50:
    // 0x207e50: 0x8081f14  j           func_207C50
label_207e54:
    if (ctx->pc == 0x207E54u) {
        ctx->pc = 0x207E54u;
            // 0x207e54: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->pc = 0x207E58u;
        goto label_207e58;
    }
    ctx->pc = 0x207E50u;
    ctx->pc = 0x207E54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x207E50u;
            // 0x207e54: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x207C50u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_207c50;
    ctx->pc = 0x207E58u;
label_207e58:
    // 0x207e58: 0x0  nop
    ctx->pc = 0x207e58u;
    // NOP
label_207e5c:
    // 0x207e5c: 0x0  nop
    ctx->pc = 0x207e5cu;
    // NOP
label_207e60:
    // 0x207e60: 0x8081f04  j           func_207C10
label_207e64:
    if (ctx->pc == 0x207E64u) {
        ctx->pc = 0x207E64u;
            // 0x207e64: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->pc = 0x207E68u;
        goto label_207e68;
    }
    ctx->pc = 0x207E60u;
    ctx->pc = 0x207E64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x207E60u;
            // 0x207e64: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x207C10u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_207c10;
    ctx->pc = 0x207E68u;
label_207e68:
    // 0x207e68: 0x0  nop
    ctx->pc = 0x207e68u;
    // NOP
label_207e6c:
    // 0x207e6c: 0x0  nop
    ctx->pc = 0x207e6cu;
    // NOP
label_207e70:
    // 0x207e70: 0x8081f00  j           func_207C00
label_207e74:
    if (ctx->pc == 0x207E74u) {
        ctx->pc = 0x207E74u;
            // 0x207e74: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->pc = 0x207E78u;
        goto label_207e78;
    }
    ctx->pc = 0x207E70u;
    ctx->pc = 0x207E74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x207E70u;
            // 0x207e74: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x207C00u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_207c00;
    ctx->pc = 0x207E78u;
label_207e78:
    // 0x207e78: 0x0  nop
    ctx->pc = 0x207e78u;
    // NOP
label_207e7c:
    // 0x207e7c: 0x0  nop
    ctx->pc = 0x207e7cu;
    // NOP
label_207e80:
    // 0x207e80: 0x8081efc  j           func_207BF0
label_207e84:
    if (ctx->pc == 0x207E84u) {
        ctx->pc = 0x207E84u;
            // 0x207e84: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->pc = 0x207E88u;
        goto label_207e88;
    }
    ctx->pc = 0x207E80u;
    ctx->pc = 0x207E84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x207E80u;
            // 0x207e84: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x207BF0u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_207bf0;
    ctx->pc = 0x207E88u;
label_207e88:
    // 0x207e88: 0x0  nop
    ctx->pc = 0x207e88u;
    // NOP
label_207e8c:
    // 0x207e8c: 0x0  nop
    ctx->pc = 0x207e8cu;
    // NOP
label_207e90:
    // 0x207e90: 0x8081c8c  j           func_207230
label_207e94:
    if (ctx->pc == 0x207E94u) {
        ctx->pc = 0x207E94u;
            // 0x207e94: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->pc = 0x207E98u;
        goto label_207e98;
    }
    ctx->pc = 0x207E90u;
    ctx->pc = 0x207E94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x207E90u;
            // 0x207e94: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x207230u;
    {
        auto targetFn = runtime->lookupFunction(0x207230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x207E98u;
label_207e98:
    // 0x207e98: 0x0  nop
    ctx->pc = 0x207e98u;
    // NOP
label_207e9c:
    // 0x207e9c: 0x0  nop
    ctx->pc = 0x207e9cu;
    // NOP
}
