#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002717C0
// Address: 0x2717c0 - 0x271810
void sub_002717C0_0x2717c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002717C0_0x2717c0");
#endif

    switch (ctx->pc) {
        case 0x2717ecu: goto label_2717ec;
        default: break;
    }

    ctx->pc = 0x2717c0u;

    // 0x2717c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2717c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2717c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2717c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2717c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2717c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2717cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2717ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2717d0: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2717D0u;
    {
        const bool branch_taken_0x2717d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2717D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2717D0u;
            // 0x2717d4: 0x5143c  dsll32      $v0, $a1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2717d0) {
            ctx->pc = 0x2717F0u;
            goto label_2717f0;
        }
    }
    ctx->pc = 0x2717D8u;
    // 0x2717d8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2717d8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2717dc: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2717DCu;
    {
        const bool branch_taken_0x2717dc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2717dc) {
            ctx->pc = 0x2717F0u;
            goto label_2717f0;
        }
    }
    ctx->pc = 0x2717E4u;
    // 0x2717e4: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2717E4u;
    SET_GPR_U32(ctx, 31, 0x2717ECu);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2717ECu; }
        if (ctx->pc != 0x2717ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2717ECu; }
        if (ctx->pc != 0x2717ECu) { return; }
    }
    ctx->pc = 0x2717ECu;
label_2717ec:
    // 0x2717ec: 0x0  nop
    ctx->pc = 0x2717ecu;
    // NOP
label_2717f0:
    // 0x2717f0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2717f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2717f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2717f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2717f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2717f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2717fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2717FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x271800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2717FCu;
            // 0x271800: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x271804u;
    // 0x271804: 0x0  nop
    ctx->pc = 0x271804u;
    // NOP
    // 0x271808: 0x0  nop
    ctx->pc = 0x271808u;
    // NOP
    // 0x27180c: 0x0  nop
    ctx->pc = 0x27180cu;
    // NOP
}
