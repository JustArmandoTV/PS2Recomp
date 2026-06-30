#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022BB30
// Address: 0x22bb30 - 0x22bc40
void sub_0022BB30_0x22bb30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022BB30_0x22bb30");
#endif

    switch (ctx->pc) {
        case 0x22bb50u: goto label_22bb50;
        default: break;
    }

    ctx->pc = 0x22bb30u;

    // 0x22bb30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22bb30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22bb34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x22bb34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x22bb38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22bb38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22bb3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22bb3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22bb40: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22bb40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bb44: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x22bb44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bb48: 0xc08d340  jal         func_234D00
    ctx->pc = 0x22BB48u;
    SET_GPR_U32(ctx, 31, 0x22BB50u);
    ctx->pc = 0x22BB4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22BB48u;
            // 0x22bb4c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234D00u;
    if (runtime->hasFunction(0x234D00u)) {
        auto targetFn = runtime->lookupFunction(0x234D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BB50u; }
        if (ctx->pc != 0x22BB50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00234D00_0x234d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BB50u; }
        if (ctx->pc != 0x22BB50u) { return; }
    }
    ctx->pc = 0x22BB50u;
label_22bb50:
    // 0x22bb50: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x22bb50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x22bb54: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x22bb54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
    // 0x22bb58: 0x2442eed0  addiu       $v0, $v0, -0x1130
    ctx->pc = 0x22bb58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962896));
    // 0x22bb5c: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x22bb5cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x22bb60: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x22bb60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x22bb64: 0x2484ef40  addiu       $a0, $a0, -0x10C0
    ctx->pc = 0x22bb64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963008));
    // 0x22bb68: 0xae200058  sw          $zero, 0x58($s1)
    ctx->pc = 0x22bb68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 0));
    // 0x22bb6c: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x22bb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x22bb70: 0xae20005c  sw          $zero, 0x5C($s1)
    ctx->pc = 0x22bb70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 0));
    // 0x22bb74: 0x2222823  subu        $a1, $s1, $v0
    ctx->pc = 0x22bb74u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x22bb78: 0xae260060  sw          $a2, 0x60($s1)
    ctx->pc = 0x22bb78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 6));
    // 0x22bb7c: 0x26230070  addiu       $v1, $s1, 0x70
    ctx->pc = 0x22bb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x22bb80: 0xae200064  sw          $zero, 0x64($s1)
    ctx->pc = 0x22bb80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 0));
    // 0x22bb84: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x22bb84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bb88: 0xae200068  sw          $zero, 0x68($s1)
    ctx->pc = 0x22bb88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
    // 0x22bb8c: 0xae26006c  sw          $a2, 0x6C($s1)
    ctx->pc = 0x22bb8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 6));
    // 0x22bb90: 0xa2250020  sb          $a1, 0x20($s1)
    ctx->pc = 0x22bb90u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 32), (uint8_t)GPR_U32(ctx, 5));
    // 0x22bb94: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x22bb94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x22bb98: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x22bb98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
    // 0x22bb9c: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x22bb9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22bba0: 0xe6200070  swc1        $f0, 0x70($s1)
    ctx->pc = 0x22bba0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 112), bits); }
    // 0x22bba4: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x22bba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22bba8: 0xe6200074  swc1        $f0, 0x74($s1)
    ctx->pc = 0x22bba8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 116), bits); }
    // 0x22bbac: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x22bbacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22bbb0: 0xe6200078  swc1        $f0, 0x78($s1)
    ctx->pc = 0x22bbb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 120), bits); }
    // 0x22bbb4: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x22bbb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22bbb8: 0xe620007c  swc1        $f0, 0x7C($s1)
    ctx->pc = 0x22bbb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 124), bits); }
    // 0x22bbbc: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x22bbbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22bbc0: 0xe6200080  swc1        $f0, 0x80($s1)
    ctx->pc = 0x22bbc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 128), bits); }
    // 0x22bbc4: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x22bbc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22bbc8: 0xe6200084  swc1        $f0, 0x84($s1)
    ctx->pc = 0x22bbc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 132), bits); }
    // 0x22bbcc: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x22bbccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22bbd0: 0xe6200088  swc1        $f0, 0x88($s1)
    ctx->pc = 0x22bbd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 136), bits); }
    // 0x22bbd4: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x22bbd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22bbd8: 0xe620008c  swc1        $f0, 0x8C($s1)
    ctx->pc = 0x22bbd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 140), bits); }
    // 0x22bbdc: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x22bbdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22bbe0: 0xe6200090  swc1        $f0, 0x90($s1)
    ctx->pc = 0x22bbe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 144), bits); }
    // 0x22bbe4: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x22bbe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22bbe8: 0xe6200094  swc1        $f0, 0x94($s1)
    ctx->pc = 0x22bbe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 148), bits); }
    // 0x22bbec: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x22bbecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22bbf0: 0xe6200098  swc1        $f0, 0x98($s1)
    ctx->pc = 0x22bbf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 152), bits); }
    // 0x22bbf4: 0xc600002c  lwc1        $f0, 0x2C($s0)
    ctx->pc = 0x22bbf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22bbf8: 0xe620009c  swc1        $f0, 0x9C($s1)
    ctx->pc = 0x22bbf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 156), bits); }
    // 0x22bbfc: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x22bbfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22bc00: 0xe62000a0  swc1        $f0, 0xA0($s1)
    ctx->pc = 0x22bc00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 160), bits); }
    // 0x22bc04: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x22bc04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22bc08: 0xe62000a4  swc1        $f0, 0xA4($s1)
    ctx->pc = 0x22bc08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 164), bits); }
    // 0x22bc0c: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x22bc0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22bc10: 0xe62000a8  swc1        $f0, 0xA8($s1)
    ctx->pc = 0x22bc10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 168), bits); }
    // 0x22bc14: 0xc600003c  lwc1        $f0, 0x3C($s0)
    ctx->pc = 0x22bc14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22bc18: 0xe62000ac  swc1        $f0, 0xAC($s1)
    ctx->pc = 0x22bc18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 172), bits); }
    // 0x22bc1c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22bc1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22bc20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22bc20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22bc24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22bc24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22bc28: 0x3e00008  jr          $ra
    ctx->pc = 0x22BC28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22BC2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BC28u;
            // 0x22bc2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22BC30u;
    // 0x22bc30: 0x3e00008  jr          $ra
    ctx->pc = 0x22BC30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22BC34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BC30u;
            // 0x22bc34: 0x24820070  addiu       $v0, $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22BC38u;
    // 0x22bc38: 0x0  nop
    ctx->pc = 0x22bc38u;
    // NOP
    // 0x22bc3c: 0x0  nop
    ctx->pc = 0x22bc3cu;
    // NOP
}
