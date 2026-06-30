#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002328D0
// Address: 0x2328d0 - 0x232940
void sub_002328D0_0x2328d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002328D0_0x2328d0");
#endif

    switch (ctx->pc) {
        case 0x232908u: goto label_232908;
        default: break;
    }

    ctx->pc = 0x2328d0u;

    // 0x2328d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2328d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2328d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2328d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2328d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2328d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2328dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2328dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2328e0: 0x8c830130  lw          $v1, 0x130($a0)
    ctx->pc = 0x2328e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x2328e4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2328e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2328e8: 0x8c85012c  lw          $a1, 0x12C($a0)
    ctx->pc = 0x2328e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 300)));
    // 0x2328ec: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x2328ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
    // 0x2328f0: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x2328f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x2328f4: 0x14a30004  bne         $a1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2328F4u;
    {
        const bool branch_taken_0x2328f4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x2328F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2328F4u;
            // 0x2328f8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2328f4) {
            ctx->pc = 0x232908u;
            goto label_232908;
        }
    }
    ctx->pc = 0x2328FCu;
    // 0x2328fc: 0x26240128  addiu       $a0, $s1, 0x128
    ctx->pc = 0x2328fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 296));
    // 0x232900: 0xc0a728c  jal         func_29CA30
    ctx->pc = 0x232900u;
    SET_GPR_U32(ctx, 31, 0x232908u);
    ctx->pc = 0x232904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232900u;
            // 0x232904: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232908u; }
        if (ctx->pc != 0x232908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232908u; }
        if (ctx->pc != 0x232908u) { return; }
    }
    ctx->pc = 0x232908u;
label_232908:
    // 0x232908: 0x8e24012c  lw          $a0, 0x12C($s1)
    ctx->pc = 0x232908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 300)));
    // 0x23290c: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x23290cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x232910: 0xae23012c  sw          $v1, 0x12C($s1)
    ctx->pc = 0x232910u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 3));
    // 0x232914: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x232914u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x232918: 0x8e230128  lw          $v1, 0x128($s1)
    ctx->pc = 0x232918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
    // 0x23291c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x23291cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x232920: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x232920u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x232924: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x232924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x232928: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x232928u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23292c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23292cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x232930: 0x3e00008  jr          $ra
    ctx->pc = 0x232930u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x232934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232930u;
            // 0x232934: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x232938u;
    // 0x232938: 0x0  nop
    ctx->pc = 0x232938u;
    // NOP
    // 0x23293c: 0x0  nop
    ctx->pc = 0x23293cu;
    // NOP
}
