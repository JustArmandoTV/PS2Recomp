#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002AD7C0
// Address: 0x2ad7c0 - 0x2ad8f0
void sub_002AD7C0_0x2ad7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AD7C0_0x2ad7c0");
#endif

    switch (ctx->pc) {
        case 0x2ad7f4u: goto label_2ad7f4;
        case 0x2ad800u: goto label_2ad800;
        case 0x2ad818u: goto label_2ad818;
        case 0x2ad820u: goto label_2ad820;
        case 0x2ad838u: goto label_2ad838;
        case 0x2ad860u: goto label_2ad860;
        case 0x2ad87cu: goto label_2ad87c;
        case 0x2ad884u: goto label_2ad884;
        case 0x2ad890u: goto label_2ad890;
        case 0x2ad89cu: goto label_2ad89c;
        case 0x2ad8a8u: goto label_2ad8a8;
        case 0x2ad8bcu: goto label_2ad8bc;
        case 0x2ad8c8u: goto label_2ad8c8;
        default: break;
    }

    ctx->pc = 0x2ad7c0u;

    // 0x2ad7c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2ad7c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2ad7c4: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2ad7c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2ad7c8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2ad7c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2ad7cc: 0x24a51390  addiu       $a1, $a1, 0x1390
    ctx->pc = 0x2ad7ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5008));
    // 0x2ad7d0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2ad7d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2ad7d4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2ad7d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2ad7d8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2ad7d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2ad7dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ad7dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad7e0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2ad7e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2ad7e4: 0x8c900060  lw          $s0, 0x60($a0)
    ctx->pc = 0x2ad7e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x2ad7e8: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2ad7e8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2ad7ec: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2AD7ECu;
    SET_GPR_U32(ctx, 31, 0x2AD7F4u);
    ctx->pc = 0x2AD7F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD7ECu;
            // 0x2ad7f0: 0x260402e0  addiu       $a0, $s0, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD7F4u; }
        if (ctx->pc != 0x2AD7F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD7F4u; }
        if (ctx->pc != 0x2AD7F4u) { return; }
    }
    ctx->pc = 0x2AD7F4u;
label_2ad7f4:
    // 0x2ad7f4: 0x26040560  addiu       $a0, $s0, 0x560
    ctx->pc = 0x2ad7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1376));
    // 0x2ad7f8: 0xc075318  jal         func_1D4C60
    ctx->pc = 0x2AD7F8u;
    SET_GPR_U32(ctx, 31, 0x2AD800u);
    ctx->pc = 0x2AD7FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD7F8u;
            // 0x2ad7fc: 0x260502e0  addiu       $a1, $s0, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4C60u;
    if (runtime->hasFunction(0x1D4C60u)) {
        auto targetFn = runtime->lookupFunction(0x1D4C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD800u; }
        if (ctx->pc != 0x2AD800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4C60_0x1d4c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD800u; }
        if (ctx->pc != 0x2AD800u) { return; }
    }
    ctx->pc = 0x2AD800u;
label_2ad800:
    // 0x2ad800: 0x260207e0  addiu       $v0, $s0, 0x7E0
    ctx->pc = 0x2ad800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2016));
    // 0x2ad804: 0x26060560  addiu       $a2, $s0, 0x560
    ctx->pc = 0x2ad804u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1376));
    // 0x2ad808: 0x24440060  addiu       $a0, $v0, 0x60
    ctx->pc = 0x2ad808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x2ad80c: 0x24450080  addiu       $a1, $v0, 0x80
    ctx->pc = 0x2ad80cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x2ad810: 0xc0c6250  jal         func_318940
    ctx->pc = 0x2AD810u;
    SET_GPR_U32(ctx, 31, 0x2AD818u);
    ctx->pc = 0x2AD814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD810u;
            // 0x2ad814: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD818u; }
        if (ctx->pc != 0x2AD818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD818u; }
        if (ctx->pc != 0x2AD818u) { return; }
    }
    ctx->pc = 0x2AD818u;
