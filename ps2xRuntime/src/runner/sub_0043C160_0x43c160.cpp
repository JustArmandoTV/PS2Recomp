#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0043C160
// Address: 0x43c160 - 0x43c1c0
void sub_0043C160_0x43c160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043C160_0x43c160");
#endif

    switch (ctx->pc) {
        case 0x43c1a0u: goto label_43c1a0;
        default: break;
    }

    ctx->pc = 0x43c160u;

    // 0x43c160: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x43c160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x43c164: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x43c164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x43c168: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x43c168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x43c16c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x43c16cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43c170: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x43C170u;
    {
        const bool branch_taken_0x43c170 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x43c170) {
            ctx->pc = 0x43C174u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43C170u;
            // 0x43c174: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43C1A4u;
            goto label_43c1a4;
        }
    }
    ctx->pc = 0x43C178u;
    // 0x43c178: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x43c178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x43c17c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x43c17cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x43c180: 0x2442cff8  addiu       $v0, $v0, -0x3008
    ctx->pc = 0x43c180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955000));
    // 0x43c184: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x43c184u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x43c188: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x43c188u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x43c18c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x43c18cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x43c190: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x43C190u;
    {
        const bool branch_taken_0x43c190 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x43C194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43C190u;
            // 0x43c194: 0xac400d08  sw          $zero, 0xD08($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 3336), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43c190) {
            ctx->pc = 0x43C1A0u;
            goto label_43c1a0;
        }
    }
    ctx->pc = 0x43C198u;
    // 0x43c198: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x43C198u;
    SET_GPR_U32(ctx, 31, 0x43C1A0u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43C1A0u; }
        if (ctx->pc != 0x43C1A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43C1A0u; }
        if (ctx->pc != 0x43C1A0u) { return; }
    }
    ctx->pc = 0x43C1A0u;
label_43c1a0:
    // 0x43c1a0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x43c1a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_43c1a4:
    // 0x43c1a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x43c1a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x43c1a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x43c1a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x43c1ac: 0x3e00008  jr          $ra
    ctx->pc = 0x43C1ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43C1B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43C1ACu;
            // 0x43c1b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x43C1B4u;
    // 0x43c1b4: 0x0  nop
    ctx->pc = 0x43c1b4u;
    // NOP
    // 0x43c1b8: 0x0  nop
    ctx->pc = 0x43c1b8u;
    // NOP
    // 0x43c1bc: 0x0  nop
    ctx->pc = 0x43c1bcu;
    // NOP
}
