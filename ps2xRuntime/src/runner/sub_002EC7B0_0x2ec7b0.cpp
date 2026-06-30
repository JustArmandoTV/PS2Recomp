#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002EC7B0
// Address: 0x2ec7b0 - 0x2ecba0
void sub_002EC7B0_0x2ec7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EC7B0_0x2ec7b0");
#endif

    switch (ctx->pc) {
        case 0x2ec82cu: goto label_2ec82c;
        case 0x2ec88cu: goto label_2ec88c;
        case 0x2ec8e8u: goto label_2ec8e8;
        case 0x2ec948u: goto label_2ec948;
        case 0x2ecaf4u: goto label_2ecaf4;
        case 0x2ecb1cu: goto label_2ecb1c;
        case 0x2ecb6cu: goto label_2ecb6c;
        case 0x2ecb74u: goto label_2ecb74;
        default: break;
    }

    ctx->pc = 0x2ec7b0u;

    // 0x2ec7b0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2ec7b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2ec7b4: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x2ec7b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x2ec7b8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2ec7b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2ec7bc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2ec7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ec7c0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2ec7c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2ec7c4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2ec7c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2ec7c8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2ec7c8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec7cc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2ec7ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2ec7d0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2ec7d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec7d4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ec7d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2ec7d8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2ec7d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec7dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ec7dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ec7e0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2ec7e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec7e4: 0x106200a0  beq         $v1, $v0, . + 4 + (0xA0 << 2)
    ctx->pc = 0x2EC7E4u;
    {
        const bool branch_taken_0x2ec7e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EC7E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC7E4u;
            // 0x2ec7e8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec7e4) {
            ctx->pc = 0x2ECA68u;
            goto label_2eca68;
        }
    }
    ctx->pc = 0x2EC7ECu;
    // 0x2ec7ec: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2ec7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ec7f0: 0x10620089  beq         $v1, $v0, . + 4 + (0x89 << 2)
    ctx->pc = 0x2EC7F0u;
    {
        const bool branch_taken_0x2ec7f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ec7f0) {
            ctx->pc = 0x2ECA18u;
            goto label_2eca18;
        }
    }
    ctx->pc = 0x2EC7F8u;
    // 0x2ec7f8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ec7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ec7fc: 0x10620075  beq         $v1, $v0, . + 4 + (0x75 << 2)
    ctx->pc = 0x2EC7FCu;
    {
        const bool branch_taken_0x2ec7fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ec7fc) {
            ctx->pc = 0x2EC9D4u;
            goto label_2ec9d4;
        }
    }
    ctx->pc = 0x2EC804u;
    // 0x2ec804: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ec804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ec808: 0x10620064  beq         $v1, $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x2EC808u;
    {
        const bool branch_taken_0x2ec808 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ec808) {
            ctx->pc = 0x2EC99Cu;
            goto label_2ec99c;
        }
    }
    ctx->pc = 0x2EC810u;
    // 0x2ec810: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EC810u;
    {
        const bool branch_taken_0x2ec810 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec810) {
            ctx->pc = 0x2EC820u;
            goto label_2ec820;
        }
    }
    ctx->pc = 0x2EC818u;
    // 0x2ec818: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x2EC818u;
    {
        const bool branch_taken_0x2ec818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec818) {
            ctx->pc = 0x2ECAC0u;
            goto label_2ecac0;
        }
    }
    ctx->pc = 0x2EC820u;
label_2ec820:
    // 0x2ec820: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ec820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ec824: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ec824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec828: 0x94430ef8  lhu         $v1, 0xEF8($v0)
    ctx->pc = 0x2ec828u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 3832)));
