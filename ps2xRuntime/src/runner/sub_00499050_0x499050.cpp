#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00499050
// Address: 0x499050 - 0x4993c0
void sub_00499050_0x499050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00499050_0x499050");
#endif

    switch (ctx->pc) {
        case 0x4990c4u: goto label_4990c4;
        case 0x4990d0u: goto label_4990d0;
        case 0x4990e4u: goto label_4990e4;
        case 0x49913cu: goto label_49913c;
        case 0x49914cu: goto label_49914c;
        case 0x4991d8u: goto label_4991d8;
        case 0x4991ecu: goto label_4991ec;
        case 0x49920cu: goto label_49920c;
        case 0x499220u: goto label_499220;
        case 0x499264u: goto label_499264;
        case 0x49928cu: goto label_49928c;
        case 0x4992a0u: goto label_4992a0;
        case 0x4992acu: goto label_4992ac;
        case 0x499330u: goto label_499330;
        case 0x499344u: goto label_499344;
        default: break;
    }

    ctx->pc = 0x499050u;

    // 0x499050: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x499050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x499054: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x499054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x499058: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x499058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x49905c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x49905cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x499060: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x499060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x499064: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x499064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x499068: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x499068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x49906c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x49906cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499070: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x499070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x499074: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x499074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x499078: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x499078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x49907c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x49907cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x499080: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x499080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x499084: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x499084u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x499088: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x499088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x49908c: 0xafa400a8  sw          $a0, 0xA8($sp)
    ctx->pc = 0x49908cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 4));
    // 0x499090: 0xac407bc0  sw          $zero, 0x7BC0($v0)
    ctx->pc = 0x499090u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 31680), GPR_U32(ctx, 0));
    // 0x499094: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x499094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x499098: 0xac407bc8  sw          $zero, 0x7BC8($v0)
    ctx->pc = 0x499098u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 31688), GPR_U32(ctx, 0));
    // 0x49909c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x49909cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4990a0: 0x24550004  addiu       $s5, $v0, 0x4
    ctx->pc = 0x4990a0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x4990a4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4990a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4990a8: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x4990A8u;
    {
        const bool branch_taken_0x4990a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4990ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4990A8u;
            // 0x4990ac: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4990a8) {
            ctx->pc = 0x499100u;
            goto label_499100;
        }
    }
    ctx->pc = 0x4990B0u;
    // 0x4990b0: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x4990b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x4990b4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x4990b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4990b8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4990b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4990bc: 0xc0400c4  jal         func_100310
    ctx->pc = 0x4990BCu;
    SET_GPR_U32(ctx, 31, 0x4990C4u);
    ctx->pc = 0x4990C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4990BCu;
            // 0x4990c0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100310u;
    if (runtime->hasFunction(0x100310u)) {
        auto targetFn = runtime->lookupFunction(0x100310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4990C4u; }
        if (ctx->pc != 0x4990C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100310_0x100310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4990C4u; }
        if (ctx->pc != 0x4990C4u) { return; }
    }
    ctx->pc = 0x4990C4u;
label_4990c4:
    // 0x4990c4: 0xaec20004  sw          $v0, 0x4($s6)
    ctx->pc = 0x4990c4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 2));
    // 0x4990c8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4990c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4990cc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4990ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4990d0:
    // 0x4990d0: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x4990d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x4990d4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x4990d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4990d8: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x4990d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x4990dc: 0xc04a508  jal         func_129420
    ctx->pc = 0x4990DCu;
    SET_GPR_U32(ctx, 31, 0x4990E4u);
    ctx->pc = 0x4990E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4990DCu;
            // 0x4990e0: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4990E4u; }
        if (ctx->pc != 0x4990E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4990E4u; }
        if (ctx->pc != 0x4990E4u) { return; }
    }
    ctx->pc = 0x4990E4u;
label_4990e4:
    // 0x4990e4: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x4990e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4990e8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4990e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x4990ec: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x4990ecu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x4990f0: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x4990f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4990f4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x4990F4u;
    {
        const bool branch_taken_0x4990f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4990F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4990F4u;
            // 0x4990f8: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4990f4) {
            ctx->pc = 0x4990D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4990d0;
        }
    }
    ctx->pc = 0x4990FCu;
    // 0x4990fc: 0x0  nop
    ctx->pc = 0x4990fcu;
    // NOP
