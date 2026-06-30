#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00535380
// Address: 0x535380 - 0x535590
void sub_00535380_0x535380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00535380_0x535380");
#endif

    switch (ctx->pc) {
        case 0x53539cu: goto label_53539c;
        case 0x53544cu: goto label_53544c;
        case 0x53548cu: goto label_53548c;
        case 0x535540u: goto label_535540;
        default: break;
    }

    ctx->pc = 0x535380u;

    // 0x535380: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x535380u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x535384: 0x10a0003a  beqz        $a1, . + 4 + (0x3A << 2)
    ctx->pc = 0x535384u;
    {
        const bool branch_taken_0x535384 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x535388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x535384u;
            // 0x535388: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x535384) {
            ctx->pc = 0x535470u;
            goto label_535470;
        }
    }
    ctx->pc = 0x53538Cu;
    // 0x53538c: 0x2ca10009  sltiu       $at, $a1, 0x9
    ctx->pc = 0x53538cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x535390: 0x14200027  bnez        $at, . + 4 + (0x27 << 2)
    ctx->pc = 0x535390u;
    {
        const bool branch_taken_0x535390 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x535394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x535390u;
            // 0x535394: 0x24a2fff8  addiu       $v0, $a1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x535390) {
            ctx->pc = 0x535430u;
            goto label_535430;
        }
    }
    ctx->pc = 0x535398u;
    // 0x535398: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x535398u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_53539c:
    // 0x53539c: 0x8c6b0024  lw          $t3, 0x24($v1)
    ctx->pc = 0x53539cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x5353a0: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x5353a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x5353a4: 0x8c6d004c  lw          $t5, 0x4C($v1)
    ctx->pc = 0x5353a4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x5353a8: 0x82502b  sltu        $t2, $a0, $v0
    ctx->pc = 0x5353a8u;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x5353ac: 0x8c6c0074  lw          $t4, 0x74($v1)
    ctx->pc = 0x5353acu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
    // 0x5353b0: 0x256e03ff  addiu       $t6, $t3, 0x3FF
    ctx->pc = 0x5353b0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 11), 1023));
    // 0x5353b4: 0xe7282  srl         $t6, $t6, 10
    ctx->pc = 0x5353b4u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 14), 10));
    // 0x5353b8: 0x25ad03ff  addiu       $t5, $t5, 0x3FF
    ctx->pc = 0x5353b8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1023));
    // 0x5353bc: 0x12e7021  addu        $t6, $t1, $t6
    ctx->pc = 0x5353bcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 14)));
    // 0x5353c0: 0x8c6b009c  lw          $t3, 0x9C($v1)
    ctx->pc = 0x5353c0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 156)));
    // 0x5353c4: 0xd4a82  srl         $t1, $t5, 10
    ctx->pc = 0x5353c4u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 13), 10));
    // 0x5353c8: 0x1c96821  addu        $t5, $t6, $t1
    ctx->pc = 0x5353c8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 9)));
    // 0x5353cc: 0x258903ff  addiu       $t1, $t4, 0x3FF
    ctx->pc = 0x5353ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 12), 1023));
    // 0x5353d0: 0x96282  srl         $t4, $t1, 10
    ctx->pc = 0x5353d0u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 9), 10));
    // 0x5353d4: 0x256903ff  addiu       $t1, $t3, 0x3FF
    ctx->pc = 0x5353d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 11), 1023));
    // 0x5353d8: 0x1ac5821  addu        $t3, $t5, $t4
    ctx->pc = 0x5353d8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
    // 0x5353dc: 0x94a82  srl         $t1, $t1, 10
    ctx->pc = 0x5353dcu;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 9), 10));
    // 0x5353e0: 0x1697021  addu        $t6, $t3, $t1
    ctx->pc = 0x5353e0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
    // 0x5353e4: 0x8c6c00ec  lw          $t4, 0xEC($v1)
    ctx->pc = 0x5353e4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 236)));
    // 0x5353e8: 0x8c6900c4  lw          $t1, 0xC4($v1)
    ctx->pc = 0x5353e8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x5353ec: 0x8c6b0114  lw          $t3, 0x114($v1)
    ctx->pc = 0x5353ecu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 276)));
    // 0x5353f0: 0x258c03ff  addiu       $t4, $t4, 0x3FF
    ctx->pc = 0x5353f0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1023));
    // 0x5353f4: 0x252d03ff  addiu       $t5, $t1, 0x3FF
    ctx->pc = 0x5353f4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 9), 1023));
    // 0x5353f8: 0xc6282  srl         $t4, $t4, 10
    ctx->pc = 0x5353f8u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 12), 10));
    // 0x5353fc: 0x8c69013c  lw          $t1, 0x13C($v1)
    ctx->pc = 0x5353fcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 316)));
    // 0x535400: 0xd6a82  srl         $t5, $t5, 10
    ctx->pc = 0x535400u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 13), 10));
    // 0x535404: 0x1cd6821  addu        $t5, $t6, $t5
    ctx->pc = 0x535404u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x535408: 0x256b03ff  addiu       $t3, $t3, 0x3FF
    ctx->pc = 0x535408u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1023));
    // 0x53540c: 0x1ac6021  addu        $t4, $t5, $t4
    ctx->pc = 0x53540cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
    // 0x535410: 0xb5a82  srl         $t3, $t3, 10
    ctx->pc = 0x535410u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 11), 10));
    // 0x535414: 0x252903ff  addiu       $t1, $t1, 0x3FF
    ctx->pc = 0x535414u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1023));
    // 0x535418: 0x18b5821  addu        $t3, $t4, $t3
    ctx->pc = 0x535418u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
    // 0x53541c: 0x94a82  srl         $t1, $t1, 10
    ctx->pc = 0x53541cu;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 9), 10));
    // 0x535420: 0x24630140  addiu       $v1, $v1, 0x140
    ctx->pc = 0x535420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 320));
    // 0x535424: 0x1540ffdd  bnez        $t2, . + 4 + (-0x23 << 2)
    ctx->pc = 0x535424u;
    {
        const bool branch_taken_0x535424 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x535428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x535424u;
            // 0x535428: 0x1694821  addu        $t1, $t3, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x535424) {
            ctx->pc = 0x53539Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_53539c;
        }
    }
    ctx->pc = 0x53542Cu;
    // 0x53542c: 0x0  nop
    ctx->pc = 0x53542cu;
    // NOP
