#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B6298
// Address: 0x1b6298 - 0x1b63b8
void sub_001B6298_0x1b6298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6298_0x1b6298");
#endif

    switch (ctx->pc) {
        case 0x1b62b4u: goto label_1b62b4;
        case 0x1b62f0u: goto label_1b62f0;
        case 0x1b62fcu: goto label_1b62fc;
        case 0x1b6340u: goto label_1b6340;
        default: break;
    }

    ctx->pc = 0x1b6298u;

    // 0x1b6298: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b6298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b629c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b629cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b62a0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1b62a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b62a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b62a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b62a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b62a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b62ac: 0xc06a234  jal         func_1A88D0
    ctx->pc = 0x1B62ACu;
    SET_GPR_U32(ctx, 31, 0x1B62B4u);
    ctx->pc = 0x1B62B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B62ACu;
            // 0x1b62b0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A88D0u;
    if (runtime->hasFunction(0x1A88D0u)) {
        auto targetFn = runtime->lookupFunction(0x1A88D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B62B4u; }
        if (ctx->pc != 0x1B62B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A88D0_0x1a88d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B62B4u; }
        if (ctx->pc != 0x1B62B4u) { return; }
    }
    ctx->pc = 0x1B62B4u;
label_1b62b4:
    // 0x1b62b4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B62B4u;
    {
        const bool branch_taken_0x1b62b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B62B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B62B4u;
            // 0x1b62b8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b62b4) {
            ctx->pc = 0x1B62D8u;
            goto label_1b62d8;
        }
    }
    ctx->pc = 0x1B62BCu;
    // 0x1b62bc: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1b62bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1b62c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b62c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b62c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b62c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b62c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b62c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b62cc: 0x34a5011a  ori         $a1, $a1, 0x11A
    ctx->pc = 0x1b62ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)282);
    // 0x1b62d0: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1B62D0u;
    ctx->pc = 0x1B62D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B62D0u;
            // 0x1b62d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B62D8u;
label_1b62d8:
    // 0x1b62d8: 0x8e23004c  lw          $v1, 0x4C($s1)
    ctx->pc = 0x1b62d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x1b62dc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1b62dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b62e0: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B62E0u;
    {
        const bool branch_taken_0x1b62e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b62e0) {
            ctx->pc = 0x1B62E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B62E0u;
            // 0x1b62e4: 0x26233810  addiu       $v1, $s1, 0x3810 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 14352));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B62F4u;
            goto label_1b62f4;
        }
    }
    ctx->pc = 0x1B62E8u;
    // 0x1b62e8: 0xc06d19c  jal         func_1B4670
    ctx->pc = 0x1B62E8u;
    SET_GPR_U32(ctx, 31, 0x1B62F0u);
    ctx->pc = 0x1B62ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B62E8u;
            // 0x1b62ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4670u;
    if (runtime->hasFunction(0x1B4670u)) {
        auto targetFn = runtime->lookupFunction(0x1B4670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B62F0u; }
        if (ctx->pc != 0x1B62F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B4670_0x1b4670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B62F0u; }
        if (ctx->pc != 0x1B62F0u) { return; }
    }
    ctx->pc = 0x1B62F0u;
label_1b62f0:
    // 0x1b62f0: 0x26233810  addiu       $v1, $s1, 0x3810
    ctx->pc = 0x1b62f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 14352));
label_1b62f4:
    // 0x1b62f4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b62f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b62f8: 0x26243730  addiu       $a0, $s1, 0x3730
    ctx->pc = 0x1b62f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 14128));
