#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015F5D0
// Address: 0x15f5d0 - 0x15f6a0
void sub_0015F5D0_0x15f5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015F5D0_0x15f5d0");
#endif

    switch (ctx->pc) {
        case 0x15f61cu: goto label_15f61c;
        case 0x15f630u: goto label_15f630;
        case 0x15f64cu: goto label_15f64c;
        case 0x15f67cu: goto label_15f67c;
        default: break;
    }

    ctx->pc = 0x15f5d0u;

    // 0x15f5d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x15f5d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x15f5d4: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x15f5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x15f5d8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x15f5d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x15f5dc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15f5dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15f5e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15f5e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15f5e4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x15f5e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f5e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15f5e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15f5ec: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x15f5ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f5f0: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x15f5f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15f5f4: 0x8c50b6b0  lw          $s0, -0x4950($v0)
    ctx->pc = 0x15f5f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948528)));
    // 0x15f5f8: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x15f5f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15f5fc: 0x26440068  addiu       $a0, $s2, 0x68
    ctx->pc = 0x15f5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 104));
    // 0x15f600: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x15f600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15f604: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x15f604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x15f608: 0xe7a20050  swc1        $f2, 0x50($sp)
    ctx->pc = 0x15f608u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x15f60c: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x15f60cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x15f610: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x15f610u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x15f614: 0xc0fe54c  jal         func_3F9530
    ctx->pc = 0x15F614u;
    SET_GPR_U32(ctx, 31, 0x15F61Cu);
    ctx->pc = 0x15F618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F614u;
            // 0x15f618: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9530u;
    if (runtime->hasFunction(0x3F9530u)) {
        auto targetFn = runtime->lookupFunction(0x3F9530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F61Cu; }
        if (ctx->pc != 0x15F61Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9530_0x3f9530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F61Cu; }
        if (ctx->pc != 0x15F61Cu) { return; }
    }
    ctx->pc = 0x15F61Cu;
label_15f61c:
    // 0x15f61c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x15f61cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f620: 0x26440068  addiu       $a0, $s2, 0x68
    ctx->pc = 0x15f620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 104));
    // 0x15f624: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15f624u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f628: 0xc0fe54c  jal         func_3F9530
    ctx->pc = 0x15F628u;
    SET_GPR_U32(ctx, 31, 0x15F630u);
    ctx->pc = 0x15F62Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F628u;
            // 0x15f62c: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9530u;
    if (runtime->hasFunction(0x3F9530u)) {
        auto targetFn = runtime->lookupFunction(0x3F9530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F630u; }
        if (ctx->pc != 0x15F630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9530_0x3f9530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F630u; }
        if (ctx->pc != 0x15F630u) { return; }
    }
    ctx->pc = 0x15F630u;
label_15f630:
    // 0x15f630: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15F630u;
    {
        const bool branch_taken_0x15f630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F630u;
            // 0x15f634: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f630) {
            ctx->pc = 0x15F64Cu;
            goto label_15f64c;
        }
    }
    ctx->pc = 0x15F638u;
    // 0x15f638: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15f638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f63c: 0x27a5005c  addiu       $a1, $sp, 0x5C
    ctx->pc = 0x15f63cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x15f640: 0x26420008  addiu       $v0, $s2, 0x8
    ctx->pc = 0x15f640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x15f644: 0xc058300  jal         func_160C00
    ctx->pc = 0x15F644u;
    SET_GPR_U32(ctx, 31, 0x15F64Cu);
    ctx->pc = 0x15F648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F644u;
            // 0x15f648: 0xafa2005c  sw          $v0, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160C00u;
    if (runtime->hasFunction(0x160C00u)) {
        auto targetFn = runtime->lookupFunction(0x160C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F64Cu; }
        if (ctx->pc != 0x15F64Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160C00_0x160c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F64Cu; }
        if (ctx->pc != 0x15F64Cu) { return; }
    }
    ctx->pc = 0x15F64Cu;
label_15f64c:
    // 0x15f64c: 0xc7a20050  lwc1        $f2, 0x50($sp)
    ctx->pc = 0x15f64cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15f650: 0x264500c4  addiu       $a1, $s2, 0xC4
    ctx->pc = 0x15f650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 196));
    // 0x15f654: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x15f654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15f658: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x15f658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x15f65c: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x15f65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15f660: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x15f660u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x15f664: 0xe6020000  swc1        $f2, 0x0($s0)
    ctx->pc = 0x15f664u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x15f668: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x15f668u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x15f66c: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x15f66cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x15f670: 0xafb10040  sw          $s1, 0x40($sp)
    ctx->pc = 0x15f670u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 17));
    // 0x15f674: 0xc058158  jal         func_160560
    ctx->pc = 0x15F674u;
    SET_GPR_U32(ctx, 31, 0x15F67Cu);
    ctx->pc = 0x15F678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F674u;
            // 0x15f678: 0xafb00044  sw          $s0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160560u;
    if (runtime->hasFunction(0x160560u)) {
        auto targetFn = runtime->lookupFunction(0x160560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F67Cu; }
        if (ctx->pc != 0x15F67Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160560_0x160560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F67Cu; }
        if (ctx->pc != 0x15F67Cu) { return; }
    }
    ctx->pc = 0x15F67Cu;
label_15f67c:
    // 0x15f67c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x15f67cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15f680: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15f680u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15f684: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15f684u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15f688: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15f688u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15f68c: 0x3e00008  jr          $ra
    ctx->pc = 0x15F68Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15F690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F68Cu;
            // 0x15f690: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15F694u;
    // 0x15f694: 0x0  nop
    ctx->pc = 0x15f694u;
    // NOP
    // 0x15f698: 0x0  nop
    ctx->pc = 0x15f698u;
    // NOP
    // 0x15f69c: 0x0  nop
    ctx->pc = 0x15f69cu;
    // NOP
}
