#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00509110
// Address: 0x509110 - 0x509230
void sub_00509110_0x509110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00509110_0x509110");
#endif

    switch (ctx->pc) {
        case 0x509140u: goto label_509140;
        case 0x5091a8u: goto label_5091a8;
        case 0x5091c0u: goto label_5091c0;
        case 0x5091c8u: goto label_5091c8;
        case 0x5091e8u: goto label_5091e8;
        case 0x50920cu: goto label_50920c;
        default: break;
    }

    ctx->pc = 0x509110u;

    // 0x509110: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x509110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x509114: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x509114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x509118: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x509118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x50911c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x50911cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x509120: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x509120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x509124: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x509124u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x509128: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x509128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x50912c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x50912cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x509130: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x509130u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x509134: 0x8c5089d0  lw          $s0, -0x7630($v0)
    ctx->pc = 0x509134u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
    // 0x509138: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x509138u;
    SET_GPR_U32(ctx, 31, 0x509140u);
    ctx->pc = 0x50913Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x509138u;
            // 0x50913c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x509140u; }
        if (ctx->pc != 0x509140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x509140u; }
        if (ctx->pc != 0x509140u) { return; }
    }
    ctx->pc = 0x509140u;
label_509140:
    // 0x509140: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x509140u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x509144: 0x9225000c  lbu         $a1, 0xC($s1)
    ctx->pc = 0x509144u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x509148: 0x93a70040  lbu         $a3, 0x40($sp)
    ctx->pc = 0x509148u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x50914c: 0x2404ffe0  addiu       $a0, $zero, -0x20
    ctx->pc = 0x50914cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x509150: 0x8c72a348  lw          $s2, -0x5CB8($v1)
    ctx->pc = 0x509150u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943560)));
    // 0x509154: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x509154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x509158: 0x30a5001f  andi        $a1, $a1, 0x1F
    ctx->pc = 0x509158u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x50915c: 0x2406ff9f  addiu       $a2, $zero, -0x61
    ctx->pc = 0x50915cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967199));
    // 0x509160: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x509160u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x509164: 0xe41824  and         $v1, $a3, $a0
    ctx->pc = 0x509164u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x509168: 0x8c440ed0  lw          $a0, 0xED0($v0)
    ctx->pc = 0x509168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3792)));
    // 0x50916c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x50916cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x509170: 0x651025  or          $v0, $v1, $a1
    ctx->pc = 0x509170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x509174: 0xa3a20040  sb          $v0, 0x40($sp)
    ctx->pc = 0x509174u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 2));
    // 0x509178: 0x9223000d  lbu         $v1, 0xD($s1)
    ctx->pc = 0x509178u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 13)));
    // 0x50917c: 0x93a20040  lbu         $v0, 0x40($sp)
    ctx->pc = 0x50917cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x509180: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x509180u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x509184: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x509184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x509188: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x509188u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x50918c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x50918cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x509190: 0xa3a20040  sb          $v0, 0x40($sp)
    ctx->pc = 0x509190u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 2));
    // 0x509194: 0x9222000e  lbu         $v0, 0xE($s1)
    ctx->pc = 0x509194u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x509198: 0xa3a20041  sb          $v0, 0x41($sp)
    ctx->pc = 0x509198u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 65), (uint8_t)GPR_U32(ctx, 2));
    // 0x50919c: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x50919cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x5091a0: 0xc0b3a28  jal         func_2CE8A0
    ctx->pc = 0x5091A0u;
    SET_GPR_U32(ctx, 31, 0x5091A8u);
    ctx->pc = 0x5091A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5091A0u;
            // 0x5091a4: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CE8A0u;
    if (runtime->hasFunction(0x2CE8A0u)) {
        auto targetFn = runtime->lookupFunction(0x2CE8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5091A8u; }
        if (ctx->pc != 0x5091A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CE8A0_0x2ce8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5091A8u; }
        if (ctx->pc != 0x5091A8u) { return; }
    }
    ctx->pc = 0x5091A8u;
