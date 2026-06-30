#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002EC3A0
// Address: 0x2ec3a0 - 0x2ec7b0
void sub_002EC3A0_0x2ec3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EC3A0_0x2ec3a0");
#endif

    switch (ctx->pc) {
        case 0x2ec430u: goto label_2ec430;
        case 0x2ec490u: goto label_2ec490;
        case 0x2ec4f0u: goto label_2ec4f0;
        case 0x2ec550u: goto label_2ec550;
        case 0x2ec6fcu: goto label_2ec6fc;
        case 0x2ec71cu: goto label_2ec71c;
        case 0x2ec76cu: goto label_2ec76c;
        case 0x2ec774u: goto label_2ec774;
        default: break;
    }

    ctx->pc = 0x2ec3a0u;

    // 0x2ec3a0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2ec3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2ec3a4: 0x314300ff  andi        $v1, $t2, 0xFF
    ctx->pc = 0x2ec3a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
    // 0x2ec3a8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2ec3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2ec3ac: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2ec3acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ec3b0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2ec3b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2ec3b4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2ec3b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2ec3b8: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x2ec3b8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec3bc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2ec3bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2ec3c0: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x2ec3c0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec3c4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2ec3c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2ec3c8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2ec3c8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec3cc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2ec3ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2ec3d0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2ec3d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec3d4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ec3d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2ec3d8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2ec3d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec3dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ec3dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ec3e0: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2ec3e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec3e4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ec3e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ec3e8: 0x106200a1  beq         $v1, $v0, . + 4 + (0xA1 << 2)
    ctx->pc = 0x2EC3E8u;
    {
        const bool branch_taken_0x2ec3e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EC3ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC3E8u;
            // 0x2ec3ec: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec3e8) {
            ctx->pc = 0x2EC670u;
            goto label_2ec670;
        }
    }
    ctx->pc = 0x2EC3F0u;
    // 0x2ec3f0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2ec3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ec3f4: 0x1062008a  beq         $v1, $v0, . + 4 + (0x8A << 2)
    ctx->pc = 0x2EC3F4u;
    {
        const bool branch_taken_0x2ec3f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ec3f4) {
            ctx->pc = 0x2EC620u;
            goto label_2ec620;
        }
    }
    ctx->pc = 0x2EC3FCu;
    // 0x2ec3fc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ec3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ec400: 0x10620076  beq         $v1, $v0, . + 4 + (0x76 << 2)
    ctx->pc = 0x2EC400u;
    {
        const bool branch_taken_0x2ec400 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ec400) {
            ctx->pc = 0x2EC5DCu;
            goto label_2ec5dc;
        }
    }
    ctx->pc = 0x2EC408u;
    // 0x2ec408: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ec408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ec40c: 0x10620065  beq         $v1, $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x2EC40Cu;
    {
        const bool branch_taken_0x2ec40c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ec40c) {
            ctx->pc = 0x2EC5A4u;
            goto label_2ec5a4;
        }
    }
    ctx->pc = 0x2EC414u;
    // 0x2ec414: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EC414u;
    {
        const bool branch_taken_0x2ec414 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec414) {
            ctx->pc = 0x2EC424u;
            goto label_2ec424;
        }
    }
    ctx->pc = 0x2EC41Cu;
    // 0x2ec41c: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x2EC41Cu;
    {
        const bool branch_taken_0x2ec41c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec41c) {
            ctx->pc = 0x2EC6C8u;
            goto label_2ec6c8;
        }
    }
    ctx->pc = 0x2EC424u;
label_2ec424:
    // 0x2ec424: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ec424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ec428: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ec428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec42c: 0x94430ef8  lhu         $v1, 0xEF8($v0)
    ctx->pc = 0x2ec42cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 3832)));
