#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003FDD80
// Address: 0x3fdd80 - 0x3fdfa0
void sub_003FDD80_0x3fdd80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FDD80_0x3fdd80");
#endif

    switch (ctx->pc) {
        case 0x3fddb0u: goto label_3fddb0;
        case 0x3fddbcu: goto label_3fddbc;
        case 0x3fddd0u: goto label_3fddd0;
        case 0x3fde0cu: goto label_3fde0c;
        case 0x3fde18u: goto label_3fde18;
        case 0x3fde6cu: goto label_3fde6c;
        case 0x3fde94u: goto label_3fde94;
        case 0x3fded8u: goto label_3fded8;
        case 0x3fdee8u: goto label_3fdee8;
        case 0x3fdef8u: goto label_3fdef8;
        case 0x3fdf04u: goto label_3fdf04;
        case 0x3fdf58u: goto label_3fdf58;
        case 0x3fdf80u: goto label_3fdf80;
        default: break;
    }

    ctx->pc = 0x3fdd80u;

    // 0x3fdd80: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3fdd80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3fdd84: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3fdd84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3fdd88: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3fdd88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3fdd8c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3fdd8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3fdd90: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3fdd90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3fdd94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3fdd94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fdd98: 0x8c840060  lw          $a0, 0x60($a0)
    ctx->pc = 0x3fdd98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x3fdd9c: 0x54830079  bnel        $a0, $v1, . + 4 + (0x79 << 2)
    ctx->pc = 0x3FDD9Cu;
    {
        const bool branch_taken_0x3fdd9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3fdd9c) {
            ctx->pc = 0x3FDDA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FDD9Cu;
            // 0x3fdda0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FDF84u;
            goto label_3fdf84;
        }
    }
    ctx->pc = 0x3FDDA4u;
    // 0x3fdda4: 0xae0500c0  sw          $a1, 0xC0($s0)
    ctx->pc = 0x3fdda4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 5));
    // 0x3fdda8: 0xc04cc04  jal         func_133010
    ctx->pc = 0x3FDDA8u;
    SET_GPR_U32(ctx, 31, 0x3FDDB0u);
    ctx->pc = 0x3FDDACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FDDA8u;
            // 0x3fddac: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FDDB0u; }
        if (ctx->pc != 0x3FDDB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FDDB0u; }
        if (ctx->pc != 0x3FDDB0u) { return; }
    }
    ctx->pc = 0x3FDDB0u;
label_3fddb0:
    // 0x3fddb0: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x3fddb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x3fddb4: 0xc04cc04  jal         func_133010
    ctx->pc = 0x3FDDB4u;
    SET_GPR_U32(ctx, 31, 0x3FDDBCu);
    ctx->pc = 0x3FDDB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FDDB4u;
            // 0x3fddb8: 0x26050070  addiu       $a1, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FDDBCu; }
        if (ctx->pc != 0x3FDDBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FDDBCu; }
        if (ctx->pc != 0x3FDDBCu) { return; }
    }
    ctx->pc = 0x3FDDBCu;
label_3fddbc:
    // 0x3fddbc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3fddbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3fddc0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3fddc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3fddc4: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x3fddc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x3fddc8: 0xc04cc04  jal         func_133010
    ctx->pc = 0x3FDDC8u;
    SET_GPR_U32(ctx, 31, 0x3FDDD0u);
    ctx->pc = 0x3FDDCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FDDC8u;
            // 0x3fddcc: 0x26050070  addiu       $a1, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FDDD0u; }
        if (ctx->pc != 0x3FDDD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FDDD0u; }
        if (ctx->pc != 0x3FDDD0u) { return; }
    }
    ctx->pc = 0x3FDDD0u;
label_3fddd0:
    // 0x3fddd0: 0xc7a20084  lwc1        $f2, 0x84($sp)
    ctx->pc = 0x3fddd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3fddd4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3fddd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3fddd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3fddd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3fdddc: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x3fdddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3fdde0: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x3fdde0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3fdde4: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x3fdde4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x3fdde8: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x3fdde8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x3fddec: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x3fddecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x3fddf0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3fddf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3fddf4: 0x0  nop
    ctx->pc = 0x3fddf4u;
    // NOP
    // 0x3fddf8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3fddf8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3fddfc: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x3fddfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x3fde00: 0x8e11010c  lw          $s1, 0x10C($s0)
    ctx->pc = 0x3fde00u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x3fde04: 0xc04cc04  jal         func_133010
    ctx->pc = 0x3FDE04u;
    SET_GPR_U32(ctx, 31, 0x3FDE0Cu);
    ctx->pc = 0x3FDE08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FDE04u;
            // 0x3fde08: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FDE0Cu; }
        if (ctx->pc != 0x3FDE0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FDE0Cu; }
        if (ctx->pc != 0x3FDE0Cu) { return; }
    }
    ctx->pc = 0x3FDE0Cu;
