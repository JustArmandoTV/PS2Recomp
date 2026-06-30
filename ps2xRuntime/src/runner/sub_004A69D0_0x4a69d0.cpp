#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004A69D0
// Address: 0x4a69d0 - 0x4a6b10
void sub_004A69D0_0x4a69d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A69D0_0x4a69d0");
#endif

    switch (ctx->pc) {
        case 0x4a69d0u: goto label_4a69d0;
        case 0x4a69d4u: goto label_4a69d4;
        case 0x4a69d8u: goto label_4a69d8;
        case 0x4a69dcu: goto label_4a69dc;
        case 0x4a69e0u: goto label_4a69e0;
        case 0x4a69e4u: goto label_4a69e4;
        case 0x4a69e8u: goto label_4a69e8;
        case 0x4a69ecu: goto label_4a69ec;
        case 0x4a69f0u: goto label_4a69f0;
        case 0x4a69f4u: goto label_4a69f4;
        case 0x4a69f8u: goto label_4a69f8;
        case 0x4a69fcu: goto label_4a69fc;
        case 0x4a6a00u: goto label_4a6a00;
        case 0x4a6a04u: goto label_4a6a04;
        case 0x4a6a08u: goto label_4a6a08;
        case 0x4a6a0cu: goto label_4a6a0c;
        case 0x4a6a10u: goto label_4a6a10;
        case 0x4a6a14u: goto label_4a6a14;
        case 0x4a6a18u: goto label_4a6a18;
        case 0x4a6a1cu: goto label_4a6a1c;
        case 0x4a6a20u: goto label_4a6a20;
        case 0x4a6a24u: goto label_4a6a24;
        case 0x4a6a28u: goto label_4a6a28;
        case 0x4a6a2cu: goto label_4a6a2c;
        case 0x4a6a30u: goto label_4a6a30;
        case 0x4a6a34u: goto label_4a6a34;
        case 0x4a6a38u: goto label_4a6a38;
        case 0x4a6a3cu: goto label_4a6a3c;
        case 0x4a6a40u: goto label_4a6a40;
        case 0x4a6a44u: goto label_4a6a44;
        case 0x4a6a48u: goto label_4a6a48;
        case 0x4a6a4cu: goto label_4a6a4c;
        case 0x4a6a50u: goto label_4a6a50;
        case 0x4a6a54u: goto label_4a6a54;
        case 0x4a6a58u: goto label_4a6a58;
        case 0x4a6a5cu: goto label_4a6a5c;
        case 0x4a6a60u: goto label_4a6a60;
        case 0x4a6a64u: goto label_4a6a64;
        case 0x4a6a68u: goto label_4a6a68;
        case 0x4a6a6cu: goto label_4a6a6c;
        case 0x4a6a70u: goto label_4a6a70;
        case 0x4a6a74u: goto label_4a6a74;
        case 0x4a6a78u: goto label_4a6a78;
        case 0x4a6a7cu: goto label_4a6a7c;
        case 0x4a6a80u: goto label_4a6a80;
        case 0x4a6a84u: goto label_4a6a84;
        case 0x4a6a88u: goto label_4a6a88;
        case 0x4a6a8cu: goto label_4a6a8c;
        case 0x4a6a90u: goto label_4a6a90;
        case 0x4a6a94u: goto label_4a6a94;
        case 0x4a6a98u: goto label_4a6a98;
        case 0x4a6a9cu: goto label_4a6a9c;
        case 0x4a6aa0u: goto label_4a6aa0;
        case 0x4a6aa4u: goto label_4a6aa4;
        case 0x4a6aa8u: goto label_4a6aa8;
        case 0x4a6aacu: goto label_4a6aac;
        case 0x4a6ab0u: goto label_4a6ab0;
        case 0x4a6ab4u: goto label_4a6ab4;
        case 0x4a6ab8u: goto label_4a6ab8;
        case 0x4a6abcu: goto label_4a6abc;
        case 0x4a6ac0u: goto label_4a6ac0;
        case 0x4a6ac4u: goto label_4a6ac4;
        case 0x4a6ac8u: goto label_4a6ac8;
        case 0x4a6accu: goto label_4a6acc;
        case 0x4a6ad0u: goto label_4a6ad0;
        case 0x4a6ad4u: goto label_4a6ad4;
        case 0x4a6ad8u: goto label_4a6ad8;
        case 0x4a6adcu: goto label_4a6adc;
        case 0x4a6ae0u: goto label_4a6ae0;
        case 0x4a6ae4u: goto label_4a6ae4;
        case 0x4a6ae8u: goto label_4a6ae8;
        case 0x4a6aecu: goto label_4a6aec;
        case 0x4a6af0u: goto label_4a6af0;
        case 0x4a6af4u: goto label_4a6af4;
        case 0x4a6af8u: goto label_4a6af8;
        case 0x4a6afcu: goto label_4a6afc;
        case 0x4a6b00u: goto label_4a6b00;
        case 0x4a6b04u: goto label_4a6b04;
        case 0x4a6b08u: goto label_4a6b08;
        case 0x4a6b0cu: goto label_4a6b0c;
        default: break;
    }

    ctx->pc = 0x4a69d0u;

