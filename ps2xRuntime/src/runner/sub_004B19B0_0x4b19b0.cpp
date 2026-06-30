#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004B19B0
// Address: 0x4b19b0 - 0x4b1d80
void sub_004B19B0_0x4b19b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B19B0_0x4b19b0");
#endif

    switch (ctx->pc) {
        case 0x4b19b0u: goto label_4b19b0;
        case 0x4b19b4u: goto label_4b19b4;
        case 0x4b19b8u: goto label_4b19b8;
        case 0x4b19bcu: goto label_4b19bc;
        case 0x4b19c0u: goto label_4b19c0;
        case 0x4b19c4u: goto label_4b19c4;
        case 0x4b19c8u: goto label_4b19c8;
        case 0x4b19ccu: goto label_4b19cc;
        case 0x4b19d0u: goto label_4b19d0;
        case 0x4b19d4u: goto label_4b19d4;
        case 0x4b19d8u: goto label_4b19d8;
        case 0x4b19dcu: goto label_4b19dc;
        case 0x4b19e0u: goto label_4b19e0;
        case 0x4b19e4u: goto label_4b19e4;
        case 0x4b19e8u: goto label_4b19e8;
        case 0x4b19ecu: goto label_4b19ec;
        case 0x4b19f0u: goto label_4b19f0;
        case 0x4b19f4u: goto label_4b19f4;
        case 0x4b19f8u: goto label_4b19f8;
        case 0x4b19fcu: goto label_4b19fc;
        case 0x4b1a00u: goto label_4b1a00;
        case 0x4b1a04u: goto label_4b1a04;
        case 0x4b1a08u: goto label_4b1a08;
        case 0x4b1a0cu: goto label_4b1a0c;
        case 0x4b1a10u: goto label_4b1a10;
        case 0x4b1a14u: goto label_4b1a14;
        case 0x4b1a18u: goto label_4b1a18;
        case 0x4b1a1cu: goto label_4b1a1c;
        case 0x4b1a20u: goto label_4b1a20;
        case 0x4b1a24u: goto label_4b1a24;
        case 0x4b1a28u: goto label_4b1a28;
        case 0x4b1a2cu: goto label_4b1a2c;
        case 0x4b1a30u: goto label_4b1a30;
        case 0x4b1a34u: goto label_4b1a34;
        case 0x4b1a38u: goto label_4b1a38;
        case 0x4b1a3cu: goto label_4b1a3c;
        case 0x4b1a40u: goto label_4b1a40;
        case 0x4b1a44u: goto label_4b1a44;
        case 0x4b1a48u: goto label_4b1a48;
        case 0x4b1a4cu: goto label_4b1a4c;
        case 0x4b1a50u: goto label_4b1a50;
        case 0x4b1a54u: goto label_4b1a54;
        case 0x4b1a58u: goto label_4b1a58;
        case 0x4b1a5cu: goto label_4b1a5c;
        case 0x4b1a60u: goto label_4b1a60;
        case 0x4b1a64u: goto label_4b1a64;
        case 0x4b1a68u: goto label_4b1a68;
        case 0x4b1a6cu: goto label_4b1a6c;
        case 0x4b1a70u: goto label_4b1a70;
        case 0x4b1a74u: goto label_4b1a74;
        case 0x4b1a78u: goto label_4b1a78;
        case 0x4b1a7cu: goto label_4b1a7c;
        case 0x4b1a80u: goto label_4b1a80;
        case 0x4b1a84u: goto label_4b1a84;
        case 0x4b1a88u: goto label_4b1a88;
        case 0x4b1a8cu: goto label_4b1a8c;
        case 0x4b1a90u: goto label_4b1a90;
        case 0x4b1a94u: goto label_4b1a94;
        case 0x4b1a98u: goto label_4b1a98;
        case 0x4b1a9cu: goto label_4b1a9c;
        case 0x4b1aa0u: goto label_4b1aa0;
        case 0x4b1aa4u: goto label_4b1aa4;
        case 0x4b1aa8u: goto label_4b1aa8;
        case 0x4b1aacu: goto label_4b1aac;
        case 0x4b1ab0u: goto label_4b1ab0;
        case 0x4b1ab4u: goto label_4b1ab4;
        case 0x4b1ab8u: goto label_4b1ab8;
        case 0x4b1abcu: goto label_4b1abc;
        case 0x4b1ac0u: goto label_4b1ac0;
        case 0x4b1ac4u: goto label_4b1ac4;
        case 0x4b1ac8u: goto label_4b1ac8;
        case 0x4b1accu: goto label_4b1acc;
        case 0x4b1ad0u: goto label_4b1ad0;
        case 0x4b1ad4u: goto label_4b1ad4;
        case 0x4b1ad8u: goto label_4b1ad8;
        case 0x4b1adcu: goto label_4b1adc;
        case 0x4b1ae0u: goto label_4b1ae0;
        case 0x4b1ae4u: goto label_4b1ae4;
        case 0x4b1ae8u: goto label_4b1ae8;
        case 0x4b1aecu: goto label_4b1aec;
        case 0x4b1af0u: goto label_4b1af0;
        case 0x4b1af4u: goto label_4b1af4;
        case 0x4b1af8u: goto label_4b1af8;
        case 0x4b1afcu: goto label_4b1afc;
        case 0x4b1b00u: goto label_4b1b00;
        case 0x4b1b04u: goto label_4b1b04;
        case 0x4b1b08u: goto label_4b1b08;
        case 0x4b1b0cu: goto label_4b1b0c;
        case 0x4b1b10u: goto label_4b1b10;
        case 0x4b1b14u: goto label_4b1b14;
        case 0x4b1b18u: goto label_4b1b18;
        case 0x4b1b1cu: goto label_4b1b1c;
        case 0x4b1b20u: goto label_4b1b20;
        case 0x4b1b24u: goto label_4b1b24;
        case 0x4b1b28u: goto label_4b1b28;
        case 0x4b1b2cu: goto label_4b1b2c;
        case 0x4b1b30u: goto label_4b1b30;
        case 0x4b1b34u: goto label_4b1b34;
        case 0x4b1b38u: goto label_4b1b38;
        case 0x4b1b3cu: goto label_4b1b3c;
        case 0x4b1b40u: goto label_4b1b40;
        case 0x4b1b44u: goto label_4b1b44;
        case 0x4b1b48u: goto label_4b1b48;
        case 0x4b1b4cu: goto label_4b1b4c;
        case 0x4b1b50u: goto label_4b1b50;
        case 0x4b1b54u: goto label_4b1b54;
        case 0x4b1b58u: goto label_4b1b58;
        case 0x4b1b5cu: goto label_4b1b5c;
        case 0x4b1b60u: goto label_4b1b60;
        case 0x4b1b64u: goto label_4b1b64;
        case 0x4b1b68u: goto label_4b1b68;
        case 0x4b1b6cu: goto label_4b1b6c;
        case 0x4b1b70u: goto label_4b1b70;
        case 0x4b1b74u: goto label_4b1b74;
        case 0x4b1b78u: goto label_4b1b78;
        case 0x4b1b7cu: goto label_4b1b7c;
        case 0x4b1b80u: goto label_4b1b80;
        case 0x4b1b84u: goto label_4b1b84;
        case 0x4b1b88u: goto label_4b1b88;
        case 0x4b1b8cu: goto label_4b1b8c;
        case 0x4b1b90u: goto label_4b1b90;
        case 0x4b1b94u: goto label_4b1b94;
        case 0x4b1b98u: goto label_4b1b98;
        case 0x4b1b9cu: goto label_4b1b9c;
        case 0x4b1ba0u: goto label_4b1ba0;
        case 0x4b1ba4u: goto label_4b1ba4;
        case 0x4b1ba8u: goto label_4b1ba8;
        case 0x4b1bacu: goto label_4b1bac;
        case 0x4b1bb0u: goto label_4b1bb0;
        case 0x4b1bb4u: goto label_4b1bb4;
        case 0x4b1bb8u: goto label_4b1bb8;
        case 0x4b1bbcu: goto label_4b1bbc;
        case 0x4b1bc0u: goto label_4b1bc0;
        case 0x4b1bc4u: goto label_4b1bc4;
        case 0x4b1bc8u: goto label_4b1bc8;
        case 0x4b1bccu: goto label_4b1bcc;
        case 0x4b1bd0u: goto label_4b1bd0;
        case 0x4b1bd4u: goto label_4b1bd4;
        case 0x4b1bd8u: goto label_4b1bd8;
        case 0x4b1bdcu: goto label_4b1bdc;
        case 0x4b1be0u: goto label_4b1be0;
        case 0x4b1be4u: goto label_4b1be4;
        case 0x4b1be8u: goto label_4b1be8;
        case 0x4b1becu: goto label_4b1bec;
        case 0x4b1bf0u: goto label_4b1bf0;
        case 0x4b1bf4u: goto label_4b1bf4;
        case 0x4b1bf8u: goto label_4b1bf8;
        case 0x4b1bfcu: goto label_4b1bfc;
        case 0x4b1c00u: goto label_4b1c00;
        case 0x4b1c04u: goto label_4b1c04;
        case 0x4b1c08u: goto label_4b1c08;
        case 0x4b1c0cu: goto label_4b1c0c;
        case 0x4b1c10u: goto label_4b1c10;
        case 0x4b1c14u: goto label_4b1c14;
        case 0x4b1c18u: goto label_4b1c18;
        case 0x4b1c1cu: goto label_4b1c1c;
        case 0x4b1c20u: goto label_4b1c20;
        case 0x4b1c24u: goto label_4b1c24;
        case 0x4b1c28u: goto label_4b1c28;
        case 0x4b1c2cu: goto label_4b1c2c;
        case 0x4b1c30u: goto label_4b1c30;
        case 0x4b1c34u: goto label_4b1c34;
        case 0x4b1c38u: goto label_4b1c38;
        case 0x4b1c3cu: goto label_4b1c3c;
        case 0x4b1c40u: goto label_4b1c40;
        case 0x4b1c44u: goto label_4b1c44;
        case 0x4b1c48u: goto label_4b1c48;
        case 0x4b1c4cu: goto label_4b1c4c;
        case 0x4b1c50u: goto label_4b1c50;
        case 0x4b1c54u: goto label_4b1c54;
        case 0x4b1c58u: goto label_4b1c58;
        case 0x4b1c5cu: goto label_4b1c5c;
        case 0x4b1c60u: goto label_4b1c60;
        case 0x4b1c64u: goto label_4b1c64;
        case 0x4b1c68u: goto label_4b1c68;
        case 0x4b1c6cu: goto label_4b1c6c;
        case 0x4b1c70u: goto label_4b1c70;
        case 0x4b1c74u: goto label_4b1c74;
        case 0x4b1c78u: goto label_4b1c78;
        case 0x4b1c7cu: goto label_4b1c7c;
        case 0x4b1c80u: goto label_4b1c80;
        case 0x4b1c84u: goto label_4b1c84;
        case 0x4b1c88u: goto label_4b1c88;
        case 0x4b1c8cu: goto label_4b1c8c;
        case 0x4b1c90u: goto label_4b1c90;
        case 0x4b1c94u: goto label_4b1c94;
        case 0x4b1c98u: goto label_4b1c98;
        case 0x4b1c9cu: goto label_4b1c9c;
        case 0x4b1ca0u: goto label_4b1ca0;
        case 0x4b1ca4u: goto label_4b1ca4;
        case 0x4b1ca8u: goto label_4b1ca8;
        case 0x4b1cacu: goto label_4b1cac;
        case 0x4b1cb0u: goto label_4b1cb0;
        case 0x4b1cb4u: goto label_4b1cb4;
        case 0x4b1cb8u: goto label_4b1cb8;
        case 0x4b1cbcu: goto label_4b1cbc;
        case 0x4b1cc0u: goto label_4b1cc0;
        case 0x4b1cc4u: goto label_4b1cc4;
        case 0x4b1cc8u: goto label_4b1cc8;
        case 0x4b1cccu: goto label_4b1ccc;
        case 0x4b1cd0u: goto label_4b1cd0;
        case 0x4b1cd4u: goto label_4b1cd4;
        case 0x4b1cd8u: goto label_4b1cd8;
        case 0x4b1cdcu: goto label_4b1cdc;
        case 0x4b1ce0u: goto label_4b1ce0;
        case 0x4b1ce4u: goto label_4b1ce4;
        case 0x4b1ce8u: goto label_4b1ce8;
        case 0x4b1cecu: goto label_4b1cec;
        case 0x4b1cf0u: goto label_4b1cf0;
        case 0x4b1cf4u: goto label_4b1cf4;
        case 0x4b1cf8u: goto label_4b1cf8;
        case 0x4b1cfcu: goto label_4b1cfc;
        case 0x4b1d00u: goto label_4b1d00;
        case 0x4b1d04u: goto label_4b1d04;
        case 0x4b1d08u: goto label_4b1d08;
        case 0x4b1d0cu: goto label_4b1d0c;
        case 0x4b1d10u: goto label_4b1d10;
        case 0x4b1d14u: goto label_4b1d14;
        case 0x4b1d18u: goto label_4b1d18;
        case 0x4b1d1cu: goto label_4b1d1c;
        case 0x4b1d20u: goto label_4b1d20;
        case 0x4b1d24u: goto label_4b1d24;
        case 0x4b1d28u: goto label_4b1d28;
        case 0x4b1d2cu: goto label_4b1d2c;
        case 0x4b1d30u: goto label_4b1d30;
        case 0x4b1d34u: goto label_4b1d34;
        case 0x4b1d38u: goto label_4b1d38;
        case 0x4b1d3cu: goto label_4b1d3c;
        case 0x4b1d40u: goto label_4b1d40;
        case 0x4b1d44u: goto label_4b1d44;
        case 0x4b1d48u: goto label_4b1d48;
        case 0x4b1d4cu: goto label_4b1d4c;
        case 0x4b1d50u: goto label_4b1d50;
        case 0x4b1d54u: goto label_4b1d54;
        case 0x4b1d58u: goto label_4b1d58;
        case 0x4b1d5cu: goto label_4b1d5c;
        case 0x4b1d60u: goto label_4b1d60;
        case 0x4b1d64u: goto label_4b1d64;
        case 0x4b1d68u: goto label_4b1d68;
        case 0x4b1d6cu: goto label_4b1d6c;
        case 0x4b1d70u: goto label_4b1d70;
        case 0x4b1d74u: goto label_4b1d74;
        case 0x4b1d78u: goto label_4b1d78;
        case 0x4b1d7cu: goto label_4b1d7c;
        default: break;
    }

    ctx->pc = 0x4b19b0u;

