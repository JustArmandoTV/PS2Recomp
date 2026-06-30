#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BCEB0
// Address: 0x1bceb0 - 0x1bcf20
void sub_001BCEB0_0x1bceb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BCEB0_0x1bceb0");
#endif

    switch (ctx->pc) {
        case 0x1bcec8u: goto label_1bcec8;
        default: break;
    }

    ctx->pc = 0x1bceb0u;

    // 0x1bceb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bceb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bceb4: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1bceb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1bceb8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bceb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bcebc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1bcebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1bcec0: 0xc06f2e6  jal         func_1BCB98
    ctx->pc = 0x1BCEC0u;
    SET_GPR_U32(ctx, 31, 0x1BCEC8u);
    ctx->pc = 0x1BCEC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCEC0u;
            // 0x1bcec4: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BCB98u;
    if (runtime->hasFunction(0x1BCB98u)) {
        auto targetFn = runtime->lookupFunction(0x1BCB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCEC8u; }
        if (ctx->pc != 0x1BCEC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BCB98_0x1bcb98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCEC8u; }
        if (ctx->pc != 0x1BCEC8u) { return; }
    }
    ctx->pc = 0x1BCEC8u;
label_1bcec8:
    // 0x1bcec8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1bcec8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcecc: 0x50c00010  beql        $a2, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x1BCECCu;
    {
        const bool branch_taken_0x1bcecc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bcecc) {
            ctx->pc = 0x1BCED0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCECCu;
            // 0x1bced0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BCF10u;
            goto label_1bcf10;
        }
    }
    ctx->pc = 0x1BCED4u;
    // 0x1bced4: 0x90c7000c  lbu         $a3, 0xC($a2)
    ctx->pc = 0x1bced4u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1bced8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bced8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bcedc: 0x90c4000d  lbu         $a0, 0xD($a2)
    ctx->pc = 0x1bcedcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 13)));
    // 0x1bcee0: 0x71a00  sll         $v1, $a3, 8
    ctx->pc = 0x1bcee0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1bcee4: 0x90c5000e  lbu         $a1, 0xE($a2)
    ctx->pc = 0x1bcee4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 14)));
    // 0x1bcee8: 0x643821  addu        $a3, $v1, $a0
    ctx->pc = 0x1bcee8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1bceec: 0x90c6000f  lbu         $a2, 0xF($a2)
    ctx->pc = 0x1bceecu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 15)));
    // 0x1bcef0: 0x71a00  sll         $v1, $a3, 8
    ctx->pc = 0x1bcef0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1bcef4: 0x653821  addu        $a3, $v1, $a1
    ctx->pc = 0x1bcef4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1bcef8: 0x72200  sll         $a0, $a3, 8
    ctx->pc = 0x1bcef8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1bcefc: 0x863821  addu        $a3, $a0, $a2
    ctx->pc = 0x1bcefcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1bcf00: 0x71827  nor         $v1, $zero, $a3
    ctx->pc = 0x1bcf00u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 7)));
    // 0x1bcf04: 0x3380a  movz        $a3, $zero, $v1
    ctx->pc = 0x1bcf04u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
    // 0x1bcf08: 0xae070000  sw          $a3, 0x0($s0)
    ctx->pc = 0x1bcf08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 7));
    // 0x1bcf0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bcf0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bcf10:
    // 0x1bcf10: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1bcf10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bcf14: 0x3e00008  jr          $ra
    ctx->pc = 0x1BCF14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BCF18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCF14u;
            // 0x1bcf18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BCF1Cu;
    // 0x1bcf1c: 0x0  nop
    ctx->pc = 0x1bcf1cu;
    // NOP
}
