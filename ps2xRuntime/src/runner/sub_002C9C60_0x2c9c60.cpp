#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C9C60
// Address: 0x2c9c60 - 0x2c9dc0
void sub_002C9C60_0x2c9c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C9C60_0x2c9c60");
#endif

    switch (ctx->pc) {
        case 0x2c9c60u: goto label_2c9c60;
        case 0x2c9c64u: goto label_2c9c64;
        case 0x2c9c68u: goto label_2c9c68;
        case 0x2c9c6cu: goto label_2c9c6c;
        case 0x2c9c70u: goto label_2c9c70;
        case 0x2c9c74u: goto label_2c9c74;
        case 0x2c9c78u: goto label_2c9c78;
        case 0x2c9c7cu: goto label_2c9c7c;
        case 0x2c9c80u: goto label_2c9c80;
        case 0x2c9c84u: goto label_2c9c84;
        case 0x2c9c88u: goto label_2c9c88;
        case 0x2c9c8cu: goto label_2c9c8c;
        case 0x2c9c90u: goto label_2c9c90;
        case 0x2c9c94u: goto label_2c9c94;
        case 0x2c9c98u: goto label_2c9c98;
        case 0x2c9c9cu: goto label_2c9c9c;
        case 0x2c9ca0u: goto label_2c9ca0;
        case 0x2c9ca4u: goto label_2c9ca4;
        case 0x2c9ca8u: goto label_2c9ca8;
        case 0x2c9cacu: goto label_2c9cac;
        case 0x2c9cb0u: goto label_2c9cb0;
        case 0x2c9cb4u: goto label_2c9cb4;
        case 0x2c9cb8u: goto label_2c9cb8;
        case 0x2c9cbcu: goto label_2c9cbc;
        case 0x2c9cc0u: goto label_2c9cc0;
        case 0x2c9cc4u: goto label_2c9cc4;
        case 0x2c9cc8u: goto label_2c9cc8;
        case 0x2c9cccu: goto label_2c9ccc;
        case 0x2c9cd0u: goto label_2c9cd0;
        case 0x2c9cd4u: goto label_2c9cd4;
        case 0x2c9cd8u: goto label_2c9cd8;
        case 0x2c9cdcu: goto label_2c9cdc;
        case 0x2c9ce0u: goto label_2c9ce0;
        case 0x2c9ce4u: goto label_2c9ce4;
        case 0x2c9ce8u: goto label_2c9ce8;
        case 0x2c9cecu: goto label_2c9cec;
        case 0x2c9cf0u: goto label_2c9cf0;
        case 0x2c9cf4u: goto label_2c9cf4;
        case 0x2c9cf8u: goto label_2c9cf8;
        case 0x2c9cfcu: goto label_2c9cfc;
        case 0x2c9d00u: goto label_2c9d00;
        case 0x2c9d04u: goto label_2c9d04;
        case 0x2c9d08u: goto label_2c9d08;
        case 0x2c9d0cu: goto label_2c9d0c;
        case 0x2c9d10u: goto label_2c9d10;
        case 0x2c9d14u: goto label_2c9d14;
        case 0x2c9d18u: goto label_2c9d18;
        case 0x2c9d1cu: goto label_2c9d1c;
        case 0x2c9d20u: goto label_2c9d20;
        case 0x2c9d24u: goto label_2c9d24;
        case 0x2c9d28u: goto label_2c9d28;
        case 0x2c9d2cu: goto label_2c9d2c;
        case 0x2c9d30u: goto label_2c9d30;
        case 0x2c9d34u: goto label_2c9d34;
        case 0x2c9d38u: goto label_2c9d38;
        case 0x2c9d3cu: goto label_2c9d3c;
        case 0x2c9d40u: goto label_2c9d40;
        case 0x2c9d44u: goto label_2c9d44;
        case 0x2c9d48u: goto label_2c9d48;
        case 0x2c9d4cu: goto label_2c9d4c;
        case 0x2c9d50u: goto label_2c9d50;
        case 0x2c9d54u: goto label_2c9d54;
        case 0x2c9d58u: goto label_2c9d58;
        case 0x2c9d5cu: goto label_2c9d5c;
        case 0x2c9d60u: goto label_2c9d60;
        case 0x2c9d64u: goto label_2c9d64;
        case 0x2c9d68u: goto label_2c9d68;
        case 0x2c9d6cu: goto label_2c9d6c;
        case 0x2c9d70u: goto label_2c9d70;
        case 0x2c9d74u: goto label_2c9d74;
        case 0x2c9d78u: goto label_2c9d78;
        case 0x2c9d7cu: goto label_2c9d7c;
        case 0x2c9d80u: goto label_2c9d80;
        case 0x2c9d84u: goto label_2c9d84;
        case 0x2c9d88u: goto label_2c9d88;
        case 0x2c9d8cu: goto label_2c9d8c;
        case 0x2c9d90u: goto label_2c9d90;
        case 0x2c9d94u: goto label_2c9d94;
        case 0x2c9d98u: goto label_2c9d98;
        case 0x2c9d9cu: goto label_2c9d9c;
        case 0x2c9da0u: goto label_2c9da0;
        case 0x2c9da4u: goto label_2c9da4;
        case 0x2c9da8u: goto label_2c9da8;
        case 0x2c9dacu: goto label_2c9dac;
        case 0x2c9db0u: goto label_2c9db0;
        case 0x2c9db4u: goto label_2c9db4;
        case 0x2c9db8u: goto label_2c9db8;
        case 0x2c9dbcu: goto label_2c9dbc;
        default: break;
    }

    ctx->pc = 0x2c9c60u;