label_2ec82c:
    // 0x2ec82c: 0x5494000e  bnel        $a0, $s4, . + 4 + (0xE << 2)
    ctx->pc = 0x2EC82Cu;
    {
        const bool branch_taken_0x2ec82c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 20));
        if (branch_taken_0x2ec82c) {
            ctx->pc = 0x2EC830u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC82Cu;
            // 0x2ec830: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EC868u;
            goto label_2ec868;
        }
    }
    ctx->pc = 0x2EC834u;
    // 0x2ec834: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x2ec834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ec838: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x2ec838u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2ec83c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EC83Cu;
    {
        const bool branch_taken_0x2ec83c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ec83c) {
            ctx->pc = 0x2EC84Cu;
            goto label_2ec84c;
        }
    }
    ctx->pc = 0x2EC844u;
    // 0x2ec844: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2EC844u;
    {
        const bool branch_taken_0x2ec844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC844u;
            // 0x2ec848: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec844) {
            ctx->pc = 0x2EC860u;
            goto label_2ec860;
        }
    }
    ctx->pc = 0x2EC84Cu;
label_2ec84c:
    // 0x2ec84c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ec84cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ec850: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x2ec850u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x2ec854: 0x24420f20  addiu       $v0, $v0, 0xF20
    ctx->pc = 0x2ec854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3872));
    // 0x2ec858: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ec858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ec85c: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x2ec85cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ec860:
    // 0x2ec860: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x2EC860u;
    {
        const bool branch_taken_0x2ec860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec860) {
            ctx->pc = 0x2EC994u;
            goto label_2ec994;
        }
    }
    ctx->pc = 0x2EC868u;
label_2ec868:
    // 0x2ec868: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x2ec868u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2ec86c: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2EC86Cu;
    {
        const bool branch_taken_0x2ec86c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ec86c) {
            ctx->pc = 0x2EC82Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ec82c;
        }
    }
    ctx->pc = 0x2EC874u;
    // 0x2ec874: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x2ec874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ec878: 0x2822023  subu        $a0, $s4, $v0
    ctx->pc = 0x2ec878u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2ec87c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ec87cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ec880: 0x94430f00  lhu         $v1, 0xF00($v0)
    ctx->pc = 0x2ec880u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 3840)));
    // 0x2ec884: 0x18600012  blez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2EC884u;
    {
        const bool branch_taken_0x2ec884 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2EC888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC884u;
            // 0x2ec888: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec884) {
            ctx->pc = 0x2EC8D0u;
            goto label_2ec8d0;
        }
    }
    ctx->pc = 0x2EC88Cu;
label_2ec88c:
    // 0x2ec88c: 0x54a4000d  bnel        $a1, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x2EC88Cu;
    {
        const bool branch_taken_0x2ec88c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x2ec88c) {
            ctx->pc = 0x2EC890u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC88Cu;
            // 0x2ec890: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EC8C4u;
            goto label_2ec8c4;
        }
    }
    ctx->pc = 0x2EC894u;
    // 0x2ec894: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x2ec894u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2ec898: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EC898u;
    {
        const bool branch_taken_0x2ec898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ec898) {
            ctx->pc = 0x2EC8A8u;
            goto label_2ec8a8;
        }
    }
    ctx->pc = 0x2EC8A0u;
    // 0x2ec8a0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2EC8A0u;
    {
        const bool branch_taken_0x2ec8a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC8A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC8A0u;
            // 0x2ec8a4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec8a0) {
            ctx->pc = 0x2EC8BCu;
            goto label_2ec8bc;
        }
    }
    ctx->pc = 0x2EC8A8u;
label_2ec8a8:
    // 0x2ec8a8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ec8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ec8ac: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ec8acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ec8b0: 0x244210b0  addiu       $v0, $v0, 0x10B0
    ctx->pc = 0x2ec8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
    // 0x2ec8b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ec8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ec8b8: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x2ec8b8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ec8bc:
    // 0x2ec8bc: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x2EC8BCu;
    {
        const bool branch_taken_0x2ec8bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec8bc) {
            ctx->pc = 0x2EC994u;
            goto label_2ec994;
        }
    }
    ctx->pc = 0x2EC8C4u;
