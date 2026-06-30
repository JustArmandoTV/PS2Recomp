#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00129698
// Address: 0x129698 - 0x1299d0
void sub_00129698_0x129698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00129698_0x129698");
#endif

    switch (ctx->pc) {
        case 0x1296c8u: goto label_1296c8;
        case 0x129710u: goto label_129710;
        case 0x129758u: goto label_129758;
        case 0x1297a0u: goto label_1297a0;
        case 0x129844u: goto label_129844;
        case 0x1298a0u: goto label_1298a0;
        case 0x1298b8u: goto label_1298b8;
        case 0x1298c8u: goto label_1298c8;
        case 0x129904u: goto label_129904;
        case 0x129920u: goto label_129920;
        case 0x129934u: goto label_129934;
        default: break;
    }

    ctx->pc = 0x129698u;

    // 0x129698: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x129698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12969c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x12969cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1296a0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1296a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1296a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1296a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1296a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1296a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1296ac: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1296acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1296b0: 0x2caf003c  sltiu       $t7, $a1, 0x3C
    ctx->pc = 0x1296b0u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)60) ? 1 : 0);
    // 0x1296b4: 0x15e0000f  bnez        $t7, . + 4 + (0xF << 2)
    ctx->pc = 0x1296B4u;
    {
        const bool branch_taken_0x1296b4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1296B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1296B4u;
            // 0x1296b8: 0x2411001c  addiu       $s1, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1296b4) {
            ctx->pc = 0x1296F4u;
            goto label_1296f4;
        }
    }
    ctx->pc = 0x1296BCu;
    // 0x1296bc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1296bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1296c0: 0xc049870  jal         func_1261C0
    ctx->pc = 0x1296C0u;
    SET_GPR_U32(ctx, 31, 0x1296C8u);
    ctx->pc = 0x1296C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1296C0u;
            // 0x1296c4: 0x2406003c  addiu       $a2, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1261C0u;
    if (runtime->hasFunction(0x1261C0u)) {
        auto targetFn = runtime->lookupFunction(0x1261C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1296C8u; }
        if (ctx->pc != 0x1296C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001261C0_0x1261c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1296C8u; }
        if (ctx->pc != 0x1296C8u) { return; }
    }
    ctx->pc = 0x1296C8u;
label_1296c8:
    // 0x1296c8: 0x8faf0000  lw          $t7, 0x0($sp)
    ctx->pc = 0x1296c8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1296cc: 0x8e0e0004  lw          $t6, 0x4($s0)
    ctx->pc = 0x1296ccu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1296d0: 0x8fad0004  lw          $t5, 0x4($sp)
    ctx->pc = 0x1296d0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1296d4: 0x1cf7021  addu        $t6, $t6, $t7
    ctx->pc = 0x1296d4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x1296d8: 0xae0e0004  sw          $t6, 0x4($s0)
    ctx->pc = 0x1296d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 14));
    // 0x1296dc: 0x5a10005  bgez        $t5, . + 4 + (0x5 << 2)
    ctx->pc = 0x1296DCu;
    {
        const bool branch_taken_0x1296dc = (GPR_S32(ctx, 13) >= 0);
        ctx->pc = 0x1296E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1296DCu;
            // 0x1296e0: 0xae0d0000  sw          $t5, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1296dc) {
            ctx->pc = 0x1296F4u;
            goto label_1296f4;
        }
    }
    ctx->pc = 0x1296E4u;
    // 0x1296e4: 0x25af003c  addiu       $t7, $t5, 0x3C
    ctx->pc = 0x1296e4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 60));
    // 0x1296e8: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x1296e8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
    // 0x1296ec: 0xae0f0000  sw          $t7, 0x0($s0)
    ctx->pc = 0x1296ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 15));
    // 0x1296f0: 0xae0e0004  sw          $t6, 0x4($s0)
    ctx->pc = 0x1296f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 14));
