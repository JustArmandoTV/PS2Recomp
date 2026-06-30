#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00270280
// Address: 0x270280 - 0x2703b0
void sub_00270280_0x270280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00270280_0x270280");
#endif

    switch (ctx->pc) {
        case 0x2702bcu: goto label_2702bc;
        case 0x2702d0u: goto label_2702d0;
        case 0x2702ecu: goto label_2702ec;
        case 0x270310u: goto label_270310;
        case 0x27032cu: goto label_27032c;
        case 0x270344u: goto label_270344;
        case 0x270354u: goto label_270354;
        case 0x270368u: goto label_270368;
        default: break;
    }

    ctx->pc = 0x270280u;

    // 0x270280: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x270280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x270284: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x270284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x270288: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x270288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x27028c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x27028cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x270290: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x270290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x270294: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x270294u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270298: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x270298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x27029c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x27029cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2702a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2702a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2702a4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2702a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2702a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2702a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2702ac: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2702acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2702b0: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x2702b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2702b4: 0xc09acd0  jal         func_26B340
    ctx->pc = 0x2702B4u;
    SET_GPR_U32(ctx, 31, 0x2702BCu);
    ctx->pc = 0x2702B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2702B4u;
            // 0x2702b8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26B340u;
    if (runtime->hasFunction(0x26B340u)) {
        auto targetFn = runtime->lookupFunction(0x26B340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2702BCu; }
        if (ctx->pc != 0x2702BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026B340_0x26b340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2702BCu; }
        if (ctx->pc != 0x2702BCu) { return; }
    }
    ctx->pc = 0x2702BCu;
label_2702bc:
    // 0x2702bc: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x2702bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x2702c0: 0x8e850060  lw          $a1, 0x60($s4)
    ctx->pc = 0x2702c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 96)));
    // 0x2702c4: 0x8c56000c  lw          $s6, 0xC($v0)
    ctx->pc = 0x2702c4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2702c8: 0xc09bec0  jal         func_26FB00
    ctx->pc = 0x2702C8u;
    SET_GPR_U32(ctx, 31, 0x2702D0u);
    ctx->pc = 0x2702CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2702C8u;
            // 0x2702cc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26FB00u;
    if (runtime->hasFunction(0x26FB00u)) {
        auto targetFn = runtime->lookupFunction(0x26FB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2702D0u; }
        if (ctx->pc != 0x2702D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026FB00_0x26fb00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2702D0u; }
        if (ctx->pc != 0x2702D0u) { return; }
    }
    ctx->pc = 0x2702D0u;
label_2702d0:
    // 0x2702d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2702d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2702d4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2702d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2702d8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2702d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2702dc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2702dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2702e0: 0x27a7008c  addiu       $a3, $sp, 0x8C
    ctx->pc = 0x2702e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x2702e4: 0xc09bf14  jal         func_26FC50
    ctx->pc = 0x2702E4u;
    SET_GPR_U32(ctx, 31, 0x2702ECu);
    ctx->pc = 0x2702E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2702E4u;
            // 0x2702e8: 0x27a80088  addiu       $t0, $sp, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26FC50u;
    if (runtime->hasFunction(0x26FC50u)) {
        auto targetFn = runtime->lookupFunction(0x26FC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2702ECu; }
        if (ctx->pc != 0x2702ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026FC50_0x26fc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2702ECu; }
        if (ctx->pc != 0x2702ECu) { return; }
    }
    ctx->pc = 0x2702ECu;
label_2702ec:
    // 0x2702ec: 0x8e830070  lw          $v1, 0x70($s4)
    ctx->pc = 0x2702ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
    // 0x2702f0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2702f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2702f4: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x2702f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
    // 0x2702f8: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x2702f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2702fc: 0x8fa6008c  lw          $a2, 0x8C($sp)
    ctx->pc = 0x2702fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x270300: 0x8c68005c  lw          $t0, 0x5C($v1)
    ctx->pc = 0x270300u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x270304: 0x8c49005c  lw          $t1, 0x5C($v0)
    ctx->pc = 0x270304u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x270308: 0xc09baf8  jal         func_26EBE0
    ctx->pc = 0x270308u;
    SET_GPR_U32(ctx, 31, 0x270310u);
    ctx->pc = 0x27030Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270308u;
            // 0x27030c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26EBE0u;
    if (runtime->hasFunction(0x26EBE0u)) {
        auto targetFn = runtime->lookupFunction(0x26EBE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270310u; }
        if (ctx->pc != 0x270310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026EBE0_0x26ebe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270310u; }
        if (ctx->pc != 0x270310u) { return; }
    }
    ctx->pc = 0x270310u;
