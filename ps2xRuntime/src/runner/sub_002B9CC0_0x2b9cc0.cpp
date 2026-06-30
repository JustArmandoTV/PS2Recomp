#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B9CC0
// Address: 0x2b9cc0 - 0x2b9e20
void sub_002B9CC0_0x2b9cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B9CC0_0x2b9cc0");
#endif

    switch (ctx->pc) {
        case 0x2b9cc0u: goto label_2b9cc0;
        case 0x2b9cc4u: goto label_2b9cc4;
        case 0x2b9cc8u: goto label_2b9cc8;
        case 0x2b9cccu: goto label_2b9ccc;
        case 0x2b9cd0u: goto label_2b9cd0;
        case 0x2b9cd4u: goto label_2b9cd4;
        case 0x2b9cd8u: goto label_2b9cd8;
        case 0x2b9cdcu: goto label_2b9cdc;
        case 0x2b9ce0u: goto label_2b9ce0;
        case 0x2b9ce4u: goto label_2b9ce4;
        case 0x2b9ce8u: goto label_2b9ce8;
        case 0x2b9cecu: goto label_2b9cec;
        case 0x2b9cf0u: goto label_2b9cf0;
        case 0x2b9cf4u: goto label_2b9cf4;
        case 0x2b9cf8u: goto label_2b9cf8;
        case 0x2b9cfcu: goto label_2b9cfc;
        case 0x2b9d00u: goto label_2b9d00;
        case 0x2b9d04u: goto label_2b9d04;
        case 0x2b9d08u: goto label_2b9d08;
        case 0x2b9d0cu: goto label_2b9d0c;
        case 0x2b9d10u: goto label_2b9d10;
        case 0x2b9d14u: goto label_2b9d14;
        case 0x2b9d18u: goto label_2b9d18;
        case 0x2b9d1cu: goto label_2b9d1c;
        case 0x2b9d20u: goto label_2b9d20;
        case 0x2b9d24u: goto label_2b9d24;
        case 0x2b9d28u: goto label_2b9d28;
        case 0x2b9d2cu: goto label_2b9d2c;
        case 0x2b9d30u: goto label_2b9d30;
        case 0x2b9d34u: goto label_2b9d34;
        case 0x2b9d38u: goto label_2b9d38;
        case 0x2b9d3cu: goto label_2b9d3c;
        case 0x2b9d40u: goto label_2b9d40;
        case 0x2b9d44u: goto label_2b9d44;
        case 0x2b9d48u: goto label_2b9d48;
        case 0x2b9d4cu: goto label_2b9d4c;
        case 0x2b9d50u: goto label_2b9d50;
        case 0x2b9d54u: goto label_2b9d54;
        case 0x2b9d58u: goto label_2b9d58;
        case 0x2b9d5cu: goto label_2b9d5c;
        case 0x2b9d60u: goto label_2b9d60;
        case 0x2b9d64u: goto label_2b9d64;
        case 0x2b9d68u: goto label_2b9d68;
        case 0x2b9d6cu: goto label_2b9d6c;
        case 0x2b9d70u: goto label_2b9d70;
        case 0x2b9d74u: goto label_2b9d74;
        case 0x2b9d78u: goto label_2b9d78;
        case 0x2b9d7cu: goto label_2b9d7c;
        case 0x2b9d80u: goto label_2b9d80;
        case 0x2b9d84u: goto label_2b9d84;
        case 0x2b9d88u: goto label_2b9d88;
        case 0x2b9d8cu: goto label_2b9d8c;
        case 0x2b9d90u: goto label_2b9d90;
        case 0x2b9d94u: goto label_2b9d94;
        case 0x2b9d98u: goto label_2b9d98;
        case 0x2b9d9cu: goto label_2b9d9c;
        case 0x2b9da0u: goto label_2b9da0;
        case 0x2b9da4u: goto label_2b9da4;
        case 0x2b9da8u: goto label_2b9da8;
        case 0x2b9dacu: goto label_2b9dac;
        case 0x2b9db0u: goto label_2b9db0;
        case 0x2b9db4u: goto label_2b9db4;
        case 0x2b9db8u: goto label_2b9db8;
        case 0x2b9dbcu: goto label_2b9dbc;
        case 0x2b9dc0u: goto label_2b9dc0;
        case 0x2b9dc4u: goto label_2b9dc4;
        case 0x2b9dc8u: goto label_2b9dc8;
        case 0x2b9dccu: goto label_2b9dcc;
        case 0x2b9dd0u: goto label_2b9dd0;
        case 0x2b9dd4u: goto label_2b9dd4;
        case 0x2b9dd8u: goto label_2b9dd8;
        case 0x2b9ddcu: goto label_2b9ddc;
        case 0x2b9de0u: goto label_2b9de0;
        case 0x2b9de4u: goto label_2b9de4;
        case 0x2b9de8u: goto label_2b9de8;
        case 0x2b9decu: goto label_2b9dec;
        case 0x2b9df0u: goto label_2b9df0;
        case 0x2b9df4u: goto label_2b9df4;
        case 0x2b9df8u: goto label_2b9df8;
        case 0x2b9dfcu: goto label_2b9dfc;
        case 0x2b9e00u: goto label_2b9e00;
        case 0x2b9e04u: goto label_2b9e04;
        case 0x2b9e08u: goto label_2b9e08;
        case 0x2b9e0cu: goto label_2b9e0c;
        case 0x2b9e10u: goto label_2b9e10;
        case 0x2b9e14u: goto label_2b9e14;
        case 0x2b9e18u: goto label_2b9e18;
        case 0x2b9e1cu: goto label_2b9e1c;
        default: break;
    }

    ctx->pc = 0x2b9cc0u;