label_499100:
    // 0x499100: 0x96a20000  lhu         $v0, 0x0($s5)
    ctx->pc = 0x499100u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x499104: 0xa6c20008  sh          $v0, 0x8($s6)
    ctx->pc = 0x499104u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x499108: 0x96a20002  lhu         $v0, 0x2($s5)
    ctx->pc = 0x499108u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
    // 0x49910c: 0xa6c2000a  sh          $v0, 0xA($s6)
    ctx->pc = 0x49910cu;
    WRITE16(ADD32(GPR_U32(ctx, 22), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x499110: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x499110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x499114: 0xaec3000c  sw          $v1, 0xC($s6)
    ctx->pc = 0x499114u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 12), GPR_U32(ctx, 3));
    // 0x499118: 0x1060009b  beqz        $v1, . + 4 + (0x9B << 2)
    ctx->pc = 0x499118u;
    {
        const bool branch_taken_0x499118 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x49911Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x499118u;
            // 0x49911c: 0x26b50008  addiu       $s5, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499118) {
            ctx->pc = 0x499388u;
            goto label_499388;
        }
    }
    ctx->pc = 0x499120u;
    // 0x499120: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x499120u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x499124: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x499124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x499128: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x499128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x49912c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x49912cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x499130: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x499130u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x499134: 0xc0400c4  jal         func_100310
    ctx->pc = 0x499134u;
    SET_GPR_U32(ctx, 31, 0x49913Cu);
    ctx->pc = 0x499138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x499134u;
            // 0x499138: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100310u;
    if (runtime->hasFunction(0x100310u)) {
        auto targetFn = runtime->lookupFunction(0x100310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49913Cu; }
        if (ctx->pc != 0x49913Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100310_0x100310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49913Cu; }
        if (ctx->pc != 0x49913Cu) { return; }
    }
    ctx->pc = 0x49913Cu;
label_49913c:
    // 0x49913c: 0xaec20010  sw          $v0, 0x10($s6)
    ctx->pc = 0x49913cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 16), GPR_U32(ctx, 2));
    // 0x499140: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x499140u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499144: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x499144u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499148: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x499148u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49914c:
    // 0x49914c: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x49914cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x499150: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x499150u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x499154: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x499154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x499158: 0x10600083  beqz        $v1, . + 4 + (0x83 << 2)
    ctx->pc = 0x499158u;
    {
        const bool branch_taken_0x499158 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x49915Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x499158u;
            // 0x49915c: 0x26b50008  addiu       $s5, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499158) {
            ctx->pc = 0x499368u;
            goto label_499368;
        }
    }
    ctx->pc = 0x499160u;
    // 0x499160: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x499160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x499164: 0x1062006c  beq         $v1, $v0, . + 4 + (0x6C << 2)
    ctx->pc = 0x499164u;
    {
        const bool branch_taken_0x499164 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x499164) {
            ctx->pc = 0x499318u;
            goto label_499318;
        }
    }
    ctx->pc = 0x49916Cu;
    // 0x49916c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x49916cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x499170: 0x1066005f  beq         $v1, $a2, . + 4 + (0x5F << 2)
    ctx->pc = 0x499170u;
    {
        const bool branch_taken_0x499170 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x499170) {
            ctx->pc = 0x4992F0u;
            goto label_4992f0;
        }
    }
    ctx->pc = 0x499178u;
    // 0x499178: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x499178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x49917c: 0x10640034  beq         $v1, $a0, . + 4 + (0x34 << 2)
    ctx->pc = 0x49917Cu;
    {
        const bool branch_taken_0x49917c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x49917c) {
            ctx->pc = 0x499250u;
            goto label_499250;
        }
    }
    ctx->pc = 0x499184u;
    // 0x499184: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x499184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x499188: 0x10620027  beq         $v1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x499188u;
    {
        const bool branch_taken_0x499188 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x499188) {
            ctx->pc = 0x499228u;
            goto label_499228;
        }
    }
    ctx->pc = 0x499190u;
    // 0x499190: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x499190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x499194: 0x10620076  beq         $v1, $v0, . + 4 + (0x76 << 2)
    ctx->pc = 0x499194u;
    {
        const bool branch_taken_0x499194 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x499194) {
            ctx->pc = 0x499370u;
            goto label_499370;
        }
    }
    ctx->pc = 0x49919Cu;
    // 0x49919c: 0x24020046  addiu       $v0, $zero, 0x46
    ctx->pc = 0x49919cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x4991a0: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x4991A0u;
    {
        const bool branch_taken_0x4991a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4991a0) {
            ctx->pc = 0x4991F8u;
            goto label_4991f8;
        }
    }
    ctx->pc = 0x4991A8u;
    // 0x4991a8: 0x2402001a  addiu       $v0, $zero, 0x1A
    ctx->pc = 0x4991a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x4991ac: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4991ACu;
    {
        const bool branch_taken_0x4991ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4991ac) {
            ctx->pc = 0x4991C8u;
            goto label_4991c8;
        }
    }
    ctx->pc = 0x4991B4u;
    // 0x4991b4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4991b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4991b8: 0x1062006d  beq         $v1, $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x4991B8u;
    {
        const bool branch_taken_0x4991b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4991b8) {
            ctx->pc = 0x499370u;
            goto label_499370;
        }
    }
    ctx->pc = 0x4991C0u;
    // 0x4991c0: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x4991C0u;
    {
        const bool branch_taken_0x4991c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4991c0) {
            ctx->pc = 0x499370u;
            goto label_499370;
        }
    }
    ctx->pc = 0x4991C8u;
