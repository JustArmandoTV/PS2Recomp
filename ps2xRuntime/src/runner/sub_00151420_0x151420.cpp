#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00151420
// Address: 0x151420 - 0x151580
void sub_00151420_0x151420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00151420_0x151420");
#endif

    switch (ctx->pc) {
        case 0x151460u: goto label_151460;
        case 0x151470u: goto label_151470;
        case 0x15152cu: goto label_15152c;
        default: break;
    }

    ctx->pc = 0x151420u;

    // 0x151420: 0x8c870010  lw          $a3, 0x10($a0)
    ctx->pc = 0x151420u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x151424: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x151424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x151428: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x151428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x15142c: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x15142cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x151430: 0x24c60067  addiu       $a2, $a2, 0x67
    ctx->pc = 0x151430u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 103));
    // 0x151434: 0x10a00039  beqz        $a1, . + 4 + (0x39 << 2)
    ctx->pc = 0x151434u;
    {
        const bool branch_taken_0x151434 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x151438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151434u;
            // 0x151438: 0xc31824  and         $v1, $a2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151434) {
            ctx->pc = 0x15151Cu;
            goto label_15151c;
        }
    }
    ctx->pc = 0x15143Cu;
    // 0x15143c: 0x18e0004c  blez        $a3, . + 4 + (0x4C << 2)
    ctx->pc = 0x15143Cu;
    {
        const bool branch_taken_0x15143c = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x151440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15143Cu;
            // 0x151440: 0x702d  daddu       $t6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15143c) {
            ctx->pc = 0x151570u;
            goto label_151570;
        }
    }
    ctx->pc = 0x151444u;
    // 0x151444: 0x18e0004a  blez        $a3, . + 4 + (0x4A << 2)
    ctx->pc = 0x151444u;
    {
        const bool branch_taken_0x151444 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x151448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151444u;
            // 0x151448: 0x8cac0010  lw          $t4, 0x10($a1) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151444) {
            ctx->pc = 0x151570u;
            goto label_151570;
        }
    }
    ctx->pc = 0x15144Cu;
    // 0x15144c: 0x8caa000c  lw          $t2, 0xC($a1)
    ctx->pc = 0x15144cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x151450: 0x3c0901e0  lui         $t1, 0x1E0
    ctx->pc = 0x151450u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)480 << 16));
    // 0x151454: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x151454u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x151458: 0x24060400  addiu       $a2, $zero, 0x400
    ctx->pc = 0x151458u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x15145c: 0x24070800  addiu       $a3, $zero, 0x800
    ctx->pc = 0x15145cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_151460:
    // 0x151460: 0x19400017  blez        $t2, . + 4 + (0x17 << 2)
    ctx->pc = 0x151460u;
    {
        const bool branch_taken_0x151460 = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x151464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151460u;
            // 0x151464: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151460) {
            ctx->pc = 0x1514C0u;
            goto label_1514c0;
        }
    }
    ctx->pc = 0x151468u;
    // 0x151468: 0x180582d  daddu       $t3, $t4, $zero
    ctx->pc = 0x151468u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15146c: 0x0  nop
    ctx->pc = 0x15146cu;
    // NOP
label_151470:
    // 0x151470: 0x8d650000  lw          $a1, 0x0($t3)
    ctx->pc = 0x151470u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x151474: 0xa92824  and         $a1, $a1, $t1
    ctx->pc = 0x151474u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 9));
    // 0x151478: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x151478u;
    {
        const bool branch_taken_0x151478 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x151478) {
            ctx->pc = 0x151498u;
            goto label_151498;
        }
    }
    ctx->pc = 0x151480u;
    // 0x151480: 0x85650008  lh          $a1, 0x8($t3)
    ctx->pc = 0x151480u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x151484: 0x15c5000a  bne         $t6, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x151484u;
    {
        const bool branch_taken_0x151484 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 5));
        if (branch_taken_0x151484) {
            ctx->pc = 0x1514B0u;
            goto label_1514b0;
        }
    }
    ctx->pc = 0x15148Cu;
    // 0x15148c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x15148Cu;
    {
        const bool branch_taken_0x15148c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15148Cu;
            // 0x151490: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15148c) {
            ctx->pc = 0x1514C8u;
            goto label_1514c8;
        }
    }
    ctx->pc = 0x151494u;
    // 0x151494: 0x0  nop
    ctx->pc = 0x151494u;
    // NOP
