#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00336830
// Address: 0x336830 - 0x336890
void sub_00336830_0x336830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00336830_0x336830");
#endif

    switch (ctx->pc) {
        case 0x336870u: goto label_336870;
        default: break;
    }

    ctx->pc = 0x336830u;

    // 0x336830: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x336830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x336834: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x336834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x336838: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x336838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33683c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33683cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336840: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x336840u;
    {
        const bool branch_taken_0x336840 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x336840) {
            ctx->pc = 0x336844u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x336840u;
            // 0x336844: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x336874u;
            goto label_336874;
        }
    }
    ctx->pc = 0x336848u;
    // 0x336848: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x336848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x33684c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x33684cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x336850: 0x24424c68  addiu       $v0, $v0, 0x4C68
    ctx->pc = 0x336850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19560));
    // 0x336854: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x336854u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x336858: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x336858u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x33685c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x33685cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x336860: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x336860u;
    {
        const bool branch_taken_0x336860 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x336864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x336860u;
            // 0x336864: 0xac403e68  sw          $zero, 0x3E68($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 15976), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336860) {
            ctx->pc = 0x336870u;
            goto label_336870;
        }
    }
    ctx->pc = 0x336868u;
    // 0x336868: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x336868u;
    SET_GPR_U32(ctx, 31, 0x336870u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336870u; }
        if (ctx->pc != 0x336870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336870u; }
        if (ctx->pc != 0x336870u) { return; }
    }
    ctx->pc = 0x336870u;
label_336870:
    // 0x336870: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x336870u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_336874:
    // 0x336874: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x336874u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x336878: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x336878u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33687c: 0x3e00008  jr          $ra
    ctx->pc = 0x33687Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x336880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33687Cu;
            // 0x336880: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x336884u;
    // 0x336884: 0x0  nop
    ctx->pc = 0x336884u;
    // NOP
    // 0x336888: 0x0  nop
    ctx->pc = 0x336888u;
    // NOP
    // 0x33688c: 0x0  nop
    ctx->pc = 0x33688cu;
    // NOP
}