label_4991c8:
    // 0x4991c8: 0xae830004  sw          $v1, 0x4($s4)
    ctx->pc = 0x4991c8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
    // 0x4991cc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x4991ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4991d0: 0xc040140  jal         func_100500
    ctx->pc = 0x4991D0u;
    SET_GPR_U32(ctx, 31, 0x4991D8u);
    ctx->pc = 0x4991D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4991D0u;
            // 0x4991d4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100500u;
    if (runtime->hasFunction(0x100500u)) {
        auto targetFn = runtime->lookupFunction(0x100500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4991D8u; }
        if (ctx->pc != 0x4991D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100500_0x100500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4991D8u; }
        if (ctx->pc != 0x4991D8u) { return; }
    }
    ctx->pc = 0x4991D8u;
label_4991d8:
    // 0x4991d8: 0xae820008  sw          $v0, 0x8($s4)
    ctx->pc = 0x4991d8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
    // 0x4991dc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4991dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4991e0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4991e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4991e4: 0xc1260dc  jal         func_498370
    ctx->pc = 0x4991E4u;
    SET_GPR_U32(ctx, 31, 0x4991ECu);
    ctx->pc = 0x4991E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4991E4u;
            // 0x4991e8: 0x27a600ac  addiu       $a2, $sp, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
        ctx->in_delay_slot = false;
    ctx->pc = 0x498370u;
    if (runtime->hasFunction(0x498370u)) {
        auto targetFn = runtime->lookupFunction(0x498370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4991ECu; }
        if (ctx->pc != 0x4991ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00498370_0x498370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4991ECu; }
        if (ctx->pc != 0x4991ECu) { return; }
    }
    ctx->pc = 0x4991ECu;
label_4991ec:
    // 0x4991ec: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x4991ECu;
    {
        const bool branch_taken_0x4991ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4991F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4991ECu;
            // 0x4991f0: 0x2a2a821  addu        $s5, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4991ec) {
            ctx->pc = 0x499370u;
            goto label_499370;
        }
    }
    ctx->pc = 0x4991F4u;
    // 0x4991f4: 0x0  nop
    ctx->pc = 0x4991f4u;
    // NOP