label_4a69d0:
    // 0x4a69d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4a69d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4a69d4:
    // 0x4a69d4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x4a69d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_4a69d8:
    // 0x4a69d8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4a69d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4a69dc:
    // 0x4a69dc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4a69dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4a69e0:
    // 0x4a69e0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4a69e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4a69e4:
    // 0x4a69e4: 0x3c08420c  lui         $t0, 0x420C
    ctx->pc = 0x4a69e4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16908 << 16));
label_4a69e8:
    // 0x4a69e8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4a69e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4a69ec:
    // 0x4a69ec: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4a69ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4a69f0:
    // 0x4a69f0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4a69f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4a69f4:
    // 0x4a69f4: 0x3c110066  lui         $s1, 0x66
    ctx->pc = 0x4a69f4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)102 << 16));
label_4a69f8:
    // 0x4a69f8: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x4a69f8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_4a69fc:
    // 0x4a69fc: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x4a69fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_4a6a00:
    // 0x4a6a00: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4a6a00u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_4a6a04:
    // 0x4a6a04: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4a6a04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4a6a08:
    // 0x4a6a08: 0x8c5089e0  lw          $s0, -0x7620($v0)
    ctx->pc = 0x4a6a08u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_4a6a0c:
    // 0x4a6a0c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4a6a0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a6a10:
    // 0x4a6a10: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x4a6a10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_4a6a14:
    // 0x4a6a14: 0x26314ee0  addiu       $s1, $s1, 0x4EE0
    ctx->pc = 0x4a6a14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 20192));
label_4a6a18:
    // 0x4a6a18: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x4a6a18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_4a6a1c:
    // 0x4a6a1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4a6a1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a6a20:
    // 0x4a6a20: 0x0  nop
    ctx->pc = 0x4a6a20u;
    // NOP
label_4a6a24:
    // 0x4a6a24: 0x460c0300  add.s       $f12, $f0, $f12
    ctx->pc = 0x4a6a24u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
label_4a6a28:
    // 0x4a6a28: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4a6a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4a6a2c:
    // 0x4a6a2c: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x4a6a2cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a6a30:
    // 0x4a6a30: 0x0  nop
    ctx->pc = 0x4a6a30u;
    // NOP
label_4a6a34:
    // 0x4a6a34: 0x460d0540  add.s       $f21, $f0, $f13
    ctx->pc = 0x4a6a34u;
    ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[13]);
label_4a6a38:
    // 0x4a6a38: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x4a6a38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_4a6a3c:
    // 0x4a6a3c: 0xc15706c  jal         func_55C1B0
