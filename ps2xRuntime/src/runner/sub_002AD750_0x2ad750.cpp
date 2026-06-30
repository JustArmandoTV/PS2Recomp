#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002AD750
// Address: 0x2ad750 - 0x2ad7c0
void sub_002AD750_0x2ad750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AD750_0x2ad750");
#endif

    switch (ctx->pc) {
        case 0x2ad770u: goto label_2ad770;
        case 0x2ad77cu: goto label_2ad77c;
        case 0x2ad790u: goto label_2ad790;
        case 0x2ad7a4u: goto label_2ad7a4;
        default: break;
    }

    ctx->pc = 0x2ad750u;

    // 0x2ad750: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ad750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ad754: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2ad754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2ad758: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ad758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ad75c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ad75cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ad760: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ad760u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad764: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2ad764u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad768: 0xc04c74c  jal         func_131D30
    ctx->pc = 0x2AD768u;
    SET_GPR_U32(ctx, 31, 0x2AD770u);
    ctx->pc = 0x2AD76Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD768u;
            // 0x2ad76c: 0x262400f0  addiu       $a0, $s1, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131D30u;
    if (runtime->hasFunction(0x131D30u)) {
        auto targetFn = runtime->lookupFunction(0x131D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD770u; }
        if (ctx->pc != 0x2AD770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131D30_0x131d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD770u; }
        if (ctx->pc != 0x2AD770u) { return; }
    }
    ctx->pc = 0x2AD770u;
label_2ad770:
    // 0x2ad770: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ad770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad774: 0xc04f278  jal         func_13C9E0
    ctx->pc = 0x2AD774u;
    SET_GPR_U32(ctx, 31, 0x2AD77Cu);
    ctx->pc = 0x2AD778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD774u;
            // 0x2ad778: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD77Cu; }
        if (ctx->pc != 0x2AD77Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD77Cu; }
        if (ctx->pc != 0x2AD77Cu) { return; }
    }
    ctx->pc = 0x2AD77Cu;
label_2ad77c:
    // 0x2ad77c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2ad77cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ad780: 0x262400d0  addiu       $a0, $s1, 0xD0
    ctx->pc = 0x2ad780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
    // 0x2ad784: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ad784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad788: 0xc0c6250  jal         func_318940
    ctx->pc = 0x2AD788u;
    SET_GPR_U32(ctx, 31, 0x2AD790u);
    ctx->pc = 0x2AD78Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD788u;
            // 0x2ad78c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD790u; }
        if (ctx->pc != 0x2AD790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD790u; }
        if (ctx->pc != 0x2AD790u) { return; }
    }
    ctx->pc = 0x2AD790u;
label_2ad790:
    // 0x2ad790: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x2ad790u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x2ad794: 0x26240050  addiu       $a0, $s1, 0x50
    ctx->pc = 0x2ad794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x2ad798: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2ad798u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad79c: 0xc04cca0  jal         func_133280
    ctx->pc = 0x2AD79Cu;
    SET_GPR_U32(ctx, 31, 0x2AD7A4u);
    ctx->pc = 0x2AD7A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD79Cu;
            // 0x2ad7a0: 0x24c61390  addiu       $a2, $a2, 0x1390 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5008));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD7A4u; }
        if (ctx->pc != 0x2AD7A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD7A4u; }
        if (ctx->pc != 0x2AD7A4u) { return; }
    }
    ctx->pc = 0x2AD7A4u;
label_2ad7a4:
    // 0x2ad7a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ad7a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ad7a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ad7a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ad7ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ad7acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ad7b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2AD7B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD7B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD7B0u;
            // 0x2ad7b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AD7B8u;
    // 0x2ad7b8: 0x0  nop
    ctx->pc = 0x2ad7b8u;
    // NOP
    // 0x2ad7bc: 0x0  nop
    ctx->pc = 0x2ad7bcu;
    // NOP
}
