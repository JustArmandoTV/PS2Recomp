#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019B510
// Address: 0x19b510 - 0x19b578
void sub_0019B510_0x19b510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019B510_0x19b510");
#endif

    switch (ctx->pc) {
        case 0x19b530u: goto label_19b530;
        default: break;
    }

    ctx->pc = 0x19b510u;

    // 0x19b510: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19b510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19b514: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x19b514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x19b518: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19b518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19b51c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x19b51cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19b520: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19b520u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x19b524: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x19b524u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x19b528: 0xc067522  jal         func_19D488
    ctx->pc = 0x19B528u;
    SET_GPR_U32(ctx, 31, 0x19B530u);
    ctx->pc = 0x19B52Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B528u;
            // 0x19b52c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D488u;
    if (runtime->hasFunction(0x19D488u)) {
        auto targetFn = runtime->lookupFunction(0x19D488u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B530u; }
        if (ctx->pc != 0x19B530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D488_0x19d488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B530u; }
        if (ctx->pc != 0x19B530u) { return; }
    }
    ctx->pc = 0x19B530u;
label_19b530:
    // 0x19b530: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19b530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b534: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19b534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b538: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x19b538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x19b53c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x19b53cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19b540: 0x8067522  j           func_19D488
    ctx->pc = 0x19B540u;
    ctx->pc = 0x19B544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B540u;
            // 0x19b544: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D488u;
    if (runtime->hasFunction(0x19D488u)) {
        auto targetFn = runtime->lookupFunction(0x19D488u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0019D488_0x19d488(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19B548u;
    // 0x19b548: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19b548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19b54c: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x19b54cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x19b550: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19b550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19b554: 0x24426c10  addiu       $v0, $v0, 0x6C10
    ctx->pc = 0x19b554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27664));
    // 0x19b558: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x19b558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19b55c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x19B55Cu;
    {
        const bool branch_taken_0x19b55c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B55Cu;
            // 0x19b560: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b55c) {
            ctx->pc = 0x19B570u;
            goto label_19b570;
        }
    }
    ctx->pc = 0x19B564u;
    // 0x19b564: 0x0  nop
    ctx->pc = 0x19b564u;
    // NOP
    // 0x19b568: 0x8066c72  j           func_19B1C8
    ctx->pc = 0x19B568u;
    ctx->pc = 0x19B56Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B568u;
            // 0x19b56c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (runtime->hasFunction(0x19B1C8u)) {
        auto targetFn = runtime->lookupFunction(0x19B1C8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0019B1C8_0x19b1c8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19B570u;
label_19b570:
    // 0x19b570: 0x3e00008  jr          $ra
    ctx->pc = 0x19B570u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B570u;
            // 0x19b574: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19B578u;
}
