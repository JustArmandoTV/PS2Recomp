#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_005179F0
// Address: 0x5179f0 - 0x517b10
void sub_005179F0_0x5179f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005179F0_0x5179f0");
#endif

    switch (ctx->pc) {
        case 0x5179f0u: goto label_5179f0;
        case 0x5179f4u: goto label_5179f4;
        case 0x5179f8u: goto label_5179f8;
        case 0x5179fcu: goto label_5179fc;
        case 0x517a00u: goto label_517a00;
        case 0x517a04u: goto label_517a04;
        case 0x517a08u: goto label_517a08;
        case 0x517a0cu: goto label_517a0c;
        case 0x517a10u: goto label_517a10;
        case 0x517a14u: goto label_517a14;
        case 0x517a18u: goto label_517a18;
        case 0x517a1cu: goto label_517a1c;
        case 0x517a20u: goto label_517a20;
        case 0x517a24u: goto label_517a24;
        case 0x517a28u: goto label_517a28;
        case 0x517a2cu: goto label_517a2c;
        case 0x517a30u: goto label_517a30;
        case 0x517a34u: goto label_517a34;
        case 0x517a38u: goto label_517a38;
        case 0x517a3cu: goto label_517a3c;
        case 0x517a40u: goto label_517a40;
        case 0x517a44u: goto label_517a44;
        case 0x517a48u: goto label_517a48;
        case 0x517a4cu: goto label_517a4c;
        case 0x517a50u: goto label_517a50;
        case 0x517a54u: goto label_517a54;
        case 0x517a58u: goto label_517a58;
        case 0x517a5cu: goto label_517a5c;
        case 0x517a60u: goto label_517a60;
        case 0x517a64u: goto label_517a64;
        case 0x517a68u: goto label_517a68;
        case 0x517a6cu: goto label_517a6c;
        case 0x517a70u: goto label_517a70;
        case 0x517a74u: goto label_517a74;
        case 0x517a78u: goto label_517a78;
        case 0x517a7cu: goto label_517a7c;
        case 0x517a80u: goto label_517a80;
        case 0x517a84u: goto label_517a84;
        case 0x517a88u: goto label_517a88;
        case 0x517a8cu: goto label_517a8c;
        case 0x517a90u: goto label_517a90;
        case 0x517a94u: goto label_517a94;
        case 0x517a98u: goto label_517a98;
        case 0x517a9cu: goto label_517a9c;
        case 0x517aa0u: goto label_517aa0;
        case 0x517aa4u: goto label_517aa4;
        case 0x517aa8u: goto label_517aa8;
        case 0x517aacu: goto label_517aac;
        case 0x517ab0u: goto label_517ab0;
        case 0x517ab4u: goto label_517ab4;
        case 0x517ab8u: goto label_517ab8;
        case 0x517abcu: goto label_517abc;
        case 0x517ac0u: goto label_517ac0;
        case 0x517ac4u: goto label_517ac4;
        case 0x517ac8u: goto label_517ac8;
        case 0x517accu: goto label_517acc;
        case 0x517ad0u: goto label_517ad0;
        case 0x517ad4u: goto label_517ad4;
        case 0x517ad8u: goto label_517ad8;
        case 0x517adcu: goto label_517adc;
        case 0x517ae0u: goto label_517ae0;
        case 0x517ae4u: goto label_517ae4;
        case 0x517ae8u: goto label_517ae8;
        case 0x517aecu: goto label_517aec;
        case 0x517af0u: goto label_517af0;
        case 0x517af4u: goto label_517af4;
        case 0x517af8u: goto label_517af8;
        case 0x517afcu: goto label_517afc;
        case 0x517b00u: goto label_517b00;
        case 0x517b04u: goto label_517b04;
        case 0x517b08u: goto label_517b08;
        case 0x517b0cu: goto label_517b0c;
        default: break;
    }

    ctx->pc = 0x5179f0u;

label_5179f0:
    // 0x5179f0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x5179f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_5179f4:
    // 0x5179f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x5179f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_5179f8:
    // 0x5179f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x5179f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_5179fc:
    // 0x5179fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x5179fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_517a00:
    // 0x517a00: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x517a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_517a04:
    // 0x517a04: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x517a04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_517a08:
    // 0x517a08: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x517a08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_517a0c:
    // 0x517a0c: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x517a0cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_517a10:
    // 0x517a10: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_517a14:
    if (ctx->pc == 0x517A14u) {
        ctx->pc = 0x517A14u;
            // 0x517a14: 0x26300030  addiu       $s0, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->pc = 0x517A18u;
        goto label_517a18;
    }
    ctx->pc = 0x517A10u;
    {
        const bool branch_taken_0x517a10 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x517A14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x517A10u;
            // 0x517a14: 0x26300030  addiu       $s0, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x517a10) {
            ctx->pc = 0x517A24u;
            goto label_517a24;
        }
    }
    ctx->pc = 0x517A18u;
