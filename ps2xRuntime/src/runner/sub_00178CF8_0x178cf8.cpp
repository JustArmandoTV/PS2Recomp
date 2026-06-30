#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00178CF8
// Address: 0x178cf8 - 0x178d60
void sub_00178CF8_0x178cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178CF8_0x178cf8");
#endif

    switch (ctx->pc) {
        case 0x178cf8u: goto label_178cf8;
        case 0x178cfcu: goto label_178cfc;
        case 0x178d00u: goto label_178d00;
        case 0x178d04u: goto label_178d04;
        case 0x178d08u: goto label_178d08;
        case 0x178d0cu: goto label_178d0c;
        case 0x178d10u: goto label_178d10;
        case 0x178d14u: goto label_178d14;
        case 0x178d18u: goto label_178d18;
        case 0x178d1cu: goto label_178d1c;
        case 0x178d20u: goto label_178d20;
        case 0x178d24u: goto label_178d24;
        case 0x178d28u: goto label_178d28;
        case 0x178d2cu: goto label_178d2c;
        case 0x178d30u: goto label_178d30;
        case 0x178d34u: goto label_178d34;
        case 0x178d38u: goto label_178d38;
        case 0x178d3cu: goto label_178d3c;
        case 0x178d40u: goto label_178d40;
        case 0x178d44u: goto label_178d44;
        case 0x178d48u: goto label_178d48;
        case 0x178d4cu: goto label_178d4c;
        case 0x178d50u: goto label_178d50;
        case 0x178d54u: goto label_178d54;
        case 0x178d58u: goto label_178d58;
        case 0x178d5cu: goto label_178d5c;
        default: break;
    }

    ctx->pc = 0x178cf8u;

label_178cf8:
    // 0x178cf8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x178cf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_178cfc:
    // 0x178cfc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x178cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_178d00:
    // 0x178d00: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
label_178d04:
    if (ctx->pc == 0x178D04u) {
        ctx->pc = 0x178D04u;
            // 0x178d04: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->pc = 0x178D08u;
        goto label_178d08;
    }
    ctx->pc = 0x178D00u;
    {
        const bool branch_taken_0x178d00 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x178D04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178D00u;
            // 0x178d04: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178d00) {
            ctx->pc = 0x178D20u;
            goto label_178d20;
        }
    }
    ctx->pc = 0x178D08u;
label_178d08:
    // 0x178d08: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x178d08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_178d0c:
    // 0x178d0c: 0xc05e0a6  jal         func_178298
label_178d10:
    if (ctx->pc == 0x178D10u) {
        ctx->pc = 0x178D10u;
            // 0x178d10: 0x24844d10  addiu       $a0, $a0, 0x4D10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19728));
        ctx->pc = 0x178D14u;
        goto label_178d14;
    }
    ctx->pc = 0x178D0Cu;
    SET_GPR_U32(ctx, 31, 0x178D14u);
    ctx->pc = 0x178D10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178D0Cu;
            // 0x178d10: 0x24844d10  addiu       $a0, $a0, 0x4D10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19728));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178298u;
    if (runtime->hasFunction(0x178298u)) {
        auto targetFn = runtime->lookupFunction(0x178298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178D14u; }
        if (ctx->pc != 0x178D14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178298_0x178298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178D14u; }
        if (ctx->pc != 0x178D14u) { return; }
    }
    ctx->pc = 0x178D14u;
label_178d14:
    // 0x178d14: 0x1000000e  b           . + 4 + (0xE << 2)
label_178d18:
    if (ctx->pc == 0x178D18u) {
        ctx->pc = 0x178D18u;
            // 0x178d18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x178D1Cu;
        goto label_178d1c;
    }
    ctx->pc = 0x178D14u;
    {
        const bool branch_taken_0x178d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178D18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178D14u;
            // 0x178d18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178d14) {
            ctx->pc = 0x178D50u;
            goto label_178d50;
        }
    }
    ctx->pc = 0x178D1Cu;
label_178d1c:
    // 0x178d1c: 0x0  nop
    ctx->pc = 0x178d1cu;
    // NOP
label_178d20:
    // 0x178d20: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x178d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_178d24:
    // 0x178d24: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x178d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_178d28:
    // 0x178d28: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_178d2c:
    if (ctx->pc == 0x178D2Cu) {
        ctx->pc = 0x178D2Cu;
            // 0x178d2c: 0x3c040063  lui         $a0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
        ctx->pc = 0x178D30u;
        goto label_178d30;
    }
    ctx->pc = 0x178D28u;
    {
        const bool branch_taken_0x178d28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x178d28) {
            ctx->pc = 0x178D2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x178D28u;
            // 0x178d2c: 0x3c040063  lui         $a0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x178D40u;
            goto label_178d40;
        }
    }
    ctx->pc = 0x178D30u;
label_178d30:
    // 0x178d30: 0x40f809  jalr        $v0
label_178d34:
    if (ctx->pc == 0x178D34u) {
        ctx->pc = 0x178D34u;
            // 0x178d34: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->pc = 0x178D38u;
        goto label_178d38;
    }
    ctx->pc = 0x178D30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x178D38u);
        ctx->pc = 0x178D34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178D30u;
            // 0x178d34: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x178D38u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x178D38u; }
            if (ctx->pc != 0x178D38u) { return; }
        }
        }
    }
    ctx->pc = 0x178D38u;
label_178d38:
    // 0x178d38: 0x10000004  b           . + 4 + (0x4 << 2)
label_178d3c:
    if (ctx->pc == 0x178D3Cu) {
        ctx->pc = 0x178D3Cu;
            // 0x178d3c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x178D40u;
        goto label_178d40;
    }
    ctx->pc = 0x178D38u;
    {
        const bool branch_taken_0x178d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178D3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178D38u;
            // 0x178d3c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178d38) {
            ctx->pc = 0x178D4Cu;
            goto label_178d4c;
        }
    }
    ctx->pc = 0x178D40u;
label_178d40:
    // 0x178d40: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x178d40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_178d44:
    // 0x178d44: 0xc05e0a6  jal         func_178298
label_178d48:
    if (ctx->pc == 0x178D48u) {
        ctx->pc = 0x178D48u;
            // 0x178d48: 0x24844d30  addiu       $a0, $a0, 0x4D30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19760));
        ctx->pc = 0x178D4Cu;
        goto label_178d4c;
    }
    ctx->pc = 0x178D44u;
    SET_GPR_U32(ctx, 31, 0x178D4Cu);
    ctx->pc = 0x178D48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178D44u;
            // 0x178d48: 0x24844d30  addiu       $a0, $a0, 0x4D30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19760));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178298u;
    if (runtime->hasFunction(0x178298u)) {
        auto targetFn = runtime->lookupFunction(0x178298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178D4Cu; }
        if (ctx->pc != 0x178D4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178298_0x178298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178D4Cu; }
        if (ctx->pc != 0x178D4Cu) { return; }
    }
    ctx->pc = 0x178D4Cu;
label_178d4c:
    // 0x178d4c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x178d4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_178d50:
    // 0x178d50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x178d50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_178d54:
    // 0x178d54: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x178d54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_178d58:
    // 0x178d58: 0x3e00008  jr          $ra
label_178d5c:
    if (ctx->pc == 0x178D5Cu) {
        ctx->pc = 0x178D5Cu;
            // 0x178d5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x178D60u;
        goto label_fallthrough_0x178d58;
    }
    ctx->pc = 0x178D58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178D5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178D58u;
            // 0x178d5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x178d58:
    ctx->pc = 0x178D60u;
}
