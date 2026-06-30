#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001325C0
// Address: 0x1325c0 - 0x132650
void sub_001325C0_0x1325c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001325C0_0x1325c0");
#endif

    switch (ctx->pc) {
        case 0x1325f0u: goto label_1325f0;
        case 0x132600u: goto label_132600;
        default: break;
    }

    ctx->pc = 0x1325c0u;

    // 0x1325c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1325c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1325c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1325c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1325c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1325c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1325cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1325ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1325d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1325d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1325d4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1325d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1325d8: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x1325d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x1325dc: 0xe7ac0038  swc1        $f12, 0x38($sp)
    ctx->pc = 0x1325dcu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1325e0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1325e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1325e4: 0xe7ad003c  swc1        $f13, 0x3C($sp)
    ctx->pc = 0x1325e4u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1325e8: 0xc04cb44  jal         func_132D10
    ctx->pc = 0x1325E8u;
    SET_GPR_U32(ctx, 31, 0x1325F0u);
    ctx->pc = 0x1325ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1325E8u;
            // 0x1325ec: 0xe7ae0040  swc1        $f14, 0x40($sp) (Delay Slot)
        { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x132D10u;
    if (runtime->hasFunction(0x132D10u)) {
        auto targetFn = runtime->lookupFunction(0x132D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1325F0u; }
        if (ctx->pc != 0x1325F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132D10_0x132d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1325F0u; }
        if (ctx->pc != 0x1325F0u) { return; }
    }
    ctx->pc = 0x1325F0u;
label_1325f0:
    // 0x1325f0: 0x102043  sra         $a0, $s0, 1
    ctx->pc = 0x1325f0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 16), 1));
    // 0x1325f4: 0x27a5004c  addiu       $a1, $sp, 0x4C
    ctx->pc = 0x1325f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1325f8: 0xc04ceb0  jal         func_133AC0
    ctx->pc = 0x1325F8u;
    SET_GPR_U32(ctx, 31, 0x132600u);
    ctx->pc = 0x1325FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1325F8u;
            // 0x1325fc: 0x27a60048  addiu       $a2, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133AC0u;
    if (runtime->hasFunction(0x133AC0u)) {
        auto targetFn = runtime->lookupFunction(0x133AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132600u; }
        if (ctx->pc != 0x132600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133AC0_0x133ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132600u; }
        if (ctx->pc != 0x132600u) { return; }
    }
    ctx->pc = 0x132600u;
label_132600:
    // 0x132600: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x132600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x132604: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x132604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x132608: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x132608u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13260c: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x13260cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x132610: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x132610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x132614: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x132614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x132618: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x132618u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13261c: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x13261cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x132620: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x132620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x132624: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x132624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x132628: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x132628u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13262c: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x13262cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x132630: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x132630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x132634: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x132634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x132638: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x132638u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13263c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13263cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x132640: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x132640u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x132644: 0x3e00008  jr          $ra
    ctx->pc = 0x132644u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x132648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132644u;
            // 0x132648: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13264Cu;
    // 0x13264c: 0x0  nop
    ctx->pc = 0x13264cu;
    // NOP
}
