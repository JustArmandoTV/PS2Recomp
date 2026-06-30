#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0053E3C0
// Address: 0x53e3c0 - 0x53e4e0
void sub_0053E3C0_0x53e3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0053E3C0_0x53e3c0");
#endif

    switch (ctx->pc) {
        case 0x53e408u: goto label_53e408;
        case 0x53e4b8u: goto label_53e4b8;
        case 0x53e4c0u: goto label_53e4c0;
        default: break;
    }

    ctx->pc = 0x53e3c0u;

    // 0x53e3c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x53e3c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x53e3c4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x53e3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x53e3c8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x53e3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x53e3cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x53e3ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x53e3d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x53e3d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x53e3d4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x53e3d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x53e3d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x53e3d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x53e3dc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x53e3dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x53e3e0: 0x8ca60e34  lw          $a2, 0xE34($a1)
    ctx->pc = 0x53e3e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3636)));
    // 0x53e3e4: 0x10c30036  beq         $a2, $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x53E3E4u;
    {
        const bool branch_taken_0x53e3e4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x53E3E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53E3E4u;
            // 0x53e3e8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53e3e4) {
            ctx->pc = 0x53E4C0u;
            goto label_53e4c0;
        }
    }
    ctx->pc = 0x53E3ECu;
    // 0x53e3ec: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x53e3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x53e3f0: 0x14c30003  bne         $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x53E3F0u;
    {
        const bool branch_taken_0x53e3f0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x53e3f0) {
            ctx->pc = 0x53E400u;
            goto label_53e400;
        }
    }
    ctx->pc = 0x53E3F8u;
    // 0x53e3f8: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x53E3F8u;
    {
        const bool branch_taken_0x53e3f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x53E3FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53E3F8u;
            // 0x53e3fc: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53e3f8) {
            ctx->pc = 0x53E4C4u;
            goto label_53e4c4;
        }
    }
    ctx->pc = 0x53E400u;
label_53e400:
    // 0x53e400: 0xc14f938  jal         func_53E4E0
    ctx->pc = 0x53E400u;
    SET_GPR_U32(ctx, 31, 0x53E408u);
    ctx->pc = 0x53E4E0u;
    if (runtime->hasFunction(0x53E4E0u)) {
        auto targetFn = runtime->lookupFunction(0x53E4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53E408u; }
        if (ctx->pc != 0x53E408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053E4E0_0x53e4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53E408u; }
        if (ctx->pc != 0x53E408u) { return; }
    }
    ctx->pc = 0x53E408u;
label_53e408:
    // 0x53e408: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x53E408u;
    {
        const bool branch_taken_0x53e408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x53E40Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53E408u;
            // 0x53e40c: 0xafa2004c  sw          $v0, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53e408) {
            ctx->pc = 0x53E430u;
            goto label_53e430;
        }
    }
    ctx->pc = 0x53E410u;
    // 0x53e410: 0x1200002b  beqz        $s0, . + 4 + (0x2B << 2)
    ctx->pc = 0x53E410u;
    {
        const bool branch_taken_0x53e410 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x53e410) {
            ctx->pc = 0x53E4C0u;
            goto label_53e4c0;
        }
    }
    ctx->pc = 0x53E418u;
    // 0x53e418: 0x90430064  lbu         $v1, 0x64($v0)
    ctx->pc = 0x53e418u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x53e41c: 0x14600028  bnez        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x53E41Cu;
    {
        const bool branch_taken_0x53e41c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x53e41c) {
            ctx->pc = 0x53E4C0u;
            goto label_53e4c0;
        }
    }
    ctx->pc = 0x53E424u;
    // 0x53e424: 0xa0500064  sb          $s0, 0x64($v0)
    ctx->pc = 0x53e424u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 100), (uint8_t)GPR_U32(ctx, 16));
    // 0x53e428: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x53E428u;
    {
        const bool branch_taken_0x53e428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x53e428) {
            ctx->pc = 0x53E4C0u;
            goto label_53e4c0;
        }
    }
    ctx->pc = 0x53E430u;