label_2ec8c4:
    // 0x2ec8c4: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x2ec8c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2ec8c8: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2EC8C8u;
    {
        const bool branch_taken_0x2ec8c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ec8c8) {
            ctx->pc = 0x2EC88Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ec88c;
        }
    }
    ctx->pc = 0x2EC8D0u;
label_2ec8d0:
    // 0x2ec8d0: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x2ec8d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ec8d4: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x2ec8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2ec8d8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ec8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ec8dc: 0x94430f08  lhu         $v1, 0xF08($v0)
    ctx->pc = 0x2ec8dcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 3848)));
    // 0x2ec8e0: 0x18600013  blez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2EC8E0u;
    {
        const bool branch_taken_0x2ec8e0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2EC8E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC8E0u;
            // 0x2ec8e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec8e0) {
            ctx->pc = 0x2EC930u;
            goto label_2ec930;
        }
    }
    ctx->pc = 0x2EC8E8u;
label_2ec8e8:
    // 0x2ec8e8: 0x54a4000d  bnel        $a1, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x2EC8E8u;
    {
        const bool branch_taken_0x2ec8e8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x2ec8e8) {
            ctx->pc = 0x2EC8ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC8E8u;
            // 0x2ec8ec: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EC920u;
            goto label_2ec920;
        }
    }
    ctx->pc = 0x2EC8F0u;
    // 0x2ec8f0: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x2ec8f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2ec8f4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EC8F4u;
    {
        const bool branch_taken_0x2ec8f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ec8f4) {
            ctx->pc = 0x2EC904u;
            goto label_2ec904;
        }
    }
    ctx->pc = 0x2EC8FCu;
    // 0x2ec8fc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2EC8FCu;
    {
        const bool branch_taken_0x2ec8fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC8FCu;
            // 0x2ec900: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec8fc) {
            ctx->pc = 0x2EC918u;
            goto label_2ec918;
        }
    }
    ctx->pc = 0x2EC904u;
label_2ec904:
    // 0x2ec904: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ec904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ec908: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ec908u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ec90c: 0x24421240  addiu       $v0, $v0, 0x1240
    ctx->pc = 0x2ec90cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4672));
    // 0x2ec910: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ec910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ec914: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x2ec914u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ec918:
    // 0x2ec918: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2EC918u;
    {
        const bool branch_taken_0x2ec918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec918) {
            ctx->pc = 0x2EC994u;
            goto label_2ec994;
        }
    }
    ctx->pc = 0x2EC920u;
label_2ec920:
    // 0x2ec920: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x2ec920u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2ec924: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2EC924u;
    {
        const bool branch_taken_0x2ec924 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ec924) {
            ctx->pc = 0x2EC8E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ec8e8;
        }
    }
    ctx->pc = 0x2EC92Cu;
    // 0x2ec92c: 0x0  nop
    ctx->pc = 0x2ec92cu;
    // NOP
label_2ec930:
    // 0x2ec930: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x2ec930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ec934: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x2ec934u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2ec938: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ec938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ec93c: 0x94430f10  lhu         $v1, 0xF10($v0)
    ctx->pc = 0x2ec93cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 3856)));
    // 0x2ec940: 0x18600013  blez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2EC940u;
    {
        const bool branch_taken_0x2ec940 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2EC944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC940u;
            // 0x2ec944: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec940) {
            ctx->pc = 0x2EC990u;
            goto label_2ec990;
        }
    }
    ctx->pc = 0x2EC948u;
label_2ec948:
    // 0x2ec948: 0x54a4000d  bnel        $a1, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x2EC948u;
    {
        const bool branch_taken_0x2ec948 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x2ec948) {
            ctx->pc = 0x2EC94Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC948u;
            // 0x2ec94c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EC980u;
            goto label_2ec980;
        }
    }
    ctx->pc = 0x2EC950u;
    // 0x2ec950: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x2ec950u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2ec954: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EC954u;
    {
        const bool branch_taken_0x2ec954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ec954) {
            ctx->pc = 0x2EC964u;
            goto label_2ec964;
        }
    }
    ctx->pc = 0x2EC95Cu;
    // 0x2ec95c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2EC95Cu;
    {
        const bool branch_taken_0x2ec95c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC95Cu;
            // 0x2ec960: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec95c) {
            ctx->pc = 0x2EC978u;
            goto label_2ec978;
        }
    }
    ctx->pc = 0x2EC964u;