label_2c9c60:
    // 0x2c9c60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c9c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2c9c64:
    // 0x2c9c64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c9c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2c9c68:
    // 0x2c9c68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c9c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2c9c6c:
    // 0x2c9c6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c9c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2c9c70:
    // 0x2c9c70: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c9c70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c9c74:
    // 0x2c9c74: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_2c9c78:
    if (ctx->pc == 0x2C9C78u) {
        ctx->pc = 0x2C9C78u;
            // 0x2c9c78: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C9C7Cu;
        goto label_2c9c7c;
    }
    ctx->pc = 0x2C9C74u;
    {
        const bool branch_taken_0x2c9c74 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9C78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9C74u;
            // 0x2c9c78: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9c74) {
            ctx->pc = 0x2C9DA8u;
            goto label_2c9da8;
        }
    }
    ctx->pc = 0x2C9C7Cu;
label_2c9c7c:
    // 0x2c9c7c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c9c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2c9c80:
    // 0x2c9c80: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c9c80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c9c84:
    // 0x2c9c84: 0x24630460  addiu       $v1, $v1, 0x460
    ctx->pc = 0x2c9c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1120));
label_2c9c88:
    // 0x2c9c88: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x2c9c88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_2c9c8c:
    // 0x2c9c8c: 0x24420498  addiu       $v0, $v0, 0x498
    ctx->pc = 0x2c9c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1176));
label_2c9c90:
    // 0x2c9c90: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2c9c90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_2c9c94:
    // 0x2c9c94: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x2c9c94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_2c9c98:
    // 0x2c9c98: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x2c9c98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_2c9c9c:
    // 0x2c9c9c: 0xc0407c0  jal         func_101F00
label_2c9ca0:
    if (ctx->pc == 0x2C9CA0u) {
        ctx->pc = 0x2C9CA0u;
            // 0x2c9ca0: 0x24a59b60  addiu       $a1, $a1, -0x64A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941536));
        ctx->pc = 0x2C9CA4u;
        goto label_2c9ca4;
    }
    ctx->pc = 0x2C9C9Cu;
    SET_GPR_U32(ctx, 31, 0x2C9CA4u);
    ctx->pc = 0x2C9CA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9C9Cu;
            // 0x2c9ca0: 0x24a59b60  addiu       $a1, $a1, -0x64A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941536));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9CA4u; }
        if (ctx->pc != 0x2C9CA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9CA4u; }
        if (ctx->pc != 0x2C9CA4u) { return; }
    }
    ctx->pc = 0x2C9CA4u;
label_2c9ca4:
    // 0x2c9ca4: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x2c9ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_2c9ca8:
    // 0x2c9ca8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2c9cac:
    if (ctx->pc == 0x2C9CACu) {
        ctx->pc = 0x2C9CACu;
            // 0x2c9cac: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x2C9CB0u;
        goto label_2c9cb0;
    }
    ctx->pc = 0x2C9CA8u;
    {
        const bool branch_taken_0x2c9ca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9ca8) {
            ctx->pc = 0x2C9CACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9CA8u;
            // 0x2c9cac: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C9CBCu;
            goto label_2c9cbc;
        }
    }
    ctx->pc = 0x2C9CB0u;
label_2c9cb0:
    // 0x2c9cb0: 0xc07507c  jal         func_1D41F0