label_2b9cc0:
    // 0x2b9cc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b9cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2b9cc4:
    // 0x2b9cc4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2b9cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2b9cc8:
    // 0x2b9cc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b9cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2b9ccc:
    // 0x2b9ccc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b9cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2b9cd0:
    // 0x2b9cd0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b9cd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b9cd4:
    // 0x2b9cd4: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_2b9cd8:
    if (ctx->pc == 0x2B9CD8u) {
        ctx->pc = 0x2B9CD8u;
            // 0x2b9cd8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B9CDCu;
        goto label_2b9cdc;
    }
    ctx->pc = 0x2B9CD4u;
    {
        const bool branch_taken_0x2b9cd4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9CD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9CD4u;
            // 0x2b9cd8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9cd4) {
            ctx->pc = 0x2B9E08u;
            goto label_2b9e08;
        }
    }
    ctx->pc = 0x2B9CDCu;
label_2b9cdc:
    // 0x2b9cdc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2b9cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2b9ce0:
    // 0x2b9ce0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2b9ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2b9ce4:
    // 0x2b9ce4: 0x24632530  addiu       $v1, $v1, 0x2530
    ctx->pc = 0x2b9ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9520));
label_2b9ce8:
    // 0x2b9ce8: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2b9ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_2b9cec:
    // 0x2b9cec: 0x24422568  addiu       $v0, $v0, 0x2568
    ctx->pc = 0x2b9cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9576));
label_2b9cf0:
    // 0x2b9cf0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2b9cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_2b9cf4:
    // 0x2b9cf4: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x2b9cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_2b9cf8:
    // 0x2b9cf8: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x2b9cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_2b9cfc:
    // 0x2b9cfc: 0xc0407c0  jal         func_101F00
label_2b9d00:
    if (ctx->pc == 0x2B9D00u) {
        ctx->pc = 0x2B9D00u;
            // 0x2b9d00: 0x24a59bc0  addiu       $a1, $a1, -0x6440 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941632));
        ctx->pc = 0x2B9D04u;
        goto label_2b9d04;
    }
    ctx->pc = 0x2B9CFCu;
    SET_GPR_U32(ctx, 31, 0x2B9D04u);
    ctx->pc = 0x2B9D00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9CFCu;
            // 0x2b9d00: 0x24a59bc0  addiu       $a1, $a1, -0x6440 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941632));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9D04u; }
        if (ctx->pc != 0x2B9D04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9D04u; }
        if (ctx->pc != 0x2B9D04u) { return; }
    }
    ctx->pc = 0x2B9D04u;
label_2b9d04:
    // 0x2b9d04: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x2b9d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_2b9d08:
    // 0x2b9d08: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2b9d0c:
    if (ctx->pc == 0x2B9D0Cu) {
        ctx->pc = 0x2B9D0Cu;
            // 0x2b9d0c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x2B9D10u;
        goto label_2b9d10;
    }
    ctx->pc = 0x2B9D08u;
    {
        const bool branch_taken_0x2b9d08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9d08) {
            ctx->pc = 0x2B9D0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9D08u;
            // 0x2b9d0c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B9D1Cu;
            goto label_2b9d1c;
        }
    }
    ctx->pc = 0x2B9D10u;
label_2b9d10:
    // 0x2b9d10: 0xc07507c  jal         func_1D41F0