label_4a6a40:
    if (ctx->pc == 0x4A6A40u) {
        ctx->pc = 0x4A6A40u;
            // 0x4a6a40: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x4A6A44u;
        goto label_4a6a44;
    }
    ctx->pc = 0x4A6A3Cu;
    SET_GPR_U32(ctx, 31, 0x4A6A44u);
    ctx->pc = 0x4A6A40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A6A3Cu;
            // 0x4a6a40: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x55C1B0u;
    if (runtime->hasFunction(0x55C1B0u)) {
        auto targetFn = runtime->lookupFunction(0x55C1B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A6A44u; }
        if (ctx->pc != 0x4A6A44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0055C1B0_0x55c1b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A6A44u; }
        if (ctx->pc != 0x4A6A44u) { return; }
    }
    ctx->pc = 0x4A6A44u;
label_4a6a44:
    // 0x4a6a44: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4a6a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4a6a48:
    // 0x4a6a48: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4a6a48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a6a4c:
    // 0x4a6a4c: 0x8c4460a8  lw          $a0, 0x60A8($v0)
    ctx->pc = 0x4a6a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24744)));
label_4a6a50:
    // 0x4a6a50: 0xc0506ac  jal         func_141AB0
label_4a6a54:
    if (ctx->pc == 0x4A6A54u) {
        ctx->pc = 0x4A6A54u;
            // 0x4a6a54: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x4A6A58u;
        goto label_4a6a58;
    }
    ctx->pc = 0x4A6A50u;
    SET_GPR_U32(ctx, 31, 0x4A6A58u);
    ctx->pc = 0x4A6A54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A6A50u;
            // 0x4a6a54: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A6A58u; }
        if (ctx->pc != 0x4A6A58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A6A58u; }
        if (ctx->pc != 0x4A6A58u) { return; }
    }
    ctx->pc = 0x4A6A58u;
label_4a6a58:
    // 0x4a6a58: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4a6a58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4a6a5c:
    // 0x4a6a5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a6a5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a6a60:
    // 0x4a6a60: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x4a6a60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_4a6a64:
    // 0x4a6a64: 0x320f809  jalr        $t9
label_4a6a68:
    if (ctx->pc == 0x4A6A68u) {
        ctx->pc = 0x4A6A68u;
            // 0x4a6a68: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x4A6A6Cu;
        goto label_4a6a6c;
    }
    ctx->pc = 0x4A6A64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A6A6Cu);
        ctx->pc = 0x4A6A68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A6A64u;
            // 0x4a6a68: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A6A6Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A6A6Cu; }
            if (ctx->pc != 0x4A6A6Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4A6A6Cu;
label_4a6a6c:
    // 0x4a6a6c: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x4a6a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4a6a70:
    // 0x4a6a70: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x4a6a70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
label_4a6a74:
    // 0x4a6a74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4a6a74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a6a78:
    // 0x4a6a78: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x4a6a78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_4a6a7c:
    // 0x4a6a7c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4a6a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_4a6a80:
    // 0x4a6a80: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4a6a80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4a6a84:
    // 0x4a6a84: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x4a6a84u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_4a6a88:
    // 0x4a6a88: 0x84484e78  lh          $t0, 0x4E78($v0)
    ctx->pc = 0x4a6a88u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 20088)));
label_4a6a8c:
    // 0x4a6a8c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4a6a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4a6a90:
    // 0x4a6a90: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4a6a90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4a6a94:
    // 0x4a6a94: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4a6a94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a6a98:
    // 0x4a6a98: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4a6a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_4a6a9c:
    // 0x4a6a9c: 0x4600ab40  add.s       $f13, $f21, $f0
    ctx->pc = 0x4a6a9cu;
    ctx->f[13] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_4a6aa0:
    // 0x4a6aa0: 0x84424e7a  lh          $v0, 0x4E7A($v0)
    ctx->pc = 0x4a6aa0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 20090)));
