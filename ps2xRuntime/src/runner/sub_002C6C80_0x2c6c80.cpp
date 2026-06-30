#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C6C80
// Address: 0x2c6c80 - 0x2c6d80
void sub_002C6C80_0x2c6c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C6C80_0x2c6c80");
#endif

    switch (ctx->pc) {
        case 0x2c6c80u: goto label_2c6c80;
        case 0x2c6c84u: goto label_2c6c84;
        case 0x2c6c88u: goto label_2c6c88;
        case 0x2c6c8cu: goto label_2c6c8c;
        case 0x2c6c90u: goto label_2c6c90;
        case 0x2c6c94u: goto label_2c6c94;
        case 0x2c6c98u: goto label_2c6c98;
        case 0x2c6c9cu: goto label_2c6c9c;
        case 0x2c6ca0u: goto label_2c6ca0;
        case 0x2c6ca4u: goto label_2c6ca4;
        case 0x2c6ca8u: goto label_2c6ca8;
        case 0x2c6cacu: goto label_2c6cac;
        case 0x2c6cb0u: goto label_2c6cb0;
        case 0x2c6cb4u: goto label_2c6cb4;
        case 0x2c6cb8u: goto label_2c6cb8;
        case 0x2c6cbcu: goto label_2c6cbc;
        case 0x2c6cc0u: goto label_2c6cc0;
        case 0x2c6cc4u: goto label_2c6cc4;
        case 0x2c6cc8u: goto label_2c6cc8;
        case 0x2c6cccu: goto label_2c6ccc;
        case 0x2c6cd0u: goto label_2c6cd0;
        case 0x2c6cd4u: goto label_2c6cd4;
        case 0x2c6cd8u: goto label_2c6cd8;
        case 0x2c6cdcu: goto label_2c6cdc;
        case 0x2c6ce0u: goto label_2c6ce0;
        case 0x2c6ce4u: goto label_2c6ce4;
        case 0x2c6ce8u: goto label_2c6ce8;
        case 0x2c6cecu: goto label_2c6cec;
        case 0x2c6cf0u: goto label_2c6cf0;
        case 0x2c6cf4u: goto label_2c6cf4;
        case 0x2c6cf8u: goto label_2c6cf8;
        case 0x2c6cfcu: goto label_2c6cfc;
        case 0x2c6d00u: goto label_2c6d00;
        case 0x2c6d04u: goto label_2c6d04;
        case 0x2c6d08u: goto label_2c6d08;
        case 0x2c6d0cu: goto label_2c6d0c;
        case 0x2c6d10u: goto label_2c6d10;
        case 0x2c6d14u: goto label_2c6d14;
        case 0x2c6d18u: goto label_2c6d18;
        case 0x2c6d1cu: goto label_2c6d1c;
        case 0x2c6d20u: goto label_2c6d20;
        case 0x2c6d24u: goto label_2c6d24;
        case 0x2c6d28u: goto label_2c6d28;
        case 0x2c6d2cu: goto label_2c6d2c;
        case 0x2c6d30u: goto label_2c6d30;
        case 0x2c6d34u: goto label_2c6d34;
        case 0x2c6d38u: goto label_2c6d38;
        case 0x2c6d3cu: goto label_2c6d3c;
        case 0x2c6d40u: goto label_2c6d40;
        case 0x2c6d44u: goto label_2c6d44;
        case 0x2c6d48u: goto label_2c6d48;
        case 0x2c6d4cu: goto label_2c6d4c;
        case 0x2c6d50u: goto label_2c6d50;
        case 0x2c6d54u: goto label_2c6d54;
        case 0x2c6d58u: goto label_2c6d58;
        case 0x2c6d5cu: goto label_2c6d5c;
        case 0x2c6d60u: goto label_2c6d60;
        case 0x2c6d64u: goto label_2c6d64;
        case 0x2c6d68u: goto label_2c6d68;
        case 0x2c6d6cu: goto label_2c6d6c;
        case 0x2c6d70u: goto label_2c6d70;
        case 0x2c6d74u: goto label_2c6d74;
        case 0x2c6d78u: goto label_2c6d78;
        case 0x2c6d7cu: goto label_2c6d7c;
        default: break;
    }

    ctx->pc = 0x2c6c80u;

label_2c6c80:
    // 0x2c6c80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c6c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2c6c84:
    // 0x2c6c84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c6c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2c6c88:
    // 0x2c6c88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c6c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2c6c8c:
    // 0x2c6c8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c6c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2c6c90:
    // 0x2c6c90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c6c90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c6c94:
    // 0x2c6c94: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_2c6c98:
    if (ctx->pc == 0x2C6C98u) {
        ctx->pc = 0x2C6C98u;
            // 0x2c6c98: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C6C9Cu;
        goto label_2c6c9c;
    }
    ctx->pc = 0x2C6C94u;
    {
        const bool branch_taken_0x2c6c94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6C98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6C94u;
            // 0x2c6c98: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6c94) {
            ctx->pc = 0x2C6CD8u;
            goto label_2c6cd8;
        }
    }
    ctx->pc = 0x2C6C9Cu;