label_2ec430:
    // 0x2ec430: 0x5494000e  bnel        $a0, $s4, . + 4 + (0xE << 2)
    ctx->pc = 0x2EC430u;
    {
        const bool branch_taken_0x2ec430 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 20));
        if (branch_taken_0x2ec430) {
            ctx->pc = 0x2EC434u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC430u;
            // 0x2ec434: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EC46Cu;
            goto label_2ec46c;
        }
    }
    ctx->pc = 0x2EC438u;
    // 0x2ec438: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x2ec438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ec43c: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x2ec43cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2ec440: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EC440u;
    {
        const bool branch_taken_0x2ec440 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ec440) {
            ctx->pc = 0x2EC450u;
            goto label_2ec450;
        }
    }
    ctx->pc = 0x2EC448u;
    // 0x2ec448: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2EC448u;
    {
        const bool branch_taken_0x2ec448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC44Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC448u;
            // 0x2ec44c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec448) {
            ctx->pc = 0x2EC464u;
            goto label_2ec464;
        }
    }
    ctx->pc = 0x2EC450u;
label_2ec450:
    // 0x2ec450: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ec450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ec454: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x2ec454u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x2ec458: 0x24420f20  addiu       $v0, $v0, 0xF20
    ctx->pc = 0x2ec458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3872));
    // 0x2ec45c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ec45cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ec460: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2ec460u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ec464:
    // 0x2ec464: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x2EC464u;
    {
        const bool branch_taken_0x2ec464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec464) {
            ctx->pc = 0x2EC59Cu;
            goto label_2ec59c;
        }
    }
    ctx->pc = 0x2EC46Cu;
label_2ec46c:
    // 0x2ec46c: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x2ec46cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2ec470: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2EC470u;
    {
        const bool branch_taken_0x2ec470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ec470) {
            ctx->pc = 0x2EC430u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ec430;
        }
    }
    ctx->pc = 0x2EC478u;
    // 0x2ec478: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x2ec478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ec47c: 0x2822023  subu        $a0, $s4, $v0
    ctx->pc = 0x2ec47cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2ec480: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ec480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ec484: 0x94430f00  lhu         $v1, 0xF00($v0)
    ctx->pc = 0x2ec484u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 3840)));
    // 0x2ec488: 0x18600013  blez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2EC488u;
    {
        const bool branch_taken_0x2ec488 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2EC48Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC488u;
            // 0x2ec48c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec488) {
            ctx->pc = 0x2EC4D8u;
            goto label_2ec4d8;
        }
    }
    ctx->pc = 0x2EC490u;
label_2ec490:
    // 0x2ec490: 0x54a4000d  bnel        $a1, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x2EC490u;
    {
        const bool branch_taken_0x2ec490 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x2ec490) {
            ctx->pc = 0x2EC494u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC490u;
            // 0x2ec494: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EC4C8u;
            goto label_2ec4c8;
        }
    }
    ctx->pc = 0x2EC498u;
    // 0x2ec498: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x2ec498u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2ec49c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EC49Cu;
    {
        const bool branch_taken_0x2ec49c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ec49c) {
            ctx->pc = 0x2EC4ACu;
            goto label_2ec4ac;
        }
    }
    ctx->pc = 0x2EC4A4u;
    // 0x2ec4a4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2EC4A4u;
    {
        const bool branch_taken_0x2ec4a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC4A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC4A4u;
            // 0x2ec4a8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec4a4) {
            ctx->pc = 0x2EC4C0u;
            goto label_2ec4c0;
        }
    }
    ctx->pc = 0x2EC4ACu;
label_2ec4ac:
    // 0x2ec4ac: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ec4acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ec4b0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ec4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ec4b4: 0x244210b0  addiu       $v0, $v0, 0x10B0
    ctx->pc = 0x2ec4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
    // 0x2ec4b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ec4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ec4bc: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2ec4bcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ec4c0:
    // 0x2ec4c0: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x2EC4C0u;
    {
        const bool branch_taken_0x2ec4c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec4c0) {
            ctx->pc = 0x2EC59Cu;
            goto label_2ec59c;
        }
    }
    ctx->pc = 0x2EC4C8u;
