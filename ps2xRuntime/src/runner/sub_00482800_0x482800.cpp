#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00482800
// Address: 0x482800 - 0x482860
void sub_00482800_0x482800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00482800_0x482800");
#endif

    switch (ctx->pc) {
        case 0x482840u: goto label_482840;
        default: break;
    }

    ctx->pc = 0x482800u;

    // 0x482800: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x482800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x482804: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x482804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x482808: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x482808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x48280c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x48280cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x482810: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x482810u;
    {
        const bool branch_taken_0x482810 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x482810) {
            ctx->pc = 0x482814u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x482810u;
            // 0x482814: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x482844u;
            goto label_482844;
        }
    }
    ctx->pc = 0x482818u;
    // 0x482818: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x482818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x48281c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x48281cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x482820: 0x2442f0d8  addiu       $v0, $v0, -0xF28
    ctx->pc = 0x482820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963416));
    // 0x482824: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x482824u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x482828: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x482828u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x48282c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x48282cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x482830: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x482830u;
    {
        const bool branch_taken_0x482830 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x482834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x482830u;
            // 0x482834: 0xac407b90  sw          $zero, 0x7B90($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 31632), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x482830) {
            ctx->pc = 0x482840u;
            goto label_482840;
        }
    }
    ctx->pc = 0x482838u;
    // 0x482838: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x482838u;
    SET_GPR_U32(ctx, 31, 0x482840u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482840u; }
        if (ctx->pc != 0x482840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482840u; }
        if (ctx->pc != 0x482840u) { return; }
    }
    ctx->pc = 0x482840u;
label_482840:
    // 0x482840: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x482840u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_482844:
    // 0x482844: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x482844u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x482848: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x482848u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48284c: 0x3e00008  jr          $ra
    ctx->pc = 0x48284Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x482850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48284Cu;
            // 0x482850: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x482854u;
    // 0x482854: 0x0  nop
    ctx->pc = 0x482854u;
    // NOP
    // 0x482858: 0x0  nop
    ctx->pc = 0x482858u;
    // NOP
    // 0x48285c: 0x0  nop
    ctx->pc = 0x48285cu;
    // NOP
}