label_1296f4:
    // 0x1296f4: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1296f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1296f8: 0x2caf003c  sltiu       $t7, $a1, 0x3C
    ctx->pc = 0x1296f8u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)60) ? 1 : 0);
    // 0x1296fc: 0x55e00010  bnel        $t7, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x1296FCu;
    {
        const bool branch_taken_0x1296fc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1296fc) {
            ctx->pc = 0x129700u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1296FCu;
            // 0x129700: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x129740u;
            goto label_129740;
        }
    }
    ctx->pc = 0x129704u;
    // 0x129704: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x129704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129708: 0xc049870  jal         func_1261C0
    ctx->pc = 0x129708u;
    SET_GPR_U32(ctx, 31, 0x129710u);
    ctx->pc = 0x12970Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x129708u;
            // 0x12970c: 0x2406003c  addiu       $a2, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1261C0u;
    if (runtime->hasFunction(0x1261C0u)) {
        auto targetFn = runtime->lookupFunction(0x1261C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129710u; }
        if (ctx->pc != 0x129710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001261C0_0x1261c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129710u; }
        if (ctx->pc != 0x129710u) { return; }
    }
    ctx->pc = 0x129710u;
label_129710:
    // 0x129710: 0x8faf0000  lw          $t7, 0x0($sp)
    ctx->pc = 0x129710u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x129714: 0x8e0e0008  lw          $t6, 0x8($s0)
    ctx->pc = 0x129714u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x129718: 0x8fad0004  lw          $t5, 0x4($sp)
    ctx->pc = 0x129718u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x12971c: 0x1cf7021  addu        $t6, $t6, $t7
    ctx->pc = 0x12971cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x129720: 0xae0e0008  sw          $t6, 0x8($s0)
    ctx->pc = 0x129720u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 14));
    // 0x129724: 0x5a10005  bgez        $t5, . + 4 + (0x5 << 2)
    ctx->pc = 0x129724u;
    {
        const bool branch_taken_0x129724 = (GPR_S32(ctx, 13) >= 0);
        ctx->pc = 0x129728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129724u;
            // 0x129728: 0xae0d0004  sw          $t5, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129724) {
            ctx->pc = 0x12973Cu;
            goto label_12973c;
        }
    }
    ctx->pc = 0x12972Cu;
    // 0x12972c: 0x25af003c  addiu       $t7, $t5, 0x3C
    ctx->pc = 0x12972cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 60));
    // 0x129730: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x129730u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
    // 0x129734: 0xae0f0004  sw          $t7, 0x4($s0)
    ctx->pc = 0x129734u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 15));
    // 0x129738: 0xae0e0008  sw          $t6, 0x8($s0)
    ctx->pc = 0x129738u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 14));
label_12973c:
    // 0x12973c: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x12973cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_129740:
    // 0x129740: 0x2caf0018  sltiu       $t7, $a1, 0x18
    ctx->pc = 0x129740u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
    // 0x129744: 0x55e00010  bnel        $t7, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x129744u;
    {
        const bool branch_taken_0x129744 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x129744) {
            ctx->pc = 0x129748u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x129744u;
            // 0x129748: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x129788u;
            goto label_129788;
        }
    }
    ctx->pc = 0x12974Cu;
    // 0x12974c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x12974cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129750: 0xc049870  jal         func_1261C0
    ctx->pc = 0x129750u;
    SET_GPR_U32(ctx, 31, 0x129758u);
    ctx->pc = 0x129754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x129750u;
            // 0x129754: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1261C0u;
    if (runtime->hasFunction(0x1261C0u)) {
        auto targetFn = runtime->lookupFunction(0x1261C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129758u; }
        if (ctx->pc != 0x129758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001261C0_0x1261c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129758u; }
        if (ctx->pc != 0x129758u) { return; }
    }
    ctx->pc = 0x129758u;
