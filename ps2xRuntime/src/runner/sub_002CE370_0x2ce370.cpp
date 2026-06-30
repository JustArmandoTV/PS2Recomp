#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CE370
// Address: 0x2ce370 - 0x2ce3b0
void sub_002CE370_0x2ce370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CE370_0x2ce370");
#endif

    switch (ctx->pc) {
        case 0x2ce38cu: goto label_2ce38c;
        case 0x2ce398u: goto label_2ce398;
        default: break;
    }

    ctx->pc = 0x2ce370u;

    // 0x2ce370: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ce370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ce374: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2ce374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2ce378: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ce378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ce37c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ce37cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ce380: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ce380u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce384: 0xc0b3964  jal         func_2CE590
    ctx->pc = 0x2CE384u;
    SET_GPR_U32(ctx, 31, 0x2CE38Cu);
    ctx->pc = 0x2CE388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE384u;
            // 0x2ce388: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CE590u;
    if (runtime->hasFunction(0x2CE590u)) {
        auto targetFn = runtime->lookupFunction(0x2CE590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE38Cu; }
        if (ctx->pc != 0x2CE38Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CE590_0x2ce590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE38Cu; }
        if (ctx->pc != 0x2CE38Cu) { return; }
    }
    ctx->pc = 0x2CE38Cu;
label_2ce38c:
    // 0x2ce38c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ce38cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce390: 0xc0b38ec  jal         func_2CE3B0
    ctx->pc = 0x2CE390u;
    SET_GPR_U32(ctx, 31, 0x2CE398u);
    ctx->pc = 0x2CE394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE390u;
            // 0x2ce394: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CE3B0u;
    if (runtime->hasFunction(0x2CE3B0u)) {
        auto targetFn = runtime->lookupFunction(0x2CE3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE398u; }
        if (ctx->pc != 0x2CE398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CE3B0_0x2ce3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE398u; }
        if (ctx->pc != 0x2CE398u) { return; }
    }
    ctx->pc = 0x2CE398u;
label_2ce398:
    // 0x2ce398: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2ce398u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce39c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ce39cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ce3a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ce3a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ce3a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ce3a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ce3a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2CE3A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CE3ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE3A8u;
            // 0x2ce3ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CE3B0u;
}
