#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BC3A0
// Address: 0x1bc3a0 - 0x1bc3e8
void sub_001BC3A0_0x1bc3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BC3A0_0x1bc3a0");
#endif

    ctx->pc = 0x1bc3a0u;

    // 0x1bc3a0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1bc3a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc3a4: 0x240200c0  addiu       $v0, $zero, 0xC0
    ctx->pc = 0x1bc3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x1bc3a8: 0x24a3ff40  addiu       $v1, $a1, -0xC0
    ctx->pc = 0x1bc3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967104));
    // 0x1bc3ac: 0x24a4ff20  addiu       $a0, $a1, -0xE0
    ctx->pc = 0x1bc3acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967072));
    // 0x1bc3b0: 0x2c630020  sltiu       $v1, $v1, 0x20
    ctx->pc = 0x1bc3b0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x1bc3b4: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BC3B4u;
    {
        const bool branch_taken_0x1bc3b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BC3B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC3B4u;
            // 0x1bc3b8: 0x2c840010  sltiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc3b4) {
            ctx->pc = 0x1BC3DCu;
            goto label_1bc3dc;
        }
    }
    ctx->pc = 0x1BC3BCu;
    // 0x1bc3bc: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BC3BCu;
    {
        const bool branch_taken_0x1bc3bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BC3C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC3BCu;
            // 0x1bc3c0: 0x240200e0  addiu       $v0, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc3bc) {
            ctx->pc = 0x1BC3DCu;
            goto label_1bc3dc;
        }
    }
    ctx->pc = 0x1BC3C4u;
    // 0x1bc3c4: 0x240200bd  addiu       $v0, $zero, 0xBD
    ctx->pc = 0x1bc3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 189));
    // 0x1bc3c8: 0x10a20004  beq         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BC3C8u;
    {
        const bool branch_taken_0x1bc3c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BC3CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC3C8u;
            // 0x1bc3cc: 0x240300bf  addiu       $v1, $zero, 0xBF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 191));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc3c8) {
            ctx->pc = 0x1BC3DCu;
            goto label_1bc3dc;
        }
    }
    ctx->pc = 0x1BC3D0u;
    // 0x1bc3d0: 0x14a30002  bne         $a1, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BC3D0u;
    {
        const bool branch_taken_0x1bc3d0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x1BC3D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC3D0u;
            // 0x1bc3d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc3d0) {
            ctx->pc = 0x1BC3DCu;
            goto label_1bc3dc;
        }
    }
    ctx->pc = 0x1BC3D8u;
    // 0x1bc3d8: 0x240200bd  addiu       $v0, $zero, 0xBD
    ctx->pc = 0x1bc3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 189));
label_1bc3dc:
    // 0x1bc3dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1BC3DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BC3E4u;
    // 0x1bc3e4: 0x0  nop
    ctx->pc = 0x1bc3e4u;
    // NOP
}