label_129758:
    // 0x129758: 0x8faf0000  lw          $t7, 0x0($sp)
    ctx->pc = 0x129758u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12975c: 0x8e0e000c  lw          $t6, 0xC($s0)
    ctx->pc = 0x12975cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x129760: 0x8fad0004  lw          $t5, 0x4($sp)
    ctx->pc = 0x129760u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x129764: 0x1cf7021  addu        $t6, $t6, $t7
    ctx->pc = 0x129764u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x129768: 0xae0e000c  sw          $t6, 0xC($s0)
    ctx->pc = 0x129768u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 14));
    // 0x12976c: 0x5a10005  bgez        $t5, . + 4 + (0x5 << 2)
    ctx->pc = 0x12976Cu;
    {
        const bool branch_taken_0x12976c = (GPR_S32(ctx, 13) >= 0);
        ctx->pc = 0x129770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12976Cu;
            // 0x129770: 0xae0d0008  sw          $t5, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12976c) {
            ctx->pc = 0x129784u;
            goto label_129784;
        }
    }
    ctx->pc = 0x129774u;
    // 0x129774: 0x25af0018  addiu       $t7, $t5, 0x18
    ctx->pc = 0x129774u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 24));
    // 0x129778: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x129778u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
    // 0x12977c: 0xae0f0008  sw          $t7, 0x8($s0)
    ctx->pc = 0x12977cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 15));
    // 0x129780: 0xae0e000c  sw          $t6, 0xC($s0)
    ctx->pc = 0x129780u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 14));
label_129784:
    // 0x129784: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x129784u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_129788:
    // 0x129788: 0x28af000c  slti        $t7, $a1, 0xC
    ctx->pc = 0x129788u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x12978c: 0x55e00011  bnel        $t7, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x12978Cu;
    {
        const bool branch_taken_0x12978c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x12978c) {
            ctx->pc = 0x129790u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12978Cu;
            // 0x129790: 0x8e0c0014  lw          $t4, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1297D4u;
            goto label_1297d4;
        }
    }
    ctx->pc = 0x129794u;
    // 0x129794: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x129794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129798: 0xc049870  jal         func_1261C0
    ctx->pc = 0x129798u;
    SET_GPR_U32(ctx, 31, 0x1297A0u);
    ctx->pc = 0x12979Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x129798u;
            // 0x12979c: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1261C0u;
    if (runtime->hasFunction(0x1261C0u)) {
        auto targetFn = runtime->lookupFunction(0x1261C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1297A0u; }
        if (ctx->pc != 0x1297A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001261C0_0x1261c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1297A0u; }
        if (ctx->pc != 0x1297A0u) { return; }
    }
    ctx->pc = 0x1297A0u;
label_1297a0:
    // 0x1297a0: 0x8faf0000  lw          $t7, 0x0($sp)
    ctx->pc = 0x1297a0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1297a4: 0x8e0e0014  lw          $t6, 0x14($s0)
    ctx->pc = 0x1297a4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1297a8: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x1297a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1297ac: 0x1cf7821  addu        $t7, $t6, $t7
    ctx->pc = 0x1297acu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x1297b0: 0xae0f0014  sw          $t7, 0x14($s0)
    ctx->pc = 0x1297b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 15));
    // 0x1297b4: 0x4a10006  bgez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1297B4u;
    {
        const bool branch_taken_0x1297b4 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x1297B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1297B4u;
            // 0x1297b8: 0xae050010  sw          $a1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1297b4) {
            ctx->pc = 0x1297D0u;
            goto label_1297d0;
        }
    }
    ctx->pc = 0x1297BCu;
    // 0x1297bc: 0x24ae000c  addiu       $t6, $a1, 0xC
    ctx->pc = 0x1297bcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x1297c0: 0x25efffff  addiu       $t7, $t7, -0x1
    ctx->pc = 0x1297c0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967295));
    // 0x1297c4: 0xae0f0014  sw          $t7, 0x14($s0)
    ctx->pc = 0x1297c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 15));
    // 0x1297c8: 0x1c0282d  daddu       $a1, $t6, $zero
    ctx->pc = 0x1297c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1297cc: 0xae0e0010  sw          $t6, 0x10($s0)
    ctx->pc = 0x1297ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 14));
