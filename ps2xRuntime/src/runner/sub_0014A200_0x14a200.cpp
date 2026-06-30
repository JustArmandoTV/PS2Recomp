#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014A200
// Address: 0x14a200 - 0x14a3b0
void sub_0014A200_0x14a200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014A200_0x14a200");
#endif

    switch (ctx->pc) {
        case 0x14a258u: goto label_14a258;
        case 0x14a27cu: goto label_14a27c;
        case 0x14a294u: goto label_14a294;
        case 0x14a2c0u: goto label_14a2c0;
        case 0x14a2e4u: goto label_14a2e4;
        case 0x14a31cu: goto label_14a31c;
        case 0x14a354u: goto label_14a354;
        default: break;
    }

    ctx->pc = 0x14a200u;

    // 0x14a200: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x14a200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x14a204: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x14a204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x14a208: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x14a208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x14a20c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x14a20cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x14a210: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x14a210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x14a214: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x14a214u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a218: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x14a218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x14a21c: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x14a21cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a220: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x14a220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x14a224: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x14a224u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a228: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x14a228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x14a22c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x14a22cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a230: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x14a230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x14a234: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x14a234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x14a238: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x14a238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x14a23c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x14a23cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x14a240: 0x8cbe0028  lw          $fp, 0x28($a1)
    ctx->pc = 0x14a240u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x14a244: 0x13c0004a  beqz        $fp, . + 4 + (0x4A << 2)
    ctx->pc = 0x14A244u;
    {
        const bool branch_taken_0x14a244 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A244u;
            // 0x14a248: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a244) {
            ctx->pc = 0x14A370u;
            goto label_14a370;
        }
    }
    ctx->pc = 0x14A24Cu;
    // 0x14a24c: 0x8ef10030  lw          $s1, 0x30($s7)
    ctx->pc = 0x14a24cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 48)));
    // 0x14a250: 0xc04cce8  jal         func_1333A0
    ctx->pc = 0x14A250u;
    SET_GPR_U32(ctx, 31, 0x14A258u);
    ctx->pc = 0x14A254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A250u;
            // 0x14a254: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A258u; }
        if (ctx->pc != 0x14A258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A258u; }
        if (ctx->pc != 0x14A258u) { return; }
    }
    ctx->pc = 0x14A258u;
label_14a258:
    // 0x14a258: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x14a258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a25c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14a25cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a260: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x14a260u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a264: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x14a264u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a268: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x14a268u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a26c: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x14a26cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a270: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x14a270u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a274: 0xc04d134  jal         func_1344D0
    ctx->pc = 0x14A274u;
    SET_GPR_U32(ctx, 31, 0x14A27Cu);
    ctx->pc = 0x14A278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A274u;
            // 0x14a278: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344D0u;
    if (runtime->hasFunction(0x1344D0u)) {
        auto targetFn = runtime->lookupFunction(0x1344D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A27Cu; }
        if (ctx->pc != 0x14A27Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001344D0_0x1344d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A27Cu; }
        if (ctx->pc != 0x14A27Cu) { return; }
    }
    ctx->pc = 0x14A27Cu;
label_14a27c:
    // 0x14a27c: 0x2bc10002  slti        $at, $fp, 0x2
    ctx->pc = 0x14a27cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x14a280: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x14a280u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a284: 0x26310090  addiu       $s1, $s1, 0x90
    ctx->pc = 0x14a284u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x14a288: 0x26b00040  addiu       $s0, $s5, 0x40
    ctx->pc = 0x14a288u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
    // 0x14a28c: 0x14200038  bnez        $at, . + 4 + (0x38 << 2)
    ctx->pc = 0x14A28Cu;
    {
        const bool branch_taken_0x14a28c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x14A290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A28Cu;
            // 0x14a290: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a28c) {
            ctx->pc = 0x14A370u;
            goto label_14a370;
        }
    }
    ctx->pc = 0x14A294u;
label_14a294:
    // 0x14a294: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x14a294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14a298: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x14a298u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x14a29c: 0x3463e000  ori         $v1, $v1, 0xE000
    ctx->pc = 0x14a29cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57344);
    // 0x14a2a0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x14a2a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x14a2a4: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x14A2A4u;
    {
        const bool branch_taken_0x14a2a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14a2a4) {
            ctx->pc = 0x14A2F0u;
            goto label_14a2f0;
        }
    }
    ctx->pc = 0x14A2ACu;
    // 0x14a2ac: 0x86220006  lh          $v0, 0x6($s1)
    ctx->pc = 0x14a2acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x14a2b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a2b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a2b4: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x14a2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x14a2b8: 0xc04cce8  jal         func_1333A0
    ctx->pc = 0x14A2B8u;
    SET_GPR_U32(ctx, 31, 0x14A2C0u);
    ctx->pc = 0x14A2BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A2B8u;
            // 0x14a2bc: 0x2a22821  addu        $a1, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A2C0u; }
        if (ctx->pc != 0x14A2C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A2C0u; }
        if (ctx->pc != 0x14A2C0u) { return; }
    }
    ctx->pc = 0x14A2C0u;
