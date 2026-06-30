#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00241400
// Address: 0x241400 - 0x241530
void sub_00241400_0x241400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00241400_0x241400");
#endif

    switch (ctx->pc) {
        case 0x241448u: goto label_241448;
        case 0x241480u: goto label_241480;
        case 0x24148cu: goto label_24148c;
        case 0x2414b4u: goto label_2414b4;
        case 0x2414d4u: goto label_2414d4;
        case 0x2414e0u: goto label_2414e0;
        default: break;
    }

    ctx->pc = 0x241400u;

    // 0x241400: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x241400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x241404: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x241404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x241408: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x241408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x24140c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x24140cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x241410: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x241410u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241414: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x241414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x241418: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x241418u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24141c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x24141cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x241420: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x241420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x241424: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x241424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x241428: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x241428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x24142c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x24142cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241430: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x241430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x241434: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x241434u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241438: 0x8ca30038  lw          $v1, 0x38($a1)
    ctx->pc = 0x241438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x24143c: 0x1860002e  blez        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x24143Cu;
    {
        const bool branch_taken_0x24143c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x241440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24143Cu;
            // 0x241440: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24143c) {
            ctx->pc = 0x2414F8u;
            goto label_2414f8;
        }
    }
    ctx->pc = 0x241444u;
    // 0x241444: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x241444u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_241448:
    // 0x241448: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x241448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x24144c: 0x75a021  addu        $s4, $v1, $s5
    ctx->pc = 0x24144cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x241450: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x241450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x241454: 0x80830010  lb          $v1, 0x10($a0)
    ctx->pc = 0x241454u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x241458: 0x839821  addu        $s3, $a0, $v1
    ctx->pc = 0x241458u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x24145c: 0x926300a8  lbu         $v1, 0xA8($s3)
    ctx->pc = 0x24145cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 168)));
    // 0x241460: 0x38630007  xori        $v1, $v1, 0x7
    ctx->pc = 0x241460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)7);
    // 0x241464: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x241464u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x241468: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x241468u;
    {
        const bool branch_taken_0x241468 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x241468) {
            ctx->pc = 0x241498u;
            goto label_241498;
        }
    }
    ctx->pc = 0x241470u;
    // 0x241470: 0x8e930000  lw          $s3, 0x0($s4)
    ctx->pc = 0x241470u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x241474: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x241474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241478: 0xc0924ec  jal         func_2493B0
    ctx->pc = 0x241478u;
    SET_GPR_U32(ctx, 31, 0x241480u);
    ctx->pc = 0x24147Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x241478u;
            // 0x24147c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2493B0u;
    if (runtime->hasFunction(0x2493B0u)) {
        auto targetFn = runtime->lookupFunction(0x2493B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241480u; }
        if (ctx->pc != 0x241480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002493B0_0x2493b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241480u; }
        if (ctx->pc != 0x241480u) { return; }
    }
    ctx->pc = 0x241480u;
label_241480:
    // 0x241480: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x241480u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241484: 0xc092368  jal         func_248DA0
    ctx->pc = 0x241484u;
    SET_GPR_U32(ctx, 31, 0x24148Cu);
    ctx->pc = 0x241488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x241484u;
            // 0x241488: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x248DA0u;
    if (runtime->hasFunction(0x248DA0u)) {
        auto targetFn = runtime->lookupFunction(0x248DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24148Cu; }
        if (ctx->pc != 0x24148Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00248DA0_0x248da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24148Cu; }
        if (ctx->pc != 0x24148Cu) { return; }
    }
    ctx->pc = 0x24148Cu;
label_24148c:
    // 0x24148c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x24148Cu;
    {
        const bool branch_taken_0x24148c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24148c) {
            ctx->pc = 0x2414E0u;
            goto label_2414e0;
        }
    }
    ctx->pc = 0x241494u;
    // 0x241494: 0x0  nop
    ctx->pc = 0x241494u;
    // NOP
