#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CE4B0
// Address: 0x1ce4b0 - 0x1ce508
void sub_001CE4B0_0x1ce4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CE4B0_0x1ce4b0");
#endif

    switch (ctx->pc) {
        case 0x1ce4f4u: goto label_1ce4f4;
        default: break;
    }

    ctx->pc = 0x1ce4b0u;

    // 0x1ce4b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ce4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ce4b4: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1ce4b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce4b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ce4b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ce4bc: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x1ce4bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce4c0: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x1ce4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1ce4c4: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x1ce4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1ce4c8: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1ce4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1ce4cc: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CE4CCu;
    {
        const bool branch_taken_0x1ce4cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE4D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE4CCu;
            // 0x1ce4d0: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce4cc) {
            ctx->pc = 0x1CE4F4u;
            goto label_1ce4f4;
        }
    }
    ctx->pc = 0x1CE4D4u;
    // 0x1ce4d4: 0x4c00003  bltz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CE4D4u;
    {
        const bool branch_taken_0x1ce4d4 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x1CE4D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE4D4u;
            // 0x1ce4d8: 0x46102a  slt         $v0, $v0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce4d4) {
            ctx->pc = 0x1CE4E4u;
            goto label_1ce4e4;
        }
    }
    ctx->pc = 0x1CE4DCu;
    // 0x1ce4dc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CE4DCu;
    {
        const bool branch_taken_0x1ce4dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce4dc) {
            ctx->pc = 0x1CE4ECu;
            goto label_1ce4ec;
        }
    }
    ctx->pc = 0x1CE4E4u;
label_1ce4e4:
    // 0x1ce4e4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1CE4E4u;
    {
        const bool branch_taken_0x1ce4e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE4E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE4E4u;
            // 0x1ce4e8: 0x2402fde1  addiu       $v0, $zero, -0x21F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966753));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce4e4) {
            ctx->pc = 0x1CE4F8u;
            goto label_1ce4f8;
        }
    }
    ctx->pc = 0x1CE4ECu;
label_1ce4ec:
    // 0x1ce4ec: 0xc04a508  jal         func_129420
    ctx->pc = 0x1CE4ECu;
    SET_GPR_U32(ctx, 31, 0x1CE4F4u);
    ctx->pc = 0x1CE4F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE4ECu;
            // 0x1ce4f0: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE4F4u; }
        if (ctx->pc != 0x1CE4F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE4F4u; }
        if (ctx->pc != 0x1CE4F4u) { return; }
    }
    ctx->pc = 0x1CE4F4u;
label_1ce4f4:
    // 0x1ce4f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ce4f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ce4f8:
    // 0x1ce4f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ce4f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ce4fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE4FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE4FCu;
            // 0x1ce500: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CE504u;
    // 0x1ce504: 0x0  nop
    ctx->pc = 0x1ce504u;
    // NOP
}