label_1297d0:
    // 0x1297d0: 0x8e0c0014  lw          $t4, 0x14($s0)
    ctx->pc = 0x1297d0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1297d4:
    // 0x1297d4: 0x318f0003  andi        $t7, $t4, 0x3
    ctx->pc = 0x1297d4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)3);
    // 0x1297d8: 0x55e00012  bnel        $t7, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x1297D8u;
    {
        const bool branch_taken_0x1297d8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1297d8) {
            ctx->pc = 0x1297DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1297D8u;
            // 0x1297dc: 0x8e0d000c  lw          $t5, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x129824u;
            goto label_129824;
        }
    }
    ctx->pc = 0x1297E0u;
    // 0x1297e0: 0x240f0064  addiu       $t7, $zero, 0x64
    ctx->pc = 0x1297e0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1297e4: 0x18f001a  div         $zero, $t4, $t7
    ctx->pc = 0x1297e4u;
    { int32_t divisor = GPR_S32(ctx, 15);    int32_t dividend = GPR_S32(ctx, 12);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1297e8: 0x51e00001  beql        $t7, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1297E8u;
    {
        const bool branch_taken_0x1297e8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x1297e8) {
            ctx->pc = 0x1297ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1297E8u;
            // 0x1297ec: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1297F0u;
            goto label_1297f0;
        }
    }
    ctx->pc = 0x1297F0u;