label_4b19b0:
    // 0x4b19b0: 0x8c820da4  lw          $v0, 0xDA4($a0)
    ctx->pc = 0x4b19b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3492)));
label_4b19b4:
    // 0x4b19b4: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x4b19b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_4b19b8:
    // 0x4b19b8: 0x3e00008  jr          $ra
label_4b19bc:
    if (ctx->pc == 0x4B19BCu) {
        ctx->pc = 0x4B19BCu;
            // 0x4b19bc: 0x2102a  slt         $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x4B19C0u;
        goto label_4b19c0;
    }
    ctx->pc = 0x4B19B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B19BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B19B8u;
            // 0x4b19bc: 0x2102a  slt         $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B19C0u;
label_4b19c0:
    // 0x4b19c0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x4b19c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_4b19c4:
    // 0x4b19c4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x4b19c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_4b19c8:
    // 0x4b19c8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4b19c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4b19cc:
    // 0x4b19cc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4b19ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4b19d0:
    // 0x4b19d0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4b19d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4b19d4:
    // 0x4b19d4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4b19d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4b19d8:
    // 0x4b19d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4b19d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4b19dc:
    // 0x4b19dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4b19dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4b19e0:
    // 0x4b19e0: 0x26910580  addiu       $s1, $s4, 0x580
    ctx->pc = 0x4b19e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 1408));