label_241498:
    // 0x241498: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x241498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x24149c: 0x16e30010  bne         $s7, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x24149Cu;
    {
        const bool branch_taken_0x24149c = (GPR_U64(ctx, 23) != GPR_U64(ctx, 3));
        if (branch_taken_0x24149c) {
            ctx->pc = 0x2414E0u;
            goto label_2414e0;
        }
    }
    ctx->pc = 0x2414A4u;
    // 0x2414a4: 0x8e250094  lw          $a1, 0x94($s1)
    ctx->pc = 0x2414a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x2414a8: 0x8e660094  lw          $a2, 0x94($s3)
    ctx->pc = 0x2414a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 148)));
    // 0x2414ac: 0xc08e308  jal         func_238C20
    ctx->pc = 0x2414ACu;
    SET_GPR_U32(ctx, 31, 0x2414B4u);
    ctx->pc = 0x2414B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2414ACu;
            // 0x2414b0: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238C20u;
    if (runtime->hasFunction(0x238C20u)) {
        auto targetFn = runtime->lookupFunction(0x238C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2414B4u; }
        if (ctx->pc != 0x2414B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00238C20_0x238c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2414B4u; }
        if (ctx->pc != 0x2414B4u) { return; }
    }
    ctx->pc = 0x2414B4u;
label_2414b4:
    // 0x2414b4: 0x8e230094  lw          $v1, 0x94($s1)
    ctx->pc = 0x2414b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x2414b8: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2414B8u;
    {
        const bool branch_taken_0x2414b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2414b8) {
            ctx->pc = 0x2414E0u;
            goto label_2414e0;
        }
    }
    ctx->pc = 0x2414C0u;
    // 0x2414c0: 0x8e940000  lw          $s4, 0x0($s4)
    ctx->pc = 0x2414c0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2414c4: 0x8e620094  lw          $v0, 0x94($s3)
    ctx->pc = 0x2414c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 148)));
    // 0x2414c8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2414c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2414cc: 0xc0924ec  jal         func_2493B0
    ctx->pc = 0x2414CCu;
    SET_GPR_U32(ctx, 31, 0x2414D4u);
    ctx->pc = 0x2414D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2414CCu;
            // 0x2414d0: 0x2444005c  addiu       $a0, $v0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2493B0u;
    if (runtime->hasFunction(0x2493B0u)) {
        auto targetFn = runtime->lookupFunction(0x2493B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2414D4u; }
        if (ctx->pc != 0x2414D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002493B0_0x2493b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2414D4u; }
        if (ctx->pc != 0x2414D4u) { return; }
    }
    ctx->pc = 0x2414D4u;
label_2414d4:
    // 0x2414d4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2414d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2414d8: 0xc092368  jal         func_248DA0
    ctx->pc = 0x2414D8u;
    SET_GPR_U32(ctx, 31, 0x2414E0u);
    ctx->pc = 0x2414DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2414D8u;
            // 0x2414dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x248DA0u;
    if (runtime->hasFunction(0x248DA0u)) {
        auto targetFn = runtime->lookupFunction(0x248DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2414E0u; }
        if (ctx->pc != 0x2414E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00248DA0_0x248da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2414E0u; }
        if (ctx->pc != 0x2414E0u) { return; }
    }
    ctx->pc = 0x2414E0u;
label_2414e0:
    // 0x2414e0: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x2414e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x2414e4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2414e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2414e8: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x2414e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2414ec: 0x1460ffd6  bnez        $v1, . + 4 + (-0x2A << 2)
    ctx->pc = 0x2414ECu;
    {
        const bool branch_taken_0x2414ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2414F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2414ECu;
            // 0x2414f0: 0x26b50008  addiu       $s5, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2414ec) {
            ctx->pc = 0x241448u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_241448;
        }
    }
    ctx->pc = 0x2414F4u;
    // 0x2414f4: 0x0  nop
    ctx->pc = 0x2414f4u;
    // NOP
label_2414f8:
    // 0x2414f8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2414f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2414fc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2414fcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x241500: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x241500u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x241504: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x241504u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x241508: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x241508u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24150c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x24150cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x241510: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x241510u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x241514: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x241514u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x241518: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x241518u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24151c: 0x3e00008  jr          $ra
    ctx->pc = 0x24151Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x241520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24151Cu;
            // 0x241520: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x241524u;
    // 0x241524: 0x0  nop
    ctx->pc = 0x241524u;
    // NOP
    // 0x241528: 0x0  nop
    ctx->pc = 0x241528u;
    // NOP
    // 0x24152c: 0x0  nop
    ctx->pc = 0x24152cu;
    // NOP
}