label_2ec964:
    // 0x2ec964: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ec964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ec968: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ec968u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ec96c: 0x24421310  addiu       $v0, $v0, 0x1310
    ctx->pc = 0x2ec96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4880));
    // 0x2ec970: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ec970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ec974: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x2ec974u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ec978:
    // 0x2ec978: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2EC978u;
    {
        const bool branch_taken_0x2ec978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec978) {
            ctx->pc = 0x2EC994u;
            goto label_2ec994;
        }
    }
    ctx->pc = 0x2EC980u;
label_2ec980:
    // 0x2ec980: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x2ec980u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2ec984: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2EC984u;
    {
        const bool branch_taken_0x2ec984 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ec984) {
            ctx->pc = 0x2EC948u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ec948;
        }
    }
    ctx->pc = 0x2EC98Cu;
    // 0x2ec98c: 0x0  nop
    ctx->pc = 0x2ec98cu;
    // NOP
label_2ec990:
    // 0x2ec990: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2ec990u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ec994:
    // 0x2ec994: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x2EC994u;
    {
        const bool branch_taken_0x2ec994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec994) {
            ctx->pc = 0x2ECAC0u;
            goto label_2ecac0;
        }
    }
    ctx->pc = 0x2EC99Cu;
label_2ec99c:
    // 0x2ec99c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ec99cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ec9a0: 0x94420ef8  lhu         $v0, 0xEF8($v0)
    ctx->pc = 0x2ec9a0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 3832)));
    // 0x2ec9a4: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x2ec9a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2ec9a8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EC9A8u;
    {
        const bool branch_taken_0x2ec9a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ec9a8) {
            ctx->pc = 0x2EC9B8u;
            goto label_2ec9b8;
        }
    }
    ctx->pc = 0x2EC9B0u;
    // 0x2ec9b0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2EC9B0u;
    {
        const bool branch_taken_0x2ec9b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec9b0) {
            ctx->pc = 0x2EC9CCu;
            goto label_2ec9cc;
        }
    }
    ctx->pc = 0x2EC9B8u;
label_2ec9b8:
    // 0x2ec9b8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ec9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ec9bc: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x2ec9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x2ec9c0: 0x24420f20  addiu       $v0, $v0, 0xF20
    ctx->pc = 0x2ec9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3872));
    // 0x2ec9c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ec9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ec9c8: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x2ec9c8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ec9cc:
    // 0x2ec9cc: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x2EC9CCu;
    {
        const bool branch_taken_0x2ec9cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec9cc) {
            ctx->pc = 0x2ECAC0u;
            goto label_2ecac0;
        }
    }
    ctx->pc = 0x2EC9D4u;
label_2ec9d4:
    // 0x2ec9d4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x2ec9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x2ec9d8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ec9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ec9dc: 0x94630ef8  lhu         $v1, 0xEF8($v1)
    ctx->pc = 0x2ec9dcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 3832)));
    // 0x2ec9e0: 0x94420f00  lhu         $v0, 0xF00($v0)
    ctx->pc = 0x2ec9e0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 3840)));
    // 0x2ec9e4: 0x2831823  subu        $v1, $s4, $v1
    ctx->pc = 0x2ec9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x2ec9e8: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x2ec9e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2ec9ec: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EC9ECu;
    {
        const bool branch_taken_0x2ec9ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ec9ec) {
            ctx->pc = 0x2EC9FCu;
            goto label_2ec9fc;
        }
    }
    ctx->pc = 0x2EC9F4u;
    // 0x2ec9f4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2EC9F4u;
    {
        const bool branch_taken_0x2ec9f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec9f4) {
            ctx->pc = 0x2ECA10u;
            goto label_2eca10;
        }
    }
    ctx->pc = 0x2EC9FCu;