label_535430:
    // 0x535430: 0x85082b  sltu        $at, $a0, $a1
    ctx->pc = 0x535430u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x535434: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x535434u;
    {
        const bool branch_taken_0x535434 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x535434) {
            ctx->pc = 0x535470u;
            goto label_535470;
        }
    }
    ctx->pc = 0x53543Cu;
    // 0x53543c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x53543cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x535440: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x535440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x535444: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x535444u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x535448: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x535448u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_53544c:
    // 0x53544c: 0x8cc30024  lw          $v1, 0x24($a2)
    ctx->pc = 0x53544cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
    // 0x535450: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x535450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x535454: 0x85102b  sltu        $v0, $a0, $a1
    ctx->pc = 0x535454u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x535458: 0x246303ff  addiu       $v1, $v1, 0x3FF
    ctx->pc = 0x535458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1023));
    // 0x53545c: 0x24c60028  addiu       $a2, $a2, 0x28
    ctx->pc = 0x53545cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 40));
    // 0x535460: 0x31a82  srl         $v1, $v1, 10
    ctx->pc = 0x535460u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 10));
    // 0x535464: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x535464u;
    {
        const bool branch_taken_0x535464 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x535468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x535464u;
            // 0x535468: 0x1234821  addu        $t1, $t1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x535464) {
            ctx->pc = 0x53544Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_53544c;
        }
    }
    ctx->pc = 0x53546Cu;
    // 0x53546c: 0x0  nop
    ctx->pc = 0x53546cu;
    // NOP
