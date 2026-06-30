#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0012A498
// Address: 0x12a498 - 0x12a5f8
void sub_0012A498_0x12a498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012A498_0x12a498");
#endif

    switch (ctx->pc) {
        case 0x12a4e4u: goto label_12a4e4;
        case 0x12a508u: goto label_12a508;
        case 0x12a51cu: goto label_12a51c;
        case 0x12a560u: goto label_12a560;
        case 0x12a598u: goto label_12a598;
        case 0x12a5a8u: goto label_12a5a8;
        case 0x12a5d0u: goto label_12a5d0;
        default: break;
    }

    ctx->pc = 0x12a498u;

    // 0x12a498: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x12a498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x12a49c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12a49cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12a4a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12a4a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12a4a4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12a4a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12a4a8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x12a4a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a4ac: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x12a4acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x12a4b0: 0x68943  sra         $s1, $a2, 5
    ctx->pc = 0x12a4b0u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 6), 5));
    // 0x12a4b4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x12a4b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x12a4b8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x12a4b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x12a4bc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x12a4bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a4c0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x12a4c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x12a4c4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x12a4c4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a4c8: 0x8cae0010  lw          $t6, 0x10($a1)
    ctx->pc = 0x12a4c8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x12a4cc: 0x8cad0008  lw          $t5, 0x8($a1)
    ctx->pc = 0x12a4ccu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x12a4d0: 0x22e7021  addu        $t6, $s1, $t6
    ctx->pc = 0x12a4d0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 14)));
    // 0x12a4d4: 0x25d20001  addiu       $s2, $t6, 0x1
    ctx->pc = 0x12a4d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x12a4d8: 0x1b2782a  slt         $t7, $t5, $s2
    ctx->pc = 0x12a4d8u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x12a4dc: 0x11e00008  beqz        $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x12A4DCu;
    {
        const bool branch_taken_0x12a4dc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A4E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A4DCu;
            // 0x12a4e0: 0x8ca50004  lw          $a1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a4dc) {
            ctx->pc = 0x12A500u;
            goto label_12a500;
        }
    }
    ctx->pc = 0x12A4E4u;
label_12a4e4:
    // 0x12a4e4: 0xd6840  sll         $t5, $t5, 1
    ctx->pc = 0x12a4e4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x12a4e8: 0x1b2782a  slt         $t7, $t5, $s2
    ctx->pc = 0x12a4e8u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x12a4ec: 0x0  nop
    ctx->pc = 0x12a4ecu;
    // NOP
    // 0x12a4f0: 0x0  nop
    ctx->pc = 0x12a4f0u;
    // NOP
    // 0x12a4f4: 0x0  nop
    ctx->pc = 0x12a4f4u;
    // NOP
    // 0x12a4f8: 0x15e0fffa  bnez        $t7, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12A4F8u;
    {
        const bool branch_taken_0x12a4f8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A4FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A4F8u;
            // 0x12a4fc: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a4f8) {
            ctx->pc = 0x12A4E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12a4e4;
        }
    }
    ctx->pc = 0x12A500u;
label_12a500:
    // 0x12a500: 0xc04a740  jal         func_129D00
    ctx->pc = 0x12A500u;
    SET_GPR_U32(ctx, 31, 0x12A508u);
    ctx->pc = 0x12A504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12A500u;
            // 0x12a504: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129D00u;
    if (runtime->hasFunction(0x129D00u)) {
        auto targetFn = runtime->lookupFunction(0x129D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A508u; }
        if (ctx->pc != 0x12A508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129D00_0x129d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A508u; }
        if (ctx->pc != 0x12A508u) { return; }
    }
    ctx->pc = 0x12A508u;
label_12a508:
    // 0x12a508: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x12a508u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a50c: 0x1a20000b  blez        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x12A50Cu;
    {
        const bool branch_taken_0x12a50c = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x12A510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A50Cu;
            // 0x12a510: 0x244d0014  addiu       $t5, $v0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a50c) {
            ctx->pc = 0x12A53Cu;
            goto label_12a53c;
        }
    }
    ctx->pc = 0x12A514u;
    // 0x12a514: 0x1a0782d  daddu       $t7, $t5, $zero
    ctx->pc = 0x12a514u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a518: 0x220682d  daddu       $t5, $s1, $zero
    ctx->pc = 0x12a518u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12a51c:
    // 0x12a51c: 0xade00000  sw          $zero, 0x0($t7)
    ctx->pc = 0x12a51cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 0));
    // 0x12a520: 0x25adffff  addiu       $t5, $t5, -0x1
    ctx->pc = 0x12a520u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
    // 0x12a524: 0x0  nop
    ctx->pc = 0x12a524u;
    // NOP
    // 0x12a528: 0x0  nop
    ctx->pc = 0x12a528u;
    // NOP
    // 0x12a52c: 0x0  nop
    ctx->pc = 0x12a52cu;
    // NOP
    // 0x12a530: 0x15a0fffa  bnez        $t5, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12A530u;
    {
        const bool branch_taken_0x12a530 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A530u;
            // 0x12a534: 0x25ef0004  addiu       $t7, $t7, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a530) {
            ctx->pc = 0x12A51Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12a51c;
        }
    }
    ctx->pc = 0x12A538u;
    // 0x12a538: 0x1e0682d  daddu       $t5, $t7, $zero
    ctx->pc = 0x12a538u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