label_2ec9fc:
    // 0x2ec9fc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ec9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2eca00: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2eca00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2eca04: 0x244210b0  addiu       $v0, $v0, 0x10B0
    ctx->pc = 0x2eca04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
    // 0x2eca08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2eca08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2eca0c: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x2eca0cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2eca10:
    // 0x2eca10: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x2ECA10u;
    {
        const bool branch_taken_0x2eca10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eca10) {
            ctx->pc = 0x2ECAC0u;
            goto label_2ecac0;
        }
    }
    ctx->pc = 0x2ECA18u;
label_2eca18:
    // 0x2eca18: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2eca18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2eca1c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x2eca1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x2eca20: 0x94440ef8  lhu         $a0, 0xEF8($v0)
    ctx->pc = 0x2eca20u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 3832)));
    // 0x2eca24: 0x94630f00  lhu         $v1, 0xF00($v1)
    ctx->pc = 0x2eca24u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 3840)));
    // 0x2eca28: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2eca28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2eca2c: 0x94420f08  lhu         $v0, 0xF08($v0)
    ctx->pc = 0x2eca2cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 3848)));
    // 0x2eca30: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2eca30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2eca34: 0x2831823  subu        $v1, $s4, $v1
    ctx->pc = 0x2eca34u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x2eca38: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x2eca38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2eca3c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ECA3Cu;
    {
        const bool branch_taken_0x2eca3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eca3c) {
            ctx->pc = 0x2ECA4Cu;
            goto label_2eca4c;
        }
    }
    ctx->pc = 0x2ECA44u;
    // 0x2eca44: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2ECA44u;
    {
        const bool branch_taken_0x2eca44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eca44) {
            ctx->pc = 0x2ECA60u;
            goto label_2eca60;
        }
    }
    ctx->pc = 0x2ECA4Cu;
label_2eca4c:
    // 0x2eca4c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2eca4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2eca50: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2eca50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2eca54: 0x24421240  addiu       $v0, $v0, 0x1240
    ctx->pc = 0x2eca54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4672));
    // 0x2eca58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2eca58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2eca5c: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x2eca5cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2eca60:
    // 0x2eca60: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2ECA60u;
    {
        const bool branch_taken_0x2eca60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eca60) {
            ctx->pc = 0x2ECAC0u;
            goto label_2ecac0;
        }
    }
    ctx->pc = 0x2ECA68u;
label_2eca68:
    // 0x2eca68: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x2eca68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x2eca6c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2eca6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2eca70: 0x94650ef8  lhu         $a1, 0xEF8($v1)
    ctx->pc = 0x2eca70u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 3832)));
    // 0x2eca74: 0x94440f00  lhu         $a0, 0xF00($v0)
    ctx->pc = 0x2eca74u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 3840)));
    // 0x2eca78: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x2eca78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x2eca7c: 0x94630f08  lhu         $v1, 0xF08($v1)
    ctx->pc = 0x2eca7cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 3848)));
    // 0x2eca80: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2eca80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2eca84: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x2eca84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2eca88: 0x94420f10  lhu         $v0, 0xF10($v0)
    ctx->pc = 0x2eca88u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 3856)));
    // 0x2eca8c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2eca8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2eca90: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2eca90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2eca94: 0x2831823  subu        $v1, $s4, $v1
    ctx->pc = 0x2eca94u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x2eca98: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x2eca98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2eca9c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ECA9Cu;
    {
        const bool branch_taken_0x2eca9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eca9c) {
            ctx->pc = 0x2ECAACu;
            goto label_2ecaac;
        }
    }
    ctx->pc = 0x2ECAA4u;
    // 0x2ecaa4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2ECAA4u;
    {
        const bool branch_taken_0x2ecaa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ecaa4) {
            ctx->pc = 0x2ECAC0u;
            goto label_2ecac0;
        }
    }
    ctx->pc = 0x2ECAACu;