label_517a18:
    // 0x517a18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x517a18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_517a1c:
    // 0x517a1c: 0x10000008  b           . + 4 + (0x8 << 2)
label_517a20:
    if (ctx->pc == 0x517A20u) {
        ctx->pc = 0x517A20u;
            // 0x517a20: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x517A24u;
        goto label_517a24;
    }
    ctx->pc = 0x517A1Cu;
    {
        const bool branch_taken_0x517a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x517A20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x517A1Cu;
            // 0x517a20: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x517a1c) {
            ctx->pc = 0x517A40u;
            goto label_517a40;
        }
    }
    ctx->pc = 0x517A24u;
label_517a24:
    // 0x517a24: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x517a24u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_517a28:
    // 0x517a28: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x517a28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_517a2c:
    // 0x517a2c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x517a2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_517a30:
    // 0x517a30: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x517a30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_517a34:
    // 0x517a34: 0x0  nop
    ctx->pc = 0x517a34u;
    // NOP
label_517a38:
    // 0x517a38: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x517a38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_517a3c:
    // 0x517a3c: 0x460d6b40  add.s       $f13, $f13, $f13
    ctx->pc = 0x517a3cu;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[13]);
label_517a40:
    // 0x517a40: 0x9085000a  lbu         $a1, 0xA($a0)
    ctx->pc = 0x517a40u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 10)));
label_517a44:
    // 0x517a44: 0xc48c0000  lwc1        $f12, 0x0($a0)
    ctx->pc = 0x517a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_517a48:
    // 0x517a48: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x517a48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_517a4c:
    // 0x517a4c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x517a4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_517a50:
    // 0x517a50: 0xc0d8aac  jal         func_362AB0
label_517a54:
    if (ctx->pc == 0x517A54u) {
        ctx->pc = 0x517A54u;
            // 0x517a54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x517A58u;
        goto label_517a58;
    }
    ctx->pc = 0x517A50u;
    SET_GPR_U32(ctx, 31, 0x517A58u);
    ctx->pc = 0x517A54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x517A50u;
            // 0x517a54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362AB0u;
    if (runtime->hasFunction(0x362AB0u)) {
        auto targetFn = runtime->lookupFunction(0x362AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x517A58u; }
        if (ctx->pc != 0x517A58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362AB0_0x362ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x517A58u; }
        if (ctx->pc != 0x517A58u) { return; }
    }
    ctx->pc = 0x517A58u;
label_517a58:
    // 0x517a58: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x517a58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_517a5c:
    // 0x517a5c: 0xc04cc04  jal         func_133010
label_517a60:
    if (ctx->pc == 0x517A60u) {
        ctx->pc = 0x517A60u;
            // 0x517a60: 0x26050150  addiu       $a1, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->pc = 0x517A64u;
        goto label_517a64;
    }
    ctx->pc = 0x517A5Cu;
    SET_GPR_U32(ctx, 31, 0x517A64u);
    ctx->pc = 0x517A60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x517A5Cu;
            // 0x517a60: 0x26050150  addiu       $a1, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x517A64u; }
        if (ctx->pc != 0x517A64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x517A64u; }
        if (ctx->pc != 0x517A64u) { return; }
    }
    ctx->pc = 0x517A64u;
label_517a64:
    // 0x517a64: 0xc6230020  lwc1        $f3, 0x20($s1)
    ctx->pc = 0x517a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_517a68:
    // 0x517a68: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x517a68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_517a6c:
    // 0x517a6c: 0xc7a20064  lwc1        $f2, 0x64($sp)
    ctx->pc = 0x517a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_517a70:
    // 0x517a70: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x517a70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_517a74:
    // 0x517a74: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x517a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_517a78:
    // 0x517a78: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x517a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_517a7c:
    // 0x517a7c: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x517a7cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_517a80:
    // 0x517a80: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x517a80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_517a84:
    // 0x517a84: 0x8e320010  lw          $s2, 0x10($s1)
    ctx->pc = 0x517a84u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_517a88:
    // 0x517a88: 0x8e440050  lw          $a0, 0x50($s2)
    ctx->pc = 0x517a88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_517a8c:
    // 0x517a8c: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x517a8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_517a90:
    // 0x517a90: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x517a90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_517a94:
    // 0x517a94: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x517a94u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_517a98:
    // 0x517a98: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x517a98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_517a9c:
    // 0x517a9c: 0xc6030140  lwc1        $f3, 0x140($s0)
    ctx->pc = 0x517a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_517aa0:
    // 0x517aa0: 0xc602013c  lwc1        $f2, 0x13C($s0)
    ctx->pc = 0x517aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_517aa4:
    // 0x517aa4: 0xc6010138  lwc1        $f1, 0x138($s0)
    ctx->pc = 0x517aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_517aa8:
    // 0x517aa8: 0xc6000134  lwc1        $f0, 0x134($s0)
    ctx->pc = 0x517aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_517aac:
    // 0x517aac: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x517aacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_517ab0:
    // 0x517ab0: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x517ab0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_517ab4:
    // 0x517ab4: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x517ab4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_517ab8:
    // 0x517ab8: 0xc0892b0  jal         func_224AC0
