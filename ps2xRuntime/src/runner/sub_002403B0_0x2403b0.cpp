#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002403B0
// Address: 0x2403b0 - 0x240510
void sub_002403B0_0x2403b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002403B0_0x2403b0");
#endif

    switch (ctx->pc) {
        case 0x24042cu: goto label_24042c;
        case 0x24045cu: goto label_24045c;
        case 0x2404b0u: goto label_2404b0;
        default: break;
    }

    ctx->pc = 0x2403b0u;

    // 0x2403b0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2403b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2403b4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2403b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2403b8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2403b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2403bc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2403bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2403c0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2403c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2403c4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2403c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2403c8: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2403c8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2403cc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2403ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2403d0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2403d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2403d4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2403d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2403d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2403d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2403dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2403dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2403e0: 0x90a20028  lbu         $v0, 0x28($a1)
    ctx->pc = 0x2403e0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x2403e4: 0x30520003  andi        $s2, $v0, 0x3
    ctx->pc = 0x2403e4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2403e8: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2403E8u;
    {
        const bool branch_taken_0x2403e8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2403ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2403E8u;
            // 0x2403ec: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2403e8) {
            ctx->pc = 0x2403F8u;
            goto label_2403f8;
        }
    }
    ctx->pc = 0x2403F0u;
    // 0x2403f0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2403F0u;
    {
        const bool branch_taken_0x2403f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2403F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2403F0u;
            // 0x2403f4: 0x26d10028  addiu       $s1, $s6, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2403f0) {
            ctx->pc = 0x2403FCu;
            goto label_2403fc;
        }
    }
    ctx->pc = 0x2403F8u;
label_2403f8:
    // 0x2403f8: 0x26d10034  addiu       $s1, $s6, 0x34
    ctx->pc = 0x2403f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 52));
label_2403fc:
    // 0x2403fc: 0x92a70027  lbu         $a3, 0x27($s5)
    ctx->pc = 0x2403fcu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 39)));
    // 0x240400: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x240400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x240404: 0x30030003  andi        $v1, $zero, 0x3
    ctx->pc = 0x240404u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x240408: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x240408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24040c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x24040cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240410: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x240410u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240414: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x240414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x240418: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x240418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x24041c: 0xa2a20027  sb          $v0, 0x27($s5)
    ctx->pc = 0x24041cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 39), (uint8_t)GPR_U32(ctx, 2));
    // 0x240420: 0x8e370004  lw          $s7, 0x4($s1)
    ctx->pc = 0x240420u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x240424: 0xc08fb6c  jal         func_23EDB0
    ctx->pc = 0x240424u;
    SET_GPR_U32(ctx, 31, 0x24042Cu);
    ctx->pc = 0x240428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240424u;
            // 0x240428: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23EDB0u;
    if (runtime->hasFunction(0x23EDB0u)) {
        auto targetFn = runtime->lookupFunction(0x23EDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24042Cu; }
        if (ctx->pc != 0x24042Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023EDB0_0x23edb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24042Cu; }
        if (ctx->pc != 0x24042Cu) { return; }
    }
    ctx->pc = 0x24042Cu;
label_24042c:
    // 0x24042c: 0x92a40028  lbu         $a0, 0x28($s5)
    ctx->pc = 0x24042cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 40)));
    // 0x240430: 0x2e0a02d  daddu       $s4, $s7, $zero
    ctx->pc = 0x240430u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240434: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x240434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x240438: 0x4273c  dsll32      $a0, $a0, 28
    ctx->pc = 0x240438u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 28));
    // 0x24043c: 0x427be  dsrl32      $a0, $a0, 30
    ctx->pc = 0x24043cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 30));
    // 0x240440: 0x2e3082a  slt         $at, $s7, $v1
    ctx->pc = 0x240440u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x240444: 0x4263c  dsll32      $a0, $a0, 24
    ctx->pc = 0x240444u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 24));
    // 0x240448: 0x10200023  beqz        $at, . + 4 + (0x23 << 2)
    ctx->pc = 0x240448u;
    {
        const bool branch_taken_0x240448 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x24044Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240448u;
            // 0x24044c: 0x4263f  dsra32      $a0, $a0, 24 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240448) {
            ctx->pc = 0x2404D8u;
            goto label_2404d8;
        }
    }
    ctx->pc = 0x240450u;
    // 0x240450: 0x4f63c  dsll32      $fp, $a0, 24
    ctx->pc = 0x240450u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 4) << (32 + 24));
    // 0x240454: 0x179880  sll         $s3, $s7, 2
    ctx->pc = 0x240454u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x240458: 0x1ef63f  dsra32      $fp, $fp, 24
    ctx->pc = 0x240458u;
    SET_GPR_S64(ctx, 30, GPR_S64(ctx, 30) >> (32 + 24));
