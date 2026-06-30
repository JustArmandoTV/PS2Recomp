#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0012A660
// Address: 0x12a660 - 0x12a7e0
void sub_0012A660_0x12a660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012A660_0x12a660");
#endif

    switch (ctx->pc) {
        case 0x12a690u: goto label_12a690;
        case 0x12a6a0u: goto label_12a6a0;
        case 0x12a6acu: goto label_12a6ac;
        case 0x12a6ecu: goto label_12a6ec;
        case 0x12a718u: goto label_12a718;
        case 0x12a770u: goto label_12a770;
        case 0x12a7b8u: goto label_12a7b8;
        default: break;
    }

    ctx->pc = 0x12a660u;

    // 0x12a660: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12a660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12a664: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12a664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12a668: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x12a668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x12a66c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12a66cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12a670: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x12a670u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a674: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x12a674u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a678: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12a678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12a67c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x12a67cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x12a680: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x12a680u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a684: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x12a684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a688: 0xc04a97e  jal         func_12A5F8
    ctx->pc = 0x12A688u;
    SET_GPR_U32(ctx, 31, 0x12A690u);
    ctx->pc = 0x12A68Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12A688u;
            // 0x12a68c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A5F8u;
    if (runtime->hasFunction(0x12A5F8u)) {
        auto targetFn = runtime->lookupFunction(0x12A5F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A690u; }
        if (ctx->pc != 0x12A690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A5F8_0x12a5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A690u; }
        if (ctx->pc != 0x12A690u) { return; }
    }
    ctx->pc = 0x12A690u;
label_12a690:
    // 0x12a690: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x12A690u;
    {
        const bool branch_taken_0x12a690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A690u;
            // 0x12a694: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a690) {
            ctx->pc = 0x12A6C8u;
            goto label_12a6c8;
        }
    }
    ctx->pc = 0x12A698u;
    // 0x12a698: 0xc04a740  jal         func_129D00
    ctx->pc = 0x12A698u;
    SET_GPR_U32(ctx, 31, 0x12A6A0u);
    ctx->pc = 0x12A69Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12A698u;
            // 0x12a69c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129D00u;
    if (runtime->hasFunction(0x129D00u)) {
        auto targetFn = runtime->lookupFunction(0x129D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A6A0u; }
        if (ctx->pc != 0x12A6A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129D00_0x129d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A6A0u; }
        if (ctx->pc != 0x12A6A0u) { return; }
    }
    ctx->pc = 0x12A6A0u;
label_12a6a0:
    // 0x12a6a0: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x12a6a0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12a6a4: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x12a6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x12a6a8: 0xac4f0010  sw          $t7, 0x10($v0)
    ctx->pc = 0x12a6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 15));
label_12a6ac:
    // 0x12a6ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12a6acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12a6b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12a6b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12a6b4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12a6b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12a6b8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x12a6b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12a6bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x12a6bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12a6c0: 0x3e00008  jr          $ra
    ctx->pc = 0x12A6C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12A6C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A6C0u;
            // 0x12a6c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12A6C8u;
label_12a6c8:
    // 0x12a6c8: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12A6C8u;
    {
        const bool branch_taken_0x12a6c8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x12A6CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A6C8u;
            // 0x12a6cc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a6c8) {
            ctx->pc = 0x12A6E0u;
            goto label_12a6e0;
        }
    }
    ctx->pc = 0x12A6D0u;
    // 0x12a6d0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x12a6d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a6d4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x12a6d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12a6d8: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x12a6d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a6dc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12a6dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12a6e0:
    // 0x12a6e0: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x12a6e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x12a6e4: 0xc04a740  jal         func_129D00
    ctx->pc = 0x12A6E4u;
    SET_GPR_U32(ctx, 31, 0x12A6ECu);
    ctx->pc = 0x12A6E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12A6E4u;
            // 0x12a6e8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129D00u;
    if (runtime->hasFunction(0x129D00u)) {
        auto targetFn = runtime->lookupFunction(0x129D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A6ECu; }
        if (ctx->pc != 0x12A6ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129D00_0x129d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A6ECu; }
        if (ctx->pc != 0x12A6ECu) { return; }
    }
    ctx->pc = 0x12A6ECu;