label_2ecaac:
    // 0x2ecaac: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ecaacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ecab0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2ecab0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ecab4: 0x24421310  addiu       $v0, $v0, 0x1310
    ctx->pc = 0x2ecab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4880));
    // 0x2ecab8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ecab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ecabc: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x2ecabcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ecac0:
    // 0x2ecac0: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ECAC0u;
    {
        const bool branch_taken_0x2ecac0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ecac0) {
            ctx->pc = 0x2ECAD0u;
            goto label_2ecad0;
        }
    }
    ctx->pc = 0x2ECAC8u;
    // 0x2ecac8: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x2ECAC8u;
    {
        const bool branch_taken_0x2ecac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ECAC8u;
            // 0x2ecacc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecac8) {
            ctx->pc = 0x2ECB78u;
            goto label_2ecb78;
        }
    }
    ctx->pc = 0x2ECAD0u;
label_2ecad0:
    // 0x2ecad0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ecad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ecad4: 0x944314a0  lhu         $v1, 0x14A0($v0)
    ctx->pc = 0x2ecad4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 5280)));
    // 0x2ecad8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2ecad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ecadc: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ECADCu;
    {
        const bool branch_taken_0x2ecadc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2ECAE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ECADCu;
            // 0x2ecae0: 0xa7a0007e  sh          $zero, 0x7E($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 126), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecadc) {
            ctx->pc = 0x2ECAECu;
            goto label_2ecaec;
        }
    }
    ctx->pc = 0x2ECAE4u;
    // 0x2ecae4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ecae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ecae8: 0xa44014a0  sh          $zero, 0x14A0($v0)
    ctx->pc = 0x2ecae8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 5280), (uint16_t)GPR_U32(ctx, 0));
label_2ecaec:
    // 0x2ecaec: 0xc040180  jal         func_100600
    ctx->pc = 0x2ECAECu;
    SET_GPR_U32(ctx, 31, 0x2ECAF4u);
    ctx->pc = 0x2ECAF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ECAECu;
            // 0x2ecaf0: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECAF4u; }
        if (ctx->pc != 0x2ECAF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECAF4u; }
        if (ctx->pc != 0x2ECAF4u) { return; }
    }
    ctx->pc = 0x2ECAF4u;
label_2ecaf4:
    // 0x2ecaf4: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2ECAF4u;
    {
        const bool branch_taken_0x2ecaf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECAF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ECAF4u;
            // 0x2ecaf8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecaf4) {
            ctx->pc = 0x2ECB74u;
            goto label_2ecb74;
        }
    }
    ctx->pc = 0x2ECAFCu;
    // 0x2ecafc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ecafcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ecb00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ecb00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecb04: 0x8c5014d8  lw          $s0, 0x14D8($v0)
    ctx->pc = 0x2ecb04u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2ecb08: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2ecb08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ecb0c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ecb0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecb10: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x2ecb10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x2ecb14: 0xc0ba470  jal         func_2E91C0
    ctx->pc = 0x2ECB14u;
    SET_GPR_U32(ctx, 31, 0x2ECB1Cu);
    ctx->pc = 0x2ECB18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ECB14u;
            // 0x2ecb18: 0x3445f76e  ori         $a1, $v0, 0xF76E (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63342);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E91C0u;
    if (runtime->hasFunction(0x2E91C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E91C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECB1Cu; }
        if (ctx->pc != 0x2ECB1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E91C0_0x2e91c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECB1Cu; }
        if (ctx->pc != 0x2ECB1Cu) { return; }
    }
    ctx->pc = 0x2ECB1Cu;
