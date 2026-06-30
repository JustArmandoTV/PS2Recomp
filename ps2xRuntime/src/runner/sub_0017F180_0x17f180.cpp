#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017F180
// Address: 0x17f180 - 0x17f1f0
void sub_0017F180_0x17f180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017F180_0x17f180");
#endif

    switch (ctx->pc) {
        case 0x17f194u: goto label_17f194;
        case 0x17f1b8u: goto label_17f1b8;
        default: break;
    }

    ctx->pc = 0x17f180u;

    // 0x17f180: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17f180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17f184: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17f184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17f188: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x17f188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x17f18c: 0xc04b02e  jal         func_12C0B8
    ctx->pc = 0x17F18Cu;
    SET_GPR_U32(ctx, 31, 0x17F194u);
    ctx->pc = 0x17F190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F18Cu;
            // 0x17f190: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C0B8u;
    if (runtime->hasFunction(0x12C0B8u)) {
        auto targetFn = runtime->lookupFunction(0x12C0B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F194u; }
        if (ctx->pc != 0x17F194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C0B8_0x12c0b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F194u; }
        if (ctx->pc != 0x17F194u) { return; }
    }
    ctx->pc = 0x17F194u;
label_17f194:
    // 0x17f194: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x17f194u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f198: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x17f198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x17f19c: 0x2cc30011  sltiu       $v1, $a2, 0x11
    ctx->pc = 0x17f19cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x17f1a0: 0x43300a  movz        $a2, $v0, $v1
    ctx->pc = 0x17f1a0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x17f1a4: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x17F1A4u;
    {
        const bool branch_taken_0x17f1a4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F1A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F1A4u;
            // 0x17f1a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f1a4) {
            ctx->pc = 0x17F1DCu;
            goto label_17f1dc;
        }
    }
    ctx->pc = 0x17F1ACu;
    // 0x17f1ac: 0x2407003a  addiu       $a3, $zero, 0x3A
    ctx->pc = 0x17f1acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x17f1b0: 0x2051021  addu        $v0, $s0, $a1
    ctx->pc = 0x17f1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x17f1b4: 0x0  nop
    ctx->pc = 0x17f1b4u;
    // NOP
label_17f1b8:
    // 0x17f1b8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x17f1b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x17f1bc: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x17f1bcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17f1c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17f1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17f1c4: 0x10670006  beq         $v1, $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x17F1C4u;
    {
        const bool branch_taken_0x17f1c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        ctx->pc = 0x17F1C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F1C4u;
            // 0x17f1c8: 0xa6202b  sltu        $a0, $a1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f1c4) {
            ctx->pc = 0x17F1E0u;
            goto label_17f1e0;
        }
    }
    ctx->pc = 0x17F1CCu;
    // 0x17f1cc: 0x0  nop
    ctx->pc = 0x17f1ccu;
    // NOP
    // 0x17f1d0: 0x0  nop
    ctx->pc = 0x17f1d0u;
    // NOP
    // 0x17f1d4: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x17F1D4u;
    {
        const bool branch_taken_0x17f1d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x17F1D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F1D4u;
            // 0x17f1d8: 0x2051021  addu        $v0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f1d4) {
            ctx->pc = 0x17F1B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17f1b8;
        }
    }
    ctx->pc = 0x17F1DCu;
label_17f1dc:
    // 0x17f1dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17f1dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17f1e0:
    // 0x17f1e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17f1e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17f1e4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x17f1e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17f1e8: 0x3e00008  jr          $ra
    ctx->pc = 0x17F1E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F1ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F1E8u;
            // 0x17f1ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17F1F0u;
}