label_1297f0:
    // 0x1297f0: 0x7010  mfhi        $t6
    ctx->pc = 0x1297f0u;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x1297f4: 0x55c0000a  bnel        $t6, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1297F4u;
    {
        const bool branch_taken_0x1297f4 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        if (branch_taken_0x1297f4) {
            ctx->pc = 0x1297F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1297F4u;
            // 0x1297f8: 0x2411001d  addiu       $s1, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
            ctx->pc = 0x129820u;
            goto label_129820;
        }
    }
    ctx->pc = 0x1297FCu;
    // 0x1297fc: 0x240e0190  addiu       $t6, $zero, 0x190
    ctx->pc = 0x1297fcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x129800: 0x258f076c  addiu       $t7, $t4, 0x76C
    ctx->pc = 0x129800u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 12), 1900));
    // 0x129804: 0x1ee001a  div         $zero, $t7, $t6
    ctx->pc = 0x129804u;
    { int32_t divisor = GPR_S32(ctx, 14);    int32_t dividend = GPR_S32(ctx, 15);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x129808: 0x51c00001  beql        $t6, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x129808u;
    {
        const bool branch_taken_0x129808 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        if (branch_taken_0x129808) {
            ctx->pc = 0x12980Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x129808u;
            // 0x12980c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x129810u;
            goto label_129810;
        }
    }
    ctx->pc = 0x129810u;
label_129810:
    // 0x129810: 0x6810  mfhi        $t5
    ctx->pc = 0x129810u;
    SET_GPR_U64(ctx, 13, ctx->hi);
    // 0x129814: 0x55a00003  bnel        $t5, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x129814u;
    {
        const bool branch_taken_0x129814 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        if (branch_taken_0x129814) {
            ctx->pc = 0x129818u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x129814u;
            // 0x129818: 0x8e0d000c  lw          $t5, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x129824u;
            goto label_129824;
        }
    }
    ctx->pc = 0x12981Cu;
    // 0x12981c: 0x2411001d  addiu       $s1, $zero, 0x1D
    ctx->pc = 0x12981cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_129820:
    // 0x129820: 0x8e0d000c  lw          $t5, 0xC($s0)
    ctx->pc = 0x129820u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_129824:
    // 0x129824: 0x1da00030  bgtz        $t5, . + 4 + (0x30 << 2)
    ctx->pc = 0x129824u;
    {
        const bool branch_taken_0x129824 = (GPR_S32(ctx, 13) > 0);
        ctx->pc = 0x129828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129824u;
            // 0x129828: 0x3c0f0063  lui         $t7, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129824) {
            ctx->pc = 0x1298E8u;
            goto label_1298e8;
        }
    }
    ctx->pc = 0x12982Cu;
    // 0x12982c: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x12982cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x129830: 0x25e80908  addiu       $t0, $t7, 0x908
    ctx->pc = 0x129830u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 15), 2312));
    // 0x129834: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x129834u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x129838: 0x24090064  addiu       $t1, $zero, 0x64
    ctx->pc = 0x129838u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x12983c: 0x24070190  addiu       $a3, $zero, 0x190
    ctx->pc = 0x12983cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x129840: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x129840u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_129844:
    // 0x129844: 0x24afffff  addiu       $t7, $a1, -0x1
    ctx->pc = 0x129844u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x129848: 0x15ea0015  bne         $t7, $t2, . + 4 + (0x15 << 2)
    ctx->pc = 0x129848u;
    {
        const bool branch_taken_0x129848 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 10));
        ctx->pc = 0x12984Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129848u;
            // 0x12984c: 0xae0f0010  sw          $t7, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129848) {
            ctx->pc = 0x1298A0u;
            goto label_1298a0;
        }
    }
    ctx->pc = 0x129850u;
    // 0x129850: 0x8e0c0014  lw          $t4, 0x14($s0)
    ctx->pc = 0x129850u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x129854: 0xae060010  sw          $a2, 0x10($s0)
    ctx->pc = 0x129854u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 6));
    // 0x129858: 0x258effff  addiu       $t6, $t4, -0x1
    ctx->pc = 0x129858u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x12985c: 0x31cf0003  andi        $t7, $t6, 0x3
    ctx->pc = 0x12985cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)3);
    // 0x129860: 0x15e0001f  bnez        $t7, . + 4 + (0x1F << 2)
    ctx->pc = 0x129860u;
    {
        const bool branch_taken_0x129860 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x129864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129860u;
            // 0x129864: 0xae0e0014  sw          $t6, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129860) {
            ctx->pc = 0x1298E0u;
            goto label_1298e0;
        }
    }
    ctx->pc = 0x129868u;
    // 0x129868: 0x1c9001a  div         $zero, $t6, $t1
    ctx->pc = 0x129868u;
    { int32_t divisor = GPR_S32(ctx, 9);    int32_t dividend = GPR_S32(ctx, 14);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x12986c: 0x51200001  beql        $t1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12986Cu;
    {
        const bool branch_taken_0x12986c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x12986c) {
            ctx->pc = 0x129870u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12986Cu;
            // 0x129870: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x129874u;
            goto label_129874;
        }
    }
    ctx->pc = 0x129874u;
label_129874:
    // 0x129874: 0x7810  mfhi        $t7
    ctx->pc = 0x129874u;
    SET_GPR_U64(ctx, 15, ctx->hi);
    // 0x129878: 0x15e00009  bnez        $t7, . + 4 + (0x9 << 2)
    ctx->pc = 0x129878u;
    {
        const bool branch_taken_0x129878 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12987Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129878u;
            // 0x12987c: 0x2411001d  addiu       $s1, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129878) {
            ctx->pc = 0x1298A0u;
            goto label_1298a0;
        }
    }
    ctx->pc = 0x129880u;
    // 0x129880: 0x258f076b  addiu       $t7, $t4, 0x76B
    ctx->pc = 0x129880u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 12), 1899));
    // 0x129884: 0x1e7001a  div         $zero, $t7, $a3
    ctx->pc = 0x129884u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 15);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x129888: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x129888u;
    {
        const bool branch_taken_0x129888 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x129888) {
            ctx->pc = 0x12988Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x129888u;
            // 0x12988c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x129890u;
            goto label_129890;
        }
    }
    ctx->pc = 0x129890u;