label_2ad818:
    // 0x2ad818: 0xc0b9210  jal         func_2E4840
    ctx->pc = 0x2AD818u;
    SET_GPR_U32(ctx, 31, 0x2AD820u);
    ctx->pc = 0x2AD81Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD818u;
            // 0x2ad81c: 0x260407e0  addiu       $a0, $s0, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4840u;
    if (runtime->hasFunction(0x2E4840u)) {
        auto targetFn = runtime->lookupFunction(0x2E4840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD820u; }
        if (ctx->pc != 0x2AD820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4840_0x2e4840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD820u; }
        if (ctx->pc != 0x2AD820u) { return; }
    }
    ctx->pc = 0x2AD820u;
label_2ad820:
    // 0x2ad820: 0x26020890  addiu       $v0, $s0, 0x890
    ctx->pc = 0x2ad820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
    // 0x2ad824: 0x26060560  addiu       $a2, $s0, 0x560
    ctx->pc = 0x2ad824u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1376));
    // 0x2ad828: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2ad828u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2ad82c: 0x24440060  addiu       $a0, $v0, 0x60
    ctx->pc = 0x2ad82cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x2ad830: 0xc0c6250  jal         func_318940
    ctx->pc = 0x2AD830u;
    SET_GPR_U32(ctx, 31, 0x2AD838u);
    ctx->pc = 0x2AD834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD830u;
            // 0x2ad834: 0x24450080  addiu       $a1, $v0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD838u; }
        if (ctx->pc != 0x2AD838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD838u; }
        if (ctx->pc != 0x2AD838u) { return; }
    }
    ctx->pc = 0x2AD838u;
label_2ad838:
    // 0x2ad838: 0x8e100d74  lw          $s0, 0xD74($s0)
    ctx->pc = 0x2ad838u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3444)));
    // 0x2ad83c: 0x3c02f7ff  lui         $v0, 0xF7FF
    ctx->pc = 0x2ad83cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63487 << 16));
    // 0x2ad840: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x2ad840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2ad844: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x2ad844u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2ad848: 0x8e0202c8  lw          $v0, 0x2C8($s0)
    ctx->pc = 0x2ad848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
    // 0x2ad84c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2ad84cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2ad850: 0x8ca5002c  lw          $a1, 0x2C($a1)
    ctx->pc = 0x2ad850u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x2ad854: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x2ad854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x2ad858: 0xc0a545c  jal         func_295170
    ctx->pc = 0x2AD858u;
    SET_GPR_U32(ctx, 31, 0x2AD860u);
    ctx->pc = 0x2AD85Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD858u;
            // 0x2ad85c: 0x629024  and         $s2, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295170u;
    if (runtime->hasFunction(0x295170u)) {
        auto targetFn = runtime->lookupFunction(0x295170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD860u; }
        if (ctx->pc != 0x2AD860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295170_0x295170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD860u; }
        if (ctx->pc != 0x2AD860u) { return; }
    }
    ctx->pc = 0x2AD860u;
label_2ad860:
    // 0x2ad860: 0xac52002c  sw          $s2, 0x2C($v0)
    ctx->pc = 0x2ad860u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 18));
    // 0x2ad864: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2ad864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2ad868: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x2ad868u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2ad86c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x2ad86cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
    // 0x2ad870: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2ad870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2ad874: 0xc08bf20  jal         func_22FC80
    ctx->pc = 0x2AD874u;
    SET_GPR_U32(ctx, 31, 0x2AD87Cu);
    ctx->pc = 0x2AD878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD874u;
            // 0x2ad878: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FC80u;
    if (runtime->hasFunction(0x22FC80u)) {
        auto targetFn = runtime->lookupFunction(0x22FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD87Cu; }
        if (ctx->pc != 0x2AD87Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FC80_0x22fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD87Cu; }
        if (ctx->pc != 0x2AD87Cu) { return; }
    }
    ctx->pc = 0x2AD87Cu;
label_2ad87c:
    // 0x2ad87c: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x2AD87Cu;
    SET_GPR_U32(ctx, 31, 0x2AD884u);
    ctx->pc = 0x2AD880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD87Cu;
            // 0x2ad880: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD884u; }
        if (ctx->pc != 0x2AD884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD884u; }
        if (ctx->pc != 0x2AD884u) { return; }
    }
    ctx->pc = 0x2AD884u;
