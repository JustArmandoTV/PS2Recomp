#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0041C7D0
// Address: 0x41c7d0 - 0x41c830
void sub_0041C7D0_0x41c7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041C7D0_0x41c7d0");
#endif

    switch (ctx->pc) {
        case 0x41c810u: goto label_41c810;
        default: break;
    }

    ctx->pc = 0x41c7d0u;

    // 0x41c7d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x41c7d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x41c7d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x41c7d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x41c7d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x41c7d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x41c7dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x41c7dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41c7e0: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x41C7E0u;
    {
        const bool branch_taken_0x41c7e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x41c7e0) {
            ctx->pc = 0x41C7E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41C7E0u;
            // 0x41c7e4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41C814u;
            goto label_41c814;
        }
    }
    ctx->pc = 0x41C7E8u;
    // 0x41c7e8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x41c7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x41c7ec: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x41c7ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x41c7f0: 0x2442b838  addiu       $v0, $v0, -0x47C8
    ctx->pc = 0x41c7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948920));
    // 0x41c7f4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x41c7f4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x41c7f8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x41c7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x41c7fc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x41c7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x41c800: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x41C800u;
    {
        const bool branch_taken_0x41c800 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x41C804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41C800u;
            // 0x41c804: 0xac407330  sw          $zero, 0x7330($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 29488), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41c800) {
            ctx->pc = 0x41C810u;
            goto label_41c810;
        }
    }
    ctx->pc = 0x41C808u;
    // 0x41c808: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x41C808u;
    SET_GPR_U32(ctx, 31, 0x41C810u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41C810u; }
        if (ctx->pc != 0x41C810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41C810u; }
        if (ctx->pc != 0x41C810u) { return; }
    }
    ctx->pc = 0x41C810u;
label_41c810:
    // 0x41c810: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x41c810u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41c814:
    // 0x41c814: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x41c814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x41c818: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x41c818u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41c81c: 0x3e00008  jr          $ra
    ctx->pc = 0x41C81Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41C820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41C81Cu;
            // 0x41c820: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x41C824u;
    // 0x41c824: 0x0  nop
    ctx->pc = 0x41c824u;
    // NOP
    // 0x41c828: 0x0  nop
    ctx->pc = 0x41c828u;
    // NOP
    // 0x41c82c: 0x0  nop
    ctx->pc = 0x41c82cu;
    // NOP
}