label_4b19e4:
    // 0x4b19e4: 0x8c930550  lw          $s3, 0x550($a0)
    ctx->pc = 0x4b19e4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1360)));
label_4b19e8:
    // 0x4b19e8: 0x8c920d74  lw          $s2, 0xD74($a0)
    ctx->pc = 0x4b19e8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3444)));
label_4b19ec:
    // 0x4b19ec: 0xc0754b4  jal         func_1D52D0
label_4b19f0:
    if (ctx->pc == 0x4B19F0u) {
        ctx->pc = 0x4B19F0u;
            // 0x4b19f0: 0x26840440  addiu       $a0, $s4, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1088));
        ctx->pc = 0x4B19F4u;
        goto label_4b19f4;
    }
    ctx->pc = 0x4B19ECu;
    SET_GPR_U32(ctx, 31, 0x4B19F4u);
    ctx->pc = 0x4B19F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B19ECu;
            // 0x4b19f0: 0x26840440  addiu       $a0, $s4, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B19F4u; }
        if (ctx->pc != 0x4B19F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B19F4u; }
        if (ctx->pc != 0x4B19F4u) { return; }
    }
    ctx->pc = 0x4B19F4u;
label_4b19f4:
    // 0x4b19f4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x4b19f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_4b19f8:
    // 0x4b19f8: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x4b19f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_4b19fc:
    // 0x4b19fc: 0xae830dbc  sw          $v1, 0xDBC($s4)
    ctx->pc = 0x4b19fcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3516), GPR_U32(ctx, 3));
label_4b1a00:
    // 0x4b1a00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4b1a00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4b1a04:
    // 0x4b1a04: 0xae830694  sw          $v1, 0x694($s4)
    ctx->pc = 0x4b1a04u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1684), GPR_U32(ctx, 3));
label_4b1a08:
    // 0x4b1a08: 0x268403c0  addiu       $a0, $s4, 0x3C0
    ctx->pc = 0x4b1a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 960));
label_4b1a0c:
    // 0x4b1a0c: 0x8e820550  lw          $v0, 0x550($s4)
    ctx->pc = 0x4b1a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1360)));
label_4b1a10:
    // 0x4b1a10: 0x24a55840  addiu       $a1, $a1, 0x5840
    ctx->pc = 0x4b1a10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22592));
label_4b1a14:
    // 0x4b1a14: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x4b1a14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
label_4b1a18:
    // 0x4b1a18: 0xc04cc04  jal         func_133010
label_4b1a1c:
    if (ctx->pc == 0x4B1A1Cu) {
        ctx->pc = 0x4B1A1Cu;
            // 0x4b1a1c: 0xae800de8  sw          $zero, 0xDE8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 3560), GPR_U32(ctx, 0));
        ctx->pc = 0x4B1A20u;
        goto label_4b1a20;
    }
    ctx->pc = 0x4B1A18u;
    SET_GPR_U32(ctx, 31, 0x4B1A20u);
    ctx->pc = 0x4B1A1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B1A18u;
            // 0x4b1a1c: 0xae800de8  sw          $zero, 0xDE8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 3560), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B1A20u; }
        if (ctx->pc != 0x4B1A20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B1A20u; }
        if (ctx->pc != 0x4B1A20u) { return; }
    }
    ctx->pc = 0x4B1A20u;
label_4b1a20:
    // 0x4b1a20: 0x8e830d9c  lw          $v1, 0xD9C($s4)
    ctx->pc = 0x4b1a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3484)));
label_4b1a24:
    // 0x4b1a24: 0x2402ffe7  addiu       $v0, $zero, -0x19
    ctx->pc = 0x4b1a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
label_4b1a28:
    // 0x4b1a28: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4b1a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4b1a2c:
    // 0x4b1a2c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4b1a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4b1a30:
    // 0x4b1a30: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x4b1a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4b1a34:
    // 0x4b1a34: 0xc077fb0  jal         func_1DFEC0
label_4b1a38:
    if (ctx->pc == 0x4B1A38u) {
        ctx->pc = 0x4B1A38u;
            // 0x4b1a38: 0xae820d9c  sw          $v0, 0xD9C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 3484), GPR_U32(ctx, 2));
        ctx->pc = 0x4B1A3Cu;
        goto label_4b1a3c;
    }
    ctx->pc = 0x4B1A34u;
    SET_GPR_U32(ctx, 31, 0x4B1A3Cu);
    ctx->pc = 0x4B1A38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B1A34u;
            // 0x4b1a38: 0xae820d9c  sw          $v0, 0xD9C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 3484), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DFEC0u;
    if (runtime->hasFunction(0x1DFEC0u)) {
        auto targetFn = runtime->lookupFunction(0x1DFEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B1A3Cu; }
        if (ctx->pc != 0x4B1A3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DFEC0_0x1dfec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B1A3Cu; }
        if (ctx->pc != 0x4B1A3Cu) { return; }
    }
    ctx->pc = 0x4B1A3Cu;
label_4b1a3c:
    // 0x4b1a3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4b1a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4b1a40:
    // 0x4b1a40: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x4b1a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_4b1a44:
    // 0x4b1a44: 0xae4202b0  sw          $v0, 0x2B0($s2)
    ctx->pc = 0x4b1a44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 688), GPR_U32(ctx, 2));
label_4b1a48:
    // 0x4b1a48: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4b1a48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4b1a4c:
    // 0x4b1a4c: 0xc60d0024  lwc1        $f13, 0x24($s0)
    ctx->pc = 0x4b1a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_4b1a50:
    // 0x4b1a50: 0xc04cbd8  jal         func_132F60
