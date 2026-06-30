#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00171790
// Address: 0x171790 - 0x1717e0
void sub_00171790_0x171790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00171790_0x171790");
#endif

    ctx->pc = 0x171790u;

    // 0x171790: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x171790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x171794: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x171794u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171798: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x171798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17179c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x17179cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1717a0: 0x80a20001  lb          $v0, 0x1($a1)
    ctx->pc = 0x1717a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x1717a4: 0x1443000c  bne         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1717A4u;
    {
        const bool branch_taken_0x1717a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1717A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1717A4u;
            // 0x1717a8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1717a4) {
            ctx->pc = 0x1717D8u;
            goto label_1717d8;
        }
    }
    ctx->pc = 0x1717ACu;
    // 0x1717ac: 0xdca20048  ld          $v0, 0x48($a1)
    ctx->pc = 0x1717acu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x1717b0: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x1717b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1717b4: 0x52e78  dsll        $a1, $a1, 25
    ctx->pc = 0x1717b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 25);
    // 0x1717b8: 0x3403ff00  ori         $v1, $zero, 0xFF00
    ctx->pc = 0x1717b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x1717bc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1717bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1717c0: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x1717c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
    // 0x1717c4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1717c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1717c8: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1717C8u;
    {
        const bool branch_taken_0x1717c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1717c8) {
            ctx->pc = 0x1717D8u;
            goto label_1717d8;
        }
    }
    ctx->pc = 0x1717D0u;
    // 0x1717d0: 0x805c3ea  j           func_170FA8
    ctx->pc = 0x1717D0u;
    ctx->pc = 0x1717D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1717D0u;
            // 0x1717d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170FA8u;
    {
        auto targetFn = runtime->lookupFunction(0x170FA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1717D8u;
label_1717d8:
    // 0x1717d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1717D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1717DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1717D8u;
            // 0x1717dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1717E0u;
}