label_2c9cb4:
    if (ctx->pc == 0x2C9CB4u) {
        ctx->pc = 0x2C9CB4u;
            // 0x2c9cb4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x2C9CB8u;
        goto label_2c9cb8;
    }
    ctx->pc = 0x2C9CB0u;
    SET_GPR_U32(ctx, 31, 0x2C9CB8u);
    ctx->pc = 0x2C9CB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9CB0u;
            // 0x2c9cb4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9CB8u; }
        if (ctx->pc != 0x2C9CB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9CB8u; }
        if (ctx->pc != 0x2C9CB8u) { return; }
    }
    ctx->pc = 0x2C9CB8u;
label_2c9cb8:
    // 0x2c9cb8: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x2c9cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_2c9cbc:
    // 0x2c9cbc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2c9cc0:
    if (ctx->pc == 0x2C9CC0u) {
        ctx->pc = 0x2C9CC0u;
            // 0x2c9cc0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x2C9CC4u;
        goto label_2c9cc4;
    }
    ctx->pc = 0x2C9CBCu;
    {
        const bool branch_taken_0x2c9cbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9cbc) {
            ctx->pc = 0x2C9CC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9CBCu;
            // 0x2c9cc0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C9CECu;
            goto label_2c9cec;
        }
    }
    ctx->pc = 0x2C9CC4u;
label_2c9cc4:
    // 0x2c9cc4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2c9cc8:
    if (ctx->pc == 0x2C9CC8u) {
        ctx->pc = 0x2C9CCCu;
        goto label_2c9ccc;
    }
    ctx->pc = 0x2C9CC4u;
    {
        const bool branch_taken_0x2c9cc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9cc4) {
            ctx->pc = 0x2C9CE8u;
            goto label_2c9ce8;
        }
    }
    ctx->pc = 0x2C9CCCu;
label_2c9ccc:
    // 0x2c9ccc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2c9cd0:
    if (ctx->pc == 0x2C9CD0u) {
        ctx->pc = 0x2C9CD4u;
        goto label_2c9cd4;
    }
    ctx->pc = 0x2C9CCCu;
    {
        const bool branch_taken_0x2c9ccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9ccc) {
            ctx->pc = 0x2C9CE8u;
            goto label_2c9ce8;
        }
    }
    ctx->pc = 0x2C9CD4u;
label_2c9cd4:
    // 0x2c9cd4: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x2c9cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_2c9cd8:
    // 0x2c9cd8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2c9cdc:
    if (ctx->pc == 0x2C9CDCu) {
        ctx->pc = 0x2C9CE0u;
        goto label_2c9ce0;
    }
    ctx->pc = 0x2C9CD8u;
    {
        const bool branch_taken_0x2c9cd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9cd8) {
            ctx->pc = 0x2C9CE8u;
            goto label_2c9ce8;
        }
    }
    ctx->pc = 0x2C9CE0u;
label_2c9ce0:
    // 0x2c9ce0: 0xc0400a8  jal         func_1002A0
label_2c9ce4:
    if (ctx->pc == 0x2C9CE4u) {
        ctx->pc = 0x2C9CE8u;
        goto label_2c9ce8;
    }
    ctx->pc = 0x2C9CE0u;
    SET_GPR_U32(ctx, 31, 0x2C9CE8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9CE8u; }
        if (ctx->pc != 0x2C9CE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9CE8u; }
        if (ctx->pc != 0x2C9CE8u) { return; }
    }
    ctx->pc = 0x2C9CE8u;
label_2c9ce8:
    // 0x2c9ce8: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x2c9ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_2c9cec:
    // 0x2c9cec: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2c9cf0:
    if (ctx->pc == 0x2C9CF0u) {
        ctx->pc = 0x2C9CF0u;
            // 0x2c9cf0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x2C9CF4u;
        goto label_2c9cf4;
    }
    ctx->pc = 0x2C9CECu;
    {
        const bool branch_taken_0x2c9cec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9cec) {
            ctx->pc = 0x2C9CF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9CECu;
            // 0x2c9cf0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C9D1Cu;
            goto label_2c9d1c;
        }
    }
    ctx->pc = 0x2C9CF4u;
label_2c9cf4:
    // 0x2c9cf4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2c9cf8:
    if (ctx->pc == 0x2C9CF8u) {
        ctx->pc = 0x2C9CFCu;
        goto label_2c9cfc;
    }
    ctx->pc = 0x2C9CF4u;
    {
        const bool branch_taken_0x2c9cf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9cf4) {
            ctx->pc = 0x2C9D18u;
            goto label_2c9d18;
        }
    }
    ctx->pc = 0x2C9CFCu;