label_2c6c9c:
    // 0x2c6c9c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_2c6ca0:
    if (ctx->pc == 0x2C6CA0u) {
        ctx->pc = 0x2C6CA0u;
            // 0x2c6ca0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2C6CA4u;
        goto label_2c6ca4;
    }
    ctx->pc = 0x2C6C9Cu;
    {
        const bool branch_taken_0x2c6c9c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6c9c) {
            ctx->pc = 0x2C6CA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6C9Cu;
            // 0x2c6ca0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C6CC4u;
            goto label_2c6cc4;
        }
    }
    ctx->pc = 0x2C6CA4u;
label_2c6ca4:
    // 0x2c6ca4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_2c6ca8:
    if (ctx->pc == 0x2C6CA8u) {
        ctx->pc = 0x2C6CACu;
        goto label_2c6cac;
    }
    ctx->pc = 0x2C6CA4u;
    {
        const bool branch_taken_0x2c6ca4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6ca4) {
            ctx->pc = 0x2C6CC0u;
            goto label_2c6cc0;
        }
    }
    ctx->pc = 0x2C6CACu;
label_2c6cac:
    // 0x2c6cac: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x2c6cacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2c6cb0:
    // 0x2c6cb0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2c6cb4:
    if (ctx->pc == 0x2C6CB4u) {
        ctx->pc = 0x2C6CB8u;
        goto label_2c6cb8;
    }
    ctx->pc = 0x2C6CB0u;
    {
        const bool branch_taken_0x2c6cb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6cb0) {
            ctx->pc = 0x2C6CC0u;
            goto label_2c6cc0;
        }
    }
    ctx->pc = 0x2C6CB8u;
label_2c6cb8:
    // 0x2c6cb8: 0xc0400a8  jal         func_1002A0
label_2c6cbc:
    if (ctx->pc == 0x2C6CBCu) {
        ctx->pc = 0x2C6CC0u;
        goto label_2c6cc0;
    }
    ctx->pc = 0x2C6CB8u;
    SET_GPR_U32(ctx, 31, 0x2C6CC0u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6CC0u; }
        if (ctx->pc != 0x2C6CC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6CC0u; }
        if (ctx->pc != 0x2C6CC0u) { return; }
    }
    ctx->pc = 0x2C6CC0u;
label_2c6cc0:
    // 0x2c6cc0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2c6cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2c6cc4:
    // 0x2c6cc4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c6cc4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2c6cc8:
    // 0x2c6cc8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2c6ccc:
    if (ctx->pc == 0x2C6CCCu) {
        ctx->pc = 0x2C6CCCu;
            // 0x2c6ccc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C6CD0u;
        goto label_2c6cd0;
    }
    ctx->pc = 0x2C6CC8u;
    {
        const bool branch_taken_0x2c6cc8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c6cc8) {
            ctx->pc = 0x2C6CCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6CC8u;
            // 0x2c6ccc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C6CDCu;
            goto label_2c6cdc;
        }
    }
    ctx->pc = 0x2C6CD0u;
label_2c6cd0:
    // 0x2c6cd0: 0xc0400a8  jal         func_1002A0
label_2c6cd4:
    if (ctx->pc == 0x2C6CD4u) {
        ctx->pc = 0x2C6CD4u;
            // 0x2c6cd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C6CD8u;
        goto label_2c6cd8;
    }
    ctx->pc = 0x2C6CD0u;
    SET_GPR_U32(ctx, 31, 0x2C6CD8u);
    ctx->pc = 0x2C6CD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6CD0u;
            // 0x2c6cd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6CD8u; }
        if (ctx->pc != 0x2C6CD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6CD8u; }
        if (ctx->pc != 0x2C6CD8u) { return; }
    }
    ctx->pc = 0x2C6CD8u;
label_2c6cd8:
    // 0x2c6cd8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2c6cd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c6cdc:
    // 0x2c6cdc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c6cdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c6ce0:
    // 0x2c6ce0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c6ce0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c6ce4:
    // 0x2c6ce4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c6ce4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2c6ce8:
    // 0x2c6ce8: 0x3e00008  jr          $ra
label_2c6cec:
    if (ctx->pc == 0x2C6CECu) {
        ctx->pc = 0x2C6CECu;
            // 0x2c6cec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2C6CF0u;
        goto label_2c6cf0;
    }
    ctx->pc = 0x2C6CE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C6CECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6CE8u;
            // 0x2c6cec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C6CF0u;
label_2c6cf0:
    // 0x2c6cf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c6cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2c6cf4:
    // 0x2c6cf4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c6cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2c6cf8:
    // 0x2c6cf8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c6cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2c6cfc:
    // 0x2c6cfc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c6cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2c6d00:
    // 0x2c6d00: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c6d00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c6d04:
    // 0x2c6d04: 0x12200017  beqz        $s1, . + 4 + (0x17 << 2)