label_129890:
    // 0x129890: 0x7010  mfhi        $t6
    ctx->pc = 0x129890u;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x129894: 0x15c00002  bnez        $t6, . + 4 + (0x2 << 2)
    ctx->pc = 0x129894u;
    {
        const bool branch_taken_0x129894 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x129898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129894u;
            // 0x129898: 0x2411001c  addiu       $s1, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129894) {
            ctx->pc = 0x1298A0u;
            goto label_1298a0;
        }
    }
    ctx->pc = 0x12989Cu;
    // 0x12989c: 0x2411001d  addiu       $s1, $zero, 0x1D
    ctx->pc = 0x12989cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_1298a0:
    // 0x1298a0: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1298a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1298a4: 0x10ab000c  beq         $a1, $t3, . + 4 + (0xC << 2)
    ctx->pc = 0x1298A4u;
    {
        const bool branch_taken_0x1298a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 11));
        ctx->pc = 0x1298A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1298A4u;
            // 0x1298a8: 0x57880  sll         $t7, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1298a4) {
            ctx->pc = 0x1298D8u;
            goto label_1298d8;
        }
    }
    ctx->pc = 0x1298ACu;
    // 0x1298ac: 0x1e87821  addu        $t7, $t7, $t0
    ctx->pc = 0x1298acu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 8)));
    // 0x1298b0: 0x8dee0000  lw          $t6, 0x0($t7)
    ctx->pc = 0x1298b0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1298b4: 0x1ae7821  addu        $t7, $t5, $t6
    ctx->pc = 0x1298b4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
label_1298b8:
    // 0x1298b8: 0xae0f000c  sw          $t7, 0xC($s0)
    ctx->pc = 0x1298b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 15));
    // 0x1298bc: 0x19e0ffe1  blez        $t7, . + 4 + (-0x1F << 2)
    ctx->pc = 0x1298BCu;
    {
        const bool branch_taken_0x1298bc = (GPR_S32(ctx, 15) <= 0);
        ctx->pc = 0x1298C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1298BCu;
            // 0x1298c0: 0x1e0682d  daddu       $t5, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1298bc) {
            ctx->pc = 0x129844u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_129844;
        }
    }
    ctx->pc = 0x1298C4u;
    // 0x1298c4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1298c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1298c8:
    // 0x1298c8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1298c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1298cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1298ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1298d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1298D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1298D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1298D0u;
            // 0x1298d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1298D8u;
label_1298d8:
    // 0x1298d8: 0x1000fff7  b           . + 4 + (-0x9 << 2)
    ctx->pc = 0x1298D8u;
    {
        const bool branch_taken_0x1298d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1298DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1298D8u;
            // 0x1298dc: 0x1b17821  addu        $t7, $t5, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1298d8) {
            ctx->pc = 0x1298B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1298b8;
        }
    }
    ctx->pc = 0x1298E0u;
label_1298e0:
    // 0x1298e0: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x1298E0u;
    {
        const bool branch_taken_0x1298e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1298E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1298E0u;
            // 0x1298e4: 0x2411001c  addiu       $s1, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1298e0) {
            ctx->pc = 0x1298A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1298a0;
        }
    }
    ctx->pc = 0x1298E8u;
label_1298e8:
    // 0x1298e8: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x1298e8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1298ec: 0x25e80908  addiu       $t0, $t7, 0x908
    ctx->pc = 0x1298ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 15), 2312));
    // 0x1298f0: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x1298f0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1298f4: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x1298f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1298f8: 0x240c000c  addiu       $t4, $zero, 0xC
    ctx->pc = 0x1298f8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1298fc: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x1298fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x129900: 0x24040190  addiu       $a0, $zero, 0x190
    ctx->pc = 0x129900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