label_4b1a54:
    if (ctx->pc == 0x4B1A54u) {
        ctx->pc = 0x4B1A54u;
            // 0x4b1a54: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x4B1A58u;
        goto label_4b1a58;
    }
    ctx->pc = 0x4B1A50u;
    SET_GPR_U32(ctx, 31, 0x4B1A58u);
    ctx->pc = 0x4B1A54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B1A50u;
            // 0x4b1a54: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B1A58u; }
        if (ctx->pc != 0x4B1A58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B1A58u; }
        if (ctx->pc != 0x4B1A58u) { return; }
    }
    ctx->pc = 0x4B1A58u;
label_4b1a58:
    // 0x4b1a58: 0x26840320  addiu       $a0, $s4, 0x320
    ctx->pc = 0x4b1a58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 800));
label_4b1a5c:
    // 0x4b1a5c: 0x268507e0  addiu       $a1, $s4, 0x7E0
    ctx->pc = 0x4b1a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 2016));
label_4b1a60:
    // 0x4b1a60: 0xc04cca0  jal         func_133280
label_4b1a64:
    if (ctx->pc == 0x4B1A64u) {
        ctx->pc = 0x4B1A64u;
            // 0x4b1a64: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4B1A68u;
        goto label_4b1a68;
    }
    ctx->pc = 0x4B1A60u;
    SET_GPR_U32(ctx, 31, 0x4B1A68u);
    ctx->pc = 0x4B1A64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B1A60u;
            // 0x4b1a64: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B1A68u; }
        if (ctx->pc != 0x4B1A68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B1A68u; }
        if (ctx->pc != 0x4B1A68u) { return; }
    }
    ctx->pc = 0x4B1A68u;
label_4b1a68:
    // 0x4b1a68: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x4b1a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4b1a6c:
    // 0x4b1a6c: 0x268402e0  addiu       $a0, $s4, 0x2E0
    ctx->pc = 0x4b1a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 736));
label_4b1a70:
    // 0x4b1a70: 0x26250050  addiu       $a1, $s1, 0x50
    ctx->pc = 0x4b1a70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_4b1a74:
    // 0x4b1a74: 0xe6200110  swc1        $f0, 0x110($s1)
    ctx->pc = 0x4b1a74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 272), bits); }
label_4b1a78:
    // 0x4b1a78: 0xae20010c  sw          $zero, 0x10C($s1)
    ctx->pc = 0x4b1a78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 268), GPR_U32(ctx, 0));
label_4b1a7c:
    // 0x4b1a7c: 0xc04cc04  jal         func_133010
label_4b1a80:
    if (ctx->pc == 0x4B1A80u) {
        ctx->pc = 0x4B1A80u;
            // 0x4b1a80: 0xae200118  sw          $zero, 0x118($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 280), GPR_U32(ctx, 0));
        ctx->pc = 0x4B1A84u;
        goto label_4b1a84;
    }
    ctx->pc = 0x4B1A7Cu;
    SET_GPR_U32(ctx, 31, 0x4B1A84u);
    ctx->pc = 0x4B1A80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B1A7Cu;
            // 0x4b1a80: 0xae200118  sw          $zero, 0x118($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 280), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B1A84u; }
        if (ctx->pc != 0x4B1A84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B1A84u; }
        if (ctx->pc != 0x4B1A84u) { return; }
    }
    ctx->pc = 0x4B1A84u;
label_4b1a84:
    // 0x4b1a84: 0x26840560  addiu       $a0, $s4, 0x560
    ctx->pc = 0x4b1a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1376));
label_4b1a88:
    // 0x4b1a88: 0xc075318  jal         func_1D4C60
label_4b1a8c:
    if (ctx->pc == 0x4B1A8Cu) {
        ctx->pc = 0x4B1A8Cu;
            // 0x4b1a8c: 0x268502e0  addiu       $a1, $s4, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 736));
        ctx->pc = 0x4B1A90u;
        goto label_4b1a90;
    }
    ctx->pc = 0x4B1A88u;
    SET_GPR_U32(ctx, 31, 0x4B1A90u);
    ctx->pc = 0x4B1A8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B1A88u;
            // 0x4b1a8c: 0x268502e0  addiu       $a1, $s4, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4C60u;
    if (runtime->hasFunction(0x1D4C60u)) {
        auto targetFn = runtime->lookupFunction(0x1D4C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B1A90u; }
        if (ctx->pc != 0x4B1A90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4C60_0x1d4c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B1A90u; }
        if (ctx->pc != 0x4B1A90u) { return; }
    }
    ctx->pc = 0x4B1A90u;
label_4b1a90:
    // 0x4b1a90: 0x26830890  addiu       $v1, $s4, 0x890
    ctx->pc = 0x4b1a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 2192));
label_4b1a94:
    // 0x4b1a94: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x4b1a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_4b1a98:
    // 0x4b1a98: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4b1a98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4b1a9c:
    // 0x4b1a9c: 0x24640060  addiu       $a0, $v1, 0x60
    ctx->pc = 0x4b1a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
label_4b1aa0:
    // 0x4b1aa0: 0x24650080  addiu       $a1, $v1, 0x80
    ctx->pc = 0x4b1aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_4b1aa4:
    // 0x4b1aa4: 0xc0c6250  jal         func_318940
label_4b1aa8:
    if (ctx->pc == 0x4B1AA8u) {
        ctx->pc = 0x4B1AA8u;
            // 0x4b1aa8: 0x26860560  addiu       $a2, $s4, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 1376));
        ctx->pc = 0x4B1AACu;
        goto label_4b1aac;
    }
    ctx->pc = 0x4B1AA4u;
    SET_GPR_U32(ctx, 31, 0x4B1AACu);
    ctx->pc = 0x4B1AA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B1AA4u;
            // 0x4b1aa8: 0x26860560  addiu       $a2, $s4, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 1376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B1AACu; }
        if (ctx->pc != 0x4B1AACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B1AACu; }
        if (ctx->pc != 0x4B1AACu) { return; }
    }
    ctx->pc = 0x4B1AACu;
label_4b1aac:
    // 0x4b1aac: 0xc68c0930  lwc1        $f12, 0x930($s4)
    ctx->pc = 0x4b1aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 2352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4b1ab0:
    // 0x4b1ab0: 0x26830890  addiu       $v1, $s4, 0x890
    ctx->pc = 0x4b1ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 2192));
label_4b1ab4:
    // 0x4b1ab4: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x4b1ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_4b1ab8:
    // 0x4b1ab8: 0xc68d0880  lwc1        $f13, 0x880($s4)
    ctx->pc = 0x4b1ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_4b1abc:
    // 0x4b1abc: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x4b1abcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_4b1ac0:
    // 0x4b1ac0: 0xc0c753c  jal         func_31D4F0
label_4b1ac4:
    if (ctx->pc == 0x4B1AC4u) {
        ctx->pc = 0x4B1AC4u;
            // 0x4b1ac4: 0x2464009c  addiu       $a0, $v1, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 156));
        ctx->pc = 0x4B1AC8u;
        goto label_4b1ac8;
    }
    ctx->pc = 0x4B1AC0u;
    SET_GPR_U32(ctx, 31, 0x4B1AC8u);
    ctx->pc = 0x4B1AC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B1AC0u;
            // 0x4b1ac4: 0x2464009c  addiu       $a0, $v1, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 156));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B1AC8u; }
        if (ctx->pc != 0x4B1AC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B1AC8u; }
        if (ctx->pc != 0x4B1AC8u) { return; }
    }
    ctx->pc = 0x4B1AC8u;