label_2c9cfc:
    // 0x2c9cfc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2c9d00:
    if (ctx->pc == 0x2C9D00u) {
        ctx->pc = 0x2C9D04u;
        goto label_2c9d04;
    }
    ctx->pc = 0x2C9CFCu;
    {
        const bool branch_taken_0x2c9cfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9cfc) {
            ctx->pc = 0x2C9D18u;
            goto label_2c9d18;
        }
    }
    ctx->pc = 0x2C9D04u;
label_2c9d04:
    // 0x2c9d04: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x2c9d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_2c9d08:
    // 0x2c9d08: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2c9d0c:
    if (ctx->pc == 0x2C9D0Cu) {
        ctx->pc = 0x2C9D10u;
        goto label_2c9d10;
    }
    ctx->pc = 0x2C9D08u;
    {
        const bool branch_taken_0x2c9d08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9d08) {
            ctx->pc = 0x2C9D18u;
            goto label_2c9d18;
        }
    }
    ctx->pc = 0x2C9D10u;
label_2c9d10:
    // 0x2c9d10: 0xc0400a8  jal         func_1002A0
label_2c9d14:
    if (ctx->pc == 0x2C9D14u) {
        ctx->pc = 0x2C9D18u;
        goto label_2c9d18;
    }
    ctx->pc = 0x2C9D10u;
    SET_GPR_U32(ctx, 31, 0x2C9D18u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9D18u; }
        if (ctx->pc != 0x2C9D18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9D18u; }
        if (ctx->pc != 0x2C9D18u) { return; }
    }
    ctx->pc = 0x2C9D18u;
label_2c9d18:
    // 0x2c9d18: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x2c9d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_2c9d1c:
    // 0x2c9d1c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2c9d20:
    if (ctx->pc == 0x2C9D20u) {
        ctx->pc = 0x2C9D24u;
        goto label_2c9d24;
    }
    ctx->pc = 0x2C9D1Cu;
    {
        const bool branch_taken_0x2c9d1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9d1c) {
            ctx->pc = 0x2C9D38u;
            goto label_2c9d38;
        }
    }
    ctx->pc = 0x2C9D24u;
label_2c9d24:
    // 0x2c9d24: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c9d24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2c9d28:
    // 0x2c9d28: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2c9d28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2c9d2c:
    // 0x2c9d2c: 0x24630448  addiu       $v1, $v1, 0x448
    ctx->pc = 0x2c9d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1096));
label_2c9d30:
    // 0x2c9d30: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x2c9d30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_2c9d34:
    // 0x2c9d34: 0xac400d88  sw          $zero, 0xD88($v0)
    ctx->pc = 0x2c9d34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3464), GPR_U32(ctx, 0));
label_2c9d38:
    // 0x2c9d38: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_2c9d3c:
    if (ctx->pc == 0x2C9D3Cu) {
        ctx->pc = 0x2C9D3Cu;
            // 0x2c9d3c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2C9D40u;
        goto label_2c9d40;
    }
    ctx->pc = 0x2C9D38u;
    {
        const bool branch_taken_0x2c9d38 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9d38) {
            ctx->pc = 0x2C9D3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9D38u;
            // 0x2c9d3c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C9D94u;
            goto label_2c9d94;
        }
    }
    ctx->pc = 0x2C9D40u;
label_2c9d40:
    // 0x2c9d40: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c9d40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c9d44:
    // 0x2c9d44: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x2c9d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_2c9d48:
    // 0x2c9d48: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2c9d48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2c9d4c:
    // 0x2c9d4c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x2c9d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_2c9d50:
    // 0x2c9d50: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2c9d54:
    if (ctx->pc == 0x2C9D54u) {
        ctx->pc = 0x2C9D54u;
            // 0x2c9d54: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x2C9D58u;
        goto label_2c9d58;
    }
    ctx->pc = 0x2C9D50u;
    {
        const bool branch_taken_0x2c9d50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9d50) {
            ctx->pc = 0x2C9D54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9D50u;
            // 0x2c9d54: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C9D6Cu;
            goto label_2c9d6c;
        }
    }
    ctx->pc = 0x2C9D58u;
label_2c9d58:
    // 0x2c9d58: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2c9d58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c9d5c:
    // 0x2c9d5c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2c9d5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2c9d60:
    // 0x2c9d60: 0x320f809  jalr        $t9
label_2c9d64:
    if (ctx->pc == 0x2C9D64u) {
        ctx->pc = 0x2C9D64u;
            // 0x2c9d64: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2C9D68u;
        goto label_2c9d68;
    }
    ctx->pc = 0x2C9D60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C9D68u);
        ctx->pc = 0x2C9D64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9D60u;
            // 0x2c9d64: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C9D68u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C9D68u; }
            if (ctx->pc != 0x2C9D68u) { return; }
        }
        }
    }
    ctx->pc = 0x2C9D68u;