label_2ec4c8:
    // 0x2ec4c8: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x2ec4c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2ec4cc: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2EC4CCu;
    {
        const bool branch_taken_0x2ec4cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ec4cc) {
            ctx->pc = 0x2EC490u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ec490;
        }
    }
    ctx->pc = 0x2EC4D4u;
    // 0x2ec4d4: 0x0  nop
    ctx->pc = 0x2ec4d4u;
    // NOP
label_2ec4d8:
    // 0x2ec4d8: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x2ec4d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ec4dc: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x2ec4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2ec4e0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ec4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ec4e4: 0x94430f08  lhu         $v1, 0xF08($v0)
    ctx->pc = 0x2ec4e4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 3848)));
    // 0x2ec4e8: 0x18600013  blez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2EC4E8u;
    {
        const bool branch_taken_0x2ec4e8 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2EC4ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC4E8u;
            // 0x2ec4ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec4e8) {
            ctx->pc = 0x2EC538u;
            goto label_2ec538;
        }
    }
    ctx->pc = 0x2EC4F0u;
label_2ec4f0:
    // 0x2ec4f0: 0x54a4000d  bnel        $a1, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x2EC4F0u;
    {
        const bool branch_taken_0x2ec4f0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x2ec4f0) {
            ctx->pc = 0x2EC4F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC4F0u;
            // 0x2ec4f4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EC528u;
            goto label_2ec528;
        }
    }
    ctx->pc = 0x2EC4F8u;
    // 0x2ec4f8: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x2ec4f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2ec4fc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EC4FCu;
    {
        const bool branch_taken_0x2ec4fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ec4fc) {
            ctx->pc = 0x2EC50Cu;
            goto label_2ec50c;
        }
    }
    ctx->pc = 0x2EC504u;
    // 0x2ec504: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2EC504u;
    {
        const bool branch_taken_0x2ec504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC504u;
            // 0x2ec508: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec504) {
            ctx->pc = 0x2EC520u;
            goto label_2ec520;
        }
    }
    ctx->pc = 0x2EC50Cu;
label_2ec50c:
    // 0x2ec50c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ec50cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ec510: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ec510u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ec514: 0x24421240  addiu       $v0, $v0, 0x1240
    ctx->pc = 0x2ec514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4672));
    // 0x2ec518: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ec518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ec51c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2ec51cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ec520:
    // 0x2ec520: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2EC520u;
    {
        const bool branch_taken_0x2ec520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec520) {
            ctx->pc = 0x2EC59Cu;
            goto label_2ec59c;
        }
    }
    ctx->pc = 0x2EC528u;
label_2ec528:
    // 0x2ec528: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x2ec528u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2ec52c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2EC52Cu;
    {
        const bool branch_taken_0x2ec52c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ec52c) {
            ctx->pc = 0x2EC4F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ec4f0;
        }
    }
    ctx->pc = 0x2EC534u;
    // 0x2ec534: 0x0  nop
    ctx->pc = 0x2ec534u;
    // NOP
label_2ec538:
    // 0x2ec538: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x2ec538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ec53c: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x2ec53cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2ec540: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ec540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ec544: 0x94430f10  lhu         $v1, 0xF10($v0)
    ctx->pc = 0x2ec544u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 3856)));
    // 0x2ec548: 0x18600013  blez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2EC548u;
    {
        const bool branch_taken_0x2ec548 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2EC54Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC548u;
            // 0x2ec54c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec548) {
            ctx->pc = 0x2EC598u;
            goto label_2ec598;
        }
    }
    ctx->pc = 0x2EC550u;