label_129904:
    // 0x129904: 0x10aa002c  beq         $a1, $t2, . + 4 + (0x2C << 2)
    ctx->pc = 0x129904u;
    {
        const bool branch_taken_0x129904 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 10));
        ctx->pc = 0x129908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129904u;
            // 0x129908: 0x57880  sll         $t7, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129904) {
            ctx->pc = 0x1299B8u;
            goto label_1299b8;
        }
    }
    ctx->pc = 0x12990Cu;
    // 0x12990c: 0x1e87821  addu        $t7, $t7, $t0
    ctx->pc = 0x12990cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 8)));
    // 0x129910: 0x8dee0000  lw          $t6, 0x0($t7)
    ctx->pc = 0x129910u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x129914: 0x1cd702a  slt         $t6, $t6, $t5
    ctx->pc = 0x129914u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x129918: 0x51c0ffeb  beql        $t6, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x129918u;
    {
        const bool branch_taken_0x129918 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        if (branch_taken_0x129918) {
            ctx->pc = 0x12991Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x129918u;
            // 0x12991c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1298C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1298c8;
        }
    }
    ctx->pc = 0x129920u;
label_129920:
    // 0x129920: 0x10ab0023  beq         $a1, $t3, . + 4 + (0x23 << 2)
    ctx->pc = 0x129920u;
    {
        const bool branch_taken_0x129920 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 11));
        ctx->pc = 0x129924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129920u;
            // 0x129924: 0x57880  sll         $t7, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129920) {
            ctx->pc = 0x1299B0u;
            goto label_1299b0;
        }
    }
    ctx->pc = 0x129928u;
    // 0x129928: 0x1e77821  addu        $t7, $t7, $a3
    ctx->pc = 0x129928u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 7)));
    // 0x12992c: 0x8dee0000  lw          $t6, 0x0($t7)
    ctx->pc = 0x12992cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x129930: 0x1ae6823  subu        $t5, $t5, $t6
    ctx->pc = 0x129930u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
label_129934:
    // 0x129934: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x129934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x129938: 0xae0d000c  sw          $t5, 0xC($s0)
    ctx->pc = 0x129938u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 13));
    // 0x12993c: 0x14acfff1  bne         $a1, $t4, . + 4 + (-0xF << 2)
    ctx->pc = 0x12993Cu;
    {
        const bool branch_taken_0x12993c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 12));
        ctx->pc = 0x129940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12993Cu;
            // 0x129940: 0xae050010  sw          $a1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12993c) {
            ctx->pc = 0x129904u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_129904;
        }
    }
    ctx->pc = 0x129944u;
    // 0x129944: 0x8e090014  lw          $t1, 0x14($s0)
    ctx->pc = 0x129944u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x129948: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x129948u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x12994c: 0x252e0001  addiu       $t6, $t1, 0x1
    ctx->pc = 0x12994cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x129950: 0x31cf0003  andi        $t7, $t6, 0x3
    ctx->pc = 0x129950u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)3);
    // 0x129954: 0x15e00012  bnez        $t7, . + 4 + (0x12 << 2)
    ctx->pc = 0x129954u;
    {
        const bool branch_taken_0x129954 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x129958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129954u;
            // 0x129958: 0xae0e0014  sw          $t6, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129954) {
            ctx->pc = 0x1299A0u;
            goto label_1299a0;
        }
    }
    ctx->pc = 0x12995Cu;
    // 0x12995c: 0x1c6001a  div         $zero, $t6, $a2
    ctx->pc = 0x12995cu;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 14);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x129960: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x129960u;
    {
        const bool branch_taken_0x129960 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x129960) {
            ctx->pc = 0x129964u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x129960u;
            // 0x129964: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x129968u;
            goto label_129968;
        }
    }
    ctx->pc = 0x129968u;