label_2c9d68:
    // 0x2c9d68: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x2c9d68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_2c9d6c:
    // 0x2c9d6c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2c9d70:
    if (ctx->pc == 0x2C9D70u) {
        ctx->pc = 0x2C9D70u;
            // 0x2c9d70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C9D74u;
        goto label_2c9d74;
    }
    ctx->pc = 0x2C9D6Cu;
    {
        const bool branch_taken_0x2c9d6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9d6c) {
            ctx->pc = 0x2C9D70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9D6Cu;
            // 0x2c9d70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C9D88u;
            goto label_2c9d88;
        }
    }
    ctx->pc = 0x2C9D74u;
label_2c9d74:
    // 0x2c9d74: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2c9d74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c9d78:
    // 0x2c9d78: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2c9d78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2c9d7c:
    // 0x2c9d7c: 0x320f809  jalr        $t9
label_2c9d80:
    if (ctx->pc == 0x2C9D80u) {
        ctx->pc = 0x2C9D80u;
            // 0x2c9d80: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2C9D84u;
        goto label_2c9d84;
    }
    ctx->pc = 0x2C9D7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C9D84u);
        ctx->pc = 0x2C9D80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9D7Cu;
            // 0x2c9d80: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C9D84u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C9D84u; }
            if (ctx->pc != 0x2C9D84u) { return; }
        }
        }
    }
    ctx->pc = 0x2C9D84u;
label_2c9d84:
    // 0x2c9d84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c9d84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c9d88:
    // 0x2c9d88: 0xc075bf8  jal         func_1D6FE0
label_2c9d8c:
    if (ctx->pc == 0x2C9D8Cu) {
        ctx->pc = 0x2C9D8Cu;
            // 0x2c9d8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C9D90u;
        goto label_2c9d90;
    }
    ctx->pc = 0x2C9D88u;
    SET_GPR_U32(ctx, 31, 0x2C9D90u);
    ctx->pc = 0x2C9D8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9D88u;
            // 0x2c9d8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9D90u; }
        if (ctx->pc != 0x2C9D90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9D90u; }
        if (ctx->pc != 0x2C9D90u) { return; }
    }
    ctx->pc = 0x2C9D90u;
label_2c9d90:
    // 0x2c9d90: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2c9d90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2c9d94:
    // 0x2c9d94: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c9d94u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2c9d98:
    // 0x2c9d98: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2c9d9c:
    if (ctx->pc == 0x2C9D9Cu) {
        ctx->pc = 0x2C9D9Cu;
            // 0x2c9d9c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C9DA0u;
        goto label_2c9da0;
    }
    ctx->pc = 0x2C9D98u;
    {
        const bool branch_taken_0x2c9d98 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c9d98) {
            ctx->pc = 0x2C9D9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9D98u;
            // 0x2c9d9c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C9DACu;
            goto label_2c9dac;
        }
    }
    ctx->pc = 0x2C9DA0u;
label_2c9da0:
    // 0x2c9da0: 0xc0400a8  jal         func_1002A0
label_2c9da4:
    if (ctx->pc == 0x2C9DA4u) {
        ctx->pc = 0x2C9DA4u;
            // 0x2c9da4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C9DA8u;
        goto label_2c9da8;
    }
    ctx->pc = 0x2C9DA0u;
    SET_GPR_U32(ctx, 31, 0x2C9DA8u);
    ctx->pc = 0x2C9DA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9DA0u;
            // 0x2c9da4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9DA8u; }
        if (ctx->pc != 0x2C9DA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9DA8u; }
        if (ctx->pc != 0x2C9DA8u) { return; }
    }
    ctx->pc = 0x2C9DA8u;
label_2c9da8:
    // 0x2c9da8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2c9da8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c9dac:
    // 0x2c9dac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c9dacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c9db0:
    // 0x2c9db0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c9db0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c9db4:
    // 0x2c9db4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c9db4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2c9db8:
    // 0x2c9db8: 0x3e00008  jr          $ra
label_2c9dbc:
    if (ctx->pc == 0x2C9DBCu) {
        ctx->pc = 0x2C9DBCu;
            // 0x2c9dbc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2C9DC0u;
        goto label_fallthrough_0x2c9db8;
    }
    ctx->pc = 0x2C9DB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9DBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9DB8u;
            // 0x2c9dbc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2c9db8:
    ctx->pc = 0x2C9DC0u;
}
