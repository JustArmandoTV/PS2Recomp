#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00128708
// Address: 0x128708 - 0x1288f8
void sub_00128708_0x128708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00128708_0x128708");
#endif

    switch (ctx->pc) {
        case 0x1287a8u: goto label_1287a8;
        case 0x1287b8u: goto label_1287b8;
        case 0x1287d0u: goto label_1287d0;
        case 0x1287e0u: goto label_1287e0;
        case 0x128854u: goto label_128854;
        case 0x12887cu: goto label_12887c;
        case 0x1288b4u: goto label_1288b4;
        case 0x1288bcu: goto label_1288bc;
        default: break;
    }

    ctx->pc = 0x128708u;

    // 0x128708: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x128708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12870c: 0x80782d  daddu       $t7, $a0, $zero
    ctx->pc = 0x12870cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128710: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x128710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x128714: 0x3c0e005d  lui         $t6, 0x5D
    ctx->pc = 0x128714u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)93 << 16));
    // 0x128718: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x128718u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12871c: 0x8dc41ad8  lw          $a0, 0x1AD8($t6)
    ctx->pc = 0x12871cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 6872)));
    // 0x128720: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x128720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128724: 0x1e0282d  daddu       $a1, $t7, $zero
    ctx->pc = 0x128724u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128728: 0x804a1cc  j           func_128730
    ctx->pc = 0x128728u;
    ctx->pc = 0x12872Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128728u;
            // 0x12872c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128730u;
    goto label_128730;
    ctx->pc = 0x128730u;
label_128730:
    // 0x128730: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x128730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x128734: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x128734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x128738: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x128738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x12873c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x12873cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128740: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x128740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x128744: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x128744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x128748: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x128748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12874c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x12874cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x128750: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x128750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x128754: 0x2e2f0011  sltiu       $t7, $s1, 0x11
    ctx->pc = 0x128754u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x128758: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x128758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x12875c: 0x11e0000a  beqz        $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x12875Cu;
    {
        const bool branch_taken_0x12875c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x128760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12875Cu;
            // 0x128760: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12875c) {
            ctx->pc = 0x128788u;
            goto label_128788;
        }
    }
    ctx->pc = 0x128764u;
    // 0x128764: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x128764u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128768: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x128768u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12876c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12876cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x128770: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x128770u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x128774: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x128774u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x128778: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x128778u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12877c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x12877cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x128780: 0x804a2e4  j           func_128B90
    ctx->pc = 0x128780u;
    ctx->pc = 0x128784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128780u;
            // 0x128784: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B90u;
    if (runtime->hasFunction(0x128B90u)) {
        auto targetFn = runtime->lookupFunction(0x128B90u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00128B90_0x128b90(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x128788u;
label_128788:
    // 0x128788: 0x24c50013  addiu       $a1, $a2, 0x13
    ctx->pc = 0x128788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 19));
    // 0x12878c: 0x2e2f0010  sltiu       $t7, $s1, 0x10
    ctx->pc = 0x12878cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x128790: 0x240e0010  addiu       $t6, $zero, 0x10
    ctx->pc = 0x128790u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x128794: 0x2cad001f  sltiu       $t5, $a1, 0x1F
    ctx->pc = 0x128794u;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)31) ? 1 : 0);
    // 0x128798: 0x15a00055  bnez        $t5, . + 4 + (0x55 << 2)
    ctx->pc = 0x128798u;
    {
        const bool branch_taken_0x128798 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x12879Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128798u;
            // 0x12879c: 0x1cf880b  movn        $s1, $t6, $t7 (Delay Slot)
        if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128798) {
            ctx->pc = 0x1288F0u;
            goto label_1288f0;
        }
    }
    ctx->pc = 0x1287A0u;
    // 0x1287a0: 0x240ffff0  addiu       $t7, $zero, -0x10
    ctx->pc = 0x1287a0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1287a4: 0xafa024  and         $s4, $a1, $t7
    ctx->pc = 0x1287a4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 5) & GPR_U64(ctx, 15));