label_129968:
    // 0x129968: 0x7810  mfhi        $t7
    ctx->pc = 0x129968u;
    SET_GPR_U64(ctx, 15, ctx->hi);
    // 0x12996c: 0x15e00009  bnez        $t7, . + 4 + (0x9 << 2)
    ctx->pc = 0x12996Cu;
    {
        const bool branch_taken_0x12996c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x129970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12996Cu;
            // 0x129970: 0x2411001d  addiu       $s1, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12996c) {
            ctx->pc = 0x129994u;
            goto label_129994;
        }
    }
    ctx->pc = 0x129974u;
    // 0x129974: 0x252f076d  addiu       $t7, $t1, 0x76D
    ctx->pc = 0x129974u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 9), 1901));
    // 0x129978: 0x1e4001a  div         $zero, $t7, $a0
    ctx->pc = 0x129978u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 15);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x12997c: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12997Cu;
    {
        const bool branch_taken_0x12997c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x12997c) {
            ctx->pc = 0x129980u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12997Cu;
            // 0x129980: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x129984u;
            goto label_129984;
        }
    }
    ctx->pc = 0x129984u;
label_129984:
    // 0x129984: 0x7010  mfhi        $t6
    ctx->pc = 0x129984u;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x129988: 0x55c00006  bnel        $t6, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x129988u;
    {
        const bool branch_taken_0x129988 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        if (branch_taken_0x129988) {
            ctx->pc = 0x12998Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x129988u;
            // 0x12998c: 0x8e0d000c  lw          $t5, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1299A4u;
            goto label_1299a4;
        }
    }
    ctx->pc = 0x129990u;
    // 0x129990: 0x2411001d  addiu       $s1, $zero, 0x1D
    ctx->pc = 0x129990u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_129994:
    // 0x129994: 0x1000ffdb  b           . + 4 + (-0x25 << 2)
    ctx->pc = 0x129994u;
    {
        const bool branch_taken_0x129994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129994u;
            // 0x129998: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129994) {
            ctx->pc = 0x129904u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_129904;
        }
    }
    ctx->pc = 0x12999Cu;
    // 0x12999c: 0x0  nop
    ctx->pc = 0x12999cu;
    // NOP
label_1299a0:
    // 0x1299a0: 0x8e0d000c  lw          $t5, 0xC($s0)
    ctx->pc = 0x1299a0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1299a4:
    // 0x1299a4: 0x2411001c  addiu       $s1, $zero, 0x1C
    ctx->pc = 0x1299a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1299a8: 0x1000ffd6  b           . + 4 + (-0x2A << 2)
    ctx->pc = 0x1299A8u;
    {
        const bool branch_taken_0x1299a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1299ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1299A8u;
            // 0x1299ac: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1299a8) {
            ctx->pc = 0x129904u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_129904;
        }
    }
    ctx->pc = 0x1299B0u;
label_1299b0:
    // 0x1299b0: 0x1000ffe0  b           . + 4 + (-0x20 << 2)
    ctx->pc = 0x1299B0u;
    {
        const bool branch_taken_0x1299b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1299B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1299B0u;
            // 0x1299b4: 0x1b16823  subu        $t5, $t5, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1299b0) {
            ctx->pc = 0x129934u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_129934;
        }
    }
    ctx->pc = 0x1299B8u;
label_1299b8:
    // 0x1299b8: 0x22d782a  slt         $t7, $s1, $t5
    ctx->pc = 0x1299b8u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x1299bc: 0x15e0ffd8  bnez        $t7, . + 4 + (-0x28 << 2)
    ctx->pc = 0x1299BCu;
    {
        const bool branch_taken_0x1299bc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1299bc) {
            ctx->pc = 0x129920u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_129920;
        }
    }
    ctx->pc = 0x1299C4u;
    // 0x1299c4: 0x1000ffc0  b           . + 4 + (-0x40 << 2)
    ctx->pc = 0x1299C4u;
    {
        const bool branch_taken_0x1299c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1299C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1299C4u;
            // 0x1299c8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1299c4) {
            ctx->pc = 0x1298C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1298c8;
        }
    }
    ctx->pc = 0x1299CCu;
    // 0x1299cc: 0x0  nop
    ctx->pc = 0x1299ccu;
    // NOP
}
