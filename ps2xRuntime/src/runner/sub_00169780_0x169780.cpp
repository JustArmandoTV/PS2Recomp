#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00169780
// Address: 0x169780 - 0x169830
void sub_00169780_0x169780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00169780_0x169780");
#endif

    switch (ctx->pc) {
        case 0x1697a8u: goto label_1697a8;
        case 0x1697dcu: goto label_1697dc;
        case 0x1697e4u: goto label_1697e4;
        case 0x1697f8u: goto label_1697f8;
        case 0x169810u: goto label_169810;
        default: break;
    }

    ctx->pc = 0x169780u;

    // 0x169780: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x169780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x169784: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x169784u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169788: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x169788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16978c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16978cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169790: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x169790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x169794: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x169794u;
    {
        const bool branch_taken_0x169794 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x169798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169794u;
            // 0x169798: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169794) {
            ctx->pc = 0x1697B0u;
            goto label_1697b0;
        }
    }
    ctx->pc = 0x16979Cu;
    // 0x16979c: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x16979cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x1697a0: 0xc059f4e  jal         func_167D38
    ctx->pc = 0x1697A0u;
    SET_GPR_U32(ctx, 31, 0x1697A8u);
    ctx->pc = 0x1697A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1697A0u;
            // 0x1697a4: 0x24843658  addiu       $a0, $a0, 0x3658 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13912));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167D38u;
    if (runtime->hasFunction(0x167D38u)) {
        auto targetFn = runtime->lookupFunction(0x167D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1697A8u; }
        if (ctx->pc != 0x1697A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00167D38_0x167d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1697A8u; }
        if (ctx->pc != 0x1697A8u) { return; }
    }
    ctx->pc = 0x1697A8u;
label_1697a8:
    // 0x1697a8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1697A8u;
    {
        const bool branch_taken_0x1697a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1697ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1697A8u;
            // 0x1697ac: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1697a8) {
            ctx->pc = 0x169818u;
            goto label_169818;
        }
    }
    ctx->pc = 0x1697B0u;
label_1697b0:
    // 0x1697b0: 0x3c117fff  lui         $s1, 0x7FFF
    ctx->pc = 0x1697b0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)32767 << 16));
    // 0x1697b4: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x1697b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x1697b8: 0x3631ffff  ori         $s1, $s1, 0xFFFF
    ctx->pc = 0x1697b8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
    // 0x1697bc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1697bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1697c0: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1697c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1697c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1697c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1697c8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1697c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1697cc: 0x8407c  dsll32      $t0, $t0, 1
    ctx->pc = 0x1697ccu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 1));
    // 0x1697d0: 0x845ba  dsrl        $t0, $t0, 22
    ctx->pc = 0x1697d0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> 22);
    // 0x1697d4: 0xc05c26c  jal         func_1709B0
    ctx->pc = 0x1697D4u;
    SET_GPR_U32(ctx, 31, 0x1697DCu);
    ctx->pc = 0x1697D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1697D4u;
            // 0x1697d8: 0xae11000c  sw          $s1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1709B0u;
    if (runtime->hasFunction(0x1709B0u)) {
        auto targetFn = runtime->lookupFunction(0x1709B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1697DCu; }
        if (ctx->pc != 0x1697DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001709B0_0x1709b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1697DCu; }
        if (ctx->pc != 0x1697DCu) { return; }
    }
    ctx->pc = 0x1697DCu;
label_1697dc:
    // 0x1697dc: 0xc05c2e2  jal         func_170B88
    ctx->pc = 0x1697DCu;
    SET_GPR_U32(ctx, 31, 0x1697E4u);
    ctx->pc = 0x1697E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1697DCu;
            // 0x1697e0: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170B88u;
    if (runtime->hasFunction(0x170B88u)) {
        auto targetFn = runtime->lookupFunction(0x170B88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1697E4u; }
        if (ctx->pc != 0x1697E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170B88_0x170b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1697E4u; }
        if (ctx->pc != 0x1697E4u) { return; }
    }
    ctx->pc = 0x1697E4u;
label_1697e4:
    // 0x1697e4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1697e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1697e8: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1697E8u;
    {
        const bool branch_taken_0x1697e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1697e8) {
            ctx->pc = 0x1697ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1697E8u;
            // 0x1697ec: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x169800u;
            goto label_169800;
        }
    }
    ctx->pc = 0x1697F0u;
    // 0x1697f0: 0xc05c2b2  jal         func_170AC8
    ctx->pc = 0x1697F0u;
    SET_GPR_U32(ctx, 31, 0x1697F8u);
    ctx->pc = 0x1697F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1697F0u;
            // 0x1697f4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170AC8u;
    if (runtime->hasFunction(0x170AC8u)) {
        auto targetFn = runtime->lookupFunction(0x170AC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1697F8u; }
        if (ctx->pc != 0x1697F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170AC8_0x170ac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1697F8u; }
        if (ctx->pc != 0x1697F8u) { return; }
    }
    ctx->pc = 0x1697F8u;
label_1697f8:
    // 0x1697f8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1697F8u;
    {
        const bool branch_taken_0x1697f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1697FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1697F8u;
            // 0x1697fc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1697f8) {
            ctx->pc = 0x169818u;
            goto label_169818;
        }
    }
    ctx->pc = 0x169800u;
label_169800:
    // 0x169800: 0x54510005  bnel        $v0, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x169800u;
    {
        const bool branch_taken_0x169800 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x169800) {
            ctx->pc = 0x169804u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x169800u;
            // 0x169804: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x169818u;
            goto label_169818;
        }
    }
    ctx->pc = 0x169808u;
    // 0x169808: 0xc05ab2a  jal         func_16ACA8
    ctx->pc = 0x169808u;
    SET_GPR_U32(ctx, 31, 0x169810u);
    ctx->pc = 0x16980Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169808u;
            // 0x16980c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16ACA8u;
    if (runtime->hasFunction(0x16ACA8u)) {
        auto targetFn = runtime->lookupFunction(0x16ACA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169810u; }
        if (ctx->pc != 0x169810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016ACA8_0x16aca8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169810u; }
        if (ctx->pc != 0x169810u) { return; }
    }
    ctx->pc = 0x169810u;
label_169810:
    // 0x169810: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x169810u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x169814: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x169814u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_169818:
    // 0x169818: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x169818u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16981c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16981cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x169820: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x169820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x169824: 0x3e00008  jr          $ra
    ctx->pc = 0x169824u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169824u;
            // 0x169828: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16982Cu;
    // 0x16982c: 0x0  nop
    ctx->pc = 0x16982cu;
    // NOP
}