label_14a2c0:
    // 0x14a2c0: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x14a2c0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a2c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a2c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a2c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14a2c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a2cc: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x14a2ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a2d0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x14a2d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a2d4: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x14a2d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a2d8: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x14a2d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a2dc: 0xc04d134  jal         func_1344D0
    ctx->pc = 0x14A2DCu;
    SET_GPR_U32(ctx, 31, 0x14A2E4u);
    ctx->pc = 0x14A2E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A2DCu;
            // 0x14a2e0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344D0u;
    if (runtime->hasFunction(0x1344D0u)) {
        auto targetFn = runtime->lookupFunction(0x1344D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A2E4u; }
        if (ctx->pc != 0x14A2E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001344D0_0x1344d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A2E4u; }
        if (ctx->pc != 0x14A2E4u) { return; }
    }
    ctx->pc = 0x14A2E4u;
label_14a2e4:
    // 0x14a2e4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x14A2E4u;
    {
        const bool branch_taken_0x14a2e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A2E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A2E4u;
            // 0x14a2e8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a2e4) {
            ctx->pc = 0x14A358u;
            goto label_14a358;
        }
    }
    ctx->pc = 0x14A2ECu;
    // 0x14a2ec: 0x0  nop
    ctx->pc = 0x14a2ecu;
    // NOP
label_14a2f0:
    // 0x14a2f0: 0x30838000  andi        $v1, $a0, 0x8000
    ctx->pc = 0x14a2f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32768);
    // 0x14a2f4: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x14A2F4u;
    {
        const bool branch_taken_0x14a2f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a2f4) {
            ctx->pc = 0x14A328u;
            goto label_14a328;
        }
    }
    ctx->pc = 0x14A2FCu;
    // 0x14a2fc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x14a2fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a300: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x14a300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a304: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x14a304u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a308: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x14a308u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a30c: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x14a30cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a310: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x14a310u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a314: 0xc052a70  jal         func_14A9C0
    ctx->pc = 0x14A314u;
    SET_GPR_U32(ctx, 31, 0x14A31Cu);
    ctx->pc = 0x14A318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A314u;
            // 0x14a318: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14A9C0u;
    if (runtime->hasFunction(0x14A9C0u)) {
        auto targetFn = runtime->lookupFunction(0x14A9C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A31Cu; }
        if (ctx->pc != 0x14A31Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014A9C0_0x14a9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A31Cu; }
        if (ctx->pc != 0x14A31Cu) { return; }
    }
    ctx->pc = 0x14A31Cu;
label_14a31c:
    // 0x14a31c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x14A31Cu;
    {
        const bool branch_taken_0x14a31c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a31c) {
            ctx->pc = 0x14A358u;
            goto label_14a358;
        }
    }
    ctx->pc = 0x14A324u;
    // 0x14a324: 0x0  nop
    ctx->pc = 0x14a324u;
    // NOP
label_14a328:
    // 0x14a328: 0x30834000  andi        $v1, $a0, 0x4000
    ctx->pc = 0x14a328u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16384);
    // 0x14a32c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x14A32Cu;
    {
        const bool branch_taken_0x14a32c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a32c) {
            ctx->pc = 0x14A358u;
            goto label_14a358;
        }
    }
    ctx->pc = 0x14A334u;
    // 0x14a334: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x14a334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a338: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x14a338u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a33c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x14a33cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a340: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x14a340u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a344: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x14a344u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a348: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x14a348u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a34c: 0xc052a10  jal         func_14A840
    ctx->pc = 0x14A34Cu;
    SET_GPR_U32(ctx, 31, 0x14A354u);
    ctx->pc = 0x14A350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A34Cu;
            // 0x14a350: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14A840u;
    if (runtime->hasFunction(0x14A840u)) {
        auto targetFn = runtime->lookupFunction(0x14A840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A354u; }
        if (ctx->pc != 0x14A354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014A840_0x14a840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A354u; }
        if (ctx->pc != 0x14A354u) { return; }
    }
    ctx->pc = 0x14A354u;
label_14a354:
    // 0x14a354: 0x0  nop
    ctx->pc = 0x14a354u;
    // NOP
label_14a358:
    // 0x14a358: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x14a358u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x14a35c: 0x27e182a  slt         $v1, $s3, $fp
    ctx->pc = 0x14a35cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x14a360: 0x26310090  addiu       $s1, $s1, 0x90
    ctx->pc = 0x14a360u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x14a364: 0x1460ffcb  bnez        $v1, . + 4 + (-0x35 << 2)
    ctx->pc = 0x14A364u;
    {
        const bool branch_taken_0x14a364 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14A368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A364u;
            // 0x14a368: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a364) {
            ctx->pc = 0x14A294u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14a294;
        }
    }
    ctx->pc = 0x14A36Cu;
    // 0x14a36c: 0x0  nop
    ctx->pc = 0x14a36cu;
    // NOP
label_14a370:
    // 0x14a370: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x14a370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x14a374: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x14a374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x14a378: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x14a378u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x14a37c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x14a37cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x14a380: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x14a380u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x14a384: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x14a384u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14a388: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x14a388u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14a38c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x14a38cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14a390: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x14a390u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14a394: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x14a394u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14a398: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x14a398u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14a39c: 0x3e00008  jr          $ra
    ctx->pc = 0x14A39Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14A3A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A39Cu;
            // 0x14a3a0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14A3A4u;
    // 0x14a3a4: 0x0  nop
    ctx->pc = 0x14a3a4u;
    // NOP
    // 0x14a3a8: 0x0  nop
    ctx->pc = 0x14a3a8u;
    // NOP
    // 0x14a3ac: 0x0  nop
    ctx->pc = 0x14a3acu;
    // NOP
}