label_1b62fc:
    // 0x1b62fc: 0xdc850000  ld          $a1, 0x0($a0)
    ctx->pc = 0x1b62fcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b6300: 0xdc860008  ld          $a2, 0x8($a0)
    ctx->pc = 0x1b6300u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1b6304: 0xdc870010  ld          $a3, 0x10($a0)
    ctx->pc = 0x1b6304u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1b6308: 0xdc880018  ld          $t0, 0x18($a0)
    ctx->pc = 0x1b6308u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1b630c: 0xfc450000  sd          $a1, 0x0($v0)
    ctx->pc = 0x1b630cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 5));
    // 0x1b6310: 0xfc460008  sd          $a2, 0x8($v0)
    ctx->pc = 0x1b6310u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 6));
    // 0x1b6314: 0xfc470010  sd          $a3, 0x10($v0)
    ctx->pc = 0x1b6314u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 7));
    // 0x1b6318: 0xfc480018  sd          $t0, 0x18($v0)
    ctx->pc = 0x1b6318u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 8));
    // 0x1b631c: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1b631cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1b6320: 0x0  nop
    ctx->pc = 0x1b6320u;
    // NOP
    // 0x1b6324: 0x0  nop
    ctx->pc = 0x1b6324u;
    // NOP
    // 0x1b6328: 0x1483fff4  bne         $a0, $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x1B6328u;
    {
        const bool branch_taken_0x1b6328 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B632Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6328u;
            // 0x1b632c: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6328) {
            ctx->pc = 0x1B62FCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b62fc;
        }
    }
    ctx->pc = 0x1B6330u;
    // 0x1b6330: 0x260c0008  addiu       $t4, $s0, 0x8
    ctx->pc = 0x1b6330u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1b6334: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x1b6334u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b6338: 0x180582d  daddu       $t3, $t4, $zero
    ctx->pc = 0x1b6338u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b633c: 0x26090030  addiu       $t1, $s0, 0x30
    ctx->pc = 0x1b633cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_1b6340:
    // 0x1b6340: 0xdd23fff0  ld          $v1, -0x10($t1)
    ctx->pc = 0x1b6340u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 9), 4294967280)));
    // 0x1b6344: 0xa3140  sll         $a2, $t2, 5
    ctx->pc = 0x1b6344u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 10), 5));
    // 0x1b6348: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x1b6348u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b634c: 0x1663021  addu        $a2, $t3, $a2
    ctx->pc = 0x1b634cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 6)));
    // 0x1b6350: 0x8d270008  lw          $a3, 0x8($t1)
    ctx->pc = 0x1b6350u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x1b6354: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1b6354u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1b6358: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x1b6358u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x1b635c: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x1b635cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1b6360: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x1b6360u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x1b6364: 0x29480004  slti        $t0, $t2, 0x4
    ctx->pc = 0x1b6364u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1b6368: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x1b6368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1b636c: 0xdcc50000  ld          $a1, 0x0($a2)
    ctx->pc = 0x1b636cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1b6370: 0xdd630000  ld          $v1, 0x0($t3)
    ctx->pc = 0x1b6370u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1b6374: 0xae040018  sw          $a0, 0x18($s0)
    ctx->pc = 0x1b6374u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 4));
    // 0x1b6378: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x1b6378u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1b637c: 0xa2180b  movn        $v1, $a1, $v0
    ctx->pc = 0x1b637cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x1b6380: 0xfd830000  sd          $v1, 0x0($t4)
    ctx->pc = 0x1b6380u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 3));
    // 0x1b6384: 0xdd240000  ld          $a0, 0x0($t1)
    ctx->pc = 0x1b6384u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1b6388: 0x25290020  addiu       $t1, $t1, 0x20
    ctx->pc = 0x1b6388u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
    // 0x1b638c: 0xde020010  ld          $v0, 0x10($s0)
    ctx->pc = 0x1b638cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1b6390: 0x44182a  slt         $v1, $v0, $a0
    ctx->pc = 0x1b6390u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1b6394: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x1b6394u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x1b6398: 0x1500ffe9  bnez        $t0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1B6398u;
    {
        const bool branch_taken_0x1b6398 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B639Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6398u;
            // 0x1b639c: 0xfe020010  sd          $v0, 0x10($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6398) {
            ctx->pc = 0x1B6340u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b6340;
        }
    }
    ctx->pc = 0x1B63A0u;
    // 0x1b63a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b63a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b63a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b63a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b63a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b63a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b63ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b63acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b63b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B63B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B63B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B63B0u;
            // 0x1b63b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B63B8u;
}