label_2ad884:
    // 0x2ad884: 0x262400f0  addiu       $a0, $s1, 0xF0
    ctx->pc = 0x2ad884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
    // 0x2ad888: 0xc04c74c  jal         func_131D30
    ctx->pc = 0x2AD888u;
    SET_GPR_U32(ctx, 31, 0x2AD890u);
    ctx->pc = 0x2AD88Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD888u;
            // 0x2ad88c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131D30u;
    if (runtime->hasFunction(0x131D30u)) {
        auto targetFn = runtime->lookupFunction(0x131D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD890u; }
        if (ctx->pc != 0x2AD890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131D30_0x131d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD890u; }
        if (ctx->pc != 0x2AD890u) { return; }
    }
    ctx->pc = 0x2AD890u;
label_2ad890:
    // 0x2ad890: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ad890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad894: 0xc04f278  jal         func_13C9E0
    ctx->pc = 0x2AD894u;
    SET_GPR_U32(ctx, 31, 0x2AD89Cu);
    ctx->pc = 0x2AD898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD894u;
            // 0x2ad898: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD89Cu; }
        if (ctx->pc != 0x2AD89Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD89Cu; }
        if (ctx->pc != 0x2AD89Cu) { return; }
    }
    ctx->pc = 0x2AD89Cu;
label_2ad89c:
    // 0x2ad89c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ad89cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad8a0: 0xc04f278  jal         func_13C9E0
    ctx->pc = 0x2AD8A0u;
    SET_GPR_U32(ctx, 31, 0x2AD8A8u);
    ctx->pc = 0x2AD8A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD8A0u;
            // 0x2ad8a4: 0x262500f0  addiu       $a1, $s1, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD8A8u; }
        if (ctx->pc != 0x2AD8A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD8A8u; }
        if (ctx->pc != 0x2AD8A8u) { return; }
    }
    ctx->pc = 0x2AD8A8u;
label_2ad8a8:
    // 0x2ad8a8: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x2ad8a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x2ad8ac: 0x26240050  addiu       $a0, $s1, 0x50
    ctx->pc = 0x2ad8acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x2ad8b0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2ad8b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad8b4: 0xc04cca0  jal         func_133280
    ctx->pc = 0x2AD8B4u;
    SET_GPR_U32(ctx, 31, 0x2AD8BCu);
    ctx->pc = 0x2AD8B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD8B4u;
            // 0x2ad8b8: 0x24c61390  addiu       $a2, $a2, 0x1390 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5008));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD8BCu; }
        if (ctx->pc != 0x2AD8BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD8BCu; }
        if (ctx->pc != 0x2AD8BCu) { return; }
    }
    ctx->pc = 0x2AD8BCu;
label_2ad8bc:
    // 0x2ad8bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ad8bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad8c0: 0xc0ab808  jal         func_2AE020
    ctx->pc = 0x2AD8C0u;
    SET_GPR_U32(ctx, 31, 0x2AD8C8u);
    ctx->pc = 0x2AD8C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD8C0u;
            // 0x2ad8c4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AE020u;
    if (runtime->hasFunction(0x2AE020u)) {
        auto targetFn = runtime->lookupFunction(0x2AE020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD8C8u; }
        if (ctx->pc != 0x2AD8C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AE020_0x2ae020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD8C8u; }
        if (ctx->pc != 0x2AD8C8u) { return; }
    }
    ctx->pc = 0x2AD8C8u;
label_2ad8c8:
    // 0x2ad8c8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2ad8c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ad8cc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2ad8ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2ad8d0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2ad8d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ad8d4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2ad8d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ad8d8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2ad8d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ad8dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2AD8DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD8E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD8DCu;
            // 0x2ad8e0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AD8E4u;
    // 0x2ad8e4: 0x0  nop
    ctx->pc = 0x2ad8e4u;
    // NOP
    // 0x2ad8e8: 0x0  nop
    ctx->pc = 0x2ad8e8u;
    // NOP
    // 0x2ad8ec: 0x0  nop
    ctx->pc = 0x2ad8ecu;
    // NOP
}
