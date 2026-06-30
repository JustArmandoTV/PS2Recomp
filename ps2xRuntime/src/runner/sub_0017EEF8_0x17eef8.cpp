#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017EEF8
// Address: 0x17eef8 - 0x17ef88
void sub_0017EEF8_0x17eef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017EEF8_0x17eef8");
#endif

    switch (ctx->pc) {
        case 0x17ef14u: goto label_17ef14;
        case 0x17ef54u: goto label_17ef54;
        default: break;
    }

    ctx->pc = 0x17eef8u;

    // 0x17eef8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17eef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17eefc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x17eefcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ef00: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x17EF00u;
    {
        const bool branch_taken_0x17ef00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17EF04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17EF00u;
            // 0x17ef04: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ef00) {
            ctx->pc = 0x17EF20u;
            goto label_17ef20;
        }
    }
    ctx->pc = 0x17EF08u;
    // 0x17ef08: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x17ef08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x17ef0c: 0xc05f8e4  jal         func_17E390
    ctx->pc = 0x17EF0Cu;
    SET_GPR_U32(ctx, 31, 0x17EF14u);
    ctx->pc = 0x17EF10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17EF0Cu;
            // 0x17ef10: 0x24a564a0  addiu       $a1, $a1, 0x64A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25760));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E390u;
    if (runtime->hasFunction(0x17E390u)) {
        auto targetFn = runtime->lookupFunction(0x17E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EF14u; }
        if (ctx->pc != 0x17EF14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E390_0x17e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EF14u; }
        if (ctx->pc != 0x17EF14u) { return; }
    }
    ctx->pc = 0x17EF14u;
label_17ef14:
    // 0x17ef14: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17EF14u;
    {
        const bool branch_taken_0x17ef14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EF18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17EF14u;
            // 0x17ef18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ef14) {
            ctx->pc = 0x17EF24u;
            goto label_17ef24;
        }
    }
    ctx->pc = 0x17EF1Cu;
    // 0x17ef1c: 0x0  nop
    ctx->pc = 0x17ef1cu;
    // NOP
label_17ef20:
    // 0x17ef20: 0x80420002  lb          $v0, 0x2($v0)
    ctx->pc = 0x17ef20u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_17ef24:
    // 0x17ef24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17ef24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ef28: 0x3e00008  jr          $ra
    ctx->pc = 0x17EF28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17EF2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17EF28u;
            // 0x17ef2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17EF30u;
    // 0x17ef30: 0x3e00008  jr          $ra
    ctx->pc = 0x17EF30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17EF34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17EF30u;
            // 0x17ef34: 0x24020800  addiu       $v0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17EF38u;
    // 0x17ef38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17ef38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17ef3c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x17ef3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ef40: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x17EF40u;
    {
        const bool branch_taken_0x17ef40 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x17EF44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17EF40u;
            // 0x17ef44: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ef40) {
            ctx->pc = 0x17EF60u;
            goto label_17ef60;
        }
    }
    ctx->pc = 0x17EF48u;
    // 0x17ef48: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x17ef48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x17ef4c: 0xc05f8e4  jal         func_17E390
    ctx->pc = 0x17EF4Cu;
    SET_GPR_U32(ctx, 31, 0x17EF54u);
    ctx->pc = 0x17EF50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17EF4Cu;
            // 0x17ef50: 0x24a564a0  addiu       $a1, $a1, 0x64A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25760));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E390u;
    if (runtime->hasFunction(0x17E390u)) {
        auto targetFn = runtime->lookupFunction(0x17E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EF54u; }
        if (ctx->pc != 0x17EF54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E390_0x17e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EF54u; }
        if (ctx->pc != 0x17EF54u) { return; }
    }
    ctx->pc = 0x17EF54u;
label_17ef54:
    // 0x17ef54: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17EF54u;
    {
        const bool branch_taken_0x17ef54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EF58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17EF54u;
            // 0x17ef58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ef54) {
            ctx->pc = 0x17EF78u;
            goto label_17ef78;
        }
    }
    ctx->pc = 0x17EF5Cu;
    // 0x17ef5c: 0x0  nop
    ctx->pc = 0x17ef5cu;
    // NOP
label_17ef60:
    // 0x17ef60: 0x80a30002  lb          $v1, 0x2($a1)
    ctx->pc = 0x17ef60u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x17ef64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17ef64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17ef68: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17EF68u;
    {
        const bool branch_taken_0x17ef68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x17ef68) {
            ctx->pc = 0x17EF6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17EF68u;
            // 0x17ef6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17EF78u;
            goto label_17ef78;
        }
    }
    ctx->pc = 0x17EF70u;
    // 0x17ef70: 0x8ca20028  lw          $v0, 0x28($a1)
    ctx->pc = 0x17ef70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x17ef74: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x17ef74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
label_17ef78:
    // 0x17ef78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17ef78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ef7c: 0x3e00008  jr          $ra
    ctx->pc = 0x17EF7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17EF80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17EF7Cu;
            // 0x17ef80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17EF84u;
    // 0x17ef84: 0x0  nop
    ctx->pc = 0x17ef84u;
    // NOP
}
