#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00517720
// Address: 0x517720 - 0x5177d0
void sub_00517720_0x517720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00517720_0x517720");
#endif

    switch (ctx->pc) {
        case 0x517758u: goto label_517758;
        case 0x51776cu: goto label_51776c;
        case 0x517784u: goto label_517784;
        case 0x517790u: goto label_517790;
        default: break;
    }

    ctx->pc = 0x517720u;

    // 0x517720: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x517720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x517724: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x517724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x517728: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x517728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x51772c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x51772cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x517730: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x517730u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x517734: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x517734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x517738: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x517738u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51773c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x51773cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x517740: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x517740u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x517744: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x517744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x517748: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x517748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x51774c: 0xc44c0010  lwc1        $f12, 0x10($v0)
    ctx->pc = 0x51774cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x517750: 0xc089688  jal         func_225A20
    ctx->pc = 0x517750u;
    SET_GPR_U32(ctx, 31, 0x517758u);
    ctx->pc = 0x517754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x517750u;
            // 0x517754: 0x264400a0  addiu       $a0, $s2, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225A20u;
    if (runtime->hasFunction(0x225A20u)) {
        auto targetFn = runtime->lookupFunction(0x225A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x517758u; }
        if (ctx->pc != 0x517758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225A20_0x225a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x517758u; }
        if (ctx->pc != 0x517758u) { return; }
    }
    ctx->pc = 0x517758u;
label_517758:
    // 0x517758: 0xc7ac00c0  lwc1        $f12, 0xC0($sp)
    ctx->pc = 0x517758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x51775c: 0xc7ad00c4  lwc1        $f13, 0xC4($sp)
    ctx->pc = 0x51775cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x517760: 0xc7ae00c8  lwc1        $f14, 0xC8($sp)
    ctx->pc = 0x517760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x517764: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x517764u;
    SET_GPR_U32(ctx, 31, 0x51776Cu);
    ctx->pc = 0x517768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x517764u;
            // 0x517768: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51776Cu; }
        if (ctx->pc != 0x51776Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51776Cu; }
        if (ctx->pc != 0x51776Cu) { return; }
    }
    ctx->pc = 0x51776Cu;
label_51776c:
    // 0x51776c: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x51776cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x517770: 0x264400a0  addiu       $a0, $s2, 0xA0
    ctx->pc = 0x517770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
    // 0x517774: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x517774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x517778: 0xc44c0010  lwc1        $f12, 0x10($v0)
    ctx->pc = 0x517778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x51777c: 0xc089688  jal         func_225A20
    ctx->pc = 0x51777Cu;
    SET_GPR_U32(ctx, 31, 0x517784u);
    ctx->pc = 0x517780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51777Cu;
            // 0x517780: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225A20u;
    if (runtime->hasFunction(0x225A20u)) {
        auto targetFn = runtime->lookupFunction(0x225A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x517784u; }
        if (ctx->pc != 0x517784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225A20_0x225a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x517784u; }
        if (ctx->pc != 0x517784u) { return; }
    }
    ctx->pc = 0x517784u;
label_517784:
    // 0x517784: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x517784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x517788: 0xc0a3828  jal         func_28E0A0
    ctx->pc = 0x517788u;
    SET_GPR_U32(ctx, 31, 0x517790u);
    ctx->pc = 0x51778Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x517788u;
            // 0x51778c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E0A0u;
    if (runtime->hasFunction(0x28E0A0u)) {
        auto targetFn = runtime->lookupFunction(0x28E0A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x517790u; }
        if (ctx->pc != 0x517790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E0A0_0x28e0a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x517790u; }
        if (ctx->pc != 0x517790u) { return; }
    }
    ctx->pc = 0x517790u;
label_517790:
    // 0x517790: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x517790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x517794: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x517794u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x517798: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x517798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x51779c: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x51779cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x5177a0: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x5177a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x5177a4: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x5177a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x5177a8: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x5177a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x5177ac: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x5177acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x5177b0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x5177b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x5177b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x5177b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x5177b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x5177b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x5177bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5177bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x5177c0: 0x3e00008  jr          $ra
    ctx->pc = 0x5177C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5177C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5177C0u;
            // 0x5177c4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5177C8u;
    // 0x5177c8: 0x0  nop
    ctx->pc = 0x5177c8u;
    // NOP
    // 0x5177cc: 0x0  nop
    ctx->pc = 0x5177ccu;
    // NOP
}