label_2b9d14:
    if (ctx->pc == 0x2B9D14u) {
        ctx->pc = 0x2B9D14u;
            // 0x2b9d14: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x2B9D18u;
        goto label_2b9d18;
    }
    ctx->pc = 0x2B9D10u;
    SET_GPR_U32(ctx, 31, 0x2B9D18u);
    ctx->pc = 0x2B9D14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9D10u;
            // 0x2b9d14: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9D18u; }
        if (ctx->pc != 0x2B9D18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9D18u; }
        if (ctx->pc != 0x2B9D18u) { return; }
    }
    ctx->pc = 0x2B9D18u;
label_2b9d18:
    // 0x2b9d18: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x2b9d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_2b9d1c:
    // 0x2b9d1c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2b9d20:
    if (ctx->pc == 0x2B9D20u) {
        ctx->pc = 0x2B9D20u;
            // 0x2b9d20: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x2B9D24u;
        goto label_2b9d24;
    }
    ctx->pc = 0x2B9D1Cu;
    {
        const bool branch_taken_0x2b9d1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9d1c) {
            ctx->pc = 0x2B9D20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9D1Cu;
            // 0x2b9d20: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B9D4Cu;
            goto label_2b9d4c;
        }
    }
    ctx->pc = 0x2B9D24u;
label_2b9d24:
    // 0x2b9d24: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2b9d28:
    if (ctx->pc == 0x2B9D28u) {
        ctx->pc = 0x2B9D2Cu;
        goto label_2b9d2c;
    }
    ctx->pc = 0x2B9D24u;
    {
        const bool branch_taken_0x2b9d24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9d24) {
            ctx->pc = 0x2B9D48u;
            goto label_2b9d48;
        }
    }
    ctx->pc = 0x2B9D2Cu;
label_2b9d2c:
    // 0x2b9d2c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2b9d30:
    if (ctx->pc == 0x2B9D30u) {
        ctx->pc = 0x2B9D34u;
        goto label_2b9d34;
    }
    ctx->pc = 0x2B9D2Cu;
    {
        const bool branch_taken_0x2b9d2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9d2c) {
            ctx->pc = 0x2B9D48u;
            goto label_2b9d48;
        }
    }
    ctx->pc = 0x2B9D34u;
label_2b9d34:
    // 0x2b9d34: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x2b9d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_2b9d38:
    // 0x2b9d38: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2b9d3c:
    if (ctx->pc == 0x2B9D3Cu) {
        ctx->pc = 0x2B9D40u;
        goto label_2b9d40;
    }
    ctx->pc = 0x2B9D38u;
    {
        const bool branch_taken_0x2b9d38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9d38) {
            ctx->pc = 0x2B9D48u;
            goto label_2b9d48;
        }
    }
    ctx->pc = 0x2B9D40u;
label_2b9d40:
    // 0x2b9d40: 0xc0400a8  jal         func_1002A0
label_2b9d44:
    if (ctx->pc == 0x2B9D44u) {
        ctx->pc = 0x2B9D48u;
        goto label_2b9d48;
    }
    ctx->pc = 0x2B9D40u;
    SET_GPR_U32(ctx, 31, 0x2B9D48u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9D48u; }
        if (ctx->pc != 0x2B9D48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9D48u; }
        if (ctx->pc != 0x2B9D48u) { return; }
    }
    ctx->pc = 0x2B9D48u;
label_2b9d48:
    // 0x2b9d48: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x2b9d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_2b9d4c:
    // 0x2b9d4c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2b9d50:
    if (ctx->pc == 0x2B9D50u) {
        ctx->pc = 0x2B9D50u;
            // 0x2b9d50: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x2B9D54u;
        goto label_2b9d54;
    }
    ctx->pc = 0x2B9D4Cu;
    {
        const bool branch_taken_0x2b9d4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9d4c) {
            ctx->pc = 0x2B9D50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9D4Cu;
            // 0x2b9d50: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B9D7Cu;
            goto label_2b9d7c;
        }
    }
    ctx->pc = 0x2B9D54u;
label_2b9d54:
    // 0x2b9d54: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2b9d58:
    if (ctx->pc == 0x2B9D58u) {
        ctx->pc = 0x2B9D5Cu;
        goto label_2b9d5c;
    }
    ctx->pc = 0x2B9D54u;
    {
        const bool branch_taken_0x2b9d54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9d54) {
            ctx->pc = 0x2B9D78u;
            goto label_2b9d78;
        }
    }
    ctx->pc = 0x2B9D5Cu;