label_517abc:
    if (ctx->pc == 0x517ABCu) {
        ctx->pc = 0x517ABCu;
            // 0x517abc: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->pc = 0x517AC0u;
        goto label_517ac0;
    }
    ctx->pc = 0x517AB8u;
    SET_GPR_U32(ctx, 31, 0x517AC0u);
    ctx->pc = 0x517ABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x517AB8u;
            // 0x517abc: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x517AC0u; }
        if (ctx->pc != 0x517AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x517AC0u; }
        if (ctx->pc != 0x517AC0u) { return; }
    }
    ctx->pc = 0x517AC0u;
label_517ac0:
    // 0x517ac0: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x517ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_517ac4:
    // 0x517ac4: 0xc04cc04  jal         func_133010
label_517ac8:
    if (ctx->pc == 0x517AC8u) {
        ctx->pc = 0x517AC8u;
            // 0x517ac8: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x517ACCu;
        goto label_517acc;
    }
    ctx->pc = 0x517AC4u;
    SET_GPR_U32(ctx, 31, 0x517ACCu);
    ctx->pc = 0x517AC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x517AC4u;
            // 0x517ac8: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x517ACCu; }
        if (ctx->pc != 0x517ACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x517ACCu; }
        if (ctx->pc != 0x517ACCu) { return; }
    }
    ctx->pc = 0x517ACCu;
label_517acc:
    // 0x517acc: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x517accu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_517ad0:
    // 0x517ad0: 0xc04c720  jal         func_131C80
label_517ad4:
    if (ctx->pc == 0x517AD4u) {
        ctx->pc = 0x517AD4u;
            // 0x517ad4: 0x26050134  addiu       $a1, $s0, 0x134 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 308));
        ctx->pc = 0x517AD8u;
        goto label_517ad8;
    }
    ctx->pc = 0x517AD0u;
    SET_GPR_U32(ctx, 31, 0x517AD8u);
    ctx->pc = 0x517AD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x517AD0u;
            // 0x517ad4: 0x26050134  addiu       $a1, $s0, 0x134 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 308));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x517AD8u; }
        if (ctx->pc != 0x517AD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x517AD8u; }
        if (ctx->pc != 0x517AD8u) { return; }
    }
    ctx->pc = 0x517AD8u;
label_517ad8:
    // 0x517ad8: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x517ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_517adc:
    // 0x517adc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x517adcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_517ae0:
    // 0x517ae0: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x517ae0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_517ae4:
    // 0x517ae4: 0x320f809  jalr        $t9
label_517ae8:
    if (ctx->pc == 0x517AE8u) {
        ctx->pc = 0x517AECu;
        goto label_517aec;
    }
    ctx->pc = 0x517AE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x517AECu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x517AECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x517AECu; }
            if (ctx->pc != 0x517AECu) { return; }
        }
        }
    }
    ctx->pc = 0x517AECu;
label_517aec:
    // 0x517aec: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x517aecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_517af0:
    // 0x517af0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x517af0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_517af4:
    // 0x517af4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x517af4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_517af8:
    // 0x517af8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x517af8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_517afc:
    // 0x517afc: 0x3e00008  jr          $ra
label_517b00:
    if (ctx->pc == 0x517B00u) {
        ctx->pc = 0x517B00u;
            // 0x517b00: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x517B04u;
        goto label_517b04;
    }
    ctx->pc = 0x517AFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x517B00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x517AFCu;
            // 0x517b00: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x517B04u;
label_517b04:
    // 0x517b04: 0x0  nop
    ctx->pc = 0x517b04u;
    // NOP
label_517b08:
    // 0x517b08: 0x0  nop
    ctx->pc = 0x517b08u;
    // NOP
label_517b0c:
    // 0x517b0c: 0x0  nop
    ctx->pc = 0x517b0cu;
    // NOP
}