label_2ecb1c:
    // 0x2ecb1c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2ecb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2ecb20: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2ecb20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecb24: 0x244230a0  addiu       $v0, $v0, 0x30A0
    ctx->pc = 0x2ecb24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12448));
    // 0x2ecb28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ecb28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecb2c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2ecb2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2ecb30: 0x27a6007e  addiu       $a2, $sp, 0x7E
    ctx->pc = 0x2ecb30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 126));
    // 0x2ecb34: 0xa2350078  sb          $s5, 0x78($s1)
    ctx->pc = 0x2ecb34u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 120), (uint8_t)GPR_U32(ctx, 21));
    // 0x2ecb38: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2ecb38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ecb3c: 0xa2200079  sb          $zero, 0x79($s1)
    ctx->pc = 0x2ecb3cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 121), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ecb40: 0xa634007a  sh          $s4, 0x7A($s1)
    ctx->pc = 0x2ecb40u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 122), (uint16_t)GPR_U32(ctx, 20));
    // 0x2ecb44: 0xae200080  sw          $zero, 0x80($s1)
    ctx->pc = 0x2ecb44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 0));
    // 0x2ecb48: 0xa2200084  sb          $zero, 0x84($s1)
    ctx->pc = 0x2ecb48u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 132), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ecb4c: 0xae220088  sw          $v0, 0x88($s1)
    ctx->pc = 0x2ecb4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 2));
    // 0x2ecb50: 0xae2000e4  sw          $zero, 0xE4($s1)
    ctx->pc = 0x2ecb50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 228), GPR_U32(ctx, 0));
    // 0x2ecb54: 0xae2000e8  sw          $zero, 0xE8($s1)
    ctx->pc = 0x2ecb54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
    // 0x2ecb58: 0xae3300ec  sw          $s3, 0xEC($s1)
    ctx->pc = 0x2ecb58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 236), GPR_U32(ctx, 19));
    // 0x2ecb5c: 0xae2000f0  sw          $zero, 0xF0($s1)
    ctx->pc = 0x2ecb5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 0));
    // 0x2ecb60: 0xae2000f4  sw          $zero, 0xF4($s1)
    ctx->pc = 0x2ecb60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 0));
    // 0x2ecb64: 0xc0ba43c  jal         func_2E90F0
    ctx->pc = 0x2ECB64u;
    SET_GPR_U32(ctx, 31, 0x2ECB6Cu);
    ctx->pc = 0x2ECB68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ECB64u;
            // 0x2ecb68: 0xae3000f8  sw          $s0, 0xF8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 248), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E90F0u;
    if (runtime->hasFunction(0x2E90F0u)) {
        auto targetFn = runtime->lookupFunction(0x2E90F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECB6Cu; }
        if (ctx->pc != 0x2ECB6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E90F0_0x2e90f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECB6Cu; }
        if (ctx->pc != 0x2ECB6Cu) { return; }
    }
    ctx->pc = 0x2ECB6Cu;
label_2ecb6c:
    // 0x2ecb6c: 0xc0ba1e8  jal         func_2E87A0
    ctx->pc = 0x2ECB6Cu;
    SET_GPR_U32(ctx, 31, 0x2ECB74u);
    ctx->pc = 0x2ECB70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ECB6Cu;
            // 0x2ecb70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E87A0u;
    if (runtime->hasFunction(0x2E87A0u)) {
        auto targetFn = runtime->lookupFunction(0x2E87A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECB74u; }
        if (ctx->pc != 0x2ECB74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E87A0_0x2e87a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECB74u; }
        if (ctx->pc != 0x2ECB74u) { return; }
    }
    ctx->pc = 0x2ECB74u;
label_2ecb74:
    // 0x2ecb74: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2ecb74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ecb78:
    // 0x2ecb78: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2ecb78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ecb7c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2ecb7cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ecb80: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2ecb80u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ecb84: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2ecb84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ecb88: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ecb88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ecb8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ecb8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ecb90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ecb90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ecb94: 0x3e00008  jr          $ra
    ctx->pc = 0x2ECB94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ECB98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ECB94u;
            // 0x2ecb98: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2ECB9Cu;
    // 0x2ecb9c: 0x0  nop
    ctx->pc = 0x2ecb9cu;
    // NOP
}