label_1287a8:
    // 0x1287a8: 0x2912821  addu        $a1, $s4, $s1
    ctx->pc = 0x1287a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x1287ac: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1287acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1287b0: 0xc04a2e4  jal         func_128B90
    ctx->pc = 0x1287B0u;
    SET_GPR_U32(ctx, 31, 0x1287B8u);
    ctx->pc = 0x1287B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1287B0u;
            // 0x1287b4: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B90u;
    if (runtime->hasFunction(0x128B90u)) {
        auto targetFn = runtime->lookupFunction(0x128B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1287B8u; }
        if (ctx->pc != 0x1287B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00128B90_0x128b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1287B8u; }
        if (ctx->pc != 0x1287B8u) { return; }
    }
    ctx->pc = 0x1287B8u;
label_1287b8:
    // 0x1287b8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1287b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1287bc: 0x12400040  beqz        $s2, . + 4 + (0x40 << 2)
    ctx->pc = 0x1287BCu;
    {
        const bool branch_taken_0x1287bc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1287C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1287BCu;
            // 0x1287c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1287bc) {
            ctx->pc = 0x1288C0u;
            goto label_1288c0;
        }
    }
    ctx->pc = 0x1287C4u;
    // 0x1287c4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1287c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1287c8: 0xc04a714  jal         func_129C50
    ctx->pc = 0x1287C8u;
    SET_GPR_U32(ctx, 31, 0x1287D0u);
    ctx->pc = 0x1287CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1287C8u;
            // 0x1287cc: 0x2653fff8  addiu       $s3, $s2, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129C50u;
    if (runtime->hasFunction(0x129C50u)) {
        auto targetFn = runtime->lookupFunction(0x129C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1287D0u; }
        if (ctx->pc != 0x1287D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129C50_0x129c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1287D0u; }
        if (ctx->pc != 0x1287D0u) { return; }
    }
    ctx->pc = 0x1287D0u;
label_1287d0:
    // 0x1287d0: 0x11283c  dsll32      $a1, $s1, 0
    ctx->pc = 0x1287d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1287d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1287d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1287d8: 0xc049328  jal         func_124CA0
    ctx->pc = 0x1287D8u;
    SET_GPR_U32(ctx, 31, 0x1287E0u);
    ctx->pc = 0x1287DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1287D8u;
            // 0x1287dc: 0x5283e  dsrl32      $a1, $a1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x124CA0u;
    if (runtime->hasFunction(0x124CA0u)) {
        auto targetFn = runtime->lookupFunction(0x124CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1287E0u; }
        if (ctx->pc != 0x1287E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00124CA0_0x124ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1287E0u; }
        if (ctx->pc != 0x1287E0u) { return; }
    }
    ctx->pc = 0x1287E0u;