label_270310:
    // 0x270310: 0x8e430034  lw          $v1, 0x34($s2)
    ctx->pc = 0x270310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x270314: 0x8e620034  lw          $v0, 0x34($s3)
    ctx->pc = 0x270314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x270318: 0x622823  subu        $a1, $v1, $v0
    ctx->pc = 0x270318u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27031c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x27031Cu;
    {
        const bool branch_taken_0x27031c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x270320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27031Cu;
            // 0x270320: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27031c) {
            ctx->pc = 0x270330u;
            goto label_270330;
        }
    }
    ctx->pc = 0x270324u;
    // 0x270324: 0xc09b934  jal         func_26E4D0
    ctx->pc = 0x270324u;
    SET_GPR_U32(ctx, 31, 0x27032Cu);
    ctx->pc = 0x26E4D0u;
    if (runtime->hasFunction(0x26E4D0u)) {
        auto targetFn = runtime->lookupFunction(0x26E4D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27032Cu; }
        if (ctx->pc != 0x27032Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026E4D0_0x26e4d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27032Cu; }
        if (ctx->pc != 0x27032Cu) { return; }
    }
    ctx->pc = 0x27032Cu;
label_27032c:
    // 0x27032c: 0x0  nop
    ctx->pc = 0x27032cu;
    // NOP
label_270330:
    // 0x270330: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x270330u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270334: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x270334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270338: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x270338u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27033c: 0xc09bc3c  jal         func_26F0F0
    ctx->pc = 0x27033Cu;
    SET_GPR_U32(ctx, 31, 0x270344u);
    ctx->pc = 0x270340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27033Cu;
            // 0x270340: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26F0F0u;
    if (runtime->hasFunction(0x26F0F0u)) {
        auto targetFn = runtime->lookupFunction(0x26F0F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270344u; }
        if (ctx->pc != 0x270344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026F0F0_0x26f0f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270344u; }
        if (ctx->pc != 0x270344u) { return; }
    }
    ctx->pc = 0x270344u;
label_270344:
    // 0x270344: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x270344u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270348: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x270348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27034c: 0xc09ba00  jal         func_26E800
    ctx->pc = 0x27034Cu;
    SET_GPR_U32(ctx, 31, 0x270354u);
    ctx->pc = 0x270350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27034Cu;
            // 0x270350: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26E800u;
    if (runtime->hasFunction(0x26E800u)) {
        auto targetFn = runtime->lookupFunction(0x26E800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270354u; }
        if (ctx->pc != 0x270354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026E800_0x26e800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270354u; }
        if (ctx->pc != 0x270354u) { return; }
    }
    ctx->pc = 0x270354u;
label_270354:
    // 0x270354: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x270354u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x270358: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x270358u;
    {
        const bool branch_taken_0x270358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27035Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270358u;
            // 0x27035c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270358) {
            ctx->pc = 0x270368u;
            goto label_270368;
        }
    }
    ctx->pc = 0x270360u;
    // 0x270360: 0xc09b8e0  jal         func_26E380
    ctx->pc = 0x270360u;
    SET_GPR_U32(ctx, 31, 0x270368u);
    ctx->pc = 0x270364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270360u;
            // 0x270364: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26E380u;
    if (runtime->hasFunction(0x26E380u)) {
        auto targetFn = runtime->lookupFunction(0x26E380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270368u; }
        if (ctx->pc != 0x270368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026E380_0x26e380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270368u; }
        if (ctx->pc != 0x270368u) { return; }
    }
    ctx->pc = 0x270368u;
label_270368:
    // 0x270368: 0x8ea30010  lw          $v1, 0x10($s5)
    ctx->pc = 0x270368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x27036c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27036cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x270370: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x270370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x270374: 0xae83005c  sw          $v1, 0x5C($s4)
    ctx->pc = 0x270374u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 92), GPR_U32(ctx, 3));
    // 0x270378: 0xa2820038  sb          $v0, 0x38($s4)
    ctx->pc = 0x270378u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 56), (uint8_t)GPR_U32(ctx, 2));
    // 0x27037c: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x27037cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x270380: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x270380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x270384: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x270384u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x270388: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x270388u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27038c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27038cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x270390: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x270390u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x270394: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x270394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x270398: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x270398u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27039c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27039cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2703a0: 0x561023  subu        $v0, $v0, $s6
    ctx->pc = 0x2703a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x2703a4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2703a4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2703a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2703A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2703ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2703A8u;
            // 0x2703ac: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2703B0u;
}