label_24045c:
    // 0x24045c: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x24045cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x240460: 0x32460003  andi        $a2, $s2, 0x3
    ctx->pc = 0x240460u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3);
    // 0x240464: 0x2404fff3  addiu       $a0, $zero, -0xD
    ctx->pc = 0x240464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x240468: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x240468u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x24046c: 0x2403fffc  addiu       $v1, $zero, -0x4
    ctx->pc = 0x24046cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x240470: 0xf33821  addu        $a3, $a3, $s3
    ctx->pc = 0x240470u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 19)));
    // 0x240474: 0x8cf00000  lw          $s0, 0x0($a3)
    ctx->pc = 0x240474u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x240478: 0x92070028  lbu         $a3, 0x28($s0)
    ctx->pc = 0x240478u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x24047c: 0xe42024  and         $a0, $a3, $a0
    ctx->pc = 0x24047cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x240480: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x240480u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x240484: 0xa2040028  sb          $a0, 0x28($s0)
    ctx->pc = 0x240484u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 40), (uint8_t)GPR_U32(ctx, 4));
    // 0x240488: 0x92040028  lbu         $a0, 0x28($s0)
    ctx->pc = 0x240488u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x24048c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x24048cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x240490: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x240490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x240494: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x240494u;
    {
        const bool branch_taken_0x240494 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x240498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240494u;
            // 0x240498: 0xa2030028  sb          $v1, 0x28($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 40), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240494) {
            ctx->pc = 0x2404B0u;
            goto label_2404b0;
        }
    }
    ctx->pc = 0x24049Cu;
    // 0x24049c: 0x17c00004  bnez        $fp, . + 4 + (0x4 << 2)
    ctx->pc = 0x24049Cu;
    {
        const bool branch_taken_0x24049c = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x24049c) {
            ctx->pc = 0x2404B0u;
            goto label_2404b0;
        }
    }
    ctx->pc = 0x2404A4u;
    // 0x2404a4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2404a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2404a8: 0xc0906d8  jal         func_241B60
    ctx->pc = 0x2404A8u;
    SET_GPR_U32(ctx, 31, 0x2404B0u);
    ctx->pc = 0x2404ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2404A8u;
            // 0x2404ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x241B60u;
    if (runtime->hasFunction(0x241B60u)) {
        auto targetFn = runtime->lookupFunction(0x241B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2404B0u; }
        if (ctx->pc != 0x2404B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00241B60_0x241b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2404B0u; }
        if (ctx->pc != 0x2404B0u) { return; }
    }
    ctx->pc = 0x2404B0u;
label_2404b0:
    // 0x2404b0: 0x92a30024  lbu         $v1, 0x24($s5)
    ctx->pc = 0x2404b0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x2404b4: 0x771823  subu        $v1, $v1, $s7
    ctx->pc = 0x2404b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x2404b8: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x2404b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x2404bc: 0xa2030024  sb          $v1, 0x24($s0)
    ctx->pc = 0x2404bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 36), (uint8_t)GPR_U32(ctx, 3));
    // 0x2404c0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2404c0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2404c4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2404c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2404c8: 0x283182a  slt         $v1, $s4, $v1
    ctx->pc = 0x2404c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2404cc: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x2404CCu;
    {
        const bool branch_taken_0x2404cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2404D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2404CCu;
            // 0x2404d0: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2404cc) {
            ctx->pc = 0x24045Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24045c;
        }
    }
    ctx->pc = 0x2404D4u;
    // 0x2404d4: 0x0  nop
    ctx->pc = 0x2404d4u;
    // NOP
label_2404d8:
    // 0x2404d8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2404d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2404dc: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2404dcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2404e0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2404e0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2404e4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2404e4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2404e8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2404e8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2404ec: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2404ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2404f0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2404f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2404f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2404f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2404f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2404f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2404fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2404fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x240500: 0x3e00008  jr          $ra
    ctx->pc = 0x240500u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240500u;
            // 0x240504: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x240508u;
    // 0x240508: 0x0  nop
    ctx->pc = 0x240508u;
    // NOP
    // 0x24050c: 0x0  nop
    ctx->pc = 0x24050cu;
    // NOP
}
