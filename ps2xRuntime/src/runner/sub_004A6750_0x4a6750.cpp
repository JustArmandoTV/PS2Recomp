#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004A6750
// Address: 0x4a6750 - 0x4a6890
void sub_004A6750_0x4a6750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A6750_0x4a6750");
#endif

    switch (ctx->pc) {
        case 0x4a6750u: goto label_4a6750;
        case 0x4a6754u: goto label_4a6754;
        case 0x4a6758u: goto label_4a6758;
        case 0x4a675cu: goto label_4a675c;
        case 0x4a6760u: goto label_4a6760;
        case 0x4a6764u: goto label_4a6764;
        case 0x4a6768u: goto label_4a6768;
        case 0x4a676cu: goto label_4a676c;
        case 0x4a6770u: goto label_4a6770;
        case 0x4a6774u: goto label_4a6774;
        case 0x4a6778u: goto label_4a6778;
        case 0x4a677cu: goto label_4a677c;
        case 0x4a6780u: goto label_4a6780;
        case 0x4a6784u: goto label_4a6784;
        case 0x4a6788u: goto label_4a6788;
        case 0x4a678cu: goto label_4a678c;
        case 0x4a6790u: goto label_4a6790;
        case 0x4a6794u: goto label_4a6794;
        case 0x4a6798u: goto label_4a6798;
        case 0x4a679cu: goto label_4a679c;
        case 0x4a67a0u: goto label_4a67a0;
        case 0x4a67a4u: goto label_4a67a4;
        case 0x4a67a8u: goto label_4a67a8;
        case 0x4a67acu: goto label_4a67ac;
        case 0x4a67b0u: goto label_4a67b0;
        case 0x4a67b4u: goto label_4a67b4;
        case 0x4a67b8u: goto label_4a67b8;
        case 0x4a67bcu: goto label_4a67bc;
        case 0x4a67c0u: goto label_4a67c0;
        case 0x4a67c4u: goto label_4a67c4;
        case 0x4a67c8u: goto label_4a67c8;
        case 0x4a67ccu: goto label_4a67cc;
        case 0x4a67d0u: goto label_4a67d0;
        case 0x4a67d4u: goto label_4a67d4;
        case 0x4a67d8u: goto label_4a67d8;
        case 0x4a67dcu: goto label_4a67dc;
        case 0x4a67e0u: goto label_4a67e0;
        case 0x4a67e4u: goto label_4a67e4;
        case 0x4a67e8u: goto label_4a67e8;
        case 0x4a67ecu: goto label_4a67ec;
        case 0x4a67f0u: goto label_4a67f0;
        case 0x4a67f4u: goto label_4a67f4;
        case 0x4a67f8u: goto label_4a67f8;
        case 0x4a67fcu: goto label_4a67fc;
        case 0x4a6800u: goto label_4a6800;
        case 0x4a6804u: goto label_4a6804;
        case 0x4a6808u: goto label_4a6808;
        case 0x4a680cu: goto label_4a680c;
        case 0x4a6810u: goto label_4a6810;
        case 0x4a6814u: goto label_4a6814;
        case 0x4a6818u: goto label_4a6818;
        case 0x4a681cu: goto label_4a681c;
        case 0x4a6820u: goto label_4a6820;
        case 0x4a6824u: goto label_4a6824;
        case 0x4a6828u: goto label_4a6828;
        case 0x4a682cu: goto label_4a682c;
        case 0x4a6830u: goto label_4a6830;
        case 0x4a6834u: goto label_4a6834;
        case 0x4a6838u: goto label_4a6838;
        case 0x4a683cu: goto label_4a683c;
        case 0x4a6840u: goto label_4a6840;
        case 0x4a6844u: goto label_4a6844;
        case 0x4a6848u: goto label_4a6848;
        case 0x4a684cu: goto label_4a684c;
        case 0x4a6850u: goto label_4a6850;
        case 0x4a6854u: goto label_4a6854;
        case 0x4a6858u: goto label_4a6858;
        case 0x4a685cu: goto label_4a685c;
        case 0x4a6860u: goto label_4a6860;
        case 0x4a6864u: goto label_4a6864;
        case 0x4a6868u: goto label_4a6868;
        case 0x4a686cu: goto label_4a686c;
        case 0x4a6870u: goto label_4a6870;
        case 0x4a6874u: goto label_4a6874;
        case 0x4a6878u: goto label_4a6878;
        case 0x4a687cu: goto label_4a687c;
        case 0x4a6880u: goto label_4a6880;
        case 0x4a6884u: goto label_4a6884;
        case 0x4a6888u: goto label_4a6888;
        case 0x4a688cu: goto label_4a688c;
        default: break;
    }

    ctx->pc = 0x4a6750u;

