#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019A790
// Address: 0x19a790 - 0x19a838
void sub_0019A790_0x19a790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019A790_0x19a790");
#endif

    switch (ctx->pc) {
        case 0x19a7b8u: goto label_19a7b8;
        case 0x19a800u: goto label_19a800;
        default: break;
    }

    ctx->pc = 0x19a790u;

    // 0x19a790: 0xac8000c4  sw          $zero, 0xC4($a0)
    ctx->pc = 0x19a790u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 196), GPR_U32(ctx, 0));
    // 0x19a794: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x19a794u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a798: 0xac8000c8  sw          $zero, 0xC8($a0)
    ctx->pc = 0x19a798u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 200), GPR_U32(ctx, 0));
    // 0x19a79c: 0x248a0004  addiu       $t2, $a0, 0x4
    ctx->pc = 0x19a79cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x19a7a0: 0xac8000cc  sw          $zero, 0xCC($a0)
    ctx->pc = 0x19a7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 204), GPR_U32(ctx, 0));
    // 0x19a7a4: 0x24830008  addiu       $v1, $a0, 0x8
    ctx->pc = 0x19a7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x19a7a8: 0x24090011  addiu       $t1, $zero, 0x11
    ctx->pc = 0x19a7a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x19a7ac: 0x248600e4  addiu       $a2, $a0, 0xE4
    ctx->pc = 0x19a7acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 228));
    // 0x19a7b0: 0x248500e0  addiu       $a1, $a0, 0xE0
    ctx->pc = 0x19a7b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
    // 0x19a7b4: 0x248700e8  addiu       $a3, $a0, 0xE8
    ctx->pc = 0x19a7b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 232));
label_19a7b8:
    // 0x19a7b8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x19a7b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x19a7bc: 0xaca0fff0  sw          $zero, -0x10($a1)
    ctx->pc = 0x19a7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294967280), GPR_U32(ctx, 0));
    // 0x19a7c0: 0x29020008  slti        $v0, $t0, 0x8
    ctx->pc = 0x19a7c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x19a7c4: 0xacc0fff0  sw          $zero, -0x10($a2)
    ctx->pc = 0x19a7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294967280), GPR_U32(ctx, 0));
    // 0x19a7c8: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x19a7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x19a7cc: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x19a7ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x19a7d0: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x19a7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x19a7d4: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x19a7d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x19a7d8: 0xace90000  sw          $t1, 0x0($a3)
    ctx->pc = 0x19a7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 9));
    // 0x19a7dc: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x19A7DCu;
    {
        const bool branch_taken_0x19a7dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19A7E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A7DCu;
            // 0x19a7e0: 0x24e70020  addiu       $a3, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a7dc) {
            ctx->pc = 0x19A7B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19a7b8;
        }
    }
    ctx->pc = 0x19A7E4u;
    // 0x19a7e4: 0xac8001d0  sw          $zero, 0x1D0($a0)
    ctx->pc = 0x19a7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 464), GPR_U32(ctx, 0));
    // 0x19a7e8: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x19a7e8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a7ec: 0x24890010  addiu       $t1, $a0, 0x10
    ctx->pc = 0x19a7ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x19a7f0: 0x2488000c  addiu       $t0, $a0, 0xC
    ctx->pc = 0x19a7f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x19a7f4: 0x60502d  daddu       $t2, $v1, $zero
    ctx->pc = 0x19a7f4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a7f8: 0x240601d0  addiu       $a2, $zero, 0x1D0
    ctx->pc = 0x19a7f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 464));
    // 0x19a7fc: 0x2407001f  addiu       $a3, $zero, 0x1F
    ctx->pc = 0x19a7fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_19a800:
    // 0x19a800: 0x1661021  addu        $v0, $t3, $a2
    ctx->pc = 0x19a800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 6)));
    // 0x19a804: 0x1461821  addu        $v1, $t2, $a2
    ctx->pc = 0x19a804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x19a808: 0x1062021  addu        $a0, $t0, $a2
    ctx->pc = 0x19a808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x19a80c: 0x1262821  addu        $a1, $t1, $a2
    ctx->pc = 0x19a80cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x19a810: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x19a810u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x19a814: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x19a814u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x19a818: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x19a818u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x19a81c: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x19a81cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x19a820: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x19a820u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x19a824: 0x4e1fff6  bgez        $a3, . + 4 + (-0xA << 2)
    ctx->pc = 0x19A824u;
    {
        const bool branch_taken_0x19a824 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x19A828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A824u;
            // 0x19a828: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a824) {
            ctx->pc = 0x19A800u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19a800;
        }
    }
    ctx->pc = 0x19A82Cu;
    // 0x19a82c: 0x3e00008  jr          $ra
    ctx->pc = 0x19A82Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19A834u;
    // 0x19a834: 0x0  nop
    ctx->pc = 0x19a834u;
    // NOP
}