label_4b1ac8:
    // 0x4b1ac8: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x4b1ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
label_4b1acc:
    // 0x4b1acc: 0x3c023f51  lui         $v0, 0x3F51
    ctx->pc = 0x4b1accu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16209 << 16));
label_4b1ad0:
    // 0x4b1ad0: 0xae830e90  sw          $v1, 0xE90($s4)
    ctx->pc = 0x4b1ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3728), GPR_U32(ctx, 3));
label_4b1ad4:
    // 0x4b1ad4: 0x3442eb85  ori         $v0, $v0, 0xEB85
    ctx->pc = 0x4b1ad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)60293);
label_4b1ad8:
    // 0x4b1ad8: 0xae800e7c  sw          $zero, 0xE7C($s4)
    ctx->pc = 0x4b1ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3708), GPR_U32(ctx, 0));
label_4b1adc:
    // 0x4b1adc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4b1adcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4b1ae0:
    // 0x4b1ae0: 0xc6810de4  lwc1        $f1, 0xDE4($s4)
    ctx->pc = 0x4b1ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4b1ae4:
    // 0x4b1ae4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4b1ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4b1ae8:
    // 0x4b1ae8: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x4b1ae8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4b1aec:
    // 0x4b1aec: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4b1aecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4b1af0:
    // 0x4b1af0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4b1af0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4b1af4:
    // 0x4b1af4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4b1af4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4b1af8:
    // 0x4b1af8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x4b1af8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_4b1afc:
    // 0x4b1afc: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x4b1afcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_4b1b00:
    // 0x4b1b00: 0xe6810e80  swc1        $f1, 0xE80($s4)
    ctx->pc = 0x4b1b00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 3712), bits); }
label_4b1b04:
    // 0x4b1b04: 0xe6800e84  swc1        $f0, 0xE84($s4)
    ctx->pc = 0x4b1b04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 3716), bits); }
label_4b1b08:
    // 0x4b1b08: 0xae800e8c  sw          $zero, 0xE8C($s4)
    ctx->pc = 0x4b1b08u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3724), GPR_U32(ctx, 0));
label_4b1b0c:
    // 0x4b1b0c: 0x8263010c  lb          $v1, 0x10C($s3)
    ctx->pc = 0x4b1b0cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 268)));
label_4b1b10:
    // 0x4b1b10: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x4b1b10u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4b1b14:
    // 0x4b1b14: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x4b1b14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_4b1b18:
    // 0x4b1b18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4b1b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4b1b1c:
    // 0x4b1b1c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x4b1b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_4b1b20:
    // 0x4b1b20: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x4b1b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_4b1b24:
    // 0x4b1b24: 0xac450080  sw          $a1, 0x80($v0)
    ctx->pc = 0x4b1b24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 5));
label_4b1b28:
    // 0x4b1b28: 0x8e790058  lw          $t9, 0x58($s3)
    ctx->pc = 0x4b1b28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_4b1b2c:
    // 0x4b1b2c: 0x8265010d  lb          $a1, 0x10D($s3)
    ctx->pc = 0x4b1b2cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 269)));
label_4b1b30:
    // 0x4b1b30: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x4b1b30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_4b1b34:
    // 0x4b1b34: 0x320f809  jalr        $t9
label_4b1b38:
    if (ctx->pc == 0x4B1B38u) {
        ctx->pc = 0x4B1B38u;
            // 0x4b1b38: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x4B1B3Cu;
        goto label_4b1b3c;
    }
    ctx->pc = 0x4B1B34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4B1B3Cu);
        ctx->pc = 0x4B1B38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B1B34u;
            // 0x4b1b38: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4B1B3Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4B1B3Cu; }
            if (ctx->pc != 0x4B1B3Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4B1B3Cu;
label_4b1b3c:
    // 0x4b1b3c: 0x8e790058  lw          $t9, 0x58($s3)
    ctx->pc = 0x4b1b3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_4b1b40:
    // 0x4b1b40: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x4b1b40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_4b1b44:
    // 0x4b1b44: 0x8265010d  lb          $a1, 0x10D($s3)
    ctx->pc = 0x4b1b44u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 269)));
label_4b1b48:
    // 0x4b1b48: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4b1b48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4b1b4c:
    // 0x4b1b4c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x4b1b4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4b1b50:
    // 0x4b1b50: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4b1b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4b1b54:
    // 0x4b1b54: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x4b1b54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_4b1b58:
    // 0x4b1b58: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x4b1b58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_4b1b5c:
    // 0x4b1b5c: 0x320f809  jalr        $t9
label_4b1b60:
    if (ctx->pc == 0x4B1B60u) {
        ctx->pc = 0x4B1B60u;
            // 0x4b1b60: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x4B1B64u;
        goto label_4b1b64;
    }
    ctx->pc = 0x4B1B5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4B1B64u);
        ctx->pc = 0x4B1B60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B1B5Cu;
            // 0x4b1b60: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4B1B64u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4B1B64u; }
            if (ctx->pc != 0x4B1B64u) { return; }
        }
        }
    }
    ctx->pc = 0x4B1B64u;
label_4b1b64:
    // 0x4b1b64: 0x8e790058  lw          $t9, 0x58($s3)
    ctx->pc = 0x4b1b64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_4b1b68:
    // 0x4b1b68: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x4b1b68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4b1b6c:
    // 0x4b1b6c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4b1b6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4b1b70:
    // 0x4b1b70: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x4b1b70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_4b1b74:
    // 0x4b1b74: 0x320f809  jalr        $t9
