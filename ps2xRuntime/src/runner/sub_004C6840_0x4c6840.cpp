#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004C6840
// Address: 0x4c6840 - 0x4c6890
void sub_004C6840_0x4c6840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C6840_0x4c6840");
#endif

    switch (ctx->pc) {
        case 0x4c6878u: goto label_4c6878;
        default: break;
    }

    ctx->pc = 0x4c6840u;

    // 0x4c6840: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4c6840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4c6844: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4c6844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4c6848: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4c6848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4c684c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4c684cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c6850: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x4C6850u;
    {
        const bool branch_taken_0x4c6850 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c6850) {
            ctx->pc = 0x4C6854u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C6850u;
            // 0x4c6854: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C687Cu;
            goto label_4c687c;
        }
    }
    ctx->pc = 0x4C6858u;
    // 0x4c6858: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x4c6858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x4c685c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4c685cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4c6860: 0x246316d0  addiu       $v1, $v1, 0x16D0
    ctx->pc = 0x4c6860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5840));
    // 0x4c6864: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4c6864u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x4c6868: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4C6868u;
    {
        const bool branch_taken_0x4c6868 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x4C686Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C6868u;
            // 0x4c686c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6868) {
            ctx->pc = 0x4C6878u;
            goto label_4c6878;
        }
    }
    ctx->pc = 0x4C6870u;
    // 0x4c6870: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4C6870u;
    SET_GPR_U32(ctx, 31, 0x4C6878u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C6878u; }
        if (ctx->pc != 0x4C6878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C6878u; }
        if (ctx->pc != 0x4C6878u) { return; }
    }
    ctx->pc = 0x4C6878u;
label_4c6878:
    // 0x4c6878: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4c6878u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c687c:
    // 0x4c687c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4c687cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c6880: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4c6880u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c6884: 0x3e00008  jr          $ra
    ctx->pc = 0x4C6884u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C6888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C6884u;
            // 0x4c6888: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C688Cu;
    // 0x4c688c: 0x0  nop
    ctx->pc = 0x4c688cu;
    // NOP
}
