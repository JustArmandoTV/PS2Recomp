#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00234750
// Address: 0x234750 - 0x2347c0
void sub_00234750_0x234750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00234750_0x234750");
#endif

    switch (ctx->pc) {
        case 0x234770u: goto label_234770;
        default: break;
    }

    ctx->pc = 0x234750u;

    // 0x234750: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x234750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x234754: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x234754u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234758: 0x2467ffff  addiu       $a3, $v1, -0x1
    ctx->pc = 0x234758u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x23475c: 0x4e00016  bltz        $a3, . + 4 + (0x16 << 2)
    ctx->pc = 0x23475Cu;
    {
        const bool branch_taken_0x23475c = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x234760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23475Cu;
            // 0x234760: 0x24850028  addiu       $a1, $a0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23475c) {
            ctx->pc = 0x2347B8u;
            goto label_2347b8;
        }
    }
    ctx->pc = 0x234764u;
    // 0x234764: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x234764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x234768: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x234768u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x23476c: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x23476cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_234770:
    // 0x234770: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x234770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x234774: 0x8c650050  lw          $a1, 0x50($v1)
    ctx->pc = 0x234774u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x234778: 0x8c640014  lw          $a0, 0x14($v1)
    ctx->pc = 0x234778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x23477c: 0x529c0  sll         $a1, $a1, 7
    ctx->pc = 0x23477cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 7));
    // 0x234780: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x234780u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x234784: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x234784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x234788: 0x24a50090  addiu       $a1, $a1, 0x90
    ctx->pc = 0x234788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 144));
    // 0x23478c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x23478cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x234790: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x234790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x234794: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x234794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x234798: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x234798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x23479c: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x23479cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2347a0: 0x50200001  beql        $at, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2347A0u;
    {
        const bool branch_taken_0x2347a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2347a0) {
            ctx->pc = 0x2347A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2347A0u;
            // 0x2347a4: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2347A8u;
            goto label_2347a8;
        }
    }
    ctx->pc = 0x2347A8u;
label_2347a8:
    // 0x2347a8: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x2347a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2347ac: 0x4e1fff0  bgez        $a3, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2347ACu;
    {
        const bool branch_taken_0x2347ac = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x2347B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2347ACu;
            // 0x2347b0: 0x24c6fffc  addiu       $a2, $a2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2347ac) {
            ctx->pc = 0x234770u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_234770;
        }
    }
    ctx->pc = 0x2347B4u;
    // 0x2347b4: 0x0  nop
    ctx->pc = 0x2347b4u;
    // NOP
label_2347b8:
    // 0x2347b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2347B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2347C0u;
}
