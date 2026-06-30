#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C2818
// Address: 0x1c2818 - 0x1c28d8
void sub_001C2818_0x1c2818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C2818_0x1c2818");
#endif

    switch (ctx->pc) {
        case 0x1c2838u: goto label_1c2838;
        case 0x1c28b4u: goto label_1c28b4;
        default: break;
    }

    ctx->pc = 0x1c2818u;

    // 0x1c2818: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c2818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c281c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c281cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c2820: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c2820u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2824: 0x24a4009c  addiu       $a0, $a1, 0x9C
    ctx->pc = 0x1c2824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 156));
    // 0x1c2828: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c2828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c282c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c282cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c2830: 0xc071504  jal         func_1C5410
    ctx->pc = 0x1C2830u;
    SET_GPR_U32(ctx, 31, 0x1C2838u);
    ctx->pc = 0x1C2834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2830u;
            // 0x1c2834: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C5410u;
    if (runtime->hasFunction(0x1C5410u)) {
        auto targetFn = runtime->lookupFunction(0x1C5410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2838u; }
        if (ctx->pc != 0x1C2838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C5410_0x1c5410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2838u; }
        if (ctx->pc != 0x1C2838u) { return; }
    }
    ctx->pc = 0x1C2838u;
label_1c2838:
    // 0x1c2838: 0x3c080060  lui         $t0, 0x60
    ctx->pc = 0x1c2838u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)96 << 16));
    // 0x1c283c: 0x8c4a0010  lw          $t2, 0x10($v0)
    ctx->pc = 0x1c283cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1c2840: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c2840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2844: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1c2844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c2848: 0x90490008  lbu         $t1, 0x8($v0)
    ctx->pc = 0x1c2848u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c284c: 0xa2a02  srl         $a1, $t2, 8
    ctx->pc = 0x1c284cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), 8));
    // 0x1c2850: 0x90470010  lbu         $a3, 0x10($v0)
    ctx->pc = 0x1c2850u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1c2854: 0x31202  srl         $v0, $v1, 8
    ctx->pc = 0x1c2854u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x1c2858: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x1c2858u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x1c285c: 0x33202  srl         $a2, $v1, 8
    ctx->pc = 0x1c285cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x1c2860: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c2860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c2864: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1c2864u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1c2868: 0x8d0ba4d8  lw          $t3, -0x5B28($t0)
    ctx->pc = 0x1c2868u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294943960)));
    // 0x1c286c: 0xa4202  srl         $t0, $t2, 8
    ctx->pc = 0x1c286cu;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 10), 8));
    // 0x1c2870: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x1c2870u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x1c2874: 0x94e00  sll         $t1, $t1, 24
    ctx->pc = 0x1c2874u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 24));
    // 0x1c2878: 0x30c6ff00  andi        $a2, $a2, 0xFF00
    ctx->pc = 0x1c2878u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65280);
    // 0x1c287c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1c287cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1c2880: 0x73e00  sll         $a3, $a3, 24
    ctx->pc = 0x1c2880u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 24));
    // 0x1c2884: 0x3108ff00  andi        $t0, $t0, 0xFF00
    ctx->pc = 0x1c2884u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65280);
    // 0x1c2888: 0x31e02  srl         $v1, $v1, 24
    ctx->pc = 0x1c2888u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 24));
    // 0x1c288c: 0xa5602  srl         $t2, $t2, 24
    ctx->pc = 0x1c288cu;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 10), 24));
    // 0x1c2890: 0xea3825  or          $a3, $a3, $t2
    ctx->pc = 0x1c2890u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 10));
    // 0x1c2894: 0x1054025  or          $t0, $t0, $a1
    ctx->pc = 0x1c2894u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 5));
    // 0x1c2898: 0x1234825  or          $t1, $t1, $v1
    ctx->pc = 0x1c2898u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
    // 0x1c289c: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x1c289cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x1c28a0: 0x8d650048  lw          $a1, 0x48($t3)
    ctx->pc = 0x1c28a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 72)));
    // 0x1c28a4: 0xe84025  or          $t0, $a3, $t0
    ctx->pc = 0x1c28a4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x1c28a8: 0x1263025  or          $a2, $t1, $a2
    ctx->pc = 0x1c28a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) | GPR_U64(ctx, 6));
    // 0x1c28ac: 0xc071c70  jal         func_1C71C0
    ctx->pc = 0x1C28ACu;
    SET_GPR_U32(ctx, 31, 0x1C28B4u);
    ctx->pc = 0x1C28B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C28ACu;
            // 0x1c28b0: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C71C0u;
    if (runtime->hasFunction(0x1C71C0u)) {
        auto targetFn = runtime->lookupFunction(0x1C71C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C28B4u; }
        if (ctx->pc != 0x1C28B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C71C0_0x1c71c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C28B4u; }
        if (ctx->pc != 0x1C28B4u) { return; }
    }
    ctx->pc = 0x1C28B4u;
label_1c28b4:
    // 0x1c28b4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C28B4u;
    {
        const bool branch_taken_0x1c28b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C28B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C28B4u;
            // 0x1c28b8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c28b4) {
            ctx->pc = 0x1C28C8u;
            goto label_1c28c8;
        }
    }
    ctx->pc = 0x1C28BCu;
    // 0x1c28bc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1c28bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c28c0: 0x2402ff97  addiu       $v0, $zero, -0x69
    ctx->pc = 0x1c28c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967191));
    // 0x1c28c4: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x1c28c4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_1c28c8:
    // 0x1c28c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c28c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c28cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c28ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c28d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C28D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C28D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C28D0u;
            // 0x1c28d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C28D8u;
}
