#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016CFC0
// Address: 0x16cfc0 - 0x16d028
void sub_0016CFC0_0x16cfc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016CFC0_0x16cfc0");
#endif

    switch (ctx->pc) {
        case 0x16cfe4u: goto label_16cfe4;
        case 0x16d008u: goto label_16d008;
        default: break;
    }

    ctx->pc = 0x16cfc0u;

    // 0x16cfc0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x16cfc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x16cfc4: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x16cfc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x16cfc8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16cfc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cfcc: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x16cfccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x16cfd0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x16cfd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cfd4: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x16CFD4u;
    {
        const bool branch_taken_0x16cfd4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CFD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16CFD4u;
            // 0x16cfd8: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cfd4) {
            ctx->pc = 0x16D00Cu;
            goto label_16d00c;
        }
    }
    ctx->pc = 0x16CFDCu;
    // 0x16cfdc: 0xc043098  jal         func_10C260
    ctx->pc = 0x16CFDCu;
    SET_GPR_U32(ctx, 31, 0x16CFE4u);
    ctx->pc = 0x16CFE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16CFDCu;
            // 0x16cfe0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C260u;
    if (runtime->hasFunction(0x10C260u)) {
        auto targetFn = runtime->lookupFunction(0x10C260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CFE4u; }
        if (ctx->pc != 0x16CFE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C260_0x10c260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CFE4u; }
        if (ctx->pc != 0x16CFE4u) { return; }
    }
    ctx->pc = 0x16CFE4u;
label_16cfe4:
    // 0x16cfe4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16cfe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cfe8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x16cfe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16cfec: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x16cfecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x16cff0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16CFF0u;
    {
        const bool branch_taken_0x16cff0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x16CFF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16CFF0u;
            // 0x16cff4: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cff0) {
            ctx->pc = 0x16D000u;
            goto label_16d000;
        }
    }
    ctx->pc = 0x16CFF8u;
    // 0x16cff8: 0x14650005  bne         $v1, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x16CFF8u;
    {
        const bool branch_taken_0x16cff8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x16CFFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16CFF8u;
            // 0x16cffc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cff8) {
            ctx->pc = 0x16D010u;
            goto label_16d010;
        }
    }
    ctx->pc = 0x16D000u;
label_16d000:
    // 0x16d000: 0xc0430bc  jal         func_10C2F0
    ctx->pc = 0x16D000u;
    SET_GPR_U32(ctx, 31, 0x16D008u);
    ctx->pc = 0x10C2F0u;
    if (runtime->hasFunction(0x10C2F0u)) {
        auto targetFn = runtime->lookupFunction(0x10C2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D008u; }
        if (ctx->pc != 0x16D008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C2F0_0x10c2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D008u; }
        if (ctx->pc != 0x16D008u) { return; }
    }
    ctx->pc = 0x16D008u;
label_16d008:
    // 0x16d008: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x16d008u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16d00c:
    // 0x16d00c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x16d00cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16d010:
    // 0x16d010: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x16d010u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16d014: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x16d014u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16d018: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x16d018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16d01c: 0x3e00008  jr          $ra
    ctx->pc = 0x16D01Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D01Cu;
            // 0x16d020: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16D024u;
    // 0x16d024: 0x0  nop
    ctx->pc = 0x16d024u;
    // NOP
}