label_1287e0:
    // 0x1287e0: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1287E0u;
    {
        const bool branch_taken_0x1287e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1287E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1287E0u;
            // 0x1287e4: 0x117823  negu        $t7, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1287e0) {
            ctx->pc = 0x128854u;
            goto label_128854;
        }
    }
    ctx->pc = 0x1287E8u;
    // 0x1287e8: 0x2518021  addu        $s0, $s2, $s1
    ctx->pc = 0x1287e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x1287ec: 0x8e6d0004  lw          $t5, 0x4($s3)
    ctx->pc = 0x1287ecu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1287f0: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1287f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1287f4: 0x20f8024  and         $s0, $s0, $t7
    ctx->pc = 0x1287f4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 15));
    // 0x1287f8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1287f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1287fc: 0x2610fff8  addiu       $s0, $s0, -0x8
    ctx->pc = 0x1287fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    // 0x128800: 0x240ffffc  addiu       $t7, $zero, -0x4
    ctx->pc = 0x128800u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x128804: 0x2137023  subu        $t6, $s0, $s3
    ctx->pc = 0x128804u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x128808: 0x1af6824  and         $t5, $t5, $t7
    ctx->pc = 0x128808u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & GPR_U64(ctx, 15));
    // 0x12880c: 0x2117821  addu        $t7, $s0, $s1
    ctx->pc = 0x12880cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x128810: 0x29ce0010  slti        $t6, $t6, 0x10
    ctx->pc = 0x128810u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x128814: 0x1ee800b  movn        $s0, $t7, $t6
    ctx->pc = 0x128814u;
    if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 15));
    // 0x128818: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x128818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12881c: 0x2136023  subu        $t4, $s0, $s3
    ctx->pc = 0x12881cu;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x128820: 0x1ac6823  subu        $t5, $t5, $t4
    ctx->pc = 0x128820u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
    // 0x128824: 0x35ae0001  ori         $t6, $t5, 0x1
    ctx->pc = 0x128824u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)1);
    // 0x128828: 0xae0e0004  sw          $t6, 0x4($s0)
    ctx->pc = 0x128828u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 14));
    // 0x12882c: 0x20d6821  addu        $t5, $s0, $t5
    ctx->pc = 0x12882cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 13)));
    // 0x128830: 0x8daf0004  lw          $t7, 0x4($t5)
    ctx->pc = 0x128830u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4)));
    // 0x128834: 0x35ef0001  ori         $t7, $t7, 0x1
    ctx->pc = 0x128834u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)1);
    // 0x128838: 0xadaf0004  sw          $t7, 0x4($t5)
    ctx->pc = 0x128838u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4), GPR_U32(ctx, 15));
    // 0x12883c: 0x8e6e0004  lw          $t6, 0x4($s3)
    ctx->pc = 0x12883cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x128840: 0x31ce0001  andi        $t6, $t6, 0x1
    ctx->pc = 0x128840u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)1);
    // 0x128844: 0x1cc7025  or          $t6, $t6, $t4
    ctx->pc = 0x128844u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 12));
    // 0x128848: 0xae6e0004  sw          $t6, 0x4($s3)
    ctx->pc = 0x128848u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 14));
    // 0x12884c: 0xc049ee4  jal         func_127B90
    ctx->pc = 0x12884Cu;
    SET_GPR_U32(ctx, 31, 0x128854u);
    ctx->pc = 0x128850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12884Cu;
            // 0x128850: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127B90u;
    if (runtime->hasFunction(0x127B90u)) {
        auto targetFn = runtime->lookupFunction(0x127B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128854u; }
        if (ctx->pc != 0x128854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127B90_0x127b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128854u; }
        if (ctx->pc != 0x128854u) { return; }
    }
    ctx->pc = 0x128854u;
label_128854:
    // 0x128854: 0x8e6f0004  lw          $t7, 0x4($s3)
    ctx->pc = 0x128854u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x128858: 0x240efffc  addiu       $t6, $zero, -0x4
    ctx->pc = 0x128858u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x12885c: 0x1ee7824  and         $t7, $t7, $t6
    ctx->pc = 0x12885cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & GPR_U64(ctx, 14));
    // 0x128860: 0x1f4682b  sltu        $t5, $t7, $s4
    ctx->pc = 0x128860u;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x128864: 0x51a0001f  beql        $t5, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x128864u;
    {
        const bool branch_taken_0x128864 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        if (branch_taken_0x128864) {
            ctx->pc = 0x128868u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x128864u;
            // 0x128868: 0x1f47823  subu        $t7, $t7, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1288E4u;
            goto label_1288e4;
        }
    }
    ctx->pc = 0x12886Cu;
    // 0x12886c: 0x28f7823  subu        $t7, $s4, $t7
    ctx->pc = 0x12886cu;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 15)));
    // 0x128870: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x128870u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x128874: 0xf783e  dsrl32      $t7, $t7, 0
    ctx->pc = 0x128874u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (32 + 0));
    // 0x128878: 0xf682f  dsubu       $t5, $zero, $t7
    ctx->pc = 0x128878u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) - GPR_U64(ctx, 15));
