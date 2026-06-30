#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00174468
// Address: 0x174468 - 0x174548
void sub_00174468_0x174468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00174468_0x174468");
#endif

    switch (ctx->pc) {
        case 0x17450cu: goto label_17450c;
        case 0x17452cu: goto label_17452c;
        case 0x174534u: goto label_174534;
        default: break;
    }

    ctx->pc = 0x174468u;

    // 0x174468: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x174468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17446c: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x17446cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174470: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x174470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x174474: 0x15200006  bnez        $t1, . + 4 + (0x6 << 2)
    ctx->pc = 0x174474u;
    {
        const bool branch_taken_0x174474 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x174478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174474u;
            // 0x174478: 0xa0502d  daddu       $t2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174474) {
            ctx->pc = 0x174490u;
            goto label_174490;
        }
    }
    ctx->pc = 0x17447Cu;
    // 0x17447c: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x17447cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x174480: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x174480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174484: 0x24844488  addiu       $a0, $a0, 0x4488
    ctx->pc = 0x174484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17544));
    // 0x174488: 0x8059f4e  j           func_167D38
    ctx->pc = 0x174488u;
    ctx->pc = 0x17448Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174488u;
            // 0x17448c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167D38u;
    if (runtime->hasFunction(0x167D38u)) {
        auto targetFn = runtime->lookupFunction(0x167D38u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00167D38_0x167d38(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x174490u;
label_174490:
    // 0x174490: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x174490u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x174494: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x174494u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x174498: 0x8527003c  lh          $a3, 0x3C($t1)
    ctx->pc = 0x174498u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 60)));
    // 0x17449c: 0x8d280008  lw          $t0, 0x8($t1)
    ctx->pc = 0x17449cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x1744a0: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x1744a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1744a4: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x1744a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1744a8: 0x632c0  sll         $a2, $a2, 11
    ctx->pc = 0x1744a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 11));
    // 0x1744ac: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x1744acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x1744b0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1744b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1744b4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1744b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1744b8: 0x2465001f  addiu       $a1, $v1, 0x1F
    ctx->pc = 0x1744b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
    // 0x1744bc: 0x28620000  slti        $v0, $v1, 0x0
    ctx->pc = 0x1744bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1744c0: 0xa2180b  movn        $v1, $a1, $v0
    ctx->pc = 0x1744c0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x1744c4: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x1744c4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    // 0x1744c8: 0x6a1818  mult        $v1, $v1, $t2
    ctx->pc = 0x1744c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1744cc: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1744ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1744d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1744d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1744d4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1744d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1744d8: 0x244507ff  addiu       $a1, $v0, 0x7FF
    ctx->pc = 0x1744d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2047));
    // 0x1744dc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1744dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1744e0: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x1744e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1744e4: 0xa2180b  movn        $v1, $a1, $v0
    ctx->pc = 0x1744e4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x1744e8: 0x31ac3  sra         $v1, $v1, 11
    ctx->pc = 0x1744e8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 11));
    // 0x1744ec: 0x67102a  slt         $v0, $v1, $a3
    ctx->pc = 0x1744ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1744f0: 0x62380b  movn        $a3, $v1, $v0
    ctx->pc = 0x1744f0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
    // 0x1744f4: 0x72c00  sll         $a1, $a3, 16
    ctx->pc = 0x1744f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x1744f8: 0xa527003e  sh          $a3, 0x3E($t1)
    ctx->pc = 0x1744f8u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 62), (uint16_t)GPR_U32(ctx, 7));
    // 0x1744fc: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1744FCu;
    {
        const bool branch_taken_0x1744fc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x174500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1744FCu;
            // 0x174500: 0x52943  sra         $a1, $a1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1744fc) {
            ctx->pc = 0x17450Cu;
            goto label_17450c;
        }
    }
    ctx->pc = 0x174504u;
    // 0x174504: 0xc05c67e  jal         func_1719F8
    ctx->pc = 0x174504u;
    SET_GPR_U32(ctx, 31, 0x17450Cu);
    ctx->pc = 0x1719F8u;
    if (runtime->hasFunction(0x1719F8u)) {
        auto targetFn = runtime->lookupFunction(0x1719F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17450Cu; }
        if (ctx->pc != 0x17450Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001719F8_0x1719f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17450Cu; }
        if (ctx->pc != 0x17450Cu) { return; }
    }
    ctx->pc = 0x17450Cu;
label_17450c:
    // 0x17450c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17450cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174510: 0x3e00008  jr          $ra
    ctx->pc = 0x174510u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174510u;
            // 0x174514: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x174518u;
    // 0x174518: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x174518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17451c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17451cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x174520: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x174520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x174524: 0xc0599de  jal         func_166778
    ctx->pc = 0x174524u;
    SET_GPR_U32(ctx, 31, 0x17452Cu);
    ctx->pc = 0x174528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174524u;
            // 0x174528: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166778u;
    if (runtime->hasFunction(0x166778u)) {
        auto targetFn = runtime->lookupFunction(0x166778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17452Cu; }
        if (ctx->pc != 0x17452Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166778_0x166778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17452Cu; }
        if (ctx->pc != 0x17452Cu) { return; }
    }
    ctx->pc = 0x17452Cu;
label_17452c:
    // 0x17452c: 0xc05d152  jal         func_174548
    ctx->pc = 0x17452Cu;
    SET_GPR_U32(ctx, 31, 0x174534u);
    ctx->pc = 0x174530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17452Cu;
            // 0x174530: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174548u;
    if (runtime->hasFunction(0x174548u)) {
        auto targetFn = runtime->lookupFunction(0x174548u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174534u; }
        if (ctx->pc != 0x174534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00174548_0x174548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174534u; }
        if (ctx->pc != 0x174534u) { return; }
    }
    ctx->pc = 0x174534u;
label_174534:
    // 0x174534: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x174534u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174538: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x174538u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17453c: 0x80599e0  j           func_166780
    ctx->pc = 0x17453Cu;
    ctx->pc = 0x174540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17453Cu;
            // 0x174540: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166780u;
    if (runtime->hasFunction(0x166780u)) {
        auto targetFn = runtime->lookupFunction(0x166780u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00166780_0x166780(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x174544u;
    // 0x174544: 0x0  nop
    ctx->pc = 0x174544u;
    // NOP
}
