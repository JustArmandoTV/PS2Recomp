#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CE508
// Address: 0x1ce508 - 0x1ce560
void sub_001CE508_0x1ce508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CE508_0x1ce508");
#endif

    switch (ctx->pc) {
        case 0x1ce54cu: goto label_1ce54c;
        default: break;
    }

    ctx->pc = 0x1ce508u;

    // 0x1ce508: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ce508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ce50c: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x1ce50cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1ce510: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ce510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ce514: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x1ce514u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce518: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x1ce518u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce51c: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x1ce51cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1ce520: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1ce520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce524: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CE524u;
    {
        const bool branch_taken_0x1ce524 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE524u;
            // 0x1ce528: 0x471023  subu        $v0, $v0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce524) {
            ctx->pc = 0x1CE54Cu;
            goto label_1ce54c;
        }
    }
    ctx->pc = 0x1CE52Cu;
    // 0x1ce52c: 0x4c00003  bltz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CE52Cu;
    {
        const bool branch_taken_0x1ce52c = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x1CE530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE52Cu;
            // 0x1ce530: 0x46102a  slt         $v0, $v0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce52c) {
            ctx->pc = 0x1CE53Cu;
            goto label_1ce53c;
        }
    }
    ctx->pc = 0x1CE534u;
    // 0x1ce534: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CE534u;
    {
        const bool branch_taken_0x1ce534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce534) {
            ctx->pc = 0x1CE544u;
            goto label_1ce544;
        }
    }
    ctx->pc = 0x1CE53Cu;
label_1ce53c:
    // 0x1ce53c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1CE53Cu;
    {
        const bool branch_taken_0x1ce53c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE53Cu;
            // 0x1ce540: 0x2402fde1  addiu       $v0, $zero, -0x21F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966753));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce53c) {
            ctx->pc = 0x1CE550u;
            goto label_1ce550;
        }
    }
    ctx->pc = 0x1CE544u;
label_1ce544:
    // 0x1ce544: 0xc04a508  jal         func_129420
    ctx->pc = 0x1CE544u;
    SET_GPR_U32(ctx, 31, 0x1CE54Cu);
    ctx->pc = 0x1CE548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE544u;
            // 0x1ce548: 0xe32821  addu        $a1, $a3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE54Cu; }
        if (ctx->pc != 0x1CE54Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE54Cu; }
        if (ctx->pc != 0x1CE54Cu) { return; }
    }
    ctx->pc = 0x1CE54Cu;
label_1ce54c:
    // 0x1ce54c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ce54cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ce550:
    // 0x1ce550: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ce550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ce554: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE554u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE554u;
            // 0x1ce558: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CE55Cu;
    // 0x1ce55c: 0x0  nop
    ctx->pc = 0x1ce55cu;
    // NOP
}