label_151498:
    // 0x151498: 0x8d650008  lw          $a1, 0x8($t3)
    ctx->pc = 0x151498u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x15149c: 0x15c50004  bne         $t6, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x15149Cu;
    {
        const bool branch_taken_0x15149c = (GPR_U64(ctx, 14) != GPR_U64(ctx, 5));
        if (branch_taken_0x15149c) {
            ctx->pc = 0x1514B0u;
            goto label_1514b0;
        }
    }
    ctx->pc = 0x1514A4u;
    // 0x1514a4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1514A4u;
    {
        const bool branch_taken_0x1514a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1514A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1514A4u;
            // 0x1514a8: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1514a4) {
            ctx->pc = 0x1514C8u;
            goto label_1514c8;
        }
    }
    ctx->pc = 0x1514ACu;
    // 0x1514ac: 0x0  nop
    ctx->pc = 0x1514acu;
    // NOP
label_1514b0:
    // 0x1514b0: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x1514b0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x1514b4: 0x1aa282a  slt         $a1, $t5, $t2
    ctx->pc = 0x1514b4u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x1514b8: 0x14a0ffed  bnez        $a1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1514B8u;
    {
        const bool branch_taken_0x1514b8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1514BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1514B8u;
            // 0x1514bc: 0x256b0028  addiu       $t3, $t3, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1514b8) {
            ctx->pc = 0x151470u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_151470;
        }
    }
    ctx->pc = 0x1514C0u;
label_1514c0:
    // 0x1514c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1514c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1514c4: 0x0  nop
    ctx->pc = 0x1514c4u;
    // NOP
label_1514c8:
    // 0x1514c8: 0x14a8000d  bne         $a1, $t0, . + 4 + (0xD << 2)
    ctx->pc = 0x1514C8u;
    {
        const bool branch_taken_0x1514c8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 8));
        if (branch_taken_0x1514c8) {
            ctx->pc = 0x151500u;
            goto label_151500;
        }
    }
    ctx->pc = 0x1514D0u;
    // 0x1514d0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1514d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1514d4: 0x10a70008  beq         $a1, $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1514D4u;
    {
        const bool branch_taken_0x1514d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        if (branch_taken_0x1514d4) {
            ctx->pc = 0x1514F8u;
            goto label_1514f8;
        }
    }
    ctx->pc = 0x1514DCu;
    // 0x1514dc: 0x10a60004  beq         $a1, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1514DCu;
    {
        const bool branch_taken_0x1514dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        if (branch_taken_0x1514dc) {
            ctx->pc = 0x1514F0u;
            goto label_1514f0;
        }
    }
    ctx->pc = 0x1514E4u;
    // 0x1514e4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1514E4u;
    {
        const bool branch_taken_0x1514e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1514e4) {
            ctx->pc = 0x151500u;
            goto label_151500;
        }
    }
    ctx->pc = 0x1514ECu;
    // 0x1514ec: 0x0  nop
    ctx->pc = 0x1514ecu;
    // NOP
label_1514f0:
    // 0x1514f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1514F0u;
    {
        const bool branch_taken_0x1514f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1514F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1514F0u;
            // 0x1514f4: 0x24630070  addiu       $v1, $v1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1514f0) {
            ctx->pc = 0x151500u;
            goto label_151500;
        }
    }
    ctx->pc = 0x1514F8u;