label_4a6750:
    // 0x4a6750: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4a6750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4a6754:
    // 0x4a6754: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x4a6754u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_4a6758:
    // 0x4a6758: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4a6758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4a675c:
    // 0x4a675c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4a675cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4a6760:
    // 0x4a6760: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4a6760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4a6764:
    // 0x4a6764: 0x3c08420c  lui         $t0, 0x420C
    ctx->pc = 0x4a6764u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16908 << 16));
label_4a6768:
    // 0x4a6768: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4a6768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4a676c:
    // 0x4a676c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4a676cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4a6770:
    // 0x4a6770: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4a6770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4a6774:
    // 0x4a6774: 0x3c110066  lui         $s1, 0x66
    ctx->pc = 0x4a6774u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)102 << 16));
label_4a6778:
    // 0x4a6778: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x4a6778u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_4a677c:
    // 0x4a677c: 0x240503e8  addiu       $a1, $zero, 0x3E8
    ctx->pc = 0x4a677cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_4a6780:
    // 0x4a6780: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4a6780u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_4a6784:
    // 0x4a6784: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4a6784u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4a6788:
    // 0x4a6788: 0x8c5089e0  lw          $s0, -0x7620($v0)
    ctx->pc = 0x4a6788u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_4a678c:
    // 0x4a678c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4a678cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a6790:
    // 0x4a6790: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x4a6790u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_4a6794:
    // 0x4a6794: 0x26314ee0  addiu       $s1, $s1, 0x4EE0
    ctx->pc = 0x4a6794u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 20192));
label_4a6798:
    // 0x4a6798: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x4a6798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_4a679c:
    // 0x4a679c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4a679cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a67a0:
    // 0x4a67a0: 0x0  nop
    ctx->pc = 0x4a67a0u;
    // NOP
label_4a67a4:
    // 0x4a67a4: 0x460c0300  add.s       $f12, $f0, $f12
    ctx->pc = 0x4a67a4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
label_4a67a8:
    // 0x4a67a8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4a67a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4a67ac:
    // 0x4a67ac: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x4a67acu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a67b0:
    // 0x4a67b0: 0x0  nop
    ctx->pc = 0x4a67b0u;
    // NOP
label_4a67b4:
    // 0x4a67b4: 0x460d0540  add.s       $f21, $f0, $f13
    ctx->pc = 0x4a67b4u;
    ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[13]);
label_4a67b8:
    // 0x4a67b8: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x4a67b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_4a67bc:
    // 0x4a67bc: 0xc15706c  jal         func_55C1B0
label_4a67c0:
    if (ctx->pc == 0x4A67C0u) {
        ctx->pc = 0x4A67C0u;
            // 0x4a67c0: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x4A67C4u;
        goto label_4a67c4;
    }
    ctx->pc = 0x4A67BCu;
    SET_GPR_U32(ctx, 31, 0x4A67C4u);
    ctx->pc = 0x4A67C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A67BCu;
            // 0x4a67c0: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x55C1B0u;
    if (runtime->hasFunction(0x55C1B0u)) {
        auto targetFn = runtime->lookupFunction(0x55C1B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A67C4u; }
        if (ctx->pc != 0x4A67C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0055C1B0_0x55c1b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A67C4u; }
        if (ctx->pc != 0x4A67C4u) { return; }
    }
    ctx->pc = 0x4A67C4u;
label_4a67c4:
    // 0x4a67c4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4a67c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4a67c8:
    // 0x4a67c8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4a67c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a67cc:
    // 0x4a67cc: 0x8c4460a8  lw          $a0, 0x60A8($v0)
    ctx->pc = 0x4a67ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24744)));
label_4a67d0:
    // 0x4a67d0: 0xc0506ac  jal         func_141AB0
label_4a67d4:
    if (ctx->pc == 0x4A67D4u) {
        ctx->pc = 0x4A67D4u;
            // 0x4a67d4: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x4A67D8u;
        goto label_4a67d8;
    }
    ctx->pc = 0x4A67D0u;
    SET_GPR_U32(ctx, 31, 0x4A67D8u);
    ctx->pc = 0x4A67D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A67D0u;
            // 0x4a67d4: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A67D8u; }
        if (ctx->pc != 0x4A67D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A67D8u; }
        if (ctx->pc != 0x4A67D8u) { return; }
    }
    ctx->pc = 0x4A67D8u;
label_4a67d8:
    // 0x4a67d8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4a67d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4a67dc:
    // 0x4a67dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a67dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a67e0:
    // 0x4a67e0: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x4a67e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_4a67e4:
    // 0x4a67e4: 0x320f809  jalr        $t9
label_4a67e8:
    if (ctx->pc == 0x4A67E8u) {
        ctx->pc = 0x4A67E8u;
            // 0x4a67e8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x4A67ECu;
        goto label_4a67ec;
    }
    ctx->pc = 0x4A67E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A67ECu);
        ctx->pc = 0x4A67E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A67E4u;
            // 0x4a67e8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A67ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A67ECu; }
            if (ctx->pc != 0x4A67ECu) { return; }
        }
        }
    }
    ctx->pc = 0x4A67ECu;