label_12887c:
    // 0x12887c: 0x29af0010  slti        $t7, $t5, 0x10
    ctx->pc = 0x12887cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x128880: 0x15e0000c  bnez        $t7, . + 4 + (0xC << 2)
    ctx->pc = 0x128880u;
    {
        const bool branch_taken_0x128880 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x128884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128880u;
            // 0x128884: 0x35af0001  ori         $t7, $t5, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x128880) {
            ctx->pc = 0x1288B4u;
            goto label_1288b4;
        }
    }
    ctx->pc = 0x128888u;
    // 0x128888: 0x2747021  addu        $t6, $s3, $s4
    ctx->pc = 0x128888u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x12888c: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x12888cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x128890: 0x25c50008  addiu       $a1, $t6, 0x8
    ctx->pc = 0x128890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 14), 8));
    // 0x128894: 0xf783f  dsra32      $t7, $t7, 0
    ctx->pc = 0x128894u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 15) >> (32 + 0));
    // 0x128898: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x128898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12889c: 0xadcf0004  sw          $t7, 0x4($t6)
    ctx->pc = 0x12889cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4), GPR_U32(ctx, 15));
    // 0x1288a0: 0x8e6f0004  lw          $t7, 0x4($s3)
    ctx->pc = 0x1288a0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1288a4: 0x31ef0001  andi        $t7, $t7, 0x1
    ctx->pc = 0x1288a4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)1);
    // 0x1288a8: 0x1f47825  or          $t7, $t7, $s4
    ctx->pc = 0x1288a8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 20));
    // 0x1288ac: 0xc049ee4  jal         func_127B90
    ctx->pc = 0x1288ACu;
    SET_GPR_U32(ctx, 31, 0x1288B4u);
    ctx->pc = 0x1288B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1288ACu;
            // 0x1288b0: 0xae6f0004  sw          $t7, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127B90u;
    if (runtime->hasFunction(0x127B90u)) {
        auto targetFn = runtime->lookupFunction(0x127B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1288B4u; }
        if (ctx->pc != 0x1288B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127B90_0x127b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1288B4u; }
        if (ctx->pc != 0x1288B4u) { return; }
    }
    ctx->pc = 0x1288B4u;
label_1288b4:
    // 0x1288b4: 0xc04a72a  jal         func_129CA8
    ctx->pc = 0x1288B4u;
    SET_GPR_U32(ctx, 31, 0x1288BCu);
    ctx->pc = 0x1288B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1288B4u;
            // 0x1288b8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129CA8u;
    if (runtime->hasFunction(0x129CA8u)) {
        auto targetFn = runtime->lookupFunction(0x129CA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1288BCu; }
        if (ctx->pc != 0x1288BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129CA8_0x129ca8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1288BCu; }
        if (ctx->pc != 0x1288BCu) { return; }
    }
    ctx->pc = 0x1288BCu;
label_1288bc:
    // 0x1288bc: 0x26620008  addiu       $v0, $s3, 0x8
    ctx->pc = 0x1288bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_1288c0:
    // 0x1288c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1288c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1288c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1288c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1288c8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1288c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1288cc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1288ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1288d0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1288d0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1288d4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1288d4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1288d8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1288d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1288dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1288DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1288E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1288DCu;
            // 0x1288e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1288E4u;
label_1288e4:
    // 0x1288e4: 0xf683c  dsll32      $t5, $t7, 0
    ctx->pc = 0x1288e4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 15) << (32 + 0));
    // 0x1288e8: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
    ctx->pc = 0x1288E8u;
    {
        const bool branch_taken_0x1288e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1288ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1288E8u;
            // 0x1288ec: 0xd683e  dsrl32      $t5, $t5, 0 (Delay Slot)
        SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1288e8) {
            ctx->pc = 0x12887Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12887c;
        }
    }
    ctx->pc = 0x1288F0u;
label_1288f0:
    // 0x1288f0: 0x1000ffad  b           . + 4 + (-0x53 << 2)
    ctx->pc = 0x1288F0u;
    {
        const bool branch_taken_0x1288f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1288F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1288F0u;
            // 0x1288f4: 0x24140010  addiu       $s4, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1288f0) {
            ctx->pc = 0x1287A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1287a8;
        }
    }
    ctx->pc = 0x1288F8u;
}