label_2ec550:
    // 0x2ec550: 0x54a4000d  bnel        $a1, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x2EC550u;
    {
        const bool branch_taken_0x2ec550 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x2ec550) {
            ctx->pc = 0x2EC554u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC550u;
            // 0x2ec554: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EC588u;
            goto label_2ec588;
        }
    }
    ctx->pc = 0x2EC558u;
    // 0x2ec558: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x2ec558u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2ec55c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EC55Cu;
    {
        const bool branch_taken_0x2ec55c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ec55c) {
            ctx->pc = 0x2EC56Cu;
            goto label_2ec56c;
        }
    }
    ctx->pc = 0x2EC564u;
    // 0x2ec564: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2EC564u;
    {
        const bool branch_taken_0x2ec564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC564u;
            // 0x2ec568: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec564) {
            ctx->pc = 0x2EC580u;
            goto label_2ec580;
        }
    }
    ctx->pc = 0x2EC56Cu;
label_2ec56c:
    // 0x2ec56c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ec56cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ec570: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ec570u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ec574: 0x24421310  addiu       $v0, $v0, 0x1310
    ctx->pc = 0x2ec574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4880));
    // 0x2ec578: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ec578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ec57c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2ec57cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ec580:
    // 0x2ec580: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2EC580u;
    {
        const bool branch_taken_0x2ec580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec580) {
            ctx->pc = 0x2EC59Cu;
            goto label_2ec59c;
        }
    }
    ctx->pc = 0x2EC588u;
label_2ec588:
    // 0x2ec588: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x2ec588u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2ec58c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2EC58Cu;
    {
        const bool branch_taken_0x2ec58c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ec58c) {
            ctx->pc = 0x2EC550u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ec550;
        }
    }
    ctx->pc = 0x2EC594u;
    // 0x2ec594: 0x0  nop
    ctx->pc = 0x2ec594u;
    // NOP
label_2ec598:
    // 0x2ec598: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2ec598u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ec59c:
    // 0x2ec59c: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x2EC59Cu;
    {
        const bool branch_taken_0x2ec59c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec59c) {
            ctx->pc = 0x2EC6C8u;
            goto label_2ec6c8;
        }
    }
    ctx->pc = 0x2EC5A4u;
label_2ec5a4:
    // 0x2ec5a4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ec5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ec5a8: 0x94420ef8  lhu         $v0, 0xEF8($v0)
    ctx->pc = 0x2ec5a8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 3832)));
    // 0x2ec5ac: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x2ec5acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2ec5b0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EC5B0u;
    {
        const bool branch_taken_0x2ec5b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ec5b0) {
            ctx->pc = 0x2EC5C0u;
            goto label_2ec5c0;
        }
    }
    ctx->pc = 0x2EC5B8u;
    // 0x2ec5b8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2EC5B8u;
    {
        const bool branch_taken_0x2ec5b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec5b8) {
            ctx->pc = 0x2EC5D4u;
            goto label_2ec5d4;
        }
    }
    ctx->pc = 0x2EC5C0u;
label_2ec5c0:
    // 0x2ec5c0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ec5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ec5c4: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x2ec5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x2ec5c8: 0x24420f20  addiu       $v0, $v0, 0xF20
    ctx->pc = 0x2ec5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3872));
    // 0x2ec5cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ec5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ec5d0: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2ec5d0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ec5d4:
    // 0x2ec5d4: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x2EC5D4u;
    {
        const bool branch_taken_0x2ec5d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec5d4) {
            ctx->pc = 0x2EC6C8u;
            goto label_2ec6c8;
        }
    }
    ctx->pc = 0x2EC5DCu;
label_2ec5dc:
    // 0x2ec5dc: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x2ec5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x2ec5e0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ec5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ec5e4: 0x94630ef8  lhu         $v1, 0xEF8($v1)
    ctx->pc = 0x2ec5e4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 3832)));
    // 0x2ec5e8: 0x94420f00  lhu         $v0, 0xF00($v0)
    ctx->pc = 0x2ec5e8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 3840)));
    // 0x2ec5ec: 0x2831823  subu        $v1, $s4, $v1
    ctx->pc = 0x2ec5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x2ec5f0: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x2ec5f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2ec5f4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EC5F4u;
    {
        const bool branch_taken_0x2ec5f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ec5f4) {
            ctx->pc = 0x2EC604u;
            goto label_2ec604;
        }
    }
    ctx->pc = 0x2EC5FCu;
    // 0x2ec5fc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2EC5FCu;
    {
        const bool branch_taken_0x2ec5fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec5fc) {
            ctx->pc = 0x2EC618u;
            goto label_2ec618;
        }
    }
    ctx->pc = 0x2EC604u;