label_4a67ec:
    // 0x4a67ec: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x4a67ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4a67f0:
    // 0x4a67f0: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x4a67f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
label_4a67f4:
    // 0x4a67f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4a67f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a67f8:
    // 0x4a67f8: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x4a67f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_4a67fc:
    // 0x4a67fc: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4a67fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_4a6800:
    // 0x4a6800: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4a6800u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4a6804:
    // 0x4a6804: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x4a6804u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_4a6808:
    // 0x4a6808: 0x84484e78  lh          $t0, 0x4E78($v0)
    ctx->pc = 0x4a6808u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 20088)));
label_4a680c:
    // 0x4a680c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4a680cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4a6810:
    // 0x4a6810: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4a6810u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4a6814:
    // 0x4a6814: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4a6814u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a6818:
    // 0x4a6818: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4a6818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_4a681c:
    // 0x4a681c: 0x4600ab40  add.s       $f13, $f21, $f0
    ctx->pc = 0x4a681cu;
    ctx->f[13] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_4a6820:
    // 0x4a6820: 0x84424e7a  lh          $v0, 0x4E7A($v0)
    ctx->pc = 0x4a6820u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 20090)));
label_4a6824:
    // 0x4a6824: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x4a6824u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a6828:
    // 0x4a6828: 0x0  nop
    ctx->pc = 0x4a6828u;
    // NOP
label_4a682c:
    // 0x4a682c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x4a682cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_4a6830:
    // 0x4a6830: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4a6830u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a6834:
    // 0x4a6834: 0x0  nop
    ctx->pc = 0x4a6834u;
    // NOP
label_4a6838:
    // 0x4a6838: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x4a6838u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_4a683c:
    // 0x4a683c: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x4a683cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4a6840:
    // 0x4a6840: 0x46016bc0  add.s       $f15, $f13, $f1
    ctx->pc = 0x4a6840u;
    ctx->f[15] = FPU_ADD_S(ctx->f[13], ctx->f[1]);
label_4a6844:
    // 0x4a6844: 0x4600a380  add.s       $f14, $f20, $f0
    ctx->pc = 0x4a6844u;
    ctx->f[14] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_4a6848:
    // 0x4a6848: 0x44839000  mtc1        $v1, $f18
    ctx->pc = 0x4a6848u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_4a684c:
    // 0x4a684c: 0xc0bc284  jal         func_2F0A10
label_4a6850:
    if (ctx->pc == 0x4A6850u) {
        ctx->pc = 0x4A6850u;
            // 0x4a6850: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x4A6854u;
        goto label_4a6854;
    }
    ctx->pc = 0x4A684Cu;
    SET_GPR_U32(ctx, 31, 0x4A6854u);
    ctx->pc = 0x4A6850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A684Cu;
            // 0x4a6850: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A6854u; }
        if (ctx->pc != 0x4A6854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A6854u; }
        if (ctx->pc != 0x4A6854u) { return; }
    }
    ctx->pc = 0x4A6854u;
label_4a6854:
    // 0x4a6854: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4a6854u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4a6858:
    // 0x4a6858: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x4a6858u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_4a685c:
    // 0x4a685c: 0x320f809  jalr        $t9
label_4a6860:
    if (ctx->pc == 0x4A6860u) {
        ctx->pc = 0x4A6860u;
            // 0x4a6860: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A6864u;
        goto label_4a6864;
    }
    ctx->pc = 0x4A685Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A6864u);
        ctx->pc = 0x4A6860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A685Cu;
            // 0x4a6860: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A6864u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A6864u; }
            if (ctx->pc != 0x4A6864u) { return; }
        }
        }
    }
    ctx->pc = 0x4A6864u;
label_4a6864:
    // 0x4a6864: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4a6864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4a6868:
    // 0x4a6868: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x4a6868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_4a686c:
    // 0x4a686c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4a686cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4a6870:
    // 0x4a6870: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4a6870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4a6874:
    // 0x4a6874: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4a6874u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4a6878:
    // 0x4a6878: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4a6878u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4a687c:
    // 0x4a687c: 0x3e00008  jr          $ra
label_4a6880:
    if (ctx->pc == 0x4A6880u) {
        ctx->pc = 0x4A6880u;
            // 0x4a6880: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4A6884u;
        goto label_4a6884;
    }
    ctx->pc = 0x4A687Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A6880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A687Cu;
            // 0x4a6880: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4A6884u;
label_4a6884:
    // 0x4a6884: 0x0  nop
    ctx->pc = 0x4a6884u;
    // NOP
label_4a6888:
    // 0x4a6888: 0x0  nop
    ctx->pc = 0x4a6888u;
    // NOP
label_4a688c:
    // 0x4a688c: 0x0  nop
    ctx->pc = 0x4a688cu;
    // NOP
}
