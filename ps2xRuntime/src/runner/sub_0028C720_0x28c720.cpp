#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028C720
// Address: 0x28c720 - 0x28c7b0
void sub_0028C720_0x28c720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028C720_0x28c720");
#endif

    switch (ctx->pc) {
        case 0x28c748u: goto label_28c748;
        case 0x28c754u: goto label_28c754;
        default: break;
    }

    ctx->pc = 0x28c720u;

    // 0x28c720: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x28c720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x28c724: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x28c724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x28c728: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28c728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x28c72c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28c72cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28c730: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x28c730u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c734: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28c734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28c738: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x28c738u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c73c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x28c73cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c740: 0xc0a3a40  jal         func_28E900
    ctx->pc = 0x28C740u;
    SET_GPR_U32(ctx, 31, 0x28C748u);
    ctx->pc = 0x28C744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28C740u;
            // 0x28c744: 0x26440040  addiu       $a0, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E900u;
    if (runtime->hasFunction(0x28E900u)) {
        auto targetFn = runtime->lookupFunction(0x28E900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C748u; }
        if (ctx->pc != 0x28C748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E900_0x28e900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C748u; }
        if (ctx->pc != 0x28C748u) { return; }
    }
    ctx->pc = 0x28C748u;
label_28c748:
    // 0x28c748: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28c748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c74c: 0xc0a3830  jal         func_28E0C0
    ctx->pc = 0x28C74Cu;
    SET_GPR_U32(ctx, 31, 0x28C754u);
    ctx->pc = 0x28C750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28C74Cu;
            // 0x28c750: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E0C0u;
    if (runtime->hasFunction(0x28E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x28E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C754u; }
        if (ctx->pc != 0x28C754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E0C0_0x28e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C754u; }
        if (ctx->pc != 0x28C754u) { return; }
    }
    ctx->pc = 0x28C754u;
label_28c754:
    // 0x28c754: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x28c754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28c758: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x28c758u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x28c75c: 0xe6400030  swc1        $f0, 0x30($s2)
    ctx->pc = 0x28c75cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
    // 0x28c760: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x28c760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28c764: 0xe6400034  swc1        $f0, 0x34($s2)
    ctx->pc = 0x28c764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
    // 0x28c768: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x28c768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28c76c: 0xe6400038  swc1        $f0, 0x38($s2)
    ctx->pc = 0x28c76cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
    // 0x28c770: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x28c770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28c774: 0xe640003c  swc1        $f0, 0x3C($s2)
    ctx->pc = 0x28c774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 60), bits); }
    // 0x28c778: 0xae40009c  sw          $zero, 0x9C($s2)
    ctx->pc = 0x28c778u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 0));
    // 0x28c77c: 0xae400098  sw          $zero, 0x98($s2)
    ctx->pc = 0x28c77cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 0));
    // 0x28c780: 0xae400094  sw          $zero, 0x94($s2)
    ctx->pc = 0x28c780u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 148), GPR_U32(ctx, 0));
    // 0x28c784: 0xae400090  sw          $zero, 0x90($s2)
    ctx->pc = 0x28c784u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 0));
    // 0x28c788: 0xae4300a0  sw          $v1, 0xA0($s2)
    ctx->pc = 0x28c788u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 3));
    // 0x28c78c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x28c78cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28c790: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x28c790u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28c794: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28c794u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28c798: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28c798u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28c79c: 0x3e00008  jr          $ra
    ctx->pc = 0x28C79Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28C7A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C79Cu;
            // 0x28c7a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28C7A4u;
    // 0x28c7a4: 0x0  nop
    ctx->pc = 0x28c7a4u;
    // NOP
    // 0x28c7a8: 0x0  nop
    ctx->pc = 0x28c7a8u;
    // NOP
    // 0x28c7ac: 0x0  nop
    ctx->pc = 0x28c7acu;
    // NOP
}