label_53e430:
    // 0x53e430: 0x8e4200e0  lw          $v0, 0xE0($s2)
    ctx->pc = 0x53e430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 224)));
    // 0x53e434: 0x8e4300d8  lw          $v1, 0xD8($s2)
    ctx->pc = 0x53e434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
    // 0x53e438: 0x8e4400d0  lw          $a0, 0xD0($s2)
    ctx->pc = 0x53e438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
    // 0x53e43c: 0x229c2  srl         $a1, $v0, 7
    ctx->pc = 0x53e43cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 7));
    // 0x53e440: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x53e440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x53e444: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x53e444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x53e448: 0xa4001b  divu        $zero, $a1, $a0
    ctx->pc = 0x53e448u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x53e44c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x53e44cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x53e450: 0x8e4200dc  lw          $v0, 0xDC($s2)
    ctx->pc = 0x53e450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
    // 0x53e454: 0x2010  mfhi        $a0
    ctx->pc = 0x53e454u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x53e458: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x53e458u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x53e45c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x53e45cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x53e460: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x53e460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x53e464: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x53e464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x53e468: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x53e468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x53e46c: 0xafa3004c  sw          $v1, 0x4C($sp)
    ctx->pc = 0x53e46cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 3));
    // 0x53e470: 0xac710054  sw          $s1, 0x54($v1)
    ctx->pc = 0x53e470u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 17));
    // 0x53e474: 0xa0700064  sb          $s0, 0x64($v1)
    ctx->pc = 0x53e474u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 100), (uint8_t)GPR_U32(ctx, 16));
    // 0x53e478: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x53e478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x53e47c: 0x8c420d6c  lw          $v0, 0xD6C($v0)
    ctx->pc = 0x53e47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3436)));
    // 0x53e480: 0x90420010  lbu         $v0, 0x10($v0)
    ctx->pc = 0x53e480u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x53e484: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x53e484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x53e488: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x53e488u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x53e48c: 0x50200005  beql        $at, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x53E48Cu;
    {
        const bool branch_taken_0x53e48c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x53e48c) {
            ctx->pc = 0x53E490u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53E48Cu;
            // 0x53e490: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53E4A4u;
            goto label_53e4a4;
        }
    }
    ctx->pc = 0x53E494u;
    // 0x53e494: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x53e494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x53e498: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x53E498u;
    {
        const bool branch_taken_0x53e498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x53E49Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53E498u;
            // 0x53e49c: 0xac620060  sw          $v0, 0x60($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53e498) {
            ctx->pc = 0x53E4A8u;
            goto label_53e4a8;
        }
    }
    ctx->pc = 0x53E4A0u;
    // 0x53e4a0: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x53e4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_53e4a4:
    // 0x53e4a4: 0xac620060  sw          $v0, 0x60($v1)
    ctx->pc = 0x53e4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 2));
label_53e4a8:
    // 0x53e4a8: 0xac600050  sw          $zero, 0x50($v1)
    ctx->pc = 0x53e4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 0));
    // 0x53e4ac: 0x264400a8  addiu       $a0, $s2, 0xA8
    ctx->pc = 0x53e4acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 168));
    // 0x53e4b0: 0xc12a70c  jal         func_4A9C30
    ctx->pc = 0x53E4B0u;
    SET_GPR_U32(ctx, 31, 0x53E4B8u);
    ctx->pc = 0x53E4B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53E4B0u;
            // 0x53e4b4: 0x27a5004c  addiu       $a1, $sp, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A9C30u;
    if (runtime->hasFunction(0x4A9C30u)) {
        auto targetFn = runtime->lookupFunction(0x4A9C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53E4B8u; }
        if (ctx->pc != 0x53E4B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A9C30_0x4a9c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53E4B8u; }
        if (ctx->pc != 0x53E4B8u) { return; }
    }
    ctx->pc = 0x53E4B8u;
label_53e4b8:
    // 0x53e4b8: 0xc0b4be4  jal         func_2D2F90
    ctx->pc = 0x53E4B8u;
    SET_GPR_U32(ctx, 31, 0x53E4C0u);
    ctx->pc = 0x53E4BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53E4B8u;
            // 0x53e4bc: 0x264400c8  addiu       $a0, $s2, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D2F90u;
    if (runtime->hasFunction(0x2D2F90u)) {
        auto targetFn = runtime->lookupFunction(0x2D2F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53E4C0u; }
        if (ctx->pc != 0x53E4C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D2F90_0x2d2f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53E4C0u; }
        if (ctx->pc != 0x53E4C0u) { return; }
    }
    ctx->pc = 0x53E4C0u;
label_53e4c0:
    // 0x53e4c0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x53e4c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_53e4c4:
    // 0x53e4c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x53e4c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x53e4c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x53e4c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x53e4cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x53e4ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x53e4d0: 0x3e00008  jr          $ra
    ctx->pc = 0x53E4D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53E4D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53E4D0u;
            // 0x53e4d4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53E4D8u;
    // 0x53e4d8: 0x0  nop
    ctx->pc = 0x53e4d8u;
    // NOP
    // 0x53e4dc: 0x0  nop
    ctx->pc = 0x53e4dcu;
    // NOP
}
