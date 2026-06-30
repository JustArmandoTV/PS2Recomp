#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022B370
// Address: 0x22b370 - 0x22b3e0
void sub_0022B370_0x22b370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022B370_0x22b370");
#endif

    switch (ctx->pc) {
        case 0x22b3a8u: goto label_22b3a8;
        default: break;
    }

    ctx->pc = 0x22b370u;

    // 0x22b370: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22b370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22b374: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x22b374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x22b378: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22b378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22b37c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22b37cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22b380: 0x8c83006c  lw          $v1, 0x6C($a0)
    ctx->pc = 0x22b380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
    // 0x22b384: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x22b384u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b388: 0x8c850068  lw          $a1, 0x68($a0)
    ctx->pc = 0x22b388u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x22b38c: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x22b38cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
    // 0x22b390: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x22b390u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x22b394: 0x14a30004  bne         $a1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x22B394u;
    {
        const bool branch_taken_0x22b394 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x22B398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B394u;
            // 0x22b398: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b394) {
            ctx->pc = 0x22B3A8u;
            goto label_22b3a8;
        }
    }
    ctx->pc = 0x22B39Cu;
    // 0x22b39c: 0x26240064  addiu       $a0, $s1, 0x64
    ctx->pc = 0x22b39cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
    // 0x22b3a0: 0xc0a728c  jal         func_29CA30
    ctx->pc = 0x22B3A0u;
    SET_GPR_U32(ctx, 31, 0x22B3A8u);
    ctx->pc = 0x22B3A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22B3A0u;
            // 0x22b3a4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B3A8u; }
        if (ctx->pc != 0x22B3A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B3A8u; }
        if (ctx->pc != 0x22B3A8u) { return; }
    }
    ctx->pc = 0x22B3A8u;
label_22b3a8:
    // 0x22b3a8: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x22b3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x22b3ac: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x22b3acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x22b3b0: 0xae230068  sw          $v1, 0x68($s1)
    ctx->pc = 0x22b3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 3));
    // 0x22b3b4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x22b3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x22b3b8: 0x8e230064  lw          $v1, 0x64($s1)
    ctx->pc = 0x22b3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x22b3bc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x22b3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x22b3c0: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x22b3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x22b3c4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22b3c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22b3c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22b3c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22b3cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22b3ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22b3d0: 0x3e00008  jr          $ra
    ctx->pc = 0x22B3D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22B3D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B3D0u;
            // 0x22b3d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22B3D8u;
    // 0x22b3d8: 0x0  nop
    ctx->pc = 0x22b3d8u;
    // NOP
    // 0x22b3dc: 0x0  nop
    ctx->pc = 0x22b3dcu;
    // NOP
}