label_4a6aa4:
    // 0x4a6aa4: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x4a6aa4u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a6aa8:
    // 0x4a6aa8: 0x0  nop
    ctx->pc = 0x4a6aa8u;
    // NOP
label_4a6aac:
    // 0x4a6aac: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x4a6aacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_4a6ab0:
    // 0x4a6ab0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4a6ab0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a6ab4:
    // 0x4a6ab4: 0x0  nop
    ctx->pc = 0x4a6ab4u;
    // NOP
label_4a6ab8:
    // 0x4a6ab8: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x4a6ab8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_4a6abc:
    // 0x4a6abc: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x4a6abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4a6ac0:
    // 0x4a6ac0: 0x46016bc0  add.s       $f15, $f13, $f1
    ctx->pc = 0x4a6ac0u;
    ctx->f[15] = FPU_ADD_S(ctx->f[13], ctx->f[1]);
label_4a6ac4:
    // 0x4a6ac4: 0x4600a380  add.s       $f14, $f20, $f0
    ctx->pc = 0x4a6ac4u;
    ctx->f[14] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_4a6ac8:
    // 0x4a6ac8: 0x44839000  mtc1        $v1, $f18
    ctx->pc = 0x4a6ac8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_4a6acc:
    // 0x4a6acc: 0xc0bc284  jal         func_2F0A10
label_4a6ad0:
    if (ctx->pc == 0x4A6AD0u) {
        ctx->pc = 0x4A6AD0u;
            // 0x4a6ad0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x4A6AD4u;
        goto label_4a6ad4;
    }
    ctx->pc = 0x4A6ACCu;
    SET_GPR_U32(ctx, 31, 0x4A6AD4u);
    ctx->pc = 0x4A6AD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A6ACCu;
            // 0x4a6ad0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A6AD4u; }
        if (ctx->pc != 0x4A6AD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A6AD4u; }
        if (ctx->pc != 0x4A6AD4u) { return; }
    }
    ctx->pc = 0x4A6AD4u;
label_4a6ad4:
    // 0x4a6ad4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4a6ad4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4a6ad8:
    // 0x4a6ad8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x4a6ad8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_4a6adc:
    // 0x4a6adc: 0x320f809  jalr        $t9
label_4a6ae0:
    if (ctx->pc == 0x4A6AE0u) {
        ctx->pc = 0x4A6AE0u;
            // 0x4a6ae0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A6AE4u;
        goto label_4a6ae4;
    }
    ctx->pc = 0x4A6ADCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A6AE4u);
        ctx->pc = 0x4A6AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A6ADCu;
            // 0x4a6ae0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A6AE4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A6AE4u; }
            if (ctx->pc != 0x4A6AE4u) { return; }
        }
        }
    }
    ctx->pc = 0x4A6AE4u;
label_4a6ae4:
    // 0x4a6ae4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4a6ae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4a6ae8:
    // 0x4a6ae8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x4a6ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_4a6aec:
    // 0x4a6aec: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4a6aecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4a6af0:
    // 0x4a6af0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4a6af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4a6af4:
    // 0x4a6af4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4a6af4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4a6af8:
    // 0x4a6af8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4a6af8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4a6afc:
    // 0x4a6afc: 0x3e00008  jr          $ra
label_4a6b00:
    if (ctx->pc == 0x4A6B00u) {
        ctx->pc = 0x4A6B00u;
            // 0x4a6b00: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4A6B04u;
        goto label_4a6b04;
    }
    ctx->pc = 0x4A6AFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A6B00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A6AFCu;
            // 0x4a6b00: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4A6B04u;
label_4a6b04:
    // 0x4a6b04: 0x0  nop
    ctx->pc = 0x4a6b04u;
    // NOP
label_4a6b08:
    // 0x4a6b08: 0x0  nop
    ctx->pc = 0x4a6b08u;
    // NOP
label_4a6b0c:
    // 0x4a6b0c: 0x0  nop
    ctx->pc = 0x4a6b0cu;
    // NOP
}