label_4b1b78:
    if (ctx->pc == 0x4B1B78u) {
        ctx->pc = 0x4B1B78u;
            // 0x4b1b78: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B1B7Cu;
        goto label_4b1b7c;
    }
    ctx->pc = 0x4B1B74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4B1B7Cu);
        ctx->pc = 0x4B1B78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B1B74u;
            // 0x4b1b78: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4B1B7Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4B1B7Cu; }
            if (ctx->pc != 0x4B1B7Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4B1B7Cu;
label_4b1b7c:
    // 0x4b1b7c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4b1b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4b1b80:
    // 0x4b1b80: 0xc07649c  jal         func_1D9270
label_4b1b84:
    if (ctx->pc == 0x4B1B84u) {
        ctx->pc = 0x4B1B84u;
            // 0x4b1b84: 0x2405006a  addiu       $a1, $zero, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
        ctx->pc = 0x4B1B88u;
        goto label_4b1b88;
    }
    ctx->pc = 0x4B1B80u;
    SET_GPR_U32(ctx, 31, 0x4B1B88u);
    ctx->pc = 0x4B1B84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B1B80u;
            // 0x4b1b84: 0x2405006a  addiu       $a1, $zero, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9270u;
    if (runtime->hasFunction(0x1D9270u)) {
        auto targetFn = runtime->lookupFunction(0x1D9270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B1B88u; }
        if (ctx->pc != 0x4B1B88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9270_0x1d9270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B1B88u; }
        if (ctx->pc != 0x4B1B88u) { return; }
    }
    ctx->pc = 0x4B1B88u;
label_4b1b88:
    // 0x4b1b88: 0xc0c0f84  jal         func_303E10
label_4b1b8c:
    if (ctx->pc == 0x4B1B8Cu) {
        ctx->pc = 0x4B1B8Cu;
            // 0x4b1b8c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B1B90u;
        goto label_4b1b90;
    }
    ctx->pc = 0x4B1B88u;
    SET_GPR_U32(ctx, 31, 0x4B1B90u);
    ctx->pc = 0x4B1B8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B1B88u;
            // 0x4b1b8c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x303E10u;
    if (runtime->hasFunction(0x303E10u)) {
        auto targetFn = runtime->lookupFunction(0x303E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B1B90u; }
        if (ctx->pc != 0x4B1B90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00303E10_0x303e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B1B90u; }
        if (ctx->pc != 0x4B1B90u) { return; }
    }
    ctx->pc = 0x4B1B90u;
label_4b1b90:
    // 0x4b1b90: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4b1b90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_4b1b94:
    // 0x4b1b94: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4b1b94u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4b1b98:
    // 0x4b1b98: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4b1b98u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4b1b9c:
    // 0x4b1b9c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4b1b9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4b1ba0:
    // 0x4b1ba0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4b1ba0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4b1ba4:
    // 0x4b1ba4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4b1ba4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4b1ba8:
    // 0x4b1ba8: 0x3e00008  jr          $ra
label_4b1bac:
    if (ctx->pc == 0x4B1BACu) {
        ctx->pc = 0x4B1BACu;
            // 0x4b1bac: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x4B1BB0u;
        goto label_4b1bb0;
    }
    ctx->pc = 0x4B1BA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B1BACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B1BA8u;
            // 0x4b1bac: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B1BB0u;
label_4b1bb0:
    // 0x4b1bb0: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x4b1bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_4b1bb4:
    // 0x4b1bb4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x4b1bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_4b1bb8:
    // 0x4b1bb8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4b1bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4b1bbc:
    // 0x4b1bbc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4b1bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4b1bc0:
    // 0x4b1bc0: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x4b1bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_4b1bc4:
    // 0x4b1bc4: 0x90630030  lbu         $v1, 0x30($v1)
    ctx->pc = 0x4b1bc4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 48)));
label_4b1bc8:
    // 0x4b1bc8: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
label_4b1bcc:
    if (ctx->pc == 0x4B1BCCu) {
        ctx->pc = 0x4B1BCCu;
            // 0x4b1bcc: 0xa0860001  sb          $a2, 0x1($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 6));
        ctx->pc = 0x4B1BD0u;
        goto label_4b1bd0;
    }
    ctx->pc = 0x4B1BC8u;
    {
        const bool branch_taken_0x4b1bc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b1bc8) {
            ctx->pc = 0x4B1BCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B1BC8u;
            // 0x4b1bcc: 0xa0860001  sb          $a2, 0x1($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B1BDCu;
            goto label_4b1bdc;
        }
    }
    ctx->pc = 0x4B1BD0u;
label_4b1bd0:
    // 0x4b1bd0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4b1bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4b1bd4:
    // 0x4b1bd4: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x4b1bd4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_4b1bd8:
    // 0x4b1bd8: 0xa0860001  sb          $a2, 0x1($a0)
    ctx->pc = 0x4b1bd8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 6));
label_4b1bdc:
    // 0x4b1bdc: 0x3e00008  jr          $ra
label_4b1be0:
    if (ctx->pc == 0x4B1BE0u) {
        ctx->pc = 0x4B1BE4u;
        goto label_4b1be4;
    }
    ctx->pc = 0x4B1BDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B1BE4u;
label_4b1be4:
    // 0x4b1be4: 0x0  nop
    ctx->pc = 0x4b1be4u;
    // NOP
label_4b1be8:
    // 0x4b1be8: 0x0  nop
    ctx->pc = 0x4b1be8u;
    // NOP
label_4b1bec:
    // 0x4b1bec: 0x0  nop
    ctx->pc = 0x4b1becu;
    // NOP
label_4b1bf0:
    // 0x4b1bf0: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x4b1bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_4b1bf4:
    // 0x4b1bf4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x4b1bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_4b1bf8:
    // 0x4b1bf8: 0x24640254  addiu       $a0, $v1, 0x254
    ctx->pc = 0x4b1bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 596));
label_4b1bfc:
    // 0x4b1bfc: 0x90630254  lbu         $v1, 0x254($v1)
    ctx->pc = 0x4b1bfcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 596)));
label_4b1c00:
    // 0x4b1c00: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
label_4b1c04:
    if (ctx->pc == 0x4B1C04u) {
        ctx->pc = 0x4B1C04u;
            // 0x4b1c04: 0xa0860001  sb          $a2, 0x1($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 6));
        ctx->pc = 0x4B1C08u;
        goto label_4b1c08;
    }
    ctx->pc = 0x4B1C00u;
    {
        const bool branch_taken_0x4b1c00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b1c00) {
            ctx->pc = 0x4B1C04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B1C00u;
            // 0x4b1c04: 0xa0860001  sb          $a2, 0x1($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B1C14u;
            goto label_4b1c14;
        }
    }
    ctx->pc = 0x4B1C08u;
label_4b1c08:
    // 0x4b1c08: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4b1c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4b1c0c:
    // 0x4b1c0c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x4b1c0cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_4b1c10:
    // 0x4b1c10: 0xa0860001  sb          $a2, 0x1($a0)
    ctx->pc = 0x4b1c10u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 6));
label_4b1c14:
    // 0x4b1c14: 0x3e00008  jr          $ra
label_4b1c18:
    if (ctx->pc == 0x4B1C18u) {
        ctx->pc = 0x4B1C18u;
            // 0x4b1c18: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->pc = 0x4B1C1Cu;
        goto label_4b1c1c;
    }
    ctx->pc = 0x4B1C14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B1C18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B1C14u;
            // 0x4b1c18: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B1C1Cu;
label_4b1c1c:
    // 0x4b1c1c: 0x0  nop
    ctx->pc = 0x4b1c1cu;
    // NOP
label_4b1c20:
    // 0x4b1c20: 0x24850004  addiu       $a1, $a0, 0x4
    ctx->pc = 0x4b1c20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_4b1c24:
    // 0x4b1c24: 0x90840004  lbu         $a0, 0x4($a0)
    ctx->pc = 0x4b1c24u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
label_4b1c28:
    // 0x4b1c28: 0x30830002  andi        $v1, $a0, 0x2
    ctx->pc = 0x4b1c28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
label_4b1c2c:
    // 0x4b1c2c: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
label_4b1c30:
    if (ctx->pc == 0x4B1C30u) {
        ctx->pc = 0x4B1C30u;
            // 0x4b1c30: 0xe4ac0020  swc1        $f12, 0x20($a1) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
        ctx->pc = 0x4B1C34u;
        goto label_4b1c34;
    }
    ctx->pc = 0x4B1C2Cu;
    {
        const bool branch_taken_0x4b1c2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b1c2c) {
            ctx->pc = 0x4B1C30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B1C2Cu;
            // 0x4b1c30: 0xe4ac0020  swc1        $f12, 0x20($a1) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B1C40u;
            goto label_4b1c40;
        }
    }
    ctx->pc = 0x4B1C34u;
