#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AB818
// Address: 0x1ab818 - 0x1ab888
void sub_001AB818_0x1ab818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AB818_0x1ab818");
#endif

    switch (ctx->pc) {
        case 0x1ab834u: goto label_1ab834;
        default: break;
    }

    ctx->pc = 0x1ab818u;

    // 0x1ab818: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ab818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ab81c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ab81cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ab820: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ab820u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab824: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ab824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ab828: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ab828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ab82c: 0xc06c0a8  jal         func_1B02A0
    ctx->pc = 0x1AB82Cu;
    SET_GPR_U32(ctx, 31, 0x1AB834u);
    ctx->pc = 0x1AB830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB82Cu;
            // 0x1ab830: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B02A0u;
    if (runtime->hasFunction(0x1B02A0u)) {
        auto targetFn = runtime->lookupFunction(0x1B02A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB834u; }
        if (ctx->pc != 0x1AB834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B02A0_0x1b02a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB834u; }
        if (ctx->pc != 0x1AB834u) { return; }
    }
    ctx->pc = 0x1AB834u;
label_1ab834:
    // 0x1ab834: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1AB834u;
    {
        const bool branch_taken_0x1ab834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB834u;
            // 0x1ab838: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab834) {
            ctx->pc = 0x1AB870u;
            goto label_1ab870;
        }
    }
    ctx->pc = 0x1AB83Cu;
    // 0x1ab83c: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x1AB83Cu;
    {
        const bool branch_taken_0x1ab83c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB83Cu;
            // 0x1ab840: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab83c) {
            ctx->pc = 0x1AB870u;
            goto label_1ab870;
        }
    }
    ctx->pc = 0x1AB844u;
    // 0x1ab844: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x1ab844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1ab848: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AB848u;
    {
        const bool branch_taken_0x1ab848 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ab848) {
            ctx->pc = 0x1AB84Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB848u;
            // 0x1ab84c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AB870u;
            goto label_1ab870;
        }
    }
    ctx->pc = 0x1AB850u;
    // 0x1ab850: 0x56230007  bnel        $s1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AB850u;
    {
        const bool branch_taken_0x1ab850 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ab850) {
            ctx->pc = 0x1AB854u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB850u;
            // 0x1ab854: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AB870u;
            goto label_1ab870;
        }
    }
    ctx->pc = 0x1AB858u;
    // 0x1ab858: 0x8e03096c  lw          $v1, 0x96C($s0)
    ctx->pc = 0x1ab858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2412)));
    // 0x1ab85c: 0x8e040968  lw          $a0, 0x968($s0)
    ctx->pc = 0x1ab85cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2408)));
    // 0x1ab860: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x1ab860u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1ab864: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AB864u;
    {
        const bool branch_taken_0x1ab864 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AB868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB864u;
            // 0x1ab868: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab864) {
            ctx->pc = 0x1AB874u;
            goto label_1ab874;
        }
    }
    ctx->pc = 0x1AB86Cu;
    // 0x1ab86c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ab86cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ab870:
    // 0x1ab870: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ab870u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ab874:
    // 0x1ab874: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ab874u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ab878: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ab878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ab87c: 0x3e00008  jr          $ra
    ctx->pc = 0x1AB87Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB87Cu;
            // 0x1ab880: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AB884u;
    // 0x1ab884: 0x0  nop
    ctx->pc = 0x1ab884u;
    // NOP
}