label_2ec604:
    // 0x2ec604: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ec604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ec608: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2ec608u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ec60c: 0x244210b0  addiu       $v0, $v0, 0x10B0
    ctx->pc = 0x2ec60cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
    // 0x2ec610: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ec610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ec614: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2ec614u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ec618:
    // 0x2ec618: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x2EC618u;
    {
        const bool branch_taken_0x2ec618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec618) {
            ctx->pc = 0x2EC6C8u;
            goto label_2ec6c8;
        }
    }
    ctx->pc = 0x2EC620u;
label_2ec620:
    // 0x2ec620: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ec620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ec624: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x2ec624u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x2ec628: 0x94440ef8  lhu         $a0, 0xEF8($v0)
    ctx->pc = 0x2ec628u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 3832)));
    // 0x2ec62c: 0x94630f00  lhu         $v1, 0xF00($v1)
    ctx->pc = 0x2ec62cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 3840)));
    // 0x2ec630: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ec630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ec634: 0x94420f08  lhu         $v0, 0xF08($v0)
    ctx->pc = 0x2ec634u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 3848)));
    // 0x2ec638: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2ec638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2ec63c: 0x2831823  subu        $v1, $s4, $v1
    ctx->pc = 0x2ec63cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x2ec640: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x2ec640u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2ec644: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EC644u;
    {
        const bool branch_taken_0x2ec644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ec644) {
            ctx->pc = 0x2EC654u;
            goto label_2ec654;
        }
    }
    ctx->pc = 0x2EC64Cu;
    // 0x2ec64c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2EC64Cu;
    {
        const bool branch_taken_0x2ec64c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec64c) {
            ctx->pc = 0x2EC668u;
            goto label_2ec668;
        }
    }
    ctx->pc = 0x2EC654u;
label_2ec654:
    // 0x2ec654: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ec654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ec658: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2ec658u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ec65c: 0x24421240  addiu       $v0, $v0, 0x1240
    ctx->pc = 0x2ec65cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4672));
    // 0x2ec660: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ec660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ec664: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2ec664u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ec668:
    // 0x2ec668: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2EC668u;
    {
        const bool branch_taken_0x2ec668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec668) {
            ctx->pc = 0x2EC6C8u;
            goto label_2ec6c8;
        }
    }
    ctx->pc = 0x2EC670u;
label_2ec670:
    // 0x2ec670: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x2ec670u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x2ec674: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ec674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ec678: 0x94650ef8  lhu         $a1, 0xEF8($v1)
    ctx->pc = 0x2ec678u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 3832)));
    // 0x2ec67c: 0x94440f00  lhu         $a0, 0xF00($v0)
    ctx->pc = 0x2ec67cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 3840)));
    // 0x2ec680: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x2ec680u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x2ec684: 0x94630f08  lhu         $v1, 0xF08($v1)
    ctx->pc = 0x2ec684u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 3848)));
    // 0x2ec688: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ec688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ec68c: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x2ec68cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2ec690: 0x94420f10  lhu         $v0, 0xF10($v0)
    ctx->pc = 0x2ec690u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 3856)));
    // 0x2ec694: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ec694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ec698: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2ec698u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ec69c: 0x2831823  subu        $v1, $s4, $v1
    ctx->pc = 0x2ec69cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x2ec6a0: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x2ec6a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2ec6a4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EC6A4u;
    {
        const bool branch_taken_0x2ec6a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ec6a4) {
            ctx->pc = 0x2EC6B4u;
            goto label_2ec6b4;
        }
    }
    ctx->pc = 0x2EC6ACu;
    // 0x2ec6ac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2EC6ACu;
    {
        const bool branch_taken_0x2ec6ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec6ac) {
            ctx->pc = 0x2EC6C8u;
            goto label_2ec6c8;
        }
    }
    ctx->pc = 0x2EC6B4u;