label_4991f8:
    // 0x4991f8: 0xae830004  sw          $v1, 0x4($s4)
    ctx->pc = 0x4991f8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
    // 0x4991fc: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x4991fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x499200: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x499200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x499204: 0xc040140  jal         func_100500
    ctx->pc = 0x499204u;
    SET_GPR_U32(ctx, 31, 0x49920Cu);
    ctx->pc = 0x499208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x499204u;
            // 0x499208: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100500u;
    if (runtime->hasFunction(0x100500u)) {
        auto targetFn = runtime->lookupFunction(0x100500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49920Cu; }
        if (ctx->pc != 0x49920Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100500_0x100500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49920Cu; }
        if (ctx->pc != 0x49920Cu) { return; }
    }
    ctx->pc = 0x49920Cu;
label_49920c:
    // 0x49920c: 0xae820008  sw          $v0, 0x8($s4)
    ctx->pc = 0x49920cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
    // 0x499210: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x499210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499214: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x499214u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499218: 0xc126064  jal         func_498190
    ctx->pc = 0x499218u;
    SET_GPR_U32(ctx, 31, 0x499220u);
    ctx->pc = 0x49921Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x499218u;
            // 0x49921c: 0x27a600ac  addiu       $a2, $sp, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
        ctx->in_delay_slot = false;
    ctx->pc = 0x498190u;
    if (runtime->hasFunction(0x498190u)) {
        auto targetFn = runtime->lookupFunction(0x498190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x499220u; }
        if (ctx->pc != 0x499220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00498190_0x498190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x499220u; }
        if (ctx->pc != 0x499220u) { return; }
    }
    ctx->pc = 0x499220u;
label_499220:
    // 0x499220: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x499220u;
    {
        const bool branch_taken_0x499220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x499224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x499220u;
            // 0x499224: 0x2a2a821  addu        $s5, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499220) {
            ctx->pc = 0x499370u;
            goto label_499370;
        }
    }
    ctx->pc = 0x499228u;
label_499228:
    // 0x499228: 0xae830004  sw          $v1, 0x4($s4)
    ctx->pc = 0x499228u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
    // 0x49922c: 0xae800008  sw          $zero, 0x8($s4)
    ctx->pc = 0x49922cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
    // 0x499230: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x499230u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x499234: 0xac607bc0  sw          $zero, 0x7BC0($v1)
    ctx->pc = 0x499234u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 31680), GPR_U32(ctx, 0));
    // 0x499238: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x499238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x49923c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x49923cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x499240: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x499240u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x499244: 0xac407bc8  sw          $zero, 0x7BC8($v0)
    ctx->pc = 0x499244u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 31688), GPR_U32(ctx, 0));
    // 0x499248: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x499248u;
    {
        const bool branch_taken_0x499248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49924Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x499248u;
            // 0x49924c: 0xafa300ac  sw          $v1, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499248) {
            ctx->pc = 0x499370u;
            goto label_499370;
        }
    }
    ctx->pc = 0x499250u;
label_499250:
    // 0x499250: 0xae830004  sw          $v1, 0x4($s4)
    ctx->pc = 0x499250u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
    // 0x499254: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x499254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x499258: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x499258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x49925c: 0xc040140  jal         func_100500
    ctx->pc = 0x49925Cu;
    SET_GPR_U32(ctx, 31, 0x499264u);
    ctx->pc = 0x499260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49925Cu;
            // 0x499260: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100500u;
    if (runtime->hasFunction(0x100500u)) {
        auto targetFn = runtime->lookupFunction(0x100500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x499264u; }
        if (ctx->pc != 0x499264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100500_0x100500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x499264u; }
        if (ctx->pc != 0x499264u) { return; }
    }
    ctx->pc = 0x499264u;
label_499264:
    // 0x499264: 0xae820008  sw          $v0, 0x8($s4)
    ctx->pc = 0x499264u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
    // 0x499268: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x499268u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49926c: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x49926cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x499270: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x499270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x499274: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x499274u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x499278: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x499278u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49927c: 0x26b10004  addiu       $s1, $s5, 0x4
    ctx->pc = 0x49927cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x499280: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x499280u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x499284: 0xc0400c4  jal         func_100310
    ctx->pc = 0x499284u;
    SET_GPR_U32(ctx, 31, 0x49928Cu);
    ctx->pc = 0x499288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x499284u;
            // 0x499288: 0x320c0  sll         $a0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100310u;
    if (runtime->hasFunction(0x100310u)) {
        auto targetFn = runtime->lookupFunction(0x100310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49928Cu; }
        if (ctx->pc != 0x49928Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100310_0x100310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49928Cu; }
        if (ctx->pc != 0x49928Cu) { return; }
    }
    ctx->pc = 0x49928Cu;