label_12a53c:
    // 0x12a53c: 0x8e6f0010  lw          $t7, 0x10($s3)
    ctx->pc = 0x12a53cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x12a540: 0x266c0014  addiu       $t4, $s3, 0x14
    ctx->pc = 0x12a540u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
    // 0x12a544: 0x3210001f  andi        $s0, $s0, 0x1F
    ctx->pc = 0x12a544u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)31);
    // 0x12a548: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x12a548u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x12a54c: 0x12000020  beqz        $s0, . + 4 + (0x20 << 2)
    ctx->pc = 0x12A54Cu;
    {
        const bool branch_taken_0x12a54c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A54Cu;
            // 0x12a550: 0x18f5821  addu        $t3, $t4, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a54c) {
            ctx->pc = 0x12A5D0u;
            goto label_12a5d0;
        }
    }
    ctx->pc = 0x12A554u;
    // 0x12a554: 0x240f0020  addiu       $t7, $zero, 0x20
    ctx->pc = 0x12a554u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x12a558: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x12a558u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a55c: 0x1f05023  subu        $t2, $t7, $s0
    ctx->pc = 0x12a55cu;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 16)));
label_12a560:
    // 0x12a560: 0x8d8f0000  lw          $t7, 0x0($t4)
    ctx->pc = 0x12a560u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x12a564: 0x20f7804  sllv        $t7, $t7, $s0
    ctx->pc = 0x12a564u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), GPR_U32(ctx, 16) & 0x1F));
    // 0x12a568: 0x1ee7825  or          $t7, $t7, $t6
    ctx->pc = 0x12a568u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 14));
    // 0x12a56c: 0xadaf0000  sw          $t7, 0x0($t5)
    ctx->pc = 0x12a56cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 15));
    // 0x12a570: 0x8d8e0000  lw          $t6, 0x0($t4)
    ctx->pc = 0x12a570u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x12a574: 0x25ad0004  addiu       $t5, $t5, 0x4
    ctx->pc = 0x12a574u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
    // 0x12a578: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x12a578u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x12a57c: 0x18b782b  sltu        $t7, $t4, $t3
    ctx->pc = 0x12a57cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x12a580: 0x15e0fff7  bnez        $t7, . + 4 + (-0x9 << 2)
    ctx->pc = 0x12A580u;
    {
        const bool branch_taken_0x12a580 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A580u;
            // 0x12a584: 0x14e7006  srlv        $t6, $t6, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 14), GPR_U32(ctx, 10) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a580) {
            ctx->pc = 0x12A560u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12a560;
        }
    }
    ctx->pc = 0x12A588u;
    // 0x12a588: 0x11c00002  beqz        $t6, . + 4 + (0x2 << 2)
    ctx->pc = 0x12A588u;
    {
        const bool branch_taken_0x12a588 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A58Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A588u;
            // 0x12a58c: 0xadae0000  sw          $t6, 0x0($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a588) {
            ctx->pc = 0x12A594u;
            goto label_12a594;
        }
    }
    ctx->pc = 0x12A590u;
    // 0x12a590: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x12a590u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_12a594:
    // 0x12a594: 0x264fffff  addiu       $t7, $s2, -0x1
    ctx->pc = 0x12a594u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_12a598:
    // 0x12a598: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x12a598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a59c: 0xae8f0010  sw          $t7, 0x10($s4)
    ctx->pc = 0x12a59cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 15));
    // 0x12a5a0: 0xc04a76a  jal         func_129DA8
    ctx->pc = 0x12A5A0u;
    SET_GPR_U32(ctx, 31, 0x12A5A8u);
    ctx->pc = 0x12A5A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12A5A0u;
            // 0x12a5a4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129DA8u;
    if (runtime->hasFunction(0x129DA8u)) {
        auto targetFn = runtime->lookupFunction(0x129DA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A5A8u; }
        if (ctx->pc != 0x12A5A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129DA8_0x129da8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A5A8u; }
        if (ctx->pc != 0x12A5A8u) { return; }
    }
    ctx->pc = 0x12A5A8u;
label_12a5a8:
    // 0x12a5a8: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x12a5a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a5ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12a5acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12a5b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12a5b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12a5b4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12a5b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12a5b8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x12a5b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12a5bc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x12a5bcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12a5c0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x12a5c0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12a5c4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x12a5c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12a5c8: 0x3e00008  jr          $ra
    ctx->pc = 0x12A5C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12A5CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A5C8u;
            // 0x12a5cc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12A5D0u;
label_12a5d0:
    // 0x12a5d0: 0x8d8f0000  lw          $t7, 0x0($t4)
    ctx->pc = 0x12a5d0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x12a5d4: 0xadaf0000  sw          $t7, 0x0($t5)
    ctx->pc = 0x12a5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 15));
    // 0x12a5d8: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x12a5d8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x12a5dc: 0x18b782b  sltu        $t7, $t4, $t3
    ctx->pc = 0x12a5dcu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x12a5e0: 0x0  nop
    ctx->pc = 0x12a5e0u;
    // NOP
    // 0x12a5e4: 0x15e0fffa  bnez        $t7, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12A5E4u;
    {
        const bool branch_taken_0x12a5e4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A5E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A5E4u;
            // 0x12a5e8: 0x25ad0004  addiu       $t5, $t5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a5e4) {
            ctx->pc = 0x12A5D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12a5d0;
        }
    }
    ctx->pc = 0x12A5ECu;
    // 0x12a5ec: 0x1000ffea  b           . + 4 + (-0x16 << 2)
    ctx->pc = 0x12A5ECu;
    {
        const bool branch_taken_0x12a5ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A5F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A5ECu;
            // 0x12a5f0: 0x264fffff  addiu       $t7, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a5ec) {
            ctx->pc = 0x12A598u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12a598;
        }
    }
    ctx->pc = 0x12A5F4u;
    // 0x12a5f4: 0x0  nop
    ctx->pc = 0x12a5f4u;
    // NOP
}
