#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0043E4B0
// Address: 0x43e4b0 - 0x43e510
void sub_0043E4B0_0x43e4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043E4B0_0x43e4b0");
#endif

    switch (ctx->pc) {
        case 0x43e4f0u: goto label_43e4f0;
        default: break;
    }

    ctx->pc = 0x43e4b0u;

    // 0x43e4b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x43e4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x43e4b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x43e4b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x43e4b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x43e4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x43e4bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x43e4bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43e4c0: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x43E4C0u;
    {
        const bool branch_taken_0x43e4c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x43e4c0) {
            ctx->pc = 0x43E4C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43E4C0u;
            // 0x43e4c4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43E4F4u;
            goto label_43e4f4;
        }
    }
    ctx->pc = 0x43E4C8u;
    // 0x43e4c8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x43e4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x43e4cc: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x43e4ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x43e4d0: 0x2442d250  addiu       $v0, $v0, -0x2DB0
    ctx->pc = 0x43e4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955600));
    // 0x43e4d4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x43e4d4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x43e4d8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x43e4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x43e4dc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x43e4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x43e4e0: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x43E4E0u;
    {
        const bool branch_taken_0x43e4e0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x43E4E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43E4E0u;
            // 0x43e4e4: 0xac400d00  sw          $zero, 0xD00($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 3328), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43e4e0) {
            ctx->pc = 0x43E4F0u;
            goto label_43e4f0;
        }
    }
    ctx->pc = 0x43E4E8u;
    // 0x43e4e8: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x43E4E8u;
    SET_GPR_U32(ctx, 31, 0x43E4F0u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43E4F0u; }
        if (ctx->pc != 0x43E4F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43E4F0u; }
        if (ctx->pc != 0x43E4F0u) { return; }
    }
    ctx->pc = 0x43E4F0u;
label_43e4f0:
    // 0x43e4f0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x43e4f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_43e4f4:
    // 0x43e4f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x43e4f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x43e4f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x43e4f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x43e4fc: 0x3e00008  jr          $ra
    ctx->pc = 0x43E4FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43E500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43E4FCu;
            // 0x43e500: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x43E504u;
    // 0x43e504: 0x0  nop
    ctx->pc = 0x43e504u;
    // NOP
    // 0x43e508: 0x0  nop
    ctx->pc = 0x43e508u;
    // NOP
    // 0x43e50c: 0x0  nop
    ctx->pc = 0x43e50cu;
    // NOP
}
