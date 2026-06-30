#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E32F0
// Address: 0x2e32f0 - 0x2e33d0
void sub_002E32F0_0x2e32f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E32F0_0x2e32f0");
#endif

    switch (ctx->pc) {
        case 0x2e3324u: goto label_2e3324;
        default: break;
    }

    ctx->pc = 0x2e32f0u;

    // 0x2e32f0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2e32f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x2e32f4: 0x8c659764  lw          $a1, -0x689C($v1)
    ctx->pc = 0x2e32f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294940516)));
    // 0x2e32f8: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x2e32f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x2e32fc: 0x346300f0  ori         $v1, $v1, 0xF0
    ctx->pc = 0x2e32fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)240);
    // 0x2e3300: 0xa36024  and         $t4, $a1, $v1
    ctx->pc = 0x2e3300u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x2e3304: 0x1180002e  beqz        $t4, . + 4 + (0x2E << 2)
    ctx->pc = 0x2E3304u;
    {
        const bool branch_taken_0x2e3304 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3304) {
            ctx->pc = 0x2E33C0u;
            goto label_2e33c0;
        }
    }
    ctx->pc = 0x2E330Cu;
    // 0x2e330c: 0x3c0e0064  lui         $t6, 0x64
    ctx->pc = 0x2e330cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)100 << 16));
    // 0x2e3310: 0x3c0d0060  lui         $t5, 0x60
    ctx->pc = 0x2e3310u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)96 << 16));
    // 0x2e3314: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x2e3314u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3318: 0x25ce1b60  addiu       $t6, $t6, 0x1B60
    ctx->pc = 0x2e3318u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 7008));
    // 0x2e331c: 0x25ade490  addiu       $t5, $t5, -0x1B70
    ctx->pc = 0x2e331cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294960272));
    // 0x2e3320: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2e3320u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e3324:
    // 0x2e3324: 0x8f1821  addu        $v1, $a0, $t7
    ctx->pc = 0x2e3324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 15)));
    // 0x2e3328: 0x8086008e  lb          $a2, 0x8E($a0)
    ctx->pc = 0x2e3328u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 142)));
    // 0x2e332c: 0x806a008f  lb          $t2, 0x8F($v1)
    ctx->pc = 0x2e332cu;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 143)));
    // 0x2e3330: 0x246b008f  addiu       $t3, $v1, 0x8F
    ctx->pc = 0x2e3330u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 143));
    // 0x2e3334: 0x1e83804  sllv        $a3, $t0, $t7
    ctx->pc = 0x2e3334u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 15) & 0x1F));
    // 0x2e3338: 0xc71824  and         $v1, $a2, $a3
    ctx->pc = 0x2e3338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 7));
    // 0x2e333c: 0x1460001a  bnez        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x2E333Cu;
    {
        const bool branch_taken_0x2e333c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E3340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E333Cu;
            // 0x2e3340: 0x8dc90000  lw          $t1, 0x0($t6) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e333c) {
            ctx->pc = 0x2E33A8u;
            goto label_2e33a8;
        }
    }
    ctx->pc = 0x2E3344u;
    // 0x2e3344: 0x149082a  slt         $at, $t2, $t1
    ctx->pc = 0x2e3344u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x2e3348: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x2E3348u;
    {
        const bool branch_taken_0x2e3348 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3348) {
            ctx->pc = 0x2E33A8u;
            goto label_2e33a8;
        }
    }
    ctx->pc = 0x2E3350u;
    // 0x2e3350: 0x8da30000  lw          $v1, 0x0($t5)
    ctx->pc = 0x2e3350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x2e3354: 0xa2880  sll         $a1, $t2, 2
    ctx->pc = 0x2e3354u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x2e3358: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2e3358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2e335c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2e335cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e3360: 0x1583000f  bne         $t4, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2E3360u;
    {
        const bool branch_taken_0x2e3360 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 3));
        if (branch_taken_0x2e3360) {
            ctx->pc = 0x2E33A0u;
            goto label_2e33a0;
        }
    }
    ctx->pc = 0x2E3368u;
    // 0x2e3368: 0x2523ffff  addiu       $v1, $t1, -0x1
    ctx->pc = 0x2e3368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x2e336c: 0x15430008  bne         $t2, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E336Cu;
    {
        const bool branch_taken_0x2e336c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 3));
        if (branch_taken_0x2e336c) {
            ctx->pc = 0x2E3390u;
            goto label_2e3390;
        }
    }
    ctx->pc = 0x2E3374u;
    // 0x2e3374: 0x71e3c  dsll32      $v1, $a3, 24
    ctx->pc = 0x2e3374u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 24));
    // 0x2e3378: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2e3378u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2e337c: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x2e337cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x2e3380: 0xa083008e  sb          $v1, 0x8E($a0)
    ctx->pc = 0x2e3380u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 142), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e3384: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E3384u;
    {
        const bool branch_taken_0x2e3384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3384u;
            // 0x2e3388: 0xa1600000  sb          $zero, 0x0($t3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 11), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3384) {
            ctx->pc = 0x2E33A8u;
            goto label_2e33a8;
        }
    }
    ctx->pc = 0x2E338Cu;
    // 0x2e338c: 0x0  nop
    ctx->pc = 0x2e338cu;
    // NOP
label_2e3390:
    // 0x2e3390: 0x25430001  addiu       $v1, $t2, 0x1
    ctx->pc = 0x2e3390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x2e3394: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2E3394u;
    {
        const bool branch_taken_0x2e3394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3394u;
            // 0x2e3398: 0xa1630000  sb          $v1, 0x0($t3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 11), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3394) {
            ctx->pc = 0x2E33A8u;
            goto label_2e33a8;
        }
    }
    ctx->pc = 0x2E339Cu;
    // 0x2e339c: 0x0  nop
    ctx->pc = 0x2e339cu;
    // NOP
label_2e33a0:
    // 0x2e33a0: 0xa1600000  sb          $zero, 0x0($t3)
    ctx->pc = 0x2e33a0u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e33a4: 0x0  nop
    ctx->pc = 0x2e33a4u;
    // NOP
label_2e33a8:
    // 0x2e33a8: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x2e33a8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x2e33ac: 0x29e30002  slti        $v1, $t7, 0x2
    ctx->pc = 0x2e33acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2e33b0: 0x25ce0004  addiu       $t6, $t6, 0x4
    ctx->pc = 0x2e33b0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4));
    // 0x2e33b4: 0x1460ffdb  bnez        $v1, . + 4 + (-0x25 << 2)
    ctx->pc = 0x2E33B4u;
    {
        const bool branch_taken_0x2e33b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E33B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E33B4u;
            // 0x2e33b8: 0x25ad0004  addiu       $t5, $t5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e33b4) {
            ctx->pc = 0x2E3324u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e3324;
        }
    }
    ctx->pc = 0x2E33BCu;
    // 0x2e33bc: 0x0  nop
    ctx->pc = 0x2e33bcu;
    // NOP
label_2e33c0:
    // 0x2e33c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E33C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E33C8u;
    // 0x2e33c8: 0x0  nop
    ctx->pc = 0x2e33c8u;
    // NOP
    // 0x2e33cc: 0x0  nop
    ctx->pc = 0x2e33ccu;
    // NOP
}