label_2ec6b4:
    // 0x2ec6b4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ec6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ec6b8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2ec6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ec6bc: 0x24421310  addiu       $v0, $v0, 0x1310
    ctx->pc = 0x2ec6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4880));
    // 0x2ec6c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ec6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ec6c4: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2ec6c4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ec6c8:
    // 0x2ec6c8: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EC6C8u;
    {
        const bool branch_taken_0x2ec6c8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ec6c8) {
            ctx->pc = 0x2EC6D8u;
            goto label_2ec6d8;
        }
    }
    ctx->pc = 0x2EC6D0u;
    // 0x2ec6d0: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x2EC6D0u;
    {
        const bool branch_taken_0x2ec6d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC6D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC6D0u;
            // 0x2ec6d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec6d0) {
            ctx->pc = 0x2EC778u;
            goto label_2ec778;
        }
    }
    ctx->pc = 0x2EC6D8u;
label_2ec6d8:
    // 0x2ec6d8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ec6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ec6dc: 0x944314a0  lhu         $v1, 0x14A0($v0)
    ctx->pc = 0x2ec6dcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 5280)));
    // 0x2ec6e0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2ec6e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ec6e4: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EC6E4u;
    {
        const bool branch_taken_0x2ec6e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2EC6E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC6E4u;
            // 0x2ec6e8: 0xa7a0009e  sh          $zero, 0x9E($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 158), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec6e4) {
            ctx->pc = 0x2EC6F4u;
            goto label_2ec6f4;
        }
    }
    ctx->pc = 0x2EC6ECu;
    // 0x2ec6ec: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ec6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ec6f0: 0xa44014a0  sh          $zero, 0x14A0($v0)
    ctx->pc = 0x2ec6f0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 5280), (uint16_t)GPR_U32(ctx, 0));
label_2ec6f4:
    // 0x2ec6f4: 0xc040180  jal         func_100600
    ctx->pc = 0x2EC6F4u;
    SET_GPR_U32(ctx, 31, 0x2EC6FCu);
    ctx->pc = 0x2EC6F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC6F4u;
            // 0x2ec6f8: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC6FCu; }
        if (ctx->pc != 0x2EC6FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC6FCu; }
        if (ctx->pc != 0x2EC6FCu) { return; }
    }
    ctx->pc = 0x2EC6FCu;
label_2ec6fc:
    // 0x2ec6fc: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2EC6FCu;
    {
        const bool branch_taken_0x2ec6fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC6FCu;
            // 0x2ec700: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec6fc) {
            ctx->pc = 0x2EC774u;
            goto label_2ec774;
        }
    }
    ctx->pc = 0x2EC704u;
    // 0x2ec704: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x2ec704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x2ec708: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ec708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec70c: 0x3445f76e  ori         $a1, $v0, 0xF76E
    ctx->pc = 0x2ec70cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63342);
    // 0x2ec710: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2ec710u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ec714: 0xc0ba470  jal         func_2E91C0
    ctx->pc = 0x2EC714u;
    SET_GPR_U32(ctx, 31, 0x2EC71Cu);
    ctx->pc = 0x2EC718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC714u;
            // 0x2ec718: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E91C0u;
    if (runtime->hasFunction(0x2E91C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E91C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC71Cu; }
        if (ctx->pc != 0x2EC71Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E91C0_0x2e91c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC71Cu; }
        if (ctx->pc != 0x2EC71Cu) { return; }
    }
    ctx->pc = 0x2EC71Cu;