label_4b1c34:
    // 0x4b1c34: 0x34830002  ori         $v1, $a0, 0x2
    ctx->pc = 0x4b1c34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
label_4b1c38:
    // 0x4b1c38: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x4b1c38u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_4b1c3c:
    // 0x4b1c3c: 0xe4ac0020  swc1        $f12, 0x20($a1)
    ctx->pc = 0x4b1c3cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
label_4b1c40:
    // 0x4b1c40: 0xe4ad0024  swc1        $f13, 0x24($a1)
    ctx->pc = 0x4b1c40u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 36), bits); }
label_4b1c44:
    // 0x4b1c44: 0x3e00008  jr          $ra
label_4b1c48:
    if (ctx->pc == 0x4B1C48u) {
        ctx->pc = 0x4B1C48u;
            // 0x4b1c48: 0xe4ae0028  swc1        $f14, 0x28($a1) (Delay Slot)
        { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
        ctx->pc = 0x4B1C4Cu;
        goto label_4b1c4c;
    }
    ctx->pc = 0x4B1C44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B1C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B1C44u;
            // 0x4b1c48: 0xe4ae0028  swc1        $f14, 0x28($a1) (Delay Slot)
        { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B1C4Cu;
label_4b1c4c:
    // 0x4b1c4c: 0x0  nop
    ctx->pc = 0x4b1c4cu;
    // NOP
label_4b1c50:
    // 0x4b1c50: 0x24850004  addiu       $a1, $a0, 0x4
    ctx->pc = 0x4b1c50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_4b1c54:
    // 0x4b1c54: 0x90840004  lbu         $a0, 0x4($a0)
    ctx->pc = 0x4b1c54u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
label_4b1c58:
    // 0x4b1c58: 0x30830002  andi        $v1, $a0, 0x2
    ctx->pc = 0x4b1c58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
label_4b1c5c:
    // 0x4b1c5c: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
label_4b1c60:
    if (ctx->pc == 0x4B1C60u) {
        ctx->pc = 0x4B1C60u;
            // 0x4b1c60: 0xe4ac0010  swc1        $f12, 0x10($a1) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
        ctx->pc = 0x4B1C64u;
        goto label_4b1c64;
    }
    ctx->pc = 0x4B1C5Cu;
    {
        const bool branch_taken_0x4b1c5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b1c5c) {
            ctx->pc = 0x4B1C60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B1C5Cu;
            // 0x4b1c60: 0xe4ac0010  swc1        $f12, 0x10($a1) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B1C70u;
            goto label_4b1c70;
        }
    }
    ctx->pc = 0x4B1C64u;
label_4b1c64:
    // 0x4b1c64: 0x34830002  ori         $v1, $a0, 0x2
    ctx->pc = 0x4b1c64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
label_4b1c68:
    // 0x4b1c68: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x4b1c68u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_4b1c6c:
    // 0x4b1c6c: 0xe4ac0010  swc1        $f12, 0x10($a1)
    ctx->pc = 0x4b1c6cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
label_4b1c70:
    // 0x4b1c70: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x4b1c70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_4b1c74:
    // 0x4b1c74: 0xe4ad0014  swc1        $f13, 0x14($a1)
    ctx->pc = 0x4b1c74u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
label_4b1c78:
    // 0x4b1c78: 0xe4ae0018  swc1        $f14, 0x18($a1)
    ctx->pc = 0x4b1c78u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
label_4b1c7c:
    // 0x4b1c7c: 0x3e00008  jr          $ra
label_4b1c80:
    if (ctx->pc == 0x4B1C80u) {
        ctx->pc = 0x4B1C80u;
            // 0x4b1c80: 0xaca3001c  sw          $v1, 0x1C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 3));
        ctx->pc = 0x4B1C84u;
        goto label_4b1c84;
    }
    ctx->pc = 0x4B1C7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B1C80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B1C7Cu;
            // 0x4b1c80: 0xaca3001c  sw          $v1, 0x1C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B1C84u;
label_4b1c84:
    // 0x4b1c84: 0x0  nop
    ctx->pc = 0x4b1c84u;
    // NOP
label_4b1c88:
    // 0x4b1c88: 0x0  nop
    ctx->pc = 0x4b1c88u;
    // NOP
label_4b1c8c:
    // 0x4b1c8c: 0x0  nop
    ctx->pc = 0x4b1c8cu;
    // NOP
label_4b1c90:
    // 0x4b1c90: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x4b1c90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_4b1c94:
    // 0x4b1c94: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x4b1c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_4b1c98:
    // 0x4b1c98: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4b1c98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4b1c9c:
    // 0x4b1c9c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4b1c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4b1ca0:
    // 0x4b1ca0: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x4b1ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_4b1ca4:
    // 0x4b1ca4: 0x90630030  lbu         $v1, 0x30($v1)
    ctx->pc = 0x4b1ca4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 48)));
label_4b1ca8:
    // 0x4b1ca8: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
label_4b1cac:
    if (ctx->pc == 0x4B1CACu) {
        ctx->pc = 0x4B1CACu;
            // 0x4b1cac: 0xe48c0018  swc1        $f12, 0x18($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
        ctx->pc = 0x4B1CB0u;
        goto label_4b1cb0;
    }
    ctx->pc = 0x4B1CA8u;
    {
        const bool branch_taken_0x4b1ca8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b1ca8) {
            ctx->pc = 0x4B1CACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B1CA8u;
            // 0x4b1cac: 0xe48c0018  swc1        $f12, 0x18($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B1CBCu;
            goto label_4b1cbc;
        }
    }
    ctx->pc = 0x4B1CB0u;
label_4b1cb0:
    // 0x4b1cb0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4b1cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4b1cb4:
    // 0x4b1cb4: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x4b1cb4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_4b1cb8:
    // 0x4b1cb8: 0xe48c0018  swc1        $f12, 0x18($a0)
    ctx->pc = 0x4b1cb8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
label_4b1cbc:
    // 0x4b1cbc: 0xe48d001c  swc1        $f13, 0x1C($a0)
    ctx->pc = 0x4b1cbcu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
label_4b1cc0:
    // 0x4b1cc0: 0x3e00008  jr          $ra
label_4b1cc4:
    if (ctx->pc == 0x4B1CC4u) {
        ctx->pc = 0x4B1CC4u;
            // 0x4b1cc4: 0xe48e0020  swc1        $f14, 0x20($a0) (Delay Slot)
        { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
        ctx->pc = 0x4B1CC8u;
        goto label_4b1cc8;
    }
    ctx->pc = 0x4B1CC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B1CC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B1CC0u;
            // 0x4b1cc4: 0xe48e0020  swc1        $f14, 0x20($a0) (Delay Slot)
        { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B1CC8u;
label_4b1cc8:
    // 0x4b1cc8: 0x0  nop
    ctx->pc = 0x4b1cc8u;
    // NOP
label_4b1ccc:
    // 0x4b1ccc: 0x0  nop
    ctx->pc = 0x4b1cccu;
    // NOP
label_4b1cd0:
    // 0x4b1cd0: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x4b1cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_4b1cd4:
    // 0x4b1cd4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x4b1cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_4b1cd8:
    // 0x4b1cd8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4b1cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4b1cdc:
    // 0x4b1cdc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4b1cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4b1ce0:
    // 0x4b1ce0: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x4b1ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_4b1ce4:
    // 0x4b1ce4: 0x90630030  lbu         $v1, 0x30($v1)
    ctx->pc = 0x4b1ce4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 48)));
