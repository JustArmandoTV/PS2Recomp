#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004A6890
// Address: 0x4a6890 - 0x4a69d0
void sub_004A6890_0x4a6890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A6890_0x4a6890");
#endif

    switch (ctx->pc) {
        case 0x4a6890u: goto label_4a6890;
        case 0x4a6894u: goto label_4a6894;
        case 0x4a6898u: goto label_4a6898;
        case 0x4a689cu: goto label_4a689c;
        case 0x4a68a0u: goto label_4a68a0;
        case 0x4a68a4u: goto label_4a68a4;
        case 0x4a68a8u: goto label_4a68a8;
        case 0x4a68acu: goto label_4a68ac;
        case 0x4a68b0u: goto label_4a68b0;
        case 0x4a68b4u: goto label_4a68b4;
        case 0x4a68b8u: goto label_4a68b8;
        case 0x4a68bcu: goto label_4a68bc;
        case 0x4a68c0u: goto label_4a68c0;
        case 0x4a68c4u: goto label_4a68c4;
        case 0x4a68c8u: goto label_4a68c8;
        case 0x4a68ccu: goto label_4a68cc;
        case 0x4a68d0u: goto label_4a68d0;
        case 0x4a68d4u: goto label_4a68d4;
        case 0x4a68d8u: goto label_4a68d8;
        case 0x4a68dcu: goto label_4a68dc;
        case 0x4a68e0u: goto label_4a68e0;
        case 0x4a68e4u: goto label_4a68e4;
        case 0x4a68e8u: goto label_4a68e8;
        case 0x4a68ecu: goto label_4a68ec;
        case 0x4a68f0u: goto label_4a68f0;
        case 0x4a68f4u: goto label_4a68f4;
        case 0x4a68f8u: goto label_4a68f8;
        case 0x4a68fcu: goto label_4a68fc;
        case 0x4a6900u: goto label_4a6900;
        case 0x4a6904u: goto label_4a6904;
        case 0x4a6908u: goto label_4a6908;
        case 0x4a690cu: goto label_4a690c;
        case 0x4a6910u: goto label_4a6910;
        case 0x4a6914u: goto label_4a6914;
        case 0x4a6918u: goto label_4a6918;
        case 0x4a691cu: goto label_4a691c;
        case 0x4a6920u: goto label_4a6920;
        case 0x4a6924u: goto label_4a6924;
        case 0x4a6928u: goto label_4a6928;
        case 0x4a692cu: goto label_4a692c;
        case 0x4a6930u: goto label_4a6930;
        case 0x4a6934u: goto label_4a6934;
        case 0x4a6938u: goto label_4a6938;
        case 0x4a693cu: goto label_4a693c;
        case 0x4a6940u: goto label_4a6940;
        case 0x4a6944u: goto label_4a6944;
        case 0x4a6948u: goto label_4a6948;
        case 0x4a694cu: goto label_4a694c;
        case 0x4a6950u: goto label_4a6950;
        case 0x4a6954u: goto label_4a6954;
        case 0x4a6958u: goto label_4a6958;
        case 0x4a695cu: goto label_4a695c;
        case 0x4a6960u: goto label_4a6960;
        case 0x4a6964u: goto label_4a6964;
        case 0x4a6968u: goto label_4a6968;
        case 0x4a696cu: goto label_4a696c;
        case 0x4a6970u: goto label_4a6970;
        case 0x4a6974u: goto label_4a6974;
        case 0x4a6978u: goto label_4a6978;
        case 0x4a697cu: goto label_4a697c;
        case 0x4a6980u: goto label_4a6980;
        case 0x4a6984u: goto label_4a6984;
        case 0x4a6988u: goto label_4a6988;
        case 0x4a698cu: goto label_4a698c;
        case 0x4a6990u: goto label_4a6990;
        case 0x4a6994u: goto label_4a6994;
        case 0x4a6998u: goto label_4a6998;
        case 0x4a699cu: goto label_4a699c;
        case 0x4a69a0u: goto label_4a69a0;
        case 0x4a69a4u: goto label_4a69a4;
        case 0x4a69a8u: goto label_4a69a8;
        case 0x4a69acu: goto label_4a69ac;
        case 0x4a69b0u: goto label_4a69b0;
        case 0x4a69b4u: goto label_4a69b4;
        case 0x4a69b8u: goto label_4a69b8;
        case 0x4a69bcu: goto label_4a69bc;
        case 0x4a69c0u: goto label_4a69c0;
        case 0x4a69c4u: goto label_4a69c4;
        case 0x4a69c8u: goto label_4a69c8;
        case 0x4a69ccu: goto label_4a69cc;
        default: break;
    }

    ctx->pc = 0x4a6890u;

