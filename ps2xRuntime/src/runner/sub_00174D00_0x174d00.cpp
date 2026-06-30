#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00174D00
// Address: 0x174d00 - 0x174d78
void sub_00174D00_0x174d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00174D00_0x174d00");
#endif

    switch (ctx->pc) {
        case 0x174d54u: goto label_174d54;
        case 0x174d5cu: goto label_174d5c;
        case 0x174d64u: goto label_174d64;
        default: break;
    }

    ctx->pc = 0x174d00u;

    // 0x174d00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x174d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x174d04: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x174D04u;
    {
        const bool branch_taken_0x174d04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x174D08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174D04u;
            // 0x174d08: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174d04) {
            ctx->pc = 0x174D20u;
            goto label_174d20;
        }
    }
    ctx->pc = 0x174D0Cu;
    // 0x174d0c: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x174d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x174d10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x174d10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174d14: 0x24844640  addiu       $a0, $a0, 0x4640
    ctx->pc = 0x174d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17984));
    // 0x174d18: 0x8059f4e  j           func_167D38
    ctx->pc = 0x174D18u;
    ctx->pc = 0x174D1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174D18u;
            // 0x174d1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167D38u;
    if (runtime->hasFunction(0x167D38u)) {
        auto targetFn = runtime->lookupFunction(0x167D38u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00167D38_0x167d38(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x174D20u;
label_174d20:
    // 0x174d20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x174d20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174d24: 0xa480006a  sh          $zero, 0x6A($a0)
    ctx->pc = 0x174d24u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 106), (uint16_t)GPR_U32(ctx, 0));
    // 0x174d28: 0xa4800060  sh          $zero, 0x60($a0)
    ctx->pc = 0x174d28u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 96), (uint16_t)GPR_U32(ctx, 0));
    // 0x174d2c: 0xac800064  sw          $zero, 0x64($a0)
    ctx->pc = 0x174d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 0));
    // 0x174d30: 0xa4800068  sh          $zero, 0x68($a0)
    ctx->pc = 0x174d30u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 104), (uint16_t)GPR_U32(ctx, 0));
    // 0x174d34: 0x3e00008  jr          $ra
    ctx->pc = 0x174D34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174D34u;
            // 0x174d38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x174D3Cu;
    // 0x174d3c: 0x0  nop
    ctx->pc = 0x174d3cu;
    // NOP
    // 0x174d40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x174d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x174d44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x174d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x174d48: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x174d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x174d4c: 0xc0599de  jal         func_166778
    ctx->pc = 0x174D4Cu;
    SET_GPR_U32(ctx, 31, 0x174D54u);
    ctx->pc = 0x174D50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174D4Cu;
            // 0x174d50: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166778u;
    if (runtime->hasFunction(0x166778u)) {
        auto targetFn = runtime->lookupFunction(0x166778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174D54u; }
        if (ctx->pc != 0x174D54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166778_0x166778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174D54u; }
        if (ctx->pc != 0x174D54u) { return; }
    }
    ctx->pc = 0x174D54u;
label_174d54:
    // 0x174d54: 0xc05d35e  jal         func_174D78
    ctx->pc = 0x174D54u;
    SET_GPR_U32(ctx, 31, 0x174D5Cu);
    ctx->pc = 0x174D58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174D54u;
            // 0x174d58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174D78u;
    if (runtime->hasFunction(0x174D78u)) {
        auto targetFn = runtime->lookupFunction(0x174D78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174D5Cu; }
        if (ctx->pc != 0x174D5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00174D78_0x174d78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174D5Cu; }
        if (ctx->pc != 0x174D5Cu) { return; }
    }
    ctx->pc = 0x174D5Cu;
label_174d5c:
    // 0x174d5c: 0xc0599e0  jal         func_166780
    ctx->pc = 0x174D5Cu;
    SET_GPR_U32(ctx, 31, 0x174D64u);
    ctx->pc = 0x174D60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174D5Cu;
            // 0x174d60: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166780u;
    if (runtime->hasFunction(0x166780u)) {
        auto targetFn = runtime->lookupFunction(0x166780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174D64u; }
        if (ctx->pc != 0x174D64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166780_0x166780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174D64u; }
        if (ctx->pc != 0x174D64u) { return; }
    }
    ctx->pc = 0x174D64u;
label_174d64:
    // 0x174d64: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x174d64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x174d68: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x174d68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174d6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x174d6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174d70: 0x3e00008  jr          $ra
    ctx->pc = 0x174D70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174D74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174D70u;
            // 0x174d74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x174D78u;
}