label_535470:
    // 0x535470: 0x90e30016  lbu         $v1, 0x16($a3)
    ctx->pc = 0x535470u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 22)));
    // 0x535474: 0x1060003a  beqz        $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x535474u;
    {
        const bool branch_taken_0x535474 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x535478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x535474u;
            // 0x535478: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x535474) {
            ctx->pc = 0x535560u;
            goto label_535560;
        }
    }
    ctx->pc = 0x53547Cu;
    // 0x53547c: 0x2c610009  sltiu       $at, $v1, 0x9
    ctx->pc = 0x53547cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x535480: 0x14200027  bnez        $at, . + 4 + (0x27 << 2)
    ctx->pc = 0x535480u;
    {
        const bool branch_taken_0x535480 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x535484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x535480u;
            // 0x535484: 0x2462fff8  addiu       $v0, $v1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x535480) {
            ctx->pc = 0x535520u;
            goto label_535520;
        }
    }
    ctx->pc = 0x535488u;
    // 0x535488: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x535488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_53548c:
    // 0x53548c: 0x8c8b003c  lw          $t3, 0x3C($a0)
    ctx->pc = 0x53548cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x535490: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x535490u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x535494: 0x8c8d0064  lw          $t5, 0x64($a0)
    ctx->pc = 0x535494u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x535498: 0xc2502b  sltu        $t2, $a2, $v0
    ctx->pc = 0x535498u;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x53549c: 0x8c8c008c  lw          $t4, 0x8C($a0)
    ctx->pc = 0x53549cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 140)));
    // 0x5354a0: 0x256e03ff  addiu       $t6, $t3, 0x3FF
    ctx->pc = 0x5354a0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 11), 1023));
    // 0x5354a4: 0xe7282  srl         $t6, $t6, 10
    ctx->pc = 0x5354a4u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 14), 10));
    // 0x5354a8: 0x25ad03ff  addiu       $t5, $t5, 0x3FF
    ctx->pc = 0x5354a8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1023));
    // 0x5354ac: 0x12e7021  addu        $t6, $t1, $t6
    ctx->pc = 0x5354acu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 14)));
    // 0x5354b0: 0x8c8b00b4  lw          $t3, 0xB4($a0)
    ctx->pc = 0x5354b0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 180)));
    // 0x5354b4: 0xd4a82  srl         $t1, $t5, 10
    ctx->pc = 0x5354b4u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 13), 10));
    // 0x5354b8: 0x1c96821  addu        $t5, $t6, $t1
    ctx->pc = 0x5354b8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 9)));
    // 0x5354bc: 0x258903ff  addiu       $t1, $t4, 0x3FF
    ctx->pc = 0x5354bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 12), 1023));
    // 0x5354c0: 0x96282  srl         $t4, $t1, 10
    ctx->pc = 0x5354c0u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 9), 10));
    // 0x5354c4: 0x256903ff  addiu       $t1, $t3, 0x3FF
    ctx->pc = 0x5354c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 11), 1023));
    // 0x5354c8: 0x1ac5821  addu        $t3, $t5, $t4
    ctx->pc = 0x5354c8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
    // 0x5354cc: 0x94a82  srl         $t1, $t1, 10
    ctx->pc = 0x5354ccu;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 9), 10));
    // 0x5354d0: 0x1697021  addu        $t6, $t3, $t1
    ctx->pc = 0x5354d0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
    // 0x5354d4: 0x8c8c0104  lw          $t4, 0x104($a0)
    ctx->pc = 0x5354d4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
    // 0x5354d8: 0x8c8900dc  lw          $t1, 0xDC($a0)
    ctx->pc = 0x5354d8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x5354dc: 0x8c8b012c  lw          $t3, 0x12C($a0)
    ctx->pc = 0x5354dcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 300)));
    // 0x5354e0: 0x258c03ff  addiu       $t4, $t4, 0x3FF
    ctx->pc = 0x5354e0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1023));
    // 0x5354e4: 0x252d03ff  addiu       $t5, $t1, 0x3FF
    ctx->pc = 0x5354e4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 9), 1023));
    // 0x5354e8: 0xc6282  srl         $t4, $t4, 10
    ctx->pc = 0x5354e8u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 12), 10));
    // 0x5354ec: 0x8c890154  lw          $t1, 0x154($a0)
    ctx->pc = 0x5354ecu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x5354f0: 0xd6a82  srl         $t5, $t5, 10
    ctx->pc = 0x5354f0u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 13), 10));
    // 0x5354f4: 0x1cd6821  addu        $t5, $t6, $t5
    ctx->pc = 0x5354f4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x5354f8: 0x256b03ff  addiu       $t3, $t3, 0x3FF
    ctx->pc = 0x5354f8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1023));
    // 0x5354fc: 0x1ac6021  addu        $t4, $t5, $t4
    ctx->pc = 0x5354fcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
    // 0x535500: 0xb5a82  srl         $t3, $t3, 10
    ctx->pc = 0x535500u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 11), 10));
    // 0x535504: 0x252903ff  addiu       $t1, $t1, 0x3FF
    ctx->pc = 0x535504u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1023));
    // 0x535508: 0x18b5821  addu        $t3, $t4, $t3
    ctx->pc = 0x535508u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
    // 0x53550c: 0x94a82  srl         $t1, $t1, 10
    ctx->pc = 0x53550cu;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 9), 10));
    // 0x535510: 0x24840140  addiu       $a0, $a0, 0x140
    ctx->pc = 0x535510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
    // 0x535514: 0x1540ffdd  bnez        $t2, . + 4 + (-0x23 << 2)
    ctx->pc = 0x535514u;
    {
        const bool branch_taken_0x535514 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x535518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x535514u;
            // 0x535518: 0x1694821  addu        $t1, $t3, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x535514) {
            ctx->pc = 0x53548Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_53548c;
        }
    }
    ctx->pc = 0x53551Cu;
    // 0x53551c: 0x0  nop
    ctx->pc = 0x53551cu;
    // NOP