label_4b1ce8:
    // 0x4b1ce8: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
label_4b1cec:
    if (ctx->pc == 0x4B1CECu) {
        ctx->pc = 0x4B1CECu;
            // 0x4b1cec: 0xe48c0014  swc1        $f12, 0x14($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
        ctx->pc = 0x4B1CF0u;
        goto label_4b1cf0;
    }
    ctx->pc = 0x4B1CE8u;
    {
        const bool branch_taken_0x4b1ce8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b1ce8) {
            ctx->pc = 0x4B1CECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B1CE8u;
            // 0x4b1cec: 0xe48c0014  swc1        $f12, 0x14($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B1CFCu;
            goto label_4b1cfc;
        }
    }
    ctx->pc = 0x4B1CF0u;
label_4b1cf0:
    // 0x4b1cf0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4b1cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4b1cf4:
    // 0x4b1cf4: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x4b1cf4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_4b1cf8:
    // 0x4b1cf8: 0xe48c0014  swc1        $f12, 0x14($a0)
    ctx->pc = 0x4b1cf8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
label_4b1cfc:
    // 0x4b1cfc: 0x3e00008  jr          $ra
label_4b1d00:
    if (ctx->pc == 0x4B1D00u) {
        ctx->pc = 0x4B1D04u;
        goto label_4b1d04;
    }
    ctx->pc = 0x4B1CFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B1D04u;
label_4b1d04:
    // 0x4b1d04: 0x0  nop
    ctx->pc = 0x4b1d04u;
    // NOP
label_4b1d08:
    // 0x4b1d08: 0x0  nop
    ctx->pc = 0x4b1d08u;
    // NOP
label_4b1d0c:
    // 0x4b1d0c: 0x0  nop
    ctx->pc = 0x4b1d0cu;
    // NOP
label_4b1d10:
    // 0x4b1d10: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x4b1d10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_4b1d14:
    // 0x4b1d14: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x4b1d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_4b1d18:
    // 0x4b1d18: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4b1d18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4b1d1c:
    // 0x4b1d1c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4b1d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4b1d20:
    // 0x4b1d20: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x4b1d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_4b1d24:
    // 0x4b1d24: 0x90630030  lbu         $v1, 0x30($v1)
    ctx->pc = 0x4b1d24u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 48)));
label_4b1d28:
    // 0x4b1d28: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
label_4b1d2c:
    if (ctx->pc == 0x4B1D2Cu) {
        ctx->pc = 0x4B1D2Cu;
            // 0x4b1d2c: 0xe48c0004  swc1        $f12, 0x4($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
        ctx->pc = 0x4B1D30u;
        goto label_4b1d30;
    }
    ctx->pc = 0x4B1D28u;
    {
        const bool branch_taken_0x4b1d28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b1d28) {
            ctx->pc = 0x4B1D2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B1D28u;
            // 0x4b1d2c: 0xe48c0004  swc1        $f12, 0x4($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B1D3Cu;
            goto label_4b1d3c;
        }
    }
    ctx->pc = 0x4B1D30u;
label_4b1d30:
    // 0x4b1d30: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4b1d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4b1d34:
    // 0x4b1d34: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x4b1d34u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_4b1d38:
    // 0x4b1d38: 0xe48c0004  swc1        $f12, 0x4($a0)
    ctx->pc = 0x4b1d38u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_4b1d3c:
    // 0x4b1d3c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x4b1d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_4b1d40:
    // 0x4b1d40: 0xe48d0008  swc1        $f13, 0x8($a0)
    ctx->pc = 0x4b1d40u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_4b1d44:
    // 0x4b1d44: 0xe48e000c  swc1        $f14, 0xC($a0)
    ctx->pc = 0x4b1d44u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_4b1d48:
    // 0x4b1d48: 0x3e00008  jr          $ra
label_4b1d4c:
    if (ctx->pc == 0x4B1D4Cu) {
        ctx->pc = 0x4B1D4Cu;
            // 0x4b1d4c: 0xac830010  sw          $v1, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
        ctx->pc = 0x4B1D50u;
        goto label_4b1d50;
    }
    ctx->pc = 0x4B1D48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B1D4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B1D48u;
            // 0x4b1d4c: 0xac830010  sw          $v1, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B1D50u;
label_4b1d50:
    // 0x4b1d50: 0x24850004  addiu       $a1, $a0, 0x4
    ctx->pc = 0x4b1d50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_4b1d54:
    // 0x4b1d54: 0x90840004  lbu         $a0, 0x4($a0)
    ctx->pc = 0x4b1d54u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
label_4b1d58:
    // 0x4b1d58: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x4b1d58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_4b1d5c:
    // 0x4b1d5c: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
label_4b1d60:
    if (ctx->pc == 0x4B1D60u) {
        ctx->pc = 0x4B1D60u;
            // 0x4b1d60: 0xe4ac0004  swc1        $f12, 0x4($a1) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
        ctx->pc = 0x4B1D64u;
        goto label_4b1d64;
    }
    ctx->pc = 0x4B1D5Cu;
    {
        const bool branch_taken_0x4b1d5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b1d5c) {
            ctx->pc = 0x4B1D60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B1D5Cu;
            // 0x4b1d60: 0xe4ac0004  swc1        $f12, 0x4($a1) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B1D70u;
            goto label_4b1d70;
        }
    }
    ctx->pc = 0x4B1D64u;
label_4b1d64:
    // 0x4b1d64: 0x34830001  ori         $v1, $a0, 0x1
    ctx->pc = 0x4b1d64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
label_4b1d68:
    // 0x4b1d68: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x4b1d68u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_4b1d6c:
    // 0x4b1d6c: 0xe4ac0004  swc1        $f12, 0x4($a1)
    ctx->pc = 0x4b1d6cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_4b1d70:
    // 0x4b1d70: 0xe4ad0008  swc1        $f13, 0x8($a1)
    ctx->pc = 0x4b1d70u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_4b1d74:
    // 0x4b1d74: 0x3e00008  jr          $ra
label_4b1d78:
    if (ctx->pc == 0x4B1D78u) {
        ctx->pc = 0x4B1D78u;
            // 0x4b1d78: 0xe4ae000c  swc1        $f14, 0xC($a1) (Delay Slot)
        { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
        ctx->pc = 0x4B1D7Cu;
        goto label_4b1d7c;
    }
    ctx->pc = 0x4B1D74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B1D78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B1D74u;
            // 0x4b1d78: 0xe4ae000c  swc1        $f14, 0xC($a1) (Delay Slot)
        { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B1D7Cu;
label_4b1d7c:
    // 0x4b1d7c: 0x0  nop
    ctx->pc = 0x4b1d7cu;
    // NOP
}
