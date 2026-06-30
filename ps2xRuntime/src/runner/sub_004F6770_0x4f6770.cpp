#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004F6770
// Address: 0x4f6770 - 0x4f6810
void sub_004F6770_0x4f6770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F6770_0x4f6770");
#endif

    switch (ctx->pc) {
        case 0x4f67a4u: goto label_4f67a4;
        case 0x4f67b0u: goto label_4f67b0;
        case 0x4f67c0u: goto label_4f67c0;
        case 0x4f67ccu: goto label_4f67cc;
        case 0x4f67dcu: goto label_4f67dc;
        case 0x4f67f4u: goto label_4f67f4;
        default: break;
    }

    ctx->pc = 0x4f6770u;

    // 0x4f6770: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x4f6770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x4f6774: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4f6774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4f6778: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4f6778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4f677c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4f677cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4f6780: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4f6780u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f6784: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4f6784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4f6788: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x4f6788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f678c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x4f678cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4f6790: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x4f6790u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f6794: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x4f6794u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f6798: 0x244602c0  addiu       $a2, $v0, 0x2C0
    ctx->pc = 0x4f6798u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 704));
    // 0x4f679c: 0xc04cc90  jal         func_133240
    ctx->pc = 0x4F679Cu;
    SET_GPR_U32(ctx, 31, 0x4F67A4u);
    ctx->pc = 0x4F67A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F679Cu;
            // 0x4f67a0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F67A4u; }
        if (ctx->pc != 0x4F67A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F67A4u; }
        if (ctx->pc != 0x4F67A4u) { return; }
    }
    ctx->pc = 0x4F67A4u;
label_4f67a4:
    // 0x4f67a4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4f67a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f67a8: 0xc04ccf4  jal         func_1333D0
    ctx->pc = 0x4F67A8u;
    SET_GPR_U32(ctx, 31, 0x4F67B0u);
    ctx->pc = 0x4F67ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F67A8u;
            // 0x4f67ac: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333D0u;
    if (runtime->hasFunction(0x1333D0u)) {
        auto targetFn = runtime->lookupFunction(0x1333D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F67B0u; }
        if (ctx->pc != 0x4F67B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333D0_0x1333d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F67B0u; }
        if (ctx->pc != 0x4F67B0u) { return; }
    }
    ctx->pc = 0x4F67B0u;
label_4f67b0:
    // 0x4f67b0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x4f67b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x4f67b4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x4f67b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x4f67b8: 0xc04cca0  jal         func_133280
    ctx->pc = 0x4F67B8u;
    SET_GPR_U32(ctx, 31, 0x4F67C0u);
    ctx->pc = 0x4F67BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F67B8u;
            // 0x4f67bc: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F67C0u; }
        if (ctx->pc != 0x4F67C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F67C0u; }
        if (ctx->pc != 0x4F67C0u) { return; }
    }
    ctx->pc = 0x4F67C0u;
label_4f67c0:
    // 0x4f67c0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x4f67c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x4f67c4: 0xc04cc44  jal         func_133110
    ctx->pc = 0x4F67C4u;
    SET_GPR_U32(ctx, 31, 0x4F67CCu);
    ctx->pc = 0x4F67C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F67C4u;
            // 0x4f67c8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F67CCu; }
        if (ctx->pc != 0x4F67CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F67CCu; }
        if (ctx->pc != 0x4F67CCu) { return; }
    }
    ctx->pc = 0x4F67CCu;
label_4f67cc:
    // 0x4f67cc: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4F67CCu;
    {
        const bool branch_taken_0x4f67cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f67cc) {
            ctx->pc = 0x4F67E0u;
            goto label_4f67e0;
        }
    }
    ctx->pc = 0x4F67D4u;
    // 0x4f67d4: 0xc047804  jal         func_11E010
    ctx->pc = 0x4F67D4u;
    SET_GPR_U32(ctx, 31, 0x4F67DCu);
    ctx->pc = 0x4F67D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F67D4u;
            // 0x4f67d8: 0xc7ac0044  lwc1        $f12, 0x44($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E010u;
    if (runtime->hasFunction(0x11E010u)) {
        auto targetFn = runtime->lookupFunction(0x11E010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F67DCu; }
        if (ctx->pc != 0x4F67DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E010_0x11e010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F67DCu; }
        if (ctx->pc != 0x4F67DCu) { return; }
    }
    ctx->pc = 0x4F67DCu;
label_4f67dc:
    // 0x4f67dc: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x4f67dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_4f67e0:
    // 0x4f67e0: 0x52000006  beql        $s0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4F67E0u;
    {
        const bool branch_taken_0x4f67e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f67e0) {
            ctx->pc = 0x4F67E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F67E0u;
            // 0x4f67e4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F67FCu;
            goto label_4f67fc;
        }
    }
    ctx->pc = 0x4F67E8u;
    // 0x4f67e8: 0xc7ad0048  lwc1        $f13, 0x48($sp)
    ctx->pc = 0x4f67e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x4f67ec: 0xc04780a  jal         func_11E028
    ctx->pc = 0x4F67ECu;
    SET_GPR_U32(ctx, 31, 0x4F67F4u);
    ctx->pc = 0x4F67F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F67ECu;
            // 0x4f67f0: 0xc7ac0040  lwc1        $f12, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E028u;
    if (runtime->hasFunction(0x11E028u)) {
        auto targetFn = runtime->lookupFunction(0x11E028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F67F4u; }
        if (ctx->pc != 0x4F67F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E028_0x11e028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F67F4u; }
        if (ctx->pc != 0x4F67F4u) { return; }
    }
    ctx->pc = 0x4F67F4u;
label_4f67f4:
    // 0x4f67f4: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x4f67f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x4f67f8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4f67f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4f67fc:
    // 0x4f67fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4f67fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4f6800: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4f6800u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f6804: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4f6804u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f6808: 0x3e00008  jr          $ra
    ctx->pc = 0x4F6808u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F680Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F6808u;
            // 0x4f680c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F6810u;
}