label_49928c:
    // 0x49928c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x49928cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x499290: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x499290u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499294: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x499294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x499298: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x499298u;
    {
        const bool branch_taken_0x499298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49929Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x499298u;
            // 0x49929c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499298) {
            ctx->pc = 0x4992C8u;
            goto label_4992c8;
        }
    }
    ctx->pc = 0x4992A0u;
label_4992a0:
    // 0x4992a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4992a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4992a4: 0xc12613c  jal         func_4984F0
    ctx->pc = 0x4992A4u;
    SET_GPR_U32(ctx, 31, 0x4992ACu);
    ctx->pc = 0x4992A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4992A4u;
            // 0x4992a8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4984F0u;
    if (runtime->hasFunction(0x4984F0u)) {
        auto targetFn = runtime->lookupFunction(0x4984F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4992ACu; }
        if (ctx->pc != 0x4992ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004984F0_0x4984f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4992ACu; }
        if (ctx->pc != 0x4992ACu) { return; }
    }
    ctx->pc = 0x4992ACu;
label_4992ac:
    // 0x4992ac: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x4992acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x4992b0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4992b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x4992b4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4992b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4992b8: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x4992b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4992bc: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x4992BCu;
    {
        const bool branch_taken_0x4992bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4992C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4992BCu;
            // 0x4992c0: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4992bc) {
            ctx->pc = 0x4992A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4992a0;
        }
    }
    ctx->pc = 0x4992C4u;
    // 0x4992c4: 0x0  nop
    ctx->pc = 0x4992c4u;
    // NOP
label_4992c8:
    // 0x4992c8: 0x2351023  subu        $v0, $s1, $s5
    ctx->pc = 0x4992c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
    // 0x4992cc: 0x2a2a821  addu        $s5, $s5, $v0
    ctx->pc = 0x4992ccu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x4992d0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4992d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4992d4: 0xac407bc0  sw          $zero, 0x7BC0($v0)
    ctx->pc = 0x4992d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 31680), GPR_U32(ctx, 0));
    // 0x4992d8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4992d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4992dc: 0xac407bc8  sw          $zero, 0x7BC8($v0)
    ctx->pc = 0x4992dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 31688), GPR_U32(ctx, 0));
    // 0x4992e0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4992e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4992e4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x4992E4u;
    {
        const bool branch_taken_0x4992e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4992E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4992E4u;
            // 0x4992e8: 0xafa200ac  sw          $v0, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4992e4) {
            ctx->pc = 0x499370u;
            goto label_499370;
        }
    }
    ctx->pc = 0x4992ECu;
    // 0x4992ec: 0x0  nop
    ctx->pc = 0x4992ecu;
    // NOP
label_4992f0:
    // 0x4992f0: 0xae830004  sw          $v1, 0x4($s4)
    ctx->pc = 0x4992f0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
    // 0x4992f4: 0xae970008  sw          $s7, 0x8($s4)
    ctx->pc = 0x4992f4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 23));
    // 0x4992f8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4992f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4992fc: 0xac407bc0  sw          $zero, 0x7BC0($v0)
    ctx->pc = 0x4992fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 31680), GPR_U32(ctx, 0));
    // 0x499300: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x499300u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x499304: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x499304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x499308: 0xac407bc8  sw          $zero, 0x7BC8($v0)
    ctx->pc = 0x499308u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 31688), GPR_U32(ctx, 0));
    // 0x49930c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x49930cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x499310: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x499310u;
    {
        const bool branch_taken_0x499310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x499314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x499310u;
            // 0x499314: 0xafa200ac  sw          $v0, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499310) {
            ctx->pc = 0x499370u;
            goto label_499370;
        }
    }
    ctx->pc = 0x499318u;