label_3fde0c:
    // 0x3fde0c: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x3fde0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3fde10: 0xc04c720  jal         func_131C80
    ctx->pc = 0x3FDE10u;
    SET_GPR_U32(ctx, 31, 0x3FDE18u);
    ctx->pc = 0x3FDE14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FDE10u;
            // 0x3fde14: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FDE18u; }
        if (ctx->pc != 0x3FDE18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FDE18u; }
        if (ctx->pc != 0x3FDE18u) { return; }
    }
    ctx->pc = 0x3FDE18u;
label_3fde18:
    // 0x3fde18: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x3fde18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x3fde1c: 0x50800014  beql        $a0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x3FDE1Cu;
    {
        const bool branch_taken_0x3fde1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fde1c) {
            ctx->pc = 0x3FDE20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FDE1Cu;
            // 0x3fde20: 0x8e04010c  lw          $a0, 0x10C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FDE70u;
            goto label_3fde70;
        }
    }
    ctx->pc = 0x3FDE24u;
    // 0x3fde24: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x3fde24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3fde28: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x3fde28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3fde2c: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x3fde2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3fde30: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x3fde30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3fde34: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x3fde34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3fde38: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x3fde38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x3fde3c: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x3fde3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
    // 0x3fde40: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x3fde40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x3fde44: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x3fde44u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x3fde48: 0xc623002c  lwc1        $f3, 0x2C($s1)
    ctx->pc = 0x3fde48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3fde4c: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x3fde4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3fde50: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x3fde50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3fde54: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x3fde54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3fde58: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x3fde58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x3fde5c: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x3fde5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x3fde60: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x3fde60u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x3fde64: 0xc0892b0  jal         func_224AC0
    ctx->pc = 0x3FDE64u;
    SET_GPR_U32(ctx, 31, 0x3FDE6Cu);
    ctx->pc = 0x3FDE68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FDE64u;
            // 0x3fde68: 0xe7a3005c  swc1        $f3, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FDE6Cu; }
        if (ctx->pc != 0x3FDE6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FDE6Cu; }
        if (ctx->pc != 0x3FDE6Cu) { return; }
    }
    ctx->pc = 0x3FDE6Cu;
label_3fde6c:
    // 0x3fde6c: 0x8e04010c  lw          $a0, 0x10C($s0)
    ctx->pc = 0x3fde6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_3fde70:
    // 0x3fde70: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3fde70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3fde74: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3fde74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x3fde78: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3fde78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fde7c: 0x8c850050  lw          $a1, 0x50($a0)
    ctx->pc = 0x3fde7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x3fde80: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x3fde80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
    // 0x3fde84: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x3fde84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
    // 0x3fde88: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3fde88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3fde8c: 0xc08bff0  jal         func_22FFC0
    ctx->pc = 0x3FDE8Cu;
    SET_GPR_U32(ctx, 31, 0x3FDE94u);
    ctx->pc = 0x3FDE90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FDE8Cu;
            // 0x3fde90: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FDE94u; }
        if (ctx->pc != 0x3FDE94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FDE94u; }
        if (ctx->pc != 0x3FDE94u) { return; }
    }
    ctx->pc = 0x3FDE94u;
label_3fde94:
    // 0x3fde94: 0xc7a20080  lwc1        $f2, 0x80($sp)
    ctx->pc = 0x3fde94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3fde98: 0x3c0240e0  lui         $v0, 0x40E0
    ctx->pc = 0x3fde98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
    // 0x3fde9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3fde9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3fdea0: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x3fdea0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x3fdea4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3fdea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3fdea8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x3fdea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3fdeac: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x3fdeacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x3fdeb0: 0x24054000  addiu       $a1, $zero, 0x4000
    ctx->pc = 0x3fdeb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x3fdeb4: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x3fdeb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x3fdeb8: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x3fdeb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3fdebc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3fdebcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3fdec0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3fdec0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3fdec4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3fdec4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3fdec8: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x3fdec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x3fdecc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3fdeccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3fded0: 0xc04c970  jal         func_1325C0
    ctx->pc = 0x3FDED0u;
    SET_GPR_U32(ctx, 31, 0x3FDED8u);
    ctx->pc = 0x3FDED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FDED0u;
            // 0x3fded4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325C0u;
    if (runtime->hasFunction(0x1325C0u)) {
        auto targetFn = runtime->lookupFunction(0x1325C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FDED8u; }
        if (ctx->pc != 0x3FDED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325C0_0x1325c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FDED8u; }
        if (ctx->pc != 0x3FDED8u) { return; }
    }
    ctx->pc = 0x3FDED8u;
label_3fded8:
    // 0x3fded8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x3fded8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3fdedc: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x3fdedcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x3fdee0: 0xc04c72c  jal         func_131CB0
    ctx->pc = 0x3FDEE0u;
    SET_GPR_U32(ctx, 31, 0x3FDEE8u);
    ctx->pc = 0x3FDEE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FDEE0u;
            // 0x3fdee4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (runtime->hasFunction(0x131CB0u)) {
        auto targetFn = runtime->lookupFunction(0x131CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FDEE8u; }
        if (ctx->pc != 0x3FDEE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131CB0_0x131cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FDEE8u; }
        if (ctx->pc != 0x3FDEE8u) { return; }
    }
    ctx->pc = 0x3FDEE8u;
