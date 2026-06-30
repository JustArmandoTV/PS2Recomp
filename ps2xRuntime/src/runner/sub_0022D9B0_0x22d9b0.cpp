#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022D9B0
// Address: 0x22d9b0 - 0x22da30
void sub_0022D9B0_0x22d9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022D9B0_0x22d9b0");
#endif

    switch (ctx->pc) {
        case 0x22d9f8u: goto label_22d9f8;
        default: break;
    }

    ctx->pc = 0x22d9b0u;

    // 0x22d9b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22d9b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22d9b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x22d9b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x22d9b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22d9b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22d9bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22d9bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22d9c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22d9c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d9c4: 0xacb10094  sw          $s1, 0x94($a1)
    ctx->pc = 0x22d9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 148), GPR_U32(ctx, 17));
    // 0x22d9c8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x22d9c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d9cc: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x22d9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x22d9d0: 0xa4a3006c  sh          $v1, 0x6C($a1)
    ctx->pc = 0x22d9d0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 108), (uint16_t)GPR_U32(ctx, 3));
    // 0x22d9d4: 0x8c830054  lw          $v1, 0x54($a0)
    ctx->pc = 0x22d9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x22d9d8: 0x8c850050  lw          $a1, 0x50($a0)
    ctx->pc = 0x22d9d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x22d9dc: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x22d9dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
    // 0x22d9e0: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x22d9e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x22d9e4: 0x54a30005  bnel        $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x22D9E4u;
    {
        const bool branch_taken_0x22d9e4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x22d9e4) {
            ctx->pc = 0x22D9E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22D9E4u;
            // 0x22d9e8: 0x8e240050  lw          $a0, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22D9FCu;
            goto label_22d9fc;
        }
    }
    ctx->pc = 0x22D9ECu;
    // 0x22d9ec: 0x2624004c  addiu       $a0, $s1, 0x4C
    ctx->pc = 0x22d9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
    // 0x22d9f0: 0xc0a728c  jal         func_29CA30
    ctx->pc = 0x22D9F0u;
    SET_GPR_U32(ctx, 31, 0x22D9F8u);
    ctx->pc = 0x22D9F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D9F0u;
            // 0x22d9f4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D9F8u; }
        if (ctx->pc != 0x22D9F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D9F8u; }
        if (ctx->pc != 0x22D9F8u) { return; }
    }
    ctx->pc = 0x22D9F8u;
label_22d9f8:
    // 0x22d9f8: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x22d9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_22d9fc:
    // 0x22d9fc: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x22d9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x22da00: 0xae230050  sw          $v1, 0x50($s1)
    ctx->pc = 0x22da00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 3));
    // 0x22da04: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x22da04u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x22da08: 0x8e23004c  lw          $v1, 0x4C($s1)
    ctx->pc = 0x22da08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x22da0c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x22da0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x22da10: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x22da10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x22da14: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22da14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22da18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22da18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22da1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22da1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22da20: 0x3e00008  jr          $ra
    ctx->pc = 0x22DA20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22DA24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DA20u;
            // 0x22da24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22DA28u;
    // 0x22da28: 0x0  nop
    ctx->pc = 0x22da28u;
    // NOP
    // 0x22da2c: 0x0  nop
    ctx->pc = 0x22da2cu;
    // NOP
}
