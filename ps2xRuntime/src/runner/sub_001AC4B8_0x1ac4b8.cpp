#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AC4B8
// Address: 0x1ac4b8 - 0x1ac508
void sub_001AC4B8_0x1ac4b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AC4B8_0x1ac4b8");
#endif

    switch (ctx->pc) {
        case 0x1ac4d4u: goto label_1ac4d4;
        case 0x1ac4ecu: goto label_1ac4ec;
        default: break;
    }

    ctx->pc = 0x1ac4b8u;

    // 0x1ac4b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ac4b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ac4bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ac4bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ac4c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ac4c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac4c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ac4c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ac4c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ac4c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ac4cc: 0xc06b142  jal         func_1AC508
    ctx->pc = 0x1AC4CCu;
    SET_GPR_U32(ctx, 31, 0x1AC4D4u);
    ctx->pc = 0x1AC4D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC4CCu;
            // 0x1ac4d0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AC508u;
    if (runtime->hasFunction(0x1AC508u)) {
        auto targetFn = runtime->lookupFunction(0x1AC508u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC4D4u; }
        if (ctx->pc != 0x1AC4D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AC508_0x1ac508(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC4D4u; }
        if (ctx->pc != 0x1AC4D4u) { return; }
    }
    ctx->pc = 0x1AC4D4u;
label_1ac4d4:
    // 0x1ac4d4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1ac4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ac4d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ac4d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac4dc: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AC4DCu;
    {
        const bool branch_taken_0x1ac4dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1AC4E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC4DCu;
            // 0x1ac4e0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac4dc) {
            ctx->pc = 0x1AC4F0u;
            goto label_1ac4f0;
        }
    }
    ctx->pc = 0x1AC4E4u;
    // 0x1ac4e4: 0xc06b1b8  jal         func_1AC6E0
    ctx->pc = 0x1AC4E4u;
    SET_GPR_U32(ctx, 31, 0x1AC4ECu);
    ctx->pc = 0x1AC6E0u;
    if (runtime->hasFunction(0x1AC6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1AC6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC4ECu; }
        if (ctx->pc != 0x1AC4ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AC6E0_0x1ac6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC4ECu; }
        if (ctx->pc != 0x1AC4ECu) { return; }
    }
    ctx->pc = 0x1AC4ECu;
label_1ac4ec:
    // 0x1ac4ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ac4ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ac4f0:
    // 0x1ac4f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ac4f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ac4f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ac4f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ac4f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ac4f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ac4fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1AC4FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC4FCu;
            // 0x1ac500: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AC504u;
    // 0x1ac504: 0x0  nop
    ctx->pc = 0x1ac504u;
    // NOP
}