label_3fdee8:
    // 0x3fdee8: 0x8e110110  lw          $s1, 0x110($s0)
    ctx->pc = 0x3fdee8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x3fdeec: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x3fdeecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3fdef0: 0xc04cc04  jal         func_133010
    ctx->pc = 0x3FDEF0u;
    SET_GPR_U32(ctx, 31, 0x3FDEF8u);
    ctx->pc = 0x3FDEF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FDEF0u;
            // 0x3fdef4: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FDEF8u; }
        if (ctx->pc != 0x3FDEF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FDEF8u; }
        if (ctx->pc != 0x3FDEF8u) { return; }
    }
    ctx->pc = 0x3FDEF8u;
label_3fdef8:
    // 0x3fdef8: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x3fdef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3fdefc: 0xc04c720  jal         func_131C80
    ctx->pc = 0x3FDEFCu;
    SET_GPR_U32(ctx, 31, 0x3FDF04u);
    ctx->pc = 0x3FDF00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FDEFCu;
            // 0x3fdf00: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FDF04u; }
        if (ctx->pc != 0x3FDF04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FDF04u; }
        if (ctx->pc != 0x3FDF04u) { return; }
    }
    ctx->pc = 0x3FDF04u;
label_3fdf04:
    // 0x3fdf04: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x3fdf04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x3fdf08: 0x50800014  beql        $a0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x3FDF08u;
    {
        const bool branch_taken_0x3fdf08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fdf08) {
            ctx->pc = 0x3FDF0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FDF08u;
            // 0x3fdf0c: 0x8e040110  lw          $a0, 0x110($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FDF5Cu;
            goto label_3fdf5c;
        }
    }
    ctx->pc = 0x3FDF10u;
    // 0x3fdf10: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x3fdf10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3fdf14: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x3fdf14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3fdf18: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x3fdf18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3fdf1c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x3fdf1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3fdf20: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x3fdf20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3fdf24: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x3fdf24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x3fdf28: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x3fdf28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    // 0x3fdf2c: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x3fdf2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x3fdf30: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x3fdf30u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x3fdf34: 0xc623002c  lwc1        $f3, 0x2C($s1)
    ctx->pc = 0x3fdf34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3fdf38: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x3fdf38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3fdf3c: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x3fdf3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3fdf40: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x3fdf40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3fdf44: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x3fdf44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x3fdf48: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x3fdf48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x3fdf4c: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x3fdf4cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x3fdf50: 0xc0892b0  jal         func_224AC0
    ctx->pc = 0x3FDF50u;
    SET_GPR_U32(ctx, 31, 0x3FDF58u);
    ctx->pc = 0x3FDF54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FDF50u;
            // 0x3fdf54: 0xe7a3003c  swc1        $f3, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FDF58u; }
        if (ctx->pc != 0x3FDF58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FDF58u; }
        if (ctx->pc != 0x3FDF58u) { return; }
    }
    ctx->pc = 0x3FDF58u;
label_3fdf58:
    // 0x3fdf58: 0x8e040110  lw          $a0, 0x110($s0)
    ctx->pc = 0x3fdf58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_3fdf5c:
    // 0x3fdf5c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3fdf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3fdf60: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3fdf60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x3fdf64: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3fdf64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fdf68: 0x8c850050  lw          $a1, 0x50($a0)
    ctx->pc = 0x3fdf68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x3fdf6c: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x3fdf6cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
    // 0x3fdf70: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x3fdf70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
    // 0x3fdf74: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3fdf74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3fdf78: 0xc08bff0  jal         func_22FFC0
    ctx->pc = 0x3FDF78u;
    SET_GPR_U32(ctx, 31, 0x3FDF80u);
    ctx->pc = 0x3FDF7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FDF78u;
            // 0x3fdf7c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FDF80u; }
        if (ctx->pc != 0x3FDF80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FDF80u; }
        if (ctx->pc != 0x3FDF80u) { return; }
    }
    ctx->pc = 0x3FDF80u;
label_3fdf80:
    // 0x3fdf80: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3fdf80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3fdf84:
    // 0x3fdf84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3fdf84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3fdf88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3fdf88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3fdf8c: 0x3e00008  jr          $ra
    ctx->pc = 0x3FDF8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FDF90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FDF8Cu;
            // 0x3fdf90: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3FDF94u;
    // 0x3fdf94: 0x0  nop
    ctx->pc = 0x3fdf94u;
    // NOP
    // 0x3fdf98: 0x0  nop
    ctx->pc = 0x3fdf98u;
    // NOP
    // 0x3fdf9c: 0x0  nop
    ctx->pc = 0x3fdf9cu;
    // NOP
}