label_12a6ec:
    // 0x12a6ec: 0x8e290010  lw          $t1, 0x10($s1)
    ctx->pc = 0x12a6ecu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x12a6f0: 0x26240014  addiu       $a0, $s1, 0x14
    ctx->pc = 0x12a6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x12a6f4: 0x8e4f0010  lw          $t7, 0x10($s2)
    ctx->pc = 0x12a6f4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x12a6f8: 0x26450014  addiu       $a1, $s2, 0x14
    ctx->pc = 0x12a6f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x12a6fc: 0x97080  sll         $t6, $t1, 2
    ctx->pc = 0x12a6fcu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x12a700: 0xac50000c  sw          $s0, 0xC($v0)
    ctx->pc = 0x12a700u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 16));
    // 0x12a704: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x12a704u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x12a708: 0x8e3821  addu        $a3, $a0, $t6
    ctx->pc = 0x12a708u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 14)));
    // 0x12a70c: 0xaf4021  addu        $t0, $a1, $t7
    ctx->pc = 0x12a70cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x12a710: 0x244a0014  addiu       $t2, $v0, 0x14
    ctx->pc = 0x12a710u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x12a714: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x12a714u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12a718:
    // 0x12a718: 0x8c8d0000  lw          $t5, 0x0($a0)
    ctx->pc = 0x12a718u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12a71c: 0x8caf0000  lw          $t7, 0x0($a1)
    ctx->pc = 0x12a71cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12a720: 0x31aeffff  andi        $t6, $t5, 0xFFFF
    ctx->pc = 0x12a720u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)65535);
    // 0x12a724: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x12a724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x12a728: 0x31ecffff  andi        $t4, $t7, 0xFFFF
    ctx->pc = 0x12a728u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)65535);
    // 0x12a72c: 0xd6c02  srl         $t5, $t5, 16
    ctx->pc = 0x12a72cu;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 13), 16));
    // 0x12a730: 0x1cc7023  subu        $t6, $t6, $t4
    ctx->pc = 0x12a730u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 12)));
    // 0x12a734: 0xf7c02  srl         $t7, $t7, 16
    ctx->pc = 0x12a734u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 15), 16));
    // 0x12a738: 0x1cb7021  addu        $t6, $t6, $t3
    ctx->pc = 0x12a738u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 11)));
    // 0x12a73c: 0x1af6823  subu        $t5, $t5, $t7
    ctx->pc = 0x12a73cu;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
    // 0x12a740: 0xe5c03  sra         $t3, $t6, 16
    ctx->pc = 0x12a740u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 14), 16));
    // 0x12a744: 0xa54e0000  sh          $t6, 0x0($t2)
    ctx->pc = 0x12a744u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 14));
    // 0x12a748: 0x1ab6821  addu        $t5, $t5, $t3
    ctx->pc = 0x12a748u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 11)));
    // 0x12a74c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x12a74cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x12a750: 0xa54d0002  sh          $t5, 0x2($t2)
    ctx->pc = 0x12a750u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 2), (uint16_t)GPR_U32(ctx, 13));
    // 0x12a754: 0xd5c03  sra         $t3, $t5, 16
    ctx->pc = 0x12a754u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 13), 16));
    // 0x12a758: 0xa8782b  sltu        $t7, $a1, $t0
    ctx->pc = 0x12a758u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x12a75c: 0x15e0ffee  bnez        $t7, . + 4 + (-0x12 << 2)
    ctx->pc = 0x12A75Cu;
    {
        const bool branch_taken_0x12a75c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A75Cu;
            // 0x12a760: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a75c) {
            ctx->pc = 0x12A718u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12a718;
        }
    }
    ctx->pc = 0x12A764u;
    // 0x12a764: 0x87782b  sltu        $t7, $a0, $a3
    ctx->pc = 0x12a764u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x12a768: 0x11e0000f  beqz        $t7, . + 4 + (0xF << 2)
    ctx->pc = 0x12A768u;
    {
        const bool branch_taken_0x12a768 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A76Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A768u;
            // 0x12a76c: 0x140702d  daddu       $t6, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a768) {
            ctx->pc = 0x12A7A8u;
            goto label_12a7a8;
        }
    }
    ctx->pc = 0x12A770u;