label_2ec71c:
    // 0x2ec71c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2ec71cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2ec720: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2ec720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec724: 0x244230a0  addiu       $v0, $v0, 0x30A0
    ctx->pc = 0x2ec724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12448));
    // 0x2ec728: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ec728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec72c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2ec72cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2ec730: 0x27a6009e  addiu       $a2, $sp, 0x9E
    ctx->pc = 0x2ec730u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 158));
    // 0x2ec734: 0xa2150078  sb          $s5, 0x78($s0)
    ctx->pc = 0x2ec734u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 120), (uint8_t)GPR_U32(ctx, 21));
    // 0x2ec738: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2ec738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ec73c: 0xa2170079  sb          $s7, 0x79($s0)
    ctx->pc = 0x2ec73cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 121), (uint8_t)GPR_U32(ctx, 23));
    // 0x2ec740: 0xa614007a  sh          $s4, 0x7A($s0)
    ctx->pc = 0x2ec740u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 122), (uint16_t)GPR_U32(ctx, 20));
    // 0x2ec744: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x2ec744u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
    // 0x2ec748: 0xa2000084  sb          $zero, 0x84($s0)
    ctx->pc = 0x2ec748u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 132), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ec74c: 0xae020088  sw          $v0, 0x88($s0)
    ctx->pc = 0x2ec74cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 2));
    // 0x2ec750: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x2ec750u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x2ec754: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x2ec754u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    // 0x2ec758: 0xae1200ec  sw          $s2, 0xEC($s0)
    ctx->pc = 0x2ec758u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 18));
    // 0x2ec75c: 0xae0000f0  sw          $zero, 0xF0($s0)
    ctx->pc = 0x2ec75cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 0));
    // 0x2ec760: 0xae1300f4  sw          $s3, 0xF4($s0)
    ctx->pc = 0x2ec760u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 19));
    // 0x2ec764: 0xc0ba43c  jal         func_2E90F0
    ctx->pc = 0x2EC764u;
    SET_GPR_U32(ctx, 31, 0x2EC76Cu);
    ctx->pc = 0x2EC768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC764u;
            // 0x2ec768: 0xae1600f8  sw          $s6, 0xF8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E90F0u;
    if (runtime->hasFunction(0x2E90F0u)) {
        auto targetFn = runtime->lookupFunction(0x2E90F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC76Cu; }
        if (ctx->pc != 0x2EC76Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E90F0_0x2e90f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC76Cu; }
        if (ctx->pc != 0x2EC76Cu) { return; }
    }
    ctx->pc = 0x2EC76Cu;
label_2ec76c:
    // 0x2ec76c: 0xc0ba1e8  jal         func_2E87A0
    ctx->pc = 0x2EC76Cu;
    SET_GPR_U32(ctx, 31, 0x2EC774u);
    ctx->pc = 0x2EC770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC76Cu;
            // 0x2ec770: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E87A0u;
    if (runtime->hasFunction(0x2E87A0u)) {
        auto targetFn = runtime->lookupFunction(0x2E87A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC774u; }
        if (ctx->pc != 0x2EC774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E87A0_0x2e87a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC774u; }
        if (ctx->pc != 0x2EC774u) { return; }
    }
    ctx->pc = 0x2EC774u;
label_2ec774:
    // 0x2ec774: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2ec774u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ec778:
    // 0x2ec778: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2ec778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2ec77c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2ec77cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2ec780: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2ec780u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ec784: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2ec784u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ec788: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2ec788u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ec78c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2ec78cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ec790: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ec790u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ec794: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ec794u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ec798: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ec798u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ec79c: 0x3e00008  jr          $ra
    ctx->pc = 0x2EC79Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EC7A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC79Cu;
            // 0x2ec7a0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2EC7A4u;
    // 0x2ec7a4: 0x0  nop
    ctx->pc = 0x2ec7a4u;
    // NOP
    // 0x2ec7a8: 0x0  nop
    ctx->pc = 0x2ec7a8u;
    // NOP
    // 0x2ec7ac: 0x0  nop
    ctx->pc = 0x2ec7acu;
    // NOP
}