label_5091a8:
    // 0x5091a8: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x5091a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x5091ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x5091acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5091b0: 0x26060080  addiu       $a2, $s0, 0x80
    ctx->pc = 0x5091b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x5091b4: 0x24070012  addiu       $a3, $zero, 0x12
    ctx->pc = 0x5091b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x5091b8: 0xc0aa5d8  jal         func_2A9760
    ctx->pc = 0x5091B8u;
    SET_GPR_U32(ctx, 31, 0x5091C0u);
    ctx->pc = 0x5091BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5091B8u;
            // 0x5091bc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9760u;
    if (runtime->hasFunction(0x2A9760u)) {
        auto targetFn = runtime->lookupFunction(0x2A9760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5091C0u; }
        if (ctx->pc != 0x5091C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A9760_0x2a9760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5091C0u; }
        if (ctx->pc != 0x5091C0u) { return; }
    }
    ctx->pc = 0x5091C0u;
label_5091c0:
    // 0x5091c0: 0xc040180  jal         func_100600
    ctx->pc = 0x5091C0u;
    SET_GPR_U32(ctx, 31, 0x5091C8u);
    ctx->pc = 0x5091C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5091C0u;
            // 0x5091c4: 0x24040ce4  addiu       $a0, $zero, 0xCE4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3300));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5091C8u; }
        if (ctx->pc != 0x5091C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5091C8u; }
        if (ctx->pc != 0x5091C8u) { return; }
    }
    ctx->pc = 0x5091C8u;
label_5091c8:
    // 0x5091c8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x5091c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5091cc: 0x52400010  beql        $s2, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x5091CCu;
    {
        const bool branch_taken_0x5091cc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x5091cc) {
            ctx->pc = 0x5091D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5091CCu;
            // 0x5091d0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x509210u;
            goto label_509210;
        }
    }
    ctx->pc = 0x5091D4u;
    // 0x5091d4: 0x8e310008  lw          $s1, 0x8($s1)
    ctx->pc = 0x5091d4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x5091d8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x5091d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x5091dc: 0x8c4489d0  lw          $a0, -0x7630($v0)
    ctx->pc = 0x5091dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
    // 0x5091e0: 0xc0b909c  jal         func_2E4270
    ctx->pc = 0x5091E0u;
    SET_GPR_U32(ctx, 31, 0x5091E8u);
    ctx->pc = 0x5091E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5091E0u;
            // 0x5091e4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4270u;
    if (runtime->hasFunction(0x2E4270u)) {
        auto targetFn = runtime->lookupFunction(0x2E4270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5091E8u; }
        if (ctx->pc != 0x5091E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4270_0x2e4270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5091E8u; }
        if (ctx->pc != 0x5091E8u) { return; }
    }
    ctx->pc = 0x5091E8u;
label_5091e8:
    // 0x5091e8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x5091e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x5091ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x5091ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5091f0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x5091f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5091f4: 0x260a0080  addiu       $t2, $s0, 0x80
    ctx->pc = 0x5091f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x5091f8: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x5091f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5091fc: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x5091fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x509200: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x509200u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x509204: 0xc118ad8  jal         func_462B60
    ctx->pc = 0x509204u;
    SET_GPR_U32(ctx, 31, 0x50920Cu);
    ctx->pc = 0x509208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x509204u;
            // 0x509208: 0x240b0004  addiu       $t3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x462B60u;
    if (runtime->hasFunction(0x462B60u)) {
        auto targetFn = runtime->lookupFunction(0x462B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50920Cu; }
        if (ctx->pc != 0x50920Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00462B60_0x462b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50920Cu; }
        if (ctx->pc != 0x50920Cu) { return; }
    }
    ctx->pc = 0x50920Cu;
label_50920c:
    // 0x50920c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x50920cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_509210:
    // 0x509210: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x509210u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x509214: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x509214u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x509218: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x509218u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50921c: 0x3e00008  jr          $ra
    ctx->pc = 0x50921Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x509220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50921Cu;
            // 0x509220: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x509224u;
    // 0x509224: 0x0  nop
    ctx->pc = 0x509224u;
    // NOP
    // 0x509228: 0x0  nop
    ctx->pc = 0x509228u;
    // NOP
    // 0x50922c: 0x0  nop
    ctx->pc = 0x50922cu;
    // NOP
}