label_2b9d5c:
    // 0x2b9d5c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2b9d60:
    if (ctx->pc == 0x2B9D60u) {
        ctx->pc = 0x2B9D64u;
        goto label_2b9d64;
    }
    ctx->pc = 0x2B9D5Cu;
    {
        const bool branch_taken_0x2b9d5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9d5c) {
            ctx->pc = 0x2B9D78u;
            goto label_2b9d78;
        }
    }
    ctx->pc = 0x2B9D64u;
label_2b9d64:
    // 0x2b9d64: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x2b9d64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_2b9d68:
    // 0x2b9d68: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2b9d6c:
    if (ctx->pc == 0x2B9D6Cu) {
        ctx->pc = 0x2B9D70u;
        goto label_2b9d70;
    }
    ctx->pc = 0x2B9D68u;
    {
        const bool branch_taken_0x2b9d68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9d68) {
            ctx->pc = 0x2B9D78u;
            goto label_2b9d78;
        }
    }
    ctx->pc = 0x2B9D70u;
label_2b9d70:
    // 0x2b9d70: 0xc0400a8  jal         func_1002A0
label_2b9d74:
    if (ctx->pc == 0x2B9D74u) {
        ctx->pc = 0x2B9D78u;
        goto label_2b9d78;
    }
    ctx->pc = 0x2B9D70u;
    SET_GPR_U32(ctx, 31, 0x2B9D78u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9D78u; }
        if (ctx->pc != 0x2B9D78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9D78u; }
        if (ctx->pc != 0x2B9D78u) { return; }
    }
    ctx->pc = 0x2B9D78u;
label_2b9d78:
    // 0x2b9d78: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x2b9d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_2b9d7c:
    // 0x2b9d7c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2b9d80:
    if (ctx->pc == 0x2B9D80u) {
        ctx->pc = 0x2B9D84u;
        goto label_2b9d84;
    }
    ctx->pc = 0x2B9D7Cu;
    {
        const bool branch_taken_0x2b9d7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9d7c) {
            ctx->pc = 0x2B9D98u;
            goto label_2b9d98;
        }
    }
    ctx->pc = 0x2B9D84u;
label_2b9d84:
    // 0x2b9d84: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2b9d84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2b9d88:
    // 0x2b9d88: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2b9d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2b9d8c:
    // 0x2b9d8c: 0x24632518  addiu       $v1, $v1, 0x2518
    ctx->pc = 0x2b9d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9496));
label_2b9d90:
    // 0x2b9d90: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x2b9d90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_2b9d94:
    // 0x2b9d94: 0xac400ce0  sw          $zero, 0xCE0($v0)
    ctx->pc = 0x2b9d94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3296), GPR_U32(ctx, 0));
label_2b9d98:
    // 0x2b9d98: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_2b9d9c:
    if (ctx->pc == 0x2B9D9Cu) {
        ctx->pc = 0x2B9D9Cu;
            // 0x2b9d9c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2B9DA0u;
        goto label_2b9da0;
    }
    ctx->pc = 0x2B9D98u;
    {
        const bool branch_taken_0x2b9d98 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9d98) {
            ctx->pc = 0x2B9D9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9D98u;
            // 0x2b9d9c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B9DF4u;
            goto label_2b9df4;
        }
    }
    ctx->pc = 0x2B9DA0u;
label_2b9da0:
    // 0x2b9da0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2b9da0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2b9da4:
    // 0x2b9da4: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x2b9da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_2b9da8:
    // 0x2b9da8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2b9da8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2b9dac:
    // 0x2b9dac: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x2b9dacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_2b9db0:
    // 0x2b9db0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2b9db4:
    if (ctx->pc == 0x2B9DB4u) {
        ctx->pc = 0x2B9DB4u;
            // 0x2b9db4: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x2B9DB8u;
        goto label_2b9db8;
    }
    ctx->pc = 0x2B9DB0u;
    {
        const bool branch_taken_0x2b9db0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9db0) {
            ctx->pc = 0x2B9DB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9DB0u;
            // 0x2b9db4: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B9DCCu;
            goto label_2b9dcc;
        }
    }
    ctx->pc = 0x2B9DB8u;
label_2b9db8:
    // 0x2b9db8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2b9db8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2b9dbc:
    // 0x2b9dbc: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2b9dbcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2b9dc0:
    // 0x2b9dc0: 0x320f809  jalr        $t9
label_2b9dc4:
    if (ctx->pc == 0x2B9DC4u) {
        ctx->pc = 0x2B9DC4u;
            // 0x2b9dc4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B9DC8u;
        goto label_2b9dc8;
    }
    ctx->pc = 0x2B9DC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2B9DC8u);
        ctx->pc = 0x2B9DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9DC0u;
            // 0x2b9dc4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2B9DC8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2B9DC8u; }
            if (ctx->pc != 0x2B9DC8u) { return; }
        }
        }
    }
    ctx->pc = 0x2B9DC8u;