label_4a6890:
    // 0x4a6890: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4a6890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4a6894:
    // 0x4a6894: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x4a6894u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_4a6898:
    // 0x4a6898: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4a6898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4a689c:
    // 0x4a689c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4a689cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4a68a0:
    // 0x4a68a0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4a68a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4a68a4:
    // 0x4a68a4: 0x3c08420c  lui         $t0, 0x420C
    ctx->pc = 0x4a68a4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16908 << 16));
label_4a68a8:
    // 0x4a68a8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4a68a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4a68ac:
    // 0x4a68ac: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4a68acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4a68b0:
    // 0x4a68b0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4a68b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4a68b4:
    // 0x4a68b4: 0x3c110066  lui         $s1, 0x66
    ctx->pc = 0x4a68b4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)102 << 16));
label_4a68b8:
    // 0x4a68b8: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x4a68b8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_4a68bc:
    // 0x4a68bc: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x4a68bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_4a68c0:
    // 0x4a68c0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4a68c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_4a68c4:
    // 0x4a68c4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4a68c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4a68c8:
    // 0x4a68c8: 0x8c5089e0  lw          $s0, -0x7620($v0)
    ctx->pc = 0x4a68c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_4a68cc:
    // 0x4a68cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4a68ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a68d0:
    // 0x4a68d0: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x4a68d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_4a68d4:
    // 0x4a68d4: 0x26314f00  addiu       $s1, $s1, 0x4F00
    ctx->pc = 0x4a68d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 20224));
label_4a68d8:
    // 0x4a68d8: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x4a68d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_4a68dc:
    // 0x4a68dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4a68dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a68e0:
    // 0x4a68e0: 0x0  nop
    ctx->pc = 0x4a68e0u;
    // NOP
label_4a68e4:
    // 0x4a68e4: 0x460c0300  add.s       $f12, $f0, $f12
    ctx->pc = 0x4a68e4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
label_4a68e8:
    // 0x4a68e8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4a68e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4a68ec:
    // 0x4a68ec: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x4a68ecu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a68f0:
    // 0x4a68f0: 0x0  nop
    ctx->pc = 0x4a68f0u;
    // NOP
label_4a68f4:
    // 0x4a68f4: 0x460d0540  add.s       $f21, $f0, $f13
    ctx->pc = 0x4a68f4u;
    ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[13]);
label_4a68f8:
    // 0x4a68f8: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x4a68f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_4a68fc:
    // 0x4a68fc: 0xc15706c  jal         func_55C1B0
label_4a6900:
    if (ctx->pc == 0x4A6900u) {
        ctx->pc = 0x4A6900u;
            // 0x4a6900: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x4A6904u;
        goto label_4a6904;
    }
    ctx->pc = 0x4A68FCu;
    SET_GPR_U32(ctx, 31, 0x4A6904u);
    ctx->pc = 0x4A6900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A68FCu;
            // 0x4a6900: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x55C1B0u;
    if (runtime->hasFunction(0x55C1B0u)) {
        auto targetFn = runtime->lookupFunction(0x55C1B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A6904u; }
        if (ctx->pc != 0x4A6904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0055C1B0_0x55c1b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A6904u; }
        if (ctx->pc != 0x4A6904u) { return; }
    }
    ctx->pc = 0x4A6904u;
label_4a6904:
    // 0x4a6904: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4a6904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4a6908:
    // 0x4a6908: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4a6908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a690c:
    // 0x4a690c: 0x8c4460a8  lw          $a0, 0x60A8($v0)
    ctx->pc = 0x4a690cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24744)));
label_4a6910:
    // 0x4a6910: 0xc0506ac  jal         func_141AB0
label_4a6914:
    if (ctx->pc == 0x4A6914u) {
        ctx->pc = 0x4A6914u;
            // 0x4a6914: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x4A6918u;
        goto label_4a6918;
    }
    ctx->pc = 0x4A6910u;
    SET_GPR_U32(ctx, 31, 0x4A6918u);
    ctx->pc = 0x4A6914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A6910u;
            // 0x4a6914: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A6918u; }
        if (ctx->pc != 0x4A6918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A6918u; }
        if (ctx->pc != 0x4A6918u) { return; }
    }
    ctx->pc = 0x4A6918u;
label_4a6918:
    // 0x4a6918: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4a6918u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4a691c:
    // 0x4a691c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a691cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a6920:
    // 0x4a6920: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x4a6920u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_4a6924:
    // 0x4a6924: 0x320f809  jalr        $t9
