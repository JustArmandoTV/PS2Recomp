#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0051C8C0
// Address: 0x51c8c0 - 0x51c920
void sub_0051C8C0_0x51c8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0051C8C0_0x51c8c0");
#endif

    switch (ctx->pc) {
        case 0x51c900u: goto label_51c900;
        default: break;
    }

    ctx->pc = 0x51c8c0u;

    // 0x51c8c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x51c8c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x51c8c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x51c8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x51c8c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x51c8c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x51c8cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x51c8ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51c8d0: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x51C8D0u;
    {
        const bool branch_taken_0x51c8d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x51c8d0) {
            ctx->pc = 0x51C8D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51C8D0u;
            // 0x51c8d4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51C904u;
            goto label_51c904;
        }
    }
    ctx->pc = 0x51C8D8u;
    // 0x51c8d8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x51c8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x51c8dc: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x51c8dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x51c8e0: 0x24425ae8  addiu       $v0, $v0, 0x5AE8
    ctx->pc = 0x51c8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23272));
    // 0x51c8e4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x51c8e4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x51c8e8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x51c8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x51c8ec: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x51c8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x51c8f0: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x51C8F0u;
    {
        const bool branch_taken_0x51c8f0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x51C8F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51C8F0u;
            // 0x51c8f4: 0xac40e410  sw          $zero, -0x1BF0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294960144), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51c8f0) {
            ctx->pc = 0x51C900u;
            goto label_51c900;
        }
    }
    ctx->pc = 0x51C8F8u;
    // 0x51c8f8: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x51C8F8u;
    SET_GPR_U32(ctx, 31, 0x51C900u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51C900u; }
        if (ctx->pc != 0x51C900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51C900u; }
        if (ctx->pc != 0x51C900u) { return; }
    }
    ctx->pc = 0x51C900u;
label_51c900:
    // 0x51c900: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x51c900u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_51c904:
    // 0x51c904: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x51c904u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x51c908: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x51c908u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x51c90c: 0x3e00008  jr          $ra
    ctx->pc = 0x51C90Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51C910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51C90Cu;
            // 0x51c910: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51C914u;
    // 0x51c914: 0x0  nop
    ctx->pc = 0x51c914u;
    // NOP
    // 0x51c918: 0x0  nop
    ctx->pc = 0x51c918u;
    // NOP
    // 0x51c91c: 0x0  nop
    ctx->pc = 0x51c91cu;
    // NOP
}