label_12a770:
    // 0x12a770: 0x8c8f0000  lw          $t7, 0x0($a0)
    ctx->pc = 0x12a770u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12a774: 0x31eeffff  andi        $t6, $t7, 0xFFFF
    ctx->pc = 0x12a774u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)65535);
    // 0x12a778: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x12a778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x12a77c: 0x1cb7021  addu        $t6, $t6, $t3
    ctx->pc = 0x12a77cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 11)));
    // 0x12a780: 0xf7c02  srl         $t7, $t7, 16
    ctx->pc = 0x12a780u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 15), 16));
    // 0x12a784: 0xe5c03  sra         $t3, $t6, 16
    ctx->pc = 0x12a784u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 14), 16));
    // 0x12a788: 0xa54e0000  sh          $t6, 0x0($t2)
    ctx->pc = 0x12a788u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 14));
    // 0x12a78c: 0x1eb6821  addu        $t5, $t7, $t3
    ctx->pc = 0x12a78cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 11)));
    // 0x12a790: 0xa54d0002  sh          $t5, 0x2($t2)
    ctx->pc = 0x12a790u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 2), (uint16_t)GPR_U32(ctx, 13));
    // 0x12a794: 0x87702b  sltu        $t6, $a0, $a3
    ctx->pc = 0x12a794u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x12a798: 0xd5c03  sra         $t3, $t5, 16
    ctx->pc = 0x12a798u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 13), 16));
    // 0x12a79c: 0x15c0fff4  bnez        $t6, . + 4 + (-0xC << 2)
    ctx->pc = 0x12A79Cu;
    {
        const bool branch_taken_0x12a79c = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A7A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A79Cu;
            // 0x12a7a0: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a79c) {
            ctx->pc = 0x12A770u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12a770;
        }
    }
    ctx->pc = 0x12A7A4u;
    // 0x12a7a4: 0x140702d  daddu       $t6, $t2, $zero
    ctx->pc = 0x12a7a4u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_12a7a8:
    // 0x12a7a8: 0x25cefffc  addiu       $t6, $t6, -0x4
    ctx->pc = 0x12a7a8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967292));
    // 0x12a7ac: 0x8dcf0000  lw          $t7, 0x0($t6)
    ctx->pc = 0x12a7acu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x12a7b0: 0x55e0ffbe  bnel        $t7, $zero, . + 4 + (-0x42 << 2)
    ctx->pc = 0x12A7B0u;
    {
        const bool branch_taken_0x12a7b0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x12a7b0) {
            ctx->pc = 0x12A7B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12A7B0u;
            // 0x12a7b4: 0xac490010  sw          $t1, 0x10($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12A6ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12a6ac;
        }
    }
    ctx->pc = 0x12A7B8u;
label_12a7b8:
    // 0x12a7b8: 0x25cefffc  addiu       $t6, $t6, -0x4
    ctx->pc = 0x12a7b8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967292));
    // 0x12a7bc: 0x8dcf0000  lw          $t7, 0x0($t6)
    ctx->pc = 0x12a7bcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x12a7c0: 0x0  nop
    ctx->pc = 0x12a7c0u;
    // NOP
    // 0x12a7c4: 0x0  nop
    ctx->pc = 0x12a7c4u;
    // NOP
    // 0x12a7c8: 0x0  nop
    ctx->pc = 0x12a7c8u;
    // NOP
    // 0x12a7cc: 0x11e0fffa  beqz        $t7, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12A7CCu;
    {
        const bool branch_taken_0x12a7cc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A7D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A7CCu;
            // 0x12a7d0: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a7cc) {
            ctx->pc = 0x12A7B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12a7b8;
        }
    }
    ctx->pc = 0x12A7D4u;
    // 0x12a7d4: 0x1000ffb5  b           . + 4 + (-0x4B << 2)
    ctx->pc = 0x12A7D4u;
    {
        const bool branch_taken_0x12a7d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A7D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A7D4u;
            // 0x12a7d8: 0xac490010  sw          $t1, 0x10($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a7d4) {
            ctx->pc = 0x12A6ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12a6ac;
        }
    }
    ctx->pc = 0x12A7DCu;
    // 0x12a7dc: 0x0  nop
    ctx->pc = 0x12a7dcu;
    // NOP
}
