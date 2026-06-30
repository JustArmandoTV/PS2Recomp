#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CF510
// Address: 0x1cf510 - 0x1cf5a0
void sub_001CF510_0x1cf510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CF510_0x1cf510");
#endif

    switch (ctx->pc) {
        case 0x1cf548u: goto label_1cf548;
        case 0x1cf568u: goto label_1cf568;
        default: break;
    }

    ctx->pc = 0x1cf510u;

    // 0x1cf510: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1cf510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1cf514: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1cf514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1cf518: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1cf518u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf51c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cf51cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cf520: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1cf520u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf524: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x1cf524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf528: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1cf528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1cf52c: 0x104080  sll         $t0, $s0, 2
    ctx->pc = 0x1cf52cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1cf530: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1cf530u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf534: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1cf534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1cf538: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x1cf538u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x1cf53c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1cf53cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf540: 0xc0738fe  jal         func_1CE3F8
    ctx->pc = 0x1CF540u;
    SET_GPR_U32(ctx, 31, 0x1CF548u);
    ctx->pc = 0x1CF544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF540u;
            // 0x1cf544: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE3F8u;
    if (runtime->hasFunction(0x1CE3F8u)) {
        auto targetFn = runtime->lookupFunction(0x1CE3F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF548u; }
        if (ctx->pc != 0x1CF548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE3F8_0x1ce3f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF548u; }
        if (ctx->pc != 0x1CF548u) { return; }
    }
    ctx->pc = 0x1CF548u;
label_1cf548:
    // 0x1cf548: 0x440000f  bltz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1CF548u;
    {
        const bool branch_taken_0x1cf548 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1CF54Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF548u;
            // 0x1cf54c: 0x2402fde2  addiu       $v0, $zero, -0x21E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966754));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf548) {
            ctx->pc = 0x1CF588u;
            goto label_1cf588;
        }
    }
    ctx->pc = 0x1CF550u;
    // 0x1cf550: 0x5a00000d  blezl       $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x1CF550u;
    {
        const bool branch_taken_0x1cf550 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x1cf550) {
            ctx->pc = 0x1CF554u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF550u;
            // 0x1cf554: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CF588u;
            goto label_1cf588;
        }
    }
    ctx->pc = 0x1CF558u;
    // 0x1cf558: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1cf558u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf55c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1cf55cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf560: 0x26230004  addiu       $v1, $s1, 0x4
    ctx->pc = 0x1cf560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1cf564: 0x0  nop
    ctx->pc = 0x1cf564u;
    // NOP
label_1cf568:
    // 0x1cf568: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1cf568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cf56c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x1cf56cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1cf570: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1cf570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1cf574: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1cf574u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x1cf578: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x1cf578u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x1cf57c: 0x14e0fffa  bnez        $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1CF57Cu;
    {
        const bool branch_taken_0x1cf57c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cf57c) {
            ctx->pc = 0x1CF568u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1cf568;
        }
    }
    ctx->pc = 0x1CF584u;
    // 0x1cf584: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1cf584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1cf588:
    // 0x1cf588: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1cf588u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cf58c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1cf58cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cf590: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1cf590u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cf594: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cf594u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf598: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF598u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF59Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF598u;
            // 0x1cf59c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CF5A0u;
}
