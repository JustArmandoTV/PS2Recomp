#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00174548
// Address: 0x174548 - 0x1745c8
void sub_00174548_0x174548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00174548_0x174548");
#endif

    switch (ctx->pc) {
        case 0x1745b8u: goto label_1745b8;
        default: break;
    }

    ctx->pc = 0x174548u;

    // 0x174548: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x174548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17454c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x17454cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174550: 0x14e00007  bnez        $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x174550u;
    {
        const bool branch_taken_0x174550 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x174554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174550u;
            // 0x174554: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174550) {
            ctx->pc = 0x174570u;
            goto label_174570;
        }
    }
    ctx->pc = 0x174558u;
    // 0x174558: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x174558u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x17455c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17455cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174560: 0x248444b8  addiu       $a0, $a0, 0x44B8
    ctx->pc = 0x174560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17592));
    // 0x174564: 0x8059f4e  j           func_167D38
    ctx->pc = 0x174564u;
    ctx->pc = 0x174568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174564u;
            // 0x174568: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167D38u;
    if (runtime->hasFunction(0x167D38u)) {
        auto targetFn = runtime->lookupFunction(0x167D38u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00167D38_0x167d38(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x17456Cu;
    // 0x17456c: 0x0  nop
    ctx->pc = 0x17456cu;
    // NOP
label_174570:
    // 0x174570: 0x84e6003c  lh          $a2, 0x3C($a3)
    ctx->pc = 0x174570u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x174574: 0x3c013f59  lui         $at, 0x3F59
    ctx->pc = 0x174574u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16217 << 16));
    // 0x174578: 0x34219999  ori         $at, $at, 0x9999
    ctx->pc = 0x174578u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39321);
    // 0x17457c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x17457cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x174580: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x174580u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x174584: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x174584u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x174588: 0x632c0  sll         $a2, $a2, 11
    ctx->pc = 0x174588u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 11));
    // 0x17458c: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x17458cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x174590: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x174590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174594: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x174594u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x174598: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x174598u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x17459c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x17459cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1745a0: 0x22c00  sll         $a1, $v0, 16
    ctx->pc = 0x1745a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1745a4: 0xa4e2003e  sh          $v0, 0x3E($a3)
    ctx->pc = 0x1745a4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 62), (uint16_t)GPR_U32(ctx, 2));
    // 0x1745a8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1745A8u;
    {
        const bool branch_taken_0x1745a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1745ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1745A8u;
            // 0x1745ac: 0x52943  sra         $a1, $a1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1745a8) {
            ctx->pc = 0x1745B8u;
            goto label_1745b8;
        }
    }
    ctx->pc = 0x1745B0u;
    // 0x1745b0: 0xc05c67e  jal         func_1719F8
    ctx->pc = 0x1745B0u;
    SET_GPR_U32(ctx, 31, 0x1745B8u);
    ctx->pc = 0x1719F8u;
    if (runtime->hasFunction(0x1719F8u)) {
        auto targetFn = runtime->lookupFunction(0x1719F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1745B8u; }
        if (ctx->pc != 0x1745B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001719F8_0x1719f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1745B8u; }
        if (ctx->pc != 0x1745B8u) { return; }
    }
    ctx->pc = 0x1745B8u;
label_1745b8:
    // 0x1745b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1745b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1745bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1745BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1745C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1745BCu;
            // 0x1745c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1745C4u;
    // 0x1745c4: 0x0  nop
    ctx->pc = 0x1745c4u;
    // NOP
}