label_2c6d08:
    if (ctx->pc == 0x2C6D08u) {
        ctx->pc = 0x2C6D08u;
            // 0x2c6d08: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C6D0Cu;
        goto label_2c6d0c;
    }
    ctx->pc = 0x2C6D04u;
    {
        const bool branch_taken_0x2c6d04 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6D08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6D04u;
            // 0x2c6d08: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6d04) {
            ctx->pc = 0x2C6D64u;
            goto label_2c6d64;
        }
    }
    ctx->pc = 0x2C6D0Cu;
label_2c6d0c:
    // 0x2c6d0c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c6d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c6d10:
    // 0x2c6d10: 0x244209e0  addiu       $v0, $v0, 0x9E0
    ctx->pc = 0x2c6d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2528));
label_2c6d14:
    // 0x2c6d14: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2c6d14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2c6d18:
    // 0x2c6d18: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2c6d18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c6d1c:
    // 0x2c6d1c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x2c6d1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_2c6d20:
    // 0x2c6d20: 0x320f809  jalr        $t9
label_2c6d24:
    if (ctx->pc == 0x2C6D24u) {
        ctx->pc = 0x2C6D28u;
        goto label_2c6d28;
    }
    ctx->pc = 0x2C6D20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C6D28u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C6D28u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C6D28u; }
            if (ctx->pc != 0x2C6D28u) { return; }
        }
        }
    }
    ctx->pc = 0x2C6D28u;
label_2c6d28:
    // 0x2c6d28: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_2c6d2c:
    if (ctx->pc == 0x2C6D2Cu) {
        ctx->pc = 0x2C6D2Cu;
            // 0x2c6d2c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2C6D30u;
        goto label_2c6d30;
    }
    ctx->pc = 0x2C6D28u;
    {
        const bool branch_taken_0x2c6d28 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6d28) {
            ctx->pc = 0x2C6D2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6D28u;
            // 0x2c6d2c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C6D50u;
            goto label_2c6d50;
        }
    }
    ctx->pc = 0x2C6D30u;
label_2c6d30:
    // 0x2c6d30: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c6d30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c6d34:
    // 0x2c6d34: 0x24422620  addiu       $v0, $v0, 0x2620
    ctx->pc = 0x2c6d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9760));
label_2c6d38:
    // 0x2c6d38: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_2c6d3c:
    if (ctx->pc == 0x2C6D3Cu) {
        ctx->pc = 0x2C6D3Cu;
            // 0x2c6d3c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2C6D40u;
        goto label_2c6d40;
    }
    ctx->pc = 0x2C6D38u;
    {
        const bool branch_taken_0x2c6d38 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6D3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6D38u;
            // 0x2c6d3c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6d38) {
            ctx->pc = 0x2C6D4Cu;
            goto label_2c6d4c;
        }
    }
    ctx->pc = 0x2C6D40u;
label_2c6d40:
    // 0x2c6d40: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c6d40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c6d44:
    // 0x2c6d44: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x2c6d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_2c6d48:
    // 0x2c6d48: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2c6d48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2c6d4c:
    // 0x2c6d4c: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2c6d4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2c6d50:
    // 0x2c6d50: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c6d50u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2c6d54:
    // 0x2c6d54: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2c6d58:
    if (ctx->pc == 0x2C6D58u) {
        ctx->pc = 0x2C6D58u;
            // 0x2c6d58: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C6D5Cu;
        goto label_2c6d5c;
    }
    ctx->pc = 0x2C6D54u;
    {
        const bool branch_taken_0x2c6d54 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c6d54) {
            ctx->pc = 0x2C6D58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6D54u;
            // 0x2c6d58: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C6D68u;
            goto label_2c6d68;
        }
    }
    ctx->pc = 0x2C6D5Cu;
label_2c6d5c:
    // 0x2c6d5c: 0xc0400a8  jal         func_1002A0
label_2c6d60:
    if (ctx->pc == 0x2C6D60u) {
        ctx->pc = 0x2C6D60u;
            // 0x2c6d60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C6D64u;
        goto label_2c6d64;
    }
    ctx->pc = 0x2C6D5Cu;
    SET_GPR_U32(ctx, 31, 0x2C6D64u);
    ctx->pc = 0x2C6D60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6D5Cu;
            // 0x2c6d60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6D64u; }
        if (ctx->pc != 0x2C6D64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6D64u; }
        if (ctx->pc != 0x2C6D64u) { return; }
    }
    ctx->pc = 0x2C6D64u;
label_2c6d64:
    // 0x2c6d64: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2c6d64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c6d68:
    // 0x2c6d68: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c6d68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c6d6c:
    // 0x2c6d6c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c6d6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c6d70:
    // 0x2c6d70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c6d70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2c6d74:
    // 0x2c6d74: 0x3e00008  jr          $ra
label_2c6d78:
    if (ctx->pc == 0x2C6D78u) {
        ctx->pc = 0x2C6D78u;
            // 0x2c6d78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2C6D7Cu;
        goto label_2c6d7c;
    }
    ctx->pc = 0x2C6D74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C6D78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6D74u;
            // 0x2c6d78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C6D7Cu;
label_2c6d7c:
    // 0x2c6d7c: 0x0  nop
    ctx->pc = 0x2c6d7cu;
    // NOP
}
