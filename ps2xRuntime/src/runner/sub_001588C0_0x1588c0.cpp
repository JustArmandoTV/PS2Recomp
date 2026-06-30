#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001588C0
// Address: 0x1588c0 - 0x158980
void sub_001588C0_0x1588c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001588C0_0x1588c0");
#endif

    switch (ctx->pc) {
        case 0x158908u: goto label_158908;
        case 0x158918u: goto label_158918;
        case 0x15893cu: goto label_15893c;
        case 0x158958u: goto label_158958;
        default: break;
    }

    ctx->pc = 0x1588c0u;

    // 0x1588c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1588c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1588c4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1588c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1588c8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1588c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1588cc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1588ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1588d0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1588d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1588d4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1588d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1588d8: 0x26420008  addiu       $v0, $s2, 0x8
    ctx->pc = 0x1588d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x1588dc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1588dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1588e0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1588e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1588e4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1588e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1588e8: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1588e8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1588ec: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1588ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1588f0: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x1588f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1588f4: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1588f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x1588f8: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1588f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x1588fc: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1588fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x158900: 0xc04e978  jal         func_13A5E0
    ctx->pc = 0x158900u;
    SET_GPR_U32(ctx, 31, 0x158908u);
    ctx->pc = 0x158904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158900u;
            // 0x158904: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A5E0u;
    if (runtime->hasFunction(0x13A5E0u)) {
        auto targetFn = runtime->lookupFunction(0x13A5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158908u; }
        if (ctx->pc != 0x158908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013A5E0_0x13a5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158908u; }
        if (ctx->pc != 0x158908u) { return; }
    }
    ctx->pc = 0x158908u;
label_158908:
    // 0x158908: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x158908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x15890c: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x15890cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x158910: 0xc0517bc  jal         func_145EF0
    ctx->pc = 0x158910u;
    SET_GPR_U32(ctx, 31, 0x158918u);
    ctx->pc = 0x158914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158910u;
            // 0x158914: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x145EF0u;
    if (runtime->hasFunction(0x145EF0u)) {
        auto targetFn = runtime->lookupFunction(0x145EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158918u; }
        if (ctx->pc != 0x158918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00145EF0_0x145ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158918u; }
        if (ctx->pc != 0x158918u) { return; }
    }
    ctx->pc = 0x158918u;
label_158918:
    // 0x158918: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x158918u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15891c: 0x30a30004  andi        $v1, $a1, 0x4
    ctx->pc = 0x15891cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
    // 0x158920: 0x5060000e  beql        $v1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x158920u;
    {
        const bool branch_taken_0x158920 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x158920) {
            ctx->pc = 0x158924u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x158920u;
            // 0x158924: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15895Cu;
            goto label_15895c;
        }
    }
    ctx->pc = 0x158928u;
    // 0x158928: 0xc60c0004  lwc1        $f12, 0x4($s0)
    ctx->pc = 0x158928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15892c: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x15892cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x158930: 0xc60d0008  lwc1        $f13, 0x8($s0)
    ctx->pc = 0x158930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x158934: 0xc04d03c  jal         func_1340F0
    ctx->pc = 0x158934u;
    SET_GPR_U32(ctx, 31, 0x15893Cu);
    ctx->pc = 0x158938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158934u;
            // 0x158938: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1340F0u;
    if (runtime->hasFunction(0x1340F0u)) {
        auto targetFn = runtime->lookupFunction(0x1340F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15893Cu; }
        if (ctx->pc != 0x15893Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001340F0_0x1340f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15893Cu; }
        if (ctx->pc != 0x15893Cu) { return; }
    }
    ctx->pc = 0x15893Cu;
label_15893c:
    // 0x15893c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15893Cu;
    {
        const bool branch_taken_0x15893c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15893c) {
            ctx->pc = 0x158958u;
            goto label_158958;
        }
    }
    ctx->pc = 0x158944u;
    // 0x158944: 0xc7ac005c  lwc1        $f12, 0x5C($sp)
    ctx->pc = 0x158944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x158948: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x158948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15894c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15894cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158950: 0xc056038  jal         func_1580E0
    ctx->pc = 0x158950u;
    SET_GPR_U32(ctx, 31, 0x158958u);
    ctx->pc = 0x158954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158950u;
            // 0x158954: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1580E0u;
    if (runtime->hasFunction(0x1580E0u)) {
        auto targetFn = runtime->lookupFunction(0x1580E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158958u; }
        if (ctx->pc != 0x158958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001580E0_0x1580e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158958u; }
        if (ctx->pc != 0x158958u) { return; }
    }
    ctx->pc = 0x158958u;
label_158958:
    // 0x158958: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x158958u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_15895c:
    // 0x15895c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x15895cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x158960: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x158960u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x158964: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x158964u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x158968: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x158968u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15896c: 0x3e00008  jr          $ra
    ctx->pc = 0x15896Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x158970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15896Cu;
            // 0x158970: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x158974u;
    // 0x158974: 0x0  nop
    ctx->pc = 0x158974u;
    // NOP
    // 0x158978: 0x0  nop
    ctx->pc = 0x158978u;
    // NOP
    // 0x15897c: 0x0  nop
    ctx->pc = 0x15897cu;
    // NOP
}