label_535520:
    // 0x535520: 0xc3082b  sltu        $at, $a2, $v1
    ctx->pc = 0x535520u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x535524: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x535524u;
    {
        const bool branch_taken_0x535524 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x535524) {
            ctx->pc = 0x535560u;
            goto label_535560;
        }
    }
    ctx->pc = 0x53552Cu;
    // 0x53552c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x53552cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x535530: 0x90e40016  lbu         $a0, 0x16($a3)
    ctx->pc = 0x535530u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 22)));
    // 0x535534: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x535534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x535538: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x535538u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x53553c: 0xe25021  addu        $t2, $a3, $v0
    ctx->pc = 0x53553cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_535540:
    // 0x535540: 0x8d47003c  lw          $a3, 0x3C($t2)
    ctx->pc = 0x535540u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 60)));
    // 0x535544: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x535544u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x535548: 0xc4102b  sltu        $v0, $a2, $a0
    ctx->pc = 0x535548u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x53554c: 0x24e703ff  addiu       $a3, $a3, 0x3FF
    ctx->pc = 0x53554cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1023));
    // 0x535550: 0x254a0028  addiu       $t2, $t2, 0x28
    ctx->pc = 0x535550u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 40));
    // 0x535554: 0x73a82  srl         $a3, $a3, 10
    ctx->pc = 0x535554u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 10));
    // 0x535558: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x535558u;
    {
        const bool branch_taken_0x535558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x53555Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x535558u;
            // 0x53555c: 0x1274821  addu        $t1, $t1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x535558) {
            ctx->pc = 0x535540u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_535540;
        }
    }
    ctx->pc = 0x535560u;
label_535560:
    // 0x535560: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x535560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x535564: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x535564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x535568: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x535568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x53556c: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x53556cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x535570: 0x11000002  beqz        $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x535570u;
    {
        const bool branch_taken_0x535570 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x535574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x535570u;
            // 0x535574: 0x1224821  addu        $t1, $t1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x535570) {
            ctx->pc = 0x53557Cu;
            goto label_53557c;
        }
    }
    ctx->pc = 0x535578u;
    // 0x535578: 0x25290002  addiu       $t1, $t1, 0x2
    ctx->pc = 0x535578u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
label_53557c:
    // 0x53557c: 0x3e00008  jr          $ra
    ctx->pc = 0x53557Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x535580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53557Cu;
            // 0x535580: 0x91280  sll         $v0, $t1, 10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 10));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x535584u;
    // 0x535584: 0x0  nop
    ctx->pc = 0x535584u;
    // NOP
    // 0x535588: 0x0  nop
    ctx->pc = 0x535588u;
    // NOP
    // 0x53558c: 0x0  nop
    ctx->pc = 0x53558cu;
    // NOP
}