label_4a6928:
    if (ctx->pc == 0x4A6928u) {
        ctx->pc = 0x4A6928u;
            // 0x4a6928: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x4A692Cu;
        goto label_4a692c;
    }
    ctx->pc = 0x4A6924u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A692Cu);
        ctx->pc = 0x4A6928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A6924u;
            // 0x4a6928: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A692Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A692Cu; }
            if (ctx->pc != 0x4A692Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4A692Cu;
label_4a692c:
    // 0x4a692c: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x4a692cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4a6930:
    // 0x4a6930: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x4a6930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
label_4a6934:
    // 0x4a6934: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4a6934u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a6938:
    // 0x4a6938: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x4a6938u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_4a693c:
    // 0x4a693c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4a693cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_4a6940:
    // 0x4a6940: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4a6940u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4a6944:
    // 0x4a6944: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x4a6944u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_4a6948:
    // 0x4a6948: 0x84484e78  lh          $t0, 0x4E78($v0)
    ctx->pc = 0x4a6948u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 20088)));
label_4a694c:
    // 0x4a694c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4a694cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4a6950:
    // 0x4a6950: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4a6950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4a6954:
    // 0x4a6954: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4a6954u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a6958:
    // 0x4a6958: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4a6958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_4a695c:
    // 0x4a695c: 0x4600ab40  add.s       $f13, $f21, $f0
    ctx->pc = 0x4a695cu;
    ctx->f[13] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_4a6960:
    // 0x4a6960: 0x84424e7a  lh          $v0, 0x4E7A($v0)
    ctx->pc = 0x4a6960u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 20090)));
label_4a6964:
    // 0x4a6964: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x4a6964u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a6968:
    // 0x4a6968: 0x0  nop
    ctx->pc = 0x4a6968u;
    // NOP
label_4a696c:
    // 0x4a696c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x4a696cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_4a6970:
    // 0x4a6970: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4a6970u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a6974:
    // 0x4a6974: 0x0  nop
    ctx->pc = 0x4a6974u;
    // NOP
label_4a6978:
    // 0x4a6978: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x4a6978u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_4a697c:
    // 0x4a697c: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x4a697cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4a6980:
    // 0x4a6980: 0x46016bc0  add.s       $f15, $f13, $f1
    ctx->pc = 0x4a6980u;
    ctx->f[15] = FPU_ADD_S(ctx->f[13], ctx->f[1]);
label_4a6984:
    // 0x4a6984: 0x4600a380  add.s       $f14, $f20, $f0
    ctx->pc = 0x4a6984u;
    ctx->f[14] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_4a6988:
    // 0x4a6988: 0x44839000  mtc1        $v1, $f18
    ctx->pc = 0x4a6988u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_4a698c:
    // 0x4a698c: 0xc0bc284  jal         func_2F0A10
label_4a6990:
    if (ctx->pc == 0x4A6990u) {
        ctx->pc = 0x4A6990u;
            // 0x4a6990: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x4A6994u;
        goto label_4a6994;
    }
    ctx->pc = 0x4A698Cu;
    SET_GPR_U32(ctx, 31, 0x4A6994u);
    ctx->pc = 0x4A6990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A698Cu;
            // 0x4a6990: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A6994u; }
        if (ctx->pc != 0x4A6994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A6994u; }
        if (ctx->pc != 0x4A6994u) { return; }
    }
    ctx->pc = 0x4A6994u;
label_4a6994:
    // 0x4a6994: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4a6994u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4a6998:
    // 0x4a6998: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x4a6998u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_4a699c:
    // 0x4a699c: 0x320f809  jalr        $t9
label_4a69a0:
    if (ctx->pc == 0x4A69A0u) {
        ctx->pc = 0x4A69A0u;
            // 0x4a69a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A69A4u;
        goto label_4a69a4;
    }
    ctx->pc = 0x4A699Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A69A4u);
        ctx->pc = 0x4A69A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A699Cu;
            // 0x4a69a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A69A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A69A4u; }
            if (ctx->pc != 0x4A69A4u) { return; }
        }
        }
    }
    ctx->pc = 0x4A69A4u;
label_4a69a4:
    // 0x4a69a4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4a69a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4a69a8:
    // 0x4a69a8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x4a69a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_4a69ac:
    // 0x4a69ac: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4a69acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4a69b0:
    // 0x4a69b0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4a69b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4a69b4:
    // 0x4a69b4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4a69b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4a69b8:
    // 0x4a69b8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4a69b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4a69bc:
    // 0x4a69bc: 0x3e00008  jr          $ra
label_4a69c0:
    if (ctx->pc == 0x4A69C0u) {
        ctx->pc = 0x4A69C0u;
            // 0x4a69c0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4A69C4u;
        goto label_4a69c4;
    }
    ctx->pc = 0x4A69BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A69C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A69BCu;
            // 0x4a69c0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4A69C4u;
label_4a69c4:
    // 0x4a69c4: 0x0  nop
    ctx->pc = 0x4a69c4u;
    // NOP
label_4a69c8:
    // 0x4a69c8: 0x0  nop
    ctx->pc = 0x4a69c8u;
    // NOP
label_4a69cc:
    // 0x4a69cc: 0x0  nop
    ctx->pc = 0x4a69ccu;
    // NOP
}
