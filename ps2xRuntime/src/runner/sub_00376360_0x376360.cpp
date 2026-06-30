#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00376360
// Address: 0x376360 - 0x3763e0
void sub_00376360_0x376360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00376360_0x376360");
#endif

    switch (ctx->pc) {
        case 0x376360u: goto label_376360;
        case 0x376364u: goto label_376364;
        case 0x376368u: goto label_376368;
        case 0x37636cu: goto label_37636c;
        case 0x376370u: goto label_376370;
        case 0x376374u: goto label_376374;
        case 0x376378u: goto label_376378;
        case 0x37637cu: goto label_37637c;
        case 0x376380u: goto label_376380;
        case 0x376384u: goto label_376384;
        case 0x376388u: goto label_376388;
        case 0x37638cu: goto label_37638c;
        case 0x376390u: goto label_376390;
        case 0x376394u: goto label_376394;
        case 0x376398u: goto label_376398;
        case 0x37639cu: goto label_37639c;
        case 0x3763a0u: goto label_3763a0;
        case 0x3763a4u: goto label_3763a4;
        case 0x3763a8u: goto label_3763a8;
        case 0x3763acu: goto label_3763ac;
        case 0x3763b0u: goto label_3763b0;
        case 0x3763b4u: goto label_3763b4;
        case 0x3763b8u: goto label_3763b8;
        case 0x3763bcu: goto label_3763bc;
        case 0x3763c0u: goto label_3763c0;
        case 0x3763c4u: goto label_3763c4;
        case 0x3763c8u: goto label_3763c8;
        case 0x3763ccu: goto label_3763cc;
        case 0x3763d0u: goto label_3763d0;
        case 0x3763d4u: goto label_3763d4;
        case 0x3763d8u: goto label_3763d8;
        case 0x3763dcu: goto label_3763dc;
        default: break;
    }

    ctx->pc = 0x376360u;

label_376360:
    // 0x376360: 0x3e00008  jr          $ra
label_376364:
    if (ctx->pc == 0x376364u) {
        ctx->pc = 0x376364u;
            // 0x376364: 0x8c8200e0  lw          $v0, 0xE0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 224)));
        ctx->pc = 0x376368u;
        goto label_376368;
    }
    ctx->pc = 0x376360u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x376364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x376360u;
            // 0x376364: 0x8c8200e0  lw          $v0, 0xE0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x376368u;
label_376368:
    // 0x376368: 0x0  nop
    ctx->pc = 0x376368u;
    // NOP
label_37636c:
    // 0x37636c: 0x0  nop
    ctx->pc = 0x37636cu;
    // NOP
label_376370:
    // 0x376370: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x376370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_376374:
    // 0x376374: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x376374u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_376378:
    // 0x376378: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x376378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_37637c:
    // 0x37637c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x37637cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_376380:
    // 0x376380: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x376380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_376384:
    // 0x376384: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x376384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_376388:
    // 0x376388: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x376388u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_37638c:
    // 0x37638c: 0x8c7289e8  lw          $s2, -0x7618($v1)
    ctx->pc = 0x37638cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937064)));
label_376390:
    // 0x376390: 0x249000d4  addiu       $s0, $a0, 0xD4
    ctx->pc = 0x376390u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 212));
label_376394:
    // 0x376394: 0x86050000  lh          $a1, 0x0($s0)
    ctx->pc = 0x376394u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_376398:
    // 0x376398: 0x4a00007  bltz        $a1, . + 4 + (0x7 << 2)
label_37639c:
    if (ctx->pc == 0x37639Cu) {
        ctx->pc = 0x3763A0u;
        goto label_3763a0;
    }
    ctx->pc = 0x376398u;
    {
        const bool branch_taken_0x376398 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x376398) {
            ctx->pc = 0x3763B8u;
            goto label_3763b8;
        }
    }
    ctx->pc = 0x3763A0u;
label_3763a0:
    // 0x3763a0: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x3763a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3763a4:
    // 0x3763a4: 0x8f390070  lw          $t9, 0x70($t9)
    ctx->pc = 0x3763a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 112)));
label_3763a8:
    // 0x3763a8: 0x320f809  jalr        $t9
label_3763ac:
    if (ctx->pc == 0x3763ACu) {
        ctx->pc = 0x3763ACu;
            // 0x3763ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3763B0u;
        goto label_3763b0;
    }
    ctx->pc = 0x3763A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3763B0u);
        ctx->pc = 0x3763ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3763A8u;
            // 0x3763ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3763B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3763B0u; }
            if (ctx->pc != 0x3763B0u) { return; }
        }
        }
    }
    ctx->pc = 0x3763B0u;
label_3763b0:
    // 0x3763b0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3763b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3763b4:
    // 0x3763b4: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x3763b4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
label_3763b8:
    // 0x3763b8: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3763b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_3763bc:
    // 0x3763bc: 0x1620fff5  bnez        $s1, . + 4 + (-0xB << 2)
label_3763c0:
    if (ctx->pc == 0x3763C0u) {
        ctx->pc = 0x3763C0u;
            // 0x3763c0: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->pc = 0x3763C4u;
        goto label_3763c4;
    }
    ctx->pc = 0x3763BCu;
    {
        const bool branch_taken_0x3763bc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3763C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3763BCu;
            // 0x3763c0: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3763bc) {
            ctx->pc = 0x376394u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_376394;
        }
    }
    ctx->pc = 0x3763C4u;
label_3763c4:
    // 0x3763c4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3763c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3763c8:
    // 0x3763c8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3763c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3763cc:
    // 0x3763cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3763ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3763d0:
    // 0x3763d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3763d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3763d4:
    // 0x3763d4: 0x3e00008  jr          $ra
label_3763d8:
    if (ctx->pc == 0x3763D8u) {
        ctx->pc = 0x3763D8u;
            // 0x3763d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x3763DCu;
        goto label_3763dc;
    }
    ctx->pc = 0x3763D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3763D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3763D4u;
            // 0x3763d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3763DCu;
label_3763dc:
    // 0x3763dc: 0x0  nop
    ctx->pc = 0x3763dcu;
    // NOP
}
