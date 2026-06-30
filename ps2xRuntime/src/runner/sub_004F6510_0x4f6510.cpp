#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004F6510
// Address: 0x4f6510 - 0x4f6590
void sub_004F6510_0x4f6510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F6510_0x4f6510");
#endif

    switch (ctx->pc) {
        case 0x4f654cu: goto label_4f654c;
        default: break;
    }

    ctx->pc = 0x4f6510u;

    // 0x4f6510: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4f6510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4f6514: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4f6514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x4f6518: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4f6518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x4f651c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4f651cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x4f6520: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4f6520u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f6524: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4f6524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4f6528: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x4f6528u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f652c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4f652cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x4f6530: 0x140802d  daddu       $s0, $t2, $zero
    ctx->pc = 0x4f6530u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f6534: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x4f6534u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x4f6538: 0x160482d  daddu       $t1, $t3, $zero
    ctx->pc = 0x4f6538u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f653c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4f653cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4f6540: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x4f6540u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f6544: 0xc0b9404  jal         func_2E5010
    ctx->pc = 0x4F6544u;
    SET_GPR_U32(ctx, 31, 0x4F654Cu);
    ctx->pc = 0x4F6548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F6544u;
            // 0x4f6548: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E5010u;
    if (runtime->hasFunction(0x2E5010u)) {
        auto targetFn = runtime->lookupFunction(0x2E5010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F654Cu; }
        if (ctx->pc != 0x4F654Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E5010_0x2e5010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F654Cu; }
        if (ctx->pc != 0x4F654Cu) { return; }
    }
    ctx->pc = 0x4F654Cu;
label_4f654c:
    // 0x4f654c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4f654cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4f6550: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4f6550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4f6554: 0x24424570  addiu       $v0, $v0, 0x4570
    ctx->pc = 0x4f6554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17776));
    // 0x4f6558: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4f6558u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x4f655c: 0xa24300d0  sb          $v1, 0xD0($s2)
    ctx->pc = 0x4f655cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 208), (uint8_t)GPR_U32(ctx, 3));
    // 0x4f6560: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x4f6560u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f6564: 0xae5000d4  sw          $s0, 0xD4($s2)
    ctx->pc = 0x4f6564u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 16));
    // 0x4f6568: 0xae5100d8  sw          $s1, 0xD8($s2)
    ctx->pc = 0x4f6568u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 216), GPR_U32(ctx, 17));
    // 0x4f656c: 0xe65400a8  swc1        $f20, 0xA8($s2)
    ctx->pc = 0x4f656cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 168), bits); }
    // 0x4f6570: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4f6570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4f6574: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4f6574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x4f6578: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4f6578u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4f657c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4f657cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4f6580: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4f6580u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f6584: 0x3e00008  jr          $ra
    ctx->pc = 0x4F6584u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F6588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F6584u;
            // 0x4f6588: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F658Cu;
    // 0x4f658c: 0x0  nop
    ctx->pc = 0x4f658cu;
    // NOP
}
