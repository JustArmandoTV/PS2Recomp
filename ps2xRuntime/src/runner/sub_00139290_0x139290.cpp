#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00139290
// Address: 0x139290 - 0x139330
void sub_00139290_0x139290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00139290_0x139290");
#endif

    switch (ctx->pc) {
        case 0x1392ccu: goto label_1392cc;
        case 0x13930cu: goto label_13930c;
        default: break;
    }

    ctx->pc = 0x139290u;

    // 0x139290: 0x18a00025  blez        $a1, . + 4 + (0x25 << 2)
    ctx->pc = 0x139290u;
    {
        const bool branch_taken_0x139290 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x139294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139290u;
            // 0x139294: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139290) {
            ctx->pc = 0x139328u;
            goto label_139328;
        }
    }
    ctx->pc = 0x139298u;
    // 0x139298: 0x28a10009  slti        $at, $a1, 0x9
    ctx->pc = 0x139298u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x13929c: 0x14200018  bnez        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x13929Cu;
    {
        const bool branch_taken_0x13929c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1392A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13929Cu;
            // 0x1392a0: 0x24a7fff8  addiu       $a3, $a1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13929c) {
            ctx->pc = 0x139300u;
            goto label_139300;
        }
    }
    ctx->pc = 0x1392A4u;
    // 0x1392a4: 0x4a00007  bltz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1392A4u;
    {
        const bool branch_taken_0x1392a4 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1392A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1392A4u;
            // 0x1392a8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1392a4) {
            ctx->pc = 0x1392C4u;
            goto label_1392c4;
        }
    }
    ctx->pc = 0x1392ACu;
    // 0x1392ac: 0x3c017fff  lui         $at, 0x7FFF
    ctx->pc = 0x1392acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)32767 << 16));
    // 0x1392b0: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x1392b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x1392b4: 0xa1082a  slt         $at, $a1, $at
    ctx->pc = 0x1392b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x1392b8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1392B8u;
    {
        const bool branch_taken_0x1392b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1392b8) {
            ctx->pc = 0x1392C4u;
            goto label_1392c4;
        }
    }
    ctx->pc = 0x1392C0u;
    // 0x1392c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1392c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1392c4:
    // 0x1392c4: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1392C4u;
    {
        const bool branch_taken_0x1392c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1392c4) {
            ctx->pc = 0x139300u;
            goto label_139300;
        }
    }
    ctx->pc = 0x1392CCu;
label_1392cc:
    // 0x1392cc: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x1392ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x1392d0: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x1392d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x1392d4: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x1392d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x1392d8: 0x107182a  slt         $v1, $t0, $a3
    ctx->pc = 0x1392d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1392dc: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x1392dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x1392e0: 0xac86000c  sw          $a2, 0xC($a0)
    ctx->pc = 0x1392e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
    // 0x1392e4: 0xac860010  sw          $a2, 0x10($a0)
    ctx->pc = 0x1392e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
    // 0x1392e8: 0xac860014  sw          $a2, 0x14($a0)
    ctx->pc = 0x1392e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 6));
    // 0x1392ec: 0xac860018  sw          $a2, 0x18($a0)
    ctx->pc = 0x1392ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 6));
    // 0x1392f0: 0xac86001c  sw          $a2, 0x1C($a0)
    ctx->pc = 0x1392f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 6));
    // 0x1392f4: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x1392F4u;
    {
        const bool branch_taken_0x1392f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1392F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1392F4u;
            // 0x1392f8: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1392f4) {
            ctx->pc = 0x1392CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1392cc;
        }
    }
    ctx->pc = 0x1392FCu;
    // 0x1392fc: 0x0  nop
    ctx->pc = 0x1392fcu;
    // NOP
label_139300:
    // 0x139300: 0x105082a  slt         $at, $t0, $a1
    ctx->pc = 0x139300u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x139304: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x139304u;
    {
        const bool branch_taken_0x139304 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x139304) {
            ctx->pc = 0x139328u;
            goto label_139328;
        }
    }
    ctx->pc = 0x13930Cu;
label_13930c:
    // 0x13930c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x13930cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x139310: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x139310u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x139314: 0x105182a  slt         $v1, $t0, $a1
    ctx->pc = 0x139314u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x139318: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x139318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x13931c: 0x0  nop
    ctx->pc = 0x13931cu;
    // NOP
    // 0x139320: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x139320u;
    {
        const bool branch_taken_0x139320 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x139320) {
            ctx->pc = 0x13930Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13930c;
        }
    }
    ctx->pc = 0x139328u;
label_139328:
    // 0x139328: 0x3e00008  jr          $ra
    ctx->pc = 0x139328u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x139330u;
}