label_2b9dc8:
    // 0x2b9dc8: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x2b9dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_2b9dcc:
    // 0x2b9dcc: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2b9dd0:
    if (ctx->pc == 0x2B9DD0u) {
        ctx->pc = 0x2B9DD0u;
            // 0x2b9dd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B9DD4u;
        goto label_2b9dd4;
    }
    ctx->pc = 0x2B9DCCu;
    {
        const bool branch_taken_0x2b9dcc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9dcc) {
            ctx->pc = 0x2B9DD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9DCCu;
            // 0x2b9dd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B9DE8u;
            goto label_2b9de8;
        }
    }
    ctx->pc = 0x2B9DD4u;
label_2b9dd4:
    // 0x2b9dd4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2b9dd4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2b9dd8:
    // 0x2b9dd8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2b9dd8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2b9ddc:
    // 0x2b9ddc: 0x320f809  jalr        $t9
label_2b9de0:
    if (ctx->pc == 0x2B9DE0u) {
        ctx->pc = 0x2B9DE0u;
            // 0x2b9de0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B9DE4u;
        goto label_2b9de4;
    }
    ctx->pc = 0x2B9DDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2B9DE4u);
        ctx->pc = 0x2B9DE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9DDCu;
            // 0x2b9de0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2B9DE4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2B9DE4u; }
            if (ctx->pc != 0x2B9DE4u) { return; }
        }
        }
    }
    ctx->pc = 0x2B9DE4u;
label_2b9de4:
    // 0x2b9de4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b9de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b9de8:
    // 0x2b9de8: 0xc075bf8  jal         func_1D6FE0
label_2b9dec:
    if (ctx->pc == 0x2B9DECu) {
        ctx->pc = 0x2B9DECu;
            // 0x2b9dec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B9DF0u;
        goto label_2b9df0;
    }
    ctx->pc = 0x2B9DE8u;
    SET_GPR_U32(ctx, 31, 0x2B9DF0u);
    ctx->pc = 0x2B9DECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9DE8u;
            // 0x2b9dec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9DF0u; }
        if (ctx->pc != 0x2B9DF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9DF0u; }
        if (ctx->pc != 0x2B9DF0u) { return; }
    }
    ctx->pc = 0x2B9DF0u;
label_2b9df0:
    // 0x2b9df0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2b9df0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2b9df4:
    // 0x2b9df4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2b9df4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2b9df8:
    // 0x2b9df8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2b9dfc:
    if (ctx->pc == 0x2B9DFCu) {
        ctx->pc = 0x2B9DFCu;
            // 0x2b9dfc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B9E00u;
        goto label_2b9e00;
    }
    ctx->pc = 0x2B9DF8u;
    {
        const bool branch_taken_0x2b9df8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2b9df8) {
            ctx->pc = 0x2B9DFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9DF8u;
            // 0x2b9dfc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B9E0Cu;
            goto label_2b9e0c;
        }
    }
    ctx->pc = 0x2B9E00u;
label_2b9e00:
    // 0x2b9e00: 0xc0400a8  jal         func_1002A0
label_2b9e04:
    if (ctx->pc == 0x2B9E04u) {
        ctx->pc = 0x2B9E04u;
            // 0x2b9e04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B9E08u;
        goto label_2b9e08;
    }
    ctx->pc = 0x2B9E00u;
    SET_GPR_U32(ctx, 31, 0x2B9E08u);
    ctx->pc = 0x2B9E04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9E00u;
            // 0x2b9e04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9E08u; }
        if (ctx->pc != 0x2B9E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9E08u; }
        if (ctx->pc != 0x2B9E08u) { return; }
    }
    ctx->pc = 0x2B9E08u;
label_2b9e08:
    // 0x2b9e08: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2b9e08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b9e0c:
    // 0x2b9e0c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b9e0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2b9e10:
    // 0x2b9e10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b9e10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2b9e14:
    // 0x2b9e14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b9e14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2b9e18:
    // 0x2b9e18: 0x3e00008  jr          $ra
label_2b9e1c:
    if (ctx->pc == 0x2B9E1Cu) {
        ctx->pc = 0x2B9E1Cu;
            // 0x2b9e1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2B9E20u;
        goto label_fallthrough_0x2b9e18;
    }
    ctx->pc = 0x2B9E18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B9E1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9E18u;
            // 0x2b9e1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2b9e18:
    ctx->pc = 0x2B9E20u;
}