label_1514f8:
    // 0x1514f8: 0x246300e0  addiu       $v1, $v1, 0xE0
    ctx->pc = 0x1514f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
    // 0x1514fc: 0x0  nop
    ctx->pc = 0x1514fcu;
    // NOP
label_151500:
    // 0x151500: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x151500u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x151504: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x151504u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x151508: 0x1c5282a  slt         $a1, $t6, $a1
    ctx->pc = 0x151508u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x15150c: 0x14a0ffd4  bnez        $a1, . + 4 + (-0x2C << 2)
    ctx->pc = 0x15150Cu;
    {
        const bool branch_taken_0x15150c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x151510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15150Cu;
            // 0x151510: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15150c) {
            ctx->pc = 0x151460u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_151460;
        }
    }
    ctx->pc = 0x151514u;
    // 0x151514: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x151514u;
    {
        const bool branch_taken_0x151514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151514) {
            ctx->pc = 0x151570u;
            goto label_151570;
        }
    }
    ctx->pc = 0x15151Cu;
label_15151c:
    // 0x15151c: 0x18e00014  blez        $a3, . + 4 + (0x14 << 2)
    ctx->pc = 0x15151Cu;
    {
        const bool branch_taken_0x15151c = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x151520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15151Cu;
            // 0x151520: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15151c) {
            ctx->pc = 0x151570u;
            goto label_151570;
        }
    }
    ctx->pc = 0x151524u;
    // 0x151524: 0x24060400  addiu       $a2, $zero, 0x400
    ctx->pc = 0x151524u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x151528: 0x24070800  addiu       $a3, $zero, 0x800
    ctx->pc = 0x151528u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_15152c:
    // 0x15152c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x15152cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x151530: 0x10a70007  beq         $a1, $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x151530u;
    {
        const bool branch_taken_0x151530 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        if (branch_taken_0x151530) {
            ctx->pc = 0x151550u;
            goto label_151550;
        }
    }
    ctx->pc = 0x151538u;
    // 0x151538: 0x10a60003  beq         $a1, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x151538u;
    {
        const bool branch_taken_0x151538 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        if (branch_taken_0x151538) {
            ctx->pc = 0x151548u;
            goto label_151548;
        }
    }
    ctx->pc = 0x151540u;
    // 0x151540: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x151540u;
    {
        const bool branch_taken_0x151540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151540) {
            ctx->pc = 0x151558u;
            goto label_151558;
        }
    }
    ctx->pc = 0x151548u;
label_151548:
    // 0x151548: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x151548u;
    {
        const bool branch_taken_0x151548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15154Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151548u;
            // 0x15154c: 0x24630070  addiu       $v1, $v1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151548) {
            ctx->pc = 0x151558u;
            goto label_151558;
        }
    }
    ctx->pc = 0x151550u;
label_151550:
    // 0x151550: 0x246300e0  addiu       $v1, $v1, 0xE0
    ctx->pc = 0x151550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
    // 0x151554: 0x0  nop
    ctx->pc = 0x151554u;
    // NOP
label_151558:
    // 0x151558: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x151558u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x15155c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x15155cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x151560: 0x105282a  slt         $a1, $t0, $a1
    ctx->pc = 0x151560u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x151564: 0x14a0fff1  bnez        $a1, . + 4 + (-0xF << 2)
    ctx->pc = 0x151564u;
    {
        const bool branch_taken_0x151564 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x151568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151564u;
            // 0x151568: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151564) {
            ctx->pc = 0x15152Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15152c;
        }
    }
    ctx->pc = 0x15156Cu;
    // 0x15156c: 0x0  nop
    ctx->pc = 0x15156cu;
    // NOP
label_151570:
    // 0x151570: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x151570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x151574: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x151574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x151578: 0x3e00008  jr          $ra
    ctx->pc = 0x151578u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15157Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151578u;
            // 0x15157c: 0x621024  and         $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x151580u;
}