label_499318:
    // 0x499318: 0xae830004  sw          $v1, 0x4($s4)
    ctx->pc = 0x499318u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
    // 0x49931c: 0x96b00000  lhu         $s0, 0x0($s5)
    ctx->pc = 0x49931cu;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x499320: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x499320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x499324: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x499324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499328: 0xc040110  jal         func_100440
    ctx->pc = 0x499328u;
    SET_GPR_U32(ctx, 31, 0x499330u);
    ctx->pc = 0x49932Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x499328u;
            // 0x49932c: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100440u;
    if (runtime->hasFunction(0x100440u)) {
        auto targetFn = runtime->lookupFunction(0x100440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x499330u; }
        if (ctx->pc != 0x499330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100440_0x100440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x499330u; }
        if (ctx->pc != 0x499330u) { return; }
    }
    ctx->pc = 0x499330u;
label_499330:
    // 0x499330: 0xae820008  sw          $v0, 0x8($s4)
    ctx->pc = 0x499330u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
    // 0x499334: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x499334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499338: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x499338u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49933c: 0xc04a508  jal         func_129420
    ctx->pc = 0x49933Cu;
    SET_GPR_U32(ctx, 31, 0x499344u);
    ctx->pc = 0x499340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49933Cu;
            // 0x499340: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x499344u; }
        if (ctx->pc != 0x499344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x499344u; }
        if (ctx->pc != 0x499344u) { return; }
    }
    ctx->pc = 0x499344u;
label_499344:
    // 0x499344: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x499344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x499348: 0x2b0a821  addu        $s5, $s5, $s0
    ctx->pc = 0x499348u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x49934c: 0xac407bc0  sw          $zero, 0x7BC0($v0)
    ctx->pc = 0x49934cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 31680), GPR_U32(ctx, 0));
    // 0x499350: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x499350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x499354: 0xac407bc8  sw          $zero, 0x7BC8($v0)
    ctx->pc = 0x499354u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 31688), GPR_U32(ctx, 0));
    // 0x499358: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x499358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x49935c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x49935Cu;
    {
        const bool branch_taken_0x49935c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x499360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49935Cu;
            // 0x499360: 0xafa200ac  sw          $v0, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49935c) {
            ctx->pc = 0x499370u;
            goto label_499370;
        }
    }
    ctx->pc = 0x499364u;
    // 0x499364: 0x0  nop
    ctx->pc = 0x499364u;
    // NOP
label_499368:
    // 0x499368: 0xae830004  sw          $v1, 0x4($s4)
    ctx->pc = 0x499368u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
    // 0x49936c: 0x0  nop
    ctx->pc = 0x49936cu;
    // NOP
label_499370:
    // 0x499370: 0x8ec2000c  lw          $v0, 0xC($s6)
    ctx->pc = 0x499370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x499374: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x499374u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x499378: 0x3c2102b  sltu        $v0, $fp, $v0
    ctx->pc = 0x499378u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x49937c: 0x1440ff73  bnez        $v0, . + 4 + (-0x8D << 2)
    ctx->pc = 0x49937Cu;
    {
        const bool branch_taken_0x49937c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x499380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49937Cu;
            // 0x499380: 0x2694000c  addiu       $s4, $s4, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49937c) {
            ctx->pc = 0x49914Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_49914c;
        }
    }
    ctx->pc = 0x499384u;
    // 0x499384: 0x0  nop
    ctx->pc = 0x499384u;
    // NOP
label_499388:
    // 0x499388: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x499388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x49938c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x49938cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x499390: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x499390u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x499394: 0x2a21023  subu        $v0, $s5, $v0
    ctx->pc = 0x499394u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x499398: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x499398u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x49939c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x49939cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4993a0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4993a0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4993a4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4993a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4993a8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4993a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4993ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4993acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4993b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4993b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4993b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4993b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4993b8: 0x3e00008  jr          $ra
    ctx->pc = 0x4993B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4993BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4993B8u;
            // 0x4993bc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4993C0u;
}
